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
#include <qscilexeroctave.h>
#include "libqscilexeroctave.hpp"
#include "libqscilexeroctave.hxx"

QsciLexerOctave* QsciLexerOctave_new() {
    return new VirtualQsciLexerOctave();
}

QsciLexerOctave* QsciLexerOctave_new2(QObject* parent) {
    return new VirtualQsciLexerOctave(parent);
}

QMetaObject* QsciLexerOctave_MetaObject(const QsciLexerOctave* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerOctave_Metacast(QsciLexerOctave* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerOctave_Metacall(QsciLexerOctave* self, int param1, int param2, void** param3) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerOctave_OnMetacall(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_Metacall_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerOctave_QBaseMetacall(QsciLexerOctave* self, int param1, int param2, void** param3) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_Metacall_IsBase(true);
        return vqscilexeroctave->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerOctave_Tr(const char* s) {
    QString _ret = QsciLexerOctave::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerOctave_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerOctave::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerOctave_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerOctave::tr(s, c, static_cast<int>(n));
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
const char* QsciLexerOctave_Language(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return (const char*)vqscilexeroctave->language();
    } else {
        return (const char*)vqscilexeroctave->language();
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseLanguage(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Language_IsBase(true);
        return (const char*)vqscilexeroctave->language();
    } else {
        return (const char*)vqscilexeroctave->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnLanguage(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Language_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerOctave_Lexer(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return (const char*)vqscilexeroctave->lexer();
    } else {
        return (const char*)vqscilexeroctave->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseLexer(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Lexer_IsBase(true);
        return (const char*)vqscilexeroctave->lexer();
    } else {
        return (const char*)vqscilexeroctave->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnLexer(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Lexer_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_LexerId(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->lexerId();
    } else {
        return vqscilexeroctave->lexerId();
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseLexerId(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_LexerId_IsBase(true);
        return vqscilexeroctave->lexerId();
    } else {
        return vqscilexeroctave->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnLexerId(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_LexerId_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerOctave_AutoCompletionFillups(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return (const char*)vqscilexeroctave->autoCompletionFillups();
    } else {
        return (const char*)vqscilexeroctave->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseAutoCompletionFillups(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexeroctave->autoCompletionFillups();
    } else {
        return (const char*)vqscilexeroctave->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnAutoCompletionFillups(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerOctave_AutoCompletionWordSeparators(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        QStringList _ret = vqscilexeroctave->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexeroctave->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerOctave_QBaseAutoCompletionWordSeparators(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexeroctave->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexeroctave->autoCompletionWordSeparators();
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
void QsciLexerOctave_OnAutoCompletionWordSeparators(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerOctave_BlockEnd(const QsciLexerOctave* self, int* style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return (const char*)vqscilexeroctave->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexeroctave->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseBlockEnd(const QsciLexerOctave* self, int* style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_BlockEnd_IsBase(true);
        return (const char*)vqscilexeroctave->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexeroctave->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBlockEnd(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_BlockLookback(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->blockLookback();
    } else {
        return vqscilexeroctave->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseBlockLookback(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_BlockLookback_IsBase(true);
        return vqscilexeroctave->blockLookback();
    } else {
        return vqscilexeroctave->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBlockLookback(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerOctave_BlockStart(const QsciLexerOctave* self, int* style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return (const char*)vqscilexeroctave->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexeroctave->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseBlockStart(const QsciLexerOctave* self, int* style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_BlockStart_IsBase(true);
        return (const char*)vqscilexeroctave->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexeroctave->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBlockStart(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerOctave_BlockStartKeyword(const QsciLexerOctave* self, int* style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return (const char*)vqscilexeroctave->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexeroctave->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseBlockStartKeyword(const QsciLexerOctave* self, int* style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexeroctave->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexeroctave->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBlockStartKeyword(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_BraceStyle(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->braceStyle();
    } else {
        return vqscilexeroctave->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseBraceStyle(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_BraceStyle_IsBase(true);
        return vqscilexeroctave->braceStyle();
    } else {
        return vqscilexeroctave->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBraceStyle(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_CaseSensitive(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->caseSensitive();
    } else {
        return vqscilexeroctave->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseCaseSensitive(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_CaseSensitive_IsBase(true);
        return vqscilexeroctave->caseSensitive();
    } else {
        return vqscilexeroctave->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnCaseSensitive(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerOctave_Color(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return new QColor(vqscilexeroctave->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerOctave_QBaseColor(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Color_IsBase(true);
        return new QColor(vqscilexeroctave->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnColor(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Color_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_EolFill(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->eolFill(static_cast<int>(style));
    } else {
        return vqscilexeroctave->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseEolFill(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_EolFill_IsBase(true);
        return vqscilexeroctave->eolFill(static_cast<int>(style));
    } else {
        return vqscilexeroctave->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnEolFill(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_EolFill_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerOctave_Font(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return new QFont(vqscilexeroctave->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerOctave_QBaseFont(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Font_IsBase(true);
        return new QFont(vqscilexeroctave->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnFont(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Font_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_IndentationGuideView(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->indentationGuideView();
    } else {
        return vqscilexeroctave->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseIndentationGuideView(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_IndentationGuideView_IsBase(true);
        return vqscilexeroctave->indentationGuideView();
    } else {
        return vqscilexeroctave->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnIndentationGuideView(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerOctave_Keywords(const QsciLexerOctave* self, int set) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return (const char*)vqscilexeroctave->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexeroctave->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseKeywords(const QsciLexerOctave* self, int set) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Keywords_IsBase(true);
        return (const char*)vqscilexeroctave->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexeroctave->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnKeywords(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Keywords_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_DefaultStyle(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->defaultStyle();
    } else {
        return vqscilexeroctave->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseDefaultStyle(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_DefaultStyle_IsBase(true);
        return vqscilexeroctave->defaultStyle();
    } else {
        return vqscilexeroctave->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultStyle(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerOctave_Description(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        QString _ret = vqscilexeroctave->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexeroctave->description(static_cast<int>(style));
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
libqt_string QsciLexerOctave_QBaseDescription(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Description_IsBase(true);
        QString _ret = vqscilexeroctave->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexeroctave->description(static_cast<int>(style));
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
void QsciLexerOctave_OnDescription(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Description_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerOctave_Paper(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return new QColor(vqscilexeroctave->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerOctave_QBasePaper(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Paper_IsBase(true);
        return new QColor(vqscilexeroctave->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnPaper(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Paper_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerOctave_DefaultColorWithStyle(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return new QColor(vqscilexeroctave->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerOctave_QBaseDefaultColorWithStyle(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexeroctave->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultColorWithStyle(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_DefaultEolFill(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexeroctave->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseDefaultEolFill(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_DefaultEolFill_IsBase(true);
        return vqscilexeroctave->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexeroctave->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultEolFill(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerOctave_DefaultFontWithStyle(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return new QFont(vqscilexeroctave->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerOctave_QBaseDefaultFontWithStyle(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexeroctave->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultFontWithStyle(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerOctave_DefaultPaperWithStyle(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return new QColor(vqscilexeroctave->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerOctave_QBaseDefaultPaperWithStyle(const QsciLexerOctave* self, int style) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexeroctave->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultPaperWithStyle(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_SetEditor(QsciLexerOctave* self, QsciScintilla* editor) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setEditor(editor);
    } else {
        vqscilexeroctave->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseSetEditor(QsciLexerOctave* self, QsciScintilla* editor) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_SetEditor_IsBase(true);
        vqscilexeroctave->setEditor(editor);
    } else {
        vqscilexeroctave->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetEditor(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_RefreshProperties(QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->refreshProperties();
    } else {
        vqscilexeroctave->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseRefreshProperties(QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_RefreshProperties_IsBase(true);
        vqscilexeroctave->refreshProperties();
    } else {
        vqscilexeroctave->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnRefreshProperties(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_StyleBitsNeeded(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->styleBitsNeeded();
    } else {
        return vqscilexeroctave->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseStyleBitsNeeded(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_StyleBitsNeeded_IsBase(true);
        return vqscilexeroctave->styleBitsNeeded();
    } else {
        return vqscilexeroctave->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnStyleBitsNeeded(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerOctave_WordCharacters(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return (const char*)vqscilexeroctave->wordCharacters();
    } else {
        return (const char*)vqscilexeroctave->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerOctave_QBaseWordCharacters(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_WordCharacters_IsBase(true);
        return (const char*)vqscilexeroctave->wordCharacters();
    } else {
        return (const char*)vqscilexeroctave->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnWordCharacters(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_SetAutoIndentStyle(QsciLexerOctave* self, int autoindentstyle) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexeroctave->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseSetAutoIndentStyle(QsciLexerOctave* self, int autoindentstyle) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_SetAutoIndentStyle_IsBase(true);
        vqscilexeroctave->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexeroctave->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetAutoIndentStyle(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_SetColor(QsciLexerOctave* self, QColor* c, int style) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexeroctave->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseSetColor(QsciLexerOctave* self, QColor* c, int style) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_SetColor_IsBase(true);
        vqscilexeroctave->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexeroctave->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetColor(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_SetColor_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_SetEolFill(QsciLexerOctave* self, bool eoffill, int style) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexeroctave->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseSetEolFill(QsciLexerOctave* self, bool eoffill, int style) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_SetEolFill_IsBase(true);
        vqscilexeroctave->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexeroctave->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetEolFill(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_SetFont(QsciLexerOctave* self, QFont* f, int style) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexeroctave->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseSetFont(QsciLexerOctave* self, QFont* f, int style) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_SetFont_IsBase(true);
        vqscilexeroctave->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexeroctave->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetFont(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_SetFont_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_SetPaper(QsciLexerOctave* self, QColor* c, int style) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexeroctave->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseSetPaper(QsciLexerOctave* self, QColor* c, int style) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_SetPaper_IsBase(true);
        vqscilexeroctave->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexeroctave->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetPaper(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_ReadProperties(QsciLexerOctave* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        return vqscilexeroctave->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexeroctave->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseReadProperties(QsciLexerOctave* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_ReadProperties_IsBase(true);
        return vqscilexeroctave->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexeroctave->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnReadProperties(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_WriteProperties(const QsciLexerOctave* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexeroctave->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseWriteProperties(const QsciLexerOctave* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_WriteProperties_IsBase(true);
        return vqscilexeroctave->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexeroctave->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnWriteProperties(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_Event(QsciLexerOctave* self, QEvent* event) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        return vqscilexeroctave->event(event);
    } else {
        return vqscilexeroctave->event(event);
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseEvent(QsciLexerOctave* self, QEvent* event) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_Event_IsBase(true);
        return vqscilexeroctave->event(event);
    } else {
        return vqscilexeroctave->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnEvent(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_Event_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_EventFilter(QsciLexerOctave* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        return vqscilexeroctave->eventFilter(watched, event);
    } else {
        return vqscilexeroctave->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseEventFilter(QsciLexerOctave* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_EventFilter_IsBase(true);
        return vqscilexeroctave->eventFilter(watched, event);
    } else {
        return vqscilexeroctave->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnEventFilter(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_TimerEvent(QsciLexerOctave* self, QTimerEvent* event) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->timerEvent(event);
    } else {
        vqscilexeroctave->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseTimerEvent(QsciLexerOctave* self, QTimerEvent* event) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_TimerEvent_IsBase(true);
        vqscilexeroctave->timerEvent(event);
    } else {
        vqscilexeroctave->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnTimerEvent(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_ChildEvent(QsciLexerOctave* self, QChildEvent* event) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->childEvent(event);
    } else {
        vqscilexeroctave->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseChildEvent(QsciLexerOctave* self, QChildEvent* event) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_ChildEvent_IsBase(true);
        vqscilexeroctave->childEvent(event);
    } else {
        vqscilexeroctave->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnChildEvent(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_CustomEvent(QsciLexerOctave* self, QEvent* event) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->customEvent(event);
    } else {
        vqscilexeroctave->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseCustomEvent(QsciLexerOctave* self, QEvent* event) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_CustomEvent_IsBase(true);
        vqscilexeroctave->customEvent(event);
    } else {
        vqscilexeroctave->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnCustomEvent(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_ConnectNotify(QsciLexerOctave* self, QMetaMethod* signal) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->connectNotify(*signal);
    } else {
        vqscilexeroctave->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseConnectNotify(QsciLexerOctave* self, QMetaMethod* signal) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_ConnectNotify_IsBase(true);
        vqscilexeroctave->connectNotify(*signal);
    } else {
        vqscilexeroctave->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnConnectNotify(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerOctave_DisconnectNotify(QsciLexerOctave* self, QMetaMethod* signal) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->disconnectNotify(*signal);
    } else {
        vqscilexeroctave->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerOctave_QBaseDisconnectNotify(QsciLexerOctave* self, QMetaMethod* signal) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_DisconnectNotify_IsBase(true);
        vqscilexeroctave->disconnectNotify(*signal);
    } else {
        vqscilexeroctave->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDisconnectNotify(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->setQsciLexerOctave_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerOctave_Sender(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->sender();
    } else {
        return vqscilexeroctave->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerOctave_QBaseSender(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Sender_IsBase(true);
        return vqscilexeroctave->sender();
    } else {
        return vqscilexeroctave->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSender(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Sender_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_SenderSignalIndex(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->senderSignalIndex();
    } else {
        return vqscilexeroctave->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseSenderSignalIndex(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_SenderSignalIndex_IsBase(true);
        return vqscilexeroctave->senderSignalIndex();
    } else {
        return vqscilexeroctave->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSenderSignalIndex(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerOctave_Receivers(const QsciLexerOctave* self, const char* signal) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->receivers(signal);
    } else {
        return vqscilexeroctave->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerOctave_QBaseReceivers(const QsciLexerOctave* self, const char* signal) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Receivers_IsBase(true);
        return vqscilexeroctave->receivers(signal);
    } else {
        return vqscilexeroctave->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnReceivers(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_Receivers_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerOctave_IsSignalConnected(const QsciLexerOctave* self, QMetaMethod* signal) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->isSignalConnected(*signal);
    } else {
        return vqscilexeroctave->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerOctave_QBaseIsSignalConnected(const QsciLexerOctave* self, QMetaMethod* signal) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_IsSignalConnected_IsBase(true);
        return vqscilexeroctave->isSignalConnected(*signal);
    } else {
        return vqscilexeroctave->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnIsSignalConnected(const QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        vqscilexeroctave->setQsciLexerOctave_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerOctave_Delete(QsciLexerOctave* self) {
    delete self;
}
