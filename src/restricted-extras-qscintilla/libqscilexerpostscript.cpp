#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qscilexerpostscript.h>
#include "libqscilexerpostscript.hpp"
#include "libqscilexerpostscript.hxx"

QsciLexerPostScript* QsciLexerPostScript_new() {
    return new VirtualQsciLexerPostScript();
}

QsciLexerPostScript* QsciLexerPostScript_new2(QObject* parent) {
    return new VirtualQsciLexerPostScript(parent);
}

QMetaObject* QsciLexerPostScript_MetaObject(const QsciLexerPostScript* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerPostScript_Metacast(QsciLexerPostScript* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerPostScript_Metacall(QsciLexerPostScript* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPostScript_OnMetacall(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_Metacall_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerPostScript_QBaseMetacall(QsciLexerPostScript* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_Metacall_IsBase(true);
        return vqscilexerpostscript->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerPostScript_Tr(const char* s) {
    QString _ret = QsciLexerPostScript::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerPostScript_DefaultColor(const QsciLexerPostScript* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerPostScript_DefaultFont(const QsciLexerPostScript* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPostScript_DefaultPaper(const QsciLexerPostScript* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerPostScript_Tokenize(const QsciLexerPostScript* self) {
    return self->tokenize();
}

int QsciLexerPostScript_Level(const QsciLexerPostScript* self) {
    return self->level();
}

bool QsciLexerPostScript_FoldCompact(const QsciLexerPostScript* self) {
    return self->foldCompact();
}

bool QsciLexerPostScript_FoldAtElse(const QsciLexerPostScript* self) {
    return self->foldAtElse();
}

libqt_string QsciLexerPostScript_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerPostScript::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerPostScript_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerPostScript::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QsciLexerPostScript_SetTokenize(QsciLexerPostScript* self, bool tokenize) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setTokenize(tokenize);
    } else {
        vqscilexerpostscript->setTokenize(tokenize);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetTokenize(QsciLexerPostScript* self, bool tokenize) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetTokenize_IsBase(true);
        vqscilexerpostscript->setTokenize(tokenize);
    } else {
        vqscilexerpostscript->setTokenize(tokenize);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetTokenize(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetTokenize_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetTokenize_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetLevel(QsciLexerPostScript* self, int level) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setLevel(static_cast<int>(level));
    } else {
        vqscilexerpostscript->setLevel(static_cast<int>(level));
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetLevel(QsciLexerPostScript* self, int level) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetLevel_IsBase(true);
        vqscilexerpostscript->setLevel(static_cast<int>(level));
    } else {
        vqscilexerpostscript->setLevel(static_cast<int>(level));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetLevel(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetLevel_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetLevel_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetFoldCompact(QsciLexerPostScript* self, bool fold) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setFoldCompact(fold);
    } else {
        vqscilexerpostscript->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetFoldCompact(QsciLexerPostScript* self, bool fold) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetFoldCompact_IsBase(true);
        vqscilexerpostscript->setFoldCompact(fold);
    } else {
        vqscilexerpostscript->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetFoldCompact(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetFoldAtElse(QsciLexerPostScript* self, bool fold) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setFoldAtElse(fold);
    } else {
        vqscilexerpostscript->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetFoldAtElse(QsciLexerPostScript* self, bool fold) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetFoldAtElse_IsBase(true);
        vqscilexerpostscript->setFoldAtElse(fold);
    } else {
        vqscilexerpostscript->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetFoldAtElse(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_Language(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return (const char*)vqscilexerpostscript->language();
    } else {
        return (const char*)vqscilexerpostscript->language();
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseLanguage(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Language_IsBase(true);
        return (const char*)vqscilexerpostscript->language();
    } else {
        return (const char*)vqscilexerpostscript->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnLanguage(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Language_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_Lexer(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return (const char*)vqscilexerpostscript->lexer();
    } else {
        return (const char*)vqscilexerpostscript->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseLexer(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Lexer_IsBase(true);
        return (const char*)vqscilexerpostscript->lexer();
    } else {
        return (const char*)vqscilexerpostscript->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnLexer(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Lexer_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_LexerId(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->lexerId();
    } else {
        return vqscilexerpostscript->lexerId();
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseLexerId(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_LexerId_IsBase(true);
        return vqscilexerpostscript->lexerId();
    } else {
        return vqscilexerpostscript->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnLexerId(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_LexerId_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_AutoCompletionFillups(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return (const char*)vqscilexerpostscript->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerpostscript->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseAutoCompletionFillups(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerpostscript->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerpostscript->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnAutoCompletionFillups(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerPostScript_AutoCompletionWordSeparators(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        QStringList _ret = vqscilexerpostscript->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = vqscilexerpostscript->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QsciLexerPostScript_QBaseAutoCompletionWordSeparators(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerpostscript->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = vqscilexerpostscript->autoCompletionWordSeparators();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnAutoCompletionWordSeparators(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_BlockEnd(const QsciLexerPostScript* self, int* style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return (const char*)vqscilexerpostscript->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpostscript->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseBlockEnd(const QsciLexerPostScript* self, int* style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockEnd_IsBase(true);
        return (const char*)vqscilexerpostscript->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpostscript->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnBlockEnd(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_BlockLookback(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->blockLookback();
    } else {
        return vqscilexerpostscript->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseBlockLookback(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockLookback_IsBase(true);
        return vqscilexerpostscript->blockLookback();
    } else {
        return vqscilexerpostscript->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnBlockLookback(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_BlockStart(const QsciLexerPostScript* self, int* style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return (const char*)vqscilexerpostscript->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpostscript->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseBlockStart(const QsciLexerPostScript* self, int* style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockStart_IsBase(true);
        return (const char*)vqscilexerpostscript->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpostscript->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnBlockStart(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_BlockStartKeyword(const QsciLexerPostScript* self, int* style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return (const char*)vqscilexerpostscript->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpostscript->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseBlockStartKeyword(const QsciLexerPostScript* self, int* style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerpostscript->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpostscript->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnBlockStartKeyword(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_BraceStyle(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->braceStyle();
    } else {
        return vqscilexerpostscript->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseBraceStyle(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_BraceStyle_IsBase(true);
        return vqscilexerpostscript->braceStyle();
    } else {
        return vqscilexerpostscript->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnBraceStyle(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_CaseSensitive(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->caseSensitive();
    } else {
        return vqscilexerpostscript->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseCaseSensitive(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_CaseSensitive_IsBase(true);
        return vqscilexerpostscript->caseSensitive();
    } else {
        return vqscilexerpostscript->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnCaseSensitive(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPostScript_Color(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return new QColor(vqscilexerpostscript->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPostScript_QBaseColor(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Color_IsBase(true);
        return new QColor(vqscilexerpostscript->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnColor(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Color_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_EolFill(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerpostscript->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseEolFill(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_EolFill_IsBase(true);
        return vqscilexerpostscript->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerpostscript->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnEolFill(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_EolFill_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPostScript_Font(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return new QFont(vqscilexerpostscript->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPostScript_QBaseFont(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Font_IsBase(true);
        return new QFont(vqscilexerpostscript->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnFont(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Font_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_IndentationGuideView(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->indentationGuideView();
    } else {
        return vqscilexerpostscript->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseIndentationGuideView(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_IndentationGuideView_IsBase(true);
        return vqscilexerpostscript->indentationGuideView();
    } else {
        return vqscilexerpostscript->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnIndentationGuideView(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_Keywords(const QsciLexerPostScript* self, int set) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return (const char*)vqscilexerpostscript->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerpostscript->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseKeywords(const QsciLexerPostScript* self, int set) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Keywords_IsBase(true);
        return (const char*)vqscilexerpostscript->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerpostscript->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnKeywords(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Keywords_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_DefaultStyle(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->defaultStyle();
    } else {
        return vqscilexerpostscript->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseDefaultStyle(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultStyle_IsBase(true);
        return vqscilexerpostscript->defaultStyle();
    } else {
        return vqscilexerpostscript->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultStyle(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPostScript_Description(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        QString _ret = vqscilexerpostscript->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerpostscript->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciLexerPostScript_QBaseDescription(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Description_IsBase(true);
        QString _ret = vqscilexerpostscript->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerpostscript->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDescription(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Description_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPostScript_Paper(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return new QColor(vqscilexerpostscript->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPostScript_QBasePaper(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Paper_IsBase(true);
        return new QColor(vqscilexerpostscript->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnPaper(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Paper_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPostScript_DefaultColorWithStyle(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return new QColor(vqscilexerpostscript->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPostScript_QBaseDefaultColorWithStyle(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerpostscript->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultColorWithStyle(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_DefaultEolFill(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerpostscript->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseDefaultEolFill(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultEolFill_IsBase(true);
        return vqscilexerpostscript->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerpostscript->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultEolFill(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPostScript_DefaultFontWithStyle(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return new QFont(vqscilexerpostscript->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPostScript_QBaseDefaultFontWithStyle(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerpostscript->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultFontWithStyle(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPostScript_DefaultPaperWithStyle(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return new QColor(vqscilexerpostscript->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPostScript_QBaseDefaultPaperWithStyle(const QsciLexerPostScript* self, int style) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerpostscript->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultPaperWithStyle(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetEditor(QsciLexerPostScript* self, QsciScintilla* editor) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setEditor(editor);
    } else {
        vqscilexerpostscript->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetEditor(QsciLexerPostScript* self, QsciScintilla* editor) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetEditor_IsBase(true);
        vqscilexerpostscript->setEditor(editor);
    } else {
        vqscilexerpostscript->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetEditor(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_RefreshProperties(QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->refreshProperties();
    } else {
        vqscilexerpostscript->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseRefreshProperties(QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_RefreshProperties_IsBase(true);
        vqscilexerpostscript->refreshProperties();
    } else {
        vqscilexerpostscript->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnRefreshProperties(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_StyleBitsNeeded(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->styleBitsNeeded();
    } else {
        return vqscilexerpostscript->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseStyleBitsNeeded(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_StyleBitsNeeded_IsBase(true);
        return vqscilexerpostscript->styleBitsNeeded();
    } else {
        return vqscilexerpostscript->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnStyleBitsNeeded(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPostScript_WordCharacters(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return (const char*)vqscilexerpostscript->wordCharacters();
    } else {
        return (const char*)vqscilexerpostscript->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerPostScript_QBaseWordCharacters(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_WordCharacters_IsBase(true);
        return (const char*)vqscilexerpostscript->wordCharacters();
    } else {
        return (const char*)vqscilexerpostscript->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnWordCharacters(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetAutoIndentStyle(QsciLexerPostScript* self, int autoindentstyle) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerpostscript->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetAutoIndentStyle(QsciLexerPostScript* self, int autoindentstyle) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetAutoIndentStyle_IsBase(true);
        vqscilexerpostscript->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerpostscript->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetAutoIndentStyle(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetColor(QsciLexerPostScript* self, QColor* c, int style) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerpostscript->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetColor(QsciLexerPostScript* self, QColor* c, int style) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetColor_IsBase(true);
        vqscilexerpostscript->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerpostscript->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetColor(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetColor_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetEolFill(QsciLexerPostScript* self, bool eoffill, int style) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerpostscript->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetEolFill(QsciLexerPostScript* self, bool eoffill, int style) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetEolFill_IsBase(true);
        vqscilexerpostscript->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerpostscript->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetEolFill(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetFont(QsciLexerPostScript* self, QFont* f, int style) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerpostscript->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetFont(QsciLexerPostScript* self, QFont* f, int style) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetFont_IsBase(true);
        vqscilexerpostscript->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerpostscript->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetFont(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetFont_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_SetPaper(QsciLexerPostScript* self, QColor* c, int style) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerpostscript->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseSetPaper(QsciLexerPostScript* self, QColor* c, int style) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetPaper_IsBase(true);
        vqscilexerpostscript->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerpostscript->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetPaper(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_ReadProperties(QsciLexerPostScript* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        return vqscilexerpostscript->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerpostscript->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseReadProperties(QsciLexerPostScript* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_ReadProperties_IsBase(true);
        return vqscilexerpostscript->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerpostscript->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnReadProperties(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_WriteProperties(const QsciLexerPostScript* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerpostscript->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseWriteProperties(const QsciLexerPostScript* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_WriteProperties_IsBase(true);
        return vqscilexerpostscript->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerpostscript->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnWriteProperties(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_Event(QsciLexerPostScript* self, QEvent* event) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        return vqscilexerpostscript->event(event);
    } else {
        return vqscilexerpostscript->event(event);
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseEvent(QsciLexerPostScript* self, QEvent* event) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_Event_IsBase(true);
        return vqscilexerpostscript->event(event);
    } else {
        return vqscilexerpostscript->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnEvent(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_Event_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_EventFilter(QsciLexerPostScript* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        return vqscilexerpostscript->eventFilter(watched, event);
    } else {
        return vqscilexerpostscript->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseEventFilter(QsciLexerPostScript* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_EventFilter_IsBase(true);
        return vqscilexerpostscript->eventFilter(watched, event);
    } else {
        return vqscilexerpostscript->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnEventFilter(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_TimerEvent(QsciLexerPostScript* self, QTimerEvent* event) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->timerEvent(event);
    } else {
        vqscilexerpostscript->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseTimerEvent(QsciLexerPostScript* self, QTimerEvent* event) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_TimerEvent_IsBase(true);
        vqscilexerpostscript->timerEvent(event);
    } else {
        vqscilexerpostscript->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnTimerEvent(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_ChildEvent(QsciLexerPostScript* self, QChildEvent* event) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->childEvent(event);
    } else {
        vqscilexerpostscript->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseChildEvent(QsciLexerPostScript* self, QChildEvent* event) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_ChildEvent_IsBase(true);
        vqscilexerpostscript->childEvent(event);
    } else {
        vqscilexerpostscript->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnChildEvent(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_CustomEvent(QsciLexerPostScript* self, QEvent* event) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->customEvent(event);
    } else {
        vqscilexerpostscript->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseCustomEvent(QsciLexerPostScript* self, QEvent* event) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_CustomEvent_IsBase(true);
        vqscilexerpostscript->customEvent(event);
    } else {
        vqscilexerpostscript->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnCustomEvent(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_ConnectNotify(QsciLexerPostScript* self, QMetaMethod* signal) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->connectNotify(*signal);
    } else {
        vqscilexerpostscript->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseConnectNotify(QsciLexerPostScript* self, QMetaMethod* signal) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_ConnectNotify_IsBase(true);
        vqscilexerpostscript->connectNotify(*signal);
    } else {
        vqscilexerpostscript->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnConnectNotify(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPostScript_DisconnectNotify(QsciLexerPostScript* self, QMetaMethod* signal) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->disconnectNotify(*signal);
    } else {
        vqscilexerpostscript->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPostScript_QBaseDisconnectNotify(QsciLexerPostScript* self, QMetaMethod* signal) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_DisconnectNotify_IsBase(true);
        vqscilexerpostscript->disconnectNotify(*signal);
    } else {
        vqscilexerpostscript->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDisconnectNotify(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->setQsciLexerPostScript_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerPostScript_Sender(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->sender();
    } else {
        return vqscilexerpostscript->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerPostScript_QBaseSender(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Sender_IsBase(true);
        return vqscilexerpostscript->sender();
    } else {
        return vqscilexerpostscript->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSender(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Sender_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_SenderSignalIndex(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->senderSignalIndex();
    } else {
        return vqscilexerpostscript->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseSenderSignalIndex(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_SenderSignalIndex_IsBase(true);
        return vqscilexerpostscript->senderSignalIndex();
    } else {
        return vqscilexerpostscript->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSenderSignalIndex(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPostScript_Receivers(const QsciLexerPostScript* self, const char* signal) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->receivers(signal);
    } else {
        return vqscilexerpostscript->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerPostScript_QBaseReceivers(const QsciLexerPostScript* self, const char* signal) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Receivers_IsBase(true);
        return vqscilexerpostscript->receivers(signal);
    } else {
        return vqscilexerpostscript->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnReceivers(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_Receivers_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPostScript_IsSignalConnected(const QsciLexerPostScript* self, QMetaMethod* signal) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->isSignalConnected(*signal);
    } else {
        return vqscilexerpostscript->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerPostScript_QBaseIsSignalConnected(const QsciLexerPostScript* self, QMetaMethod* signal) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_IsSignalConnected_IsBase(true);
        return vqscilexerpostscript->isSignalConnected(*signal);
    } else {
        return vqscilexerpostscript->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnIsSignalConnected(const QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        vqscilexerpostscript->setQsciLexerPostScript_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerPostScript_Delete(QsciLexerPostScript* self) {
    delete self;
}
