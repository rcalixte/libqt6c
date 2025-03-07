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
#include <qscilexermatlab.h>
#include "libqscilexermatlab.hpp"
#include "libqscilexermatlab.hxx"

QsciLexerMatlab* QsciLexerMatlab_new() {
    return new VirtualQsciLexerMatlab();
}

QsciLexerMatlab* QsciLexerMatlab_new2(QObject* parent) {
    return new VirtualQsciLexerMatlab(parent);
}

QMetaObject* QsciLexerMatlab_MetaObject(const QsciLexerMatlab* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerMatlab_Metacast(QsciLexerMatlab* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerMatlab_Metacall(QsciLexerMatlab* self, int param1, int param2, void** param3) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerMatlab_OnMetacall(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_Metacall_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerMatlab_QBaseMetacall(QsciLexerMatlab* self, int param1, int param2, void** param3) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_Metacall_IsBase(true);
        return vqscilexermatlab->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerMatlab_Tr(const char* s) {
    QString _ret = QsciLexerMatlab::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerMatlab_DefaultColor(const QsciLexerMatlab* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerMatlab_DefaultFont(const QsciLexerMatlab* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

libqt_string QsciLexerMatlab_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerMatlab::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerMatlab_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerMatlab::tr(s, c, static_cast<int>(n));
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
const char* QsciLexerMatlab_Language(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return (const char*)vqscilexermatlab->language();
    } else {
        return (const char*)vqscilexermatlab->language();
    }
}

// Base class handler implementation
const char* QsciLexerMatlab_QBaseLanguage(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Language_IsBase(true);
        return (const char*)vqscilexermatlab->language();
    } else {
        return (const char*)vqscilexermatlab->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnLanguage(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Language_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMatlab_Lexer(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return (const char*)vqscilexermatlab->lexer();
    } else {
        return (const char*)vqscilexermatlab->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerMatlab_QBaseLexer(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Lexer_IsBase(true);
        return (const char*)vqscilexermatlab->lexer();
    } else {
        return (const char*)vqscilexermatlab->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnLexer(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Lexer_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_LexerId(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->lexerId();
    } else {
        return vqscilexermatlab->lexerId();
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseLexerId(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_LexerId_IsBase(true);
        return vqscilexermatlab->lexerId();
    } else {
        return vqscilexermatlab->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnLexerId(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_LexerId_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMatlab_AutoCompletionFillups(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return (const char*)vqscilexermatlab->autoCompletionFillups();
    } else {
        return (const char*)vqscilexermatlab->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerMatlab_QBaseAutoCompletionFillups(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexermatlab->autoCompletionFillups();
    } else {
        return (const char*)vqscilexermatlab->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnAutoCompletionFillups(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerMatlab_AutoCompletionWordSeparators(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        QStringList _ret = vqscilexermatlab->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexermatlab->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerMatlab_QBaseAutoCompletionWordSeparators(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexermatlab->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexermatlab->autoCompletionWordSeparators();
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
void QsciLexerMatlab_OnAutoCompletionWordSeparators(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMatlab_BlockEnd(const QsciLexerMatlab* self, int* style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return (const char*)vqscilexermatlab->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexermatlab->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMatlab_QBaseBlockEnd(const QsciLexerMatlab* self, int* style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_BlockEnd_IsBase(true);
        return (const char*)vqscilexermatlab->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexermatlab->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBlockEnd(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_BlockLookback(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->blockLookback();
    } else {
        return vqscilexermatlab->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseBlockLookback(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_BlockLookback_IsBase(true);
        return vqscilexermatlab->blockLookback();
    } else {
        return vqscilexermatlab->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBlockLookback(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMatlab_BlockStart(const QsciLexerMatlab* self, int* style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return (const char*)vqscilexermatlab->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexermatlab->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMatlab_QBaseBlockStart(const QsciLexerMatlab* self, int* style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_BlockStart_IsBase(true);
        return (const char*)vqscilexermatlab->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexermatlab->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBlockStart(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMatlab_BlockStartKeyword(const QsciLexerMatlab* self, int* style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return (const char*)vqscilexermatlab->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexermatlab->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMatlab_QBaseBlockStartKeyword(const QsciLexerMatlab* self, int* style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexermatlab->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexermatlab->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBlockStartKeyword(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_BraceStyle(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->braceStyle();
    } else {
        return vqscilexermatlab->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseBraceStyle(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_BraceStyle_IsBase(true);
        return vqscilexermatlab->braceStyle();
    } else {
        return vqscilexermatlab->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBraceStyle(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_CaseSensitive(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->caseSensitive();
    } else {
        return vqscilexermatlab->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseCaseSensitive(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_CaseSensitive_IsBase(true);
        return vqscilexermatlab->caseSensitive();
    } else {
        return vqscilexermatlab->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnCaseSensitive(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMatlab_Color(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return new QColor(vqscilexermatlab->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMatlab_QBaseColor(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Color_IsBase(true);
        return new QColor(vqscilexermatlab->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnColor(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Color_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_EolFill(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->eolFill(static_cast<int>(style));
    } else {
        return vqscilexermatlab->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseEolFill(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_EolFill_IsBase(true);
        return vqscilexermatlab->eolFill(static_cast<int>(style));
    } else {
        return vqscilexermatlab->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnEolFill(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_EolFill_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerMatlab_Font(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return new QFont(vqscilexermatlab->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerMatlab_QBaseFont(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Font_IsBase(true);
        return new QFont(vqscilexermatlab->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnFont(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Font_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_IndentationGuideView(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->indentationGuideView();
    } else {
        return vqscilexermatlab->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseIndentationGuideView(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_IndentationGuideView_IsBase(true);
        return vqscilexermatlab->indentationGuideView();
    } else {
        return vqscilexermatlab->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnIndentationGuideView(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMatlab_Keywords(const QsciLexerMatlab* self, int set) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return (const char*)vqscilexermatlab->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexermatlab->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerMatlab_QBaseKeywords(const QsciLexerMatlab* self, int set) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Keywords_IsBase(true);
        return (const char*)vqscilexermatlab->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexermatlab->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnKeywords(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Keywords_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_DefaultStyle(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->defaultStyle();
    } else {
        return vqscilexermatlab->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseDefaultStyle(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultStyle_IsBase(true);
        return vqscilexermatlab->defaultStyle();
    } else {
        return vqscilexermatlab->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultStyle(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerMatlab_Description(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        QString _ret = vqscilexermatlab->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexermatlab->description(static_cast<int>(style));
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
libqt_string QsciLexerMatlab_QBaseDescription(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Description_IsBase(true);
        QString _ret = vqscilexermatlab->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexermatlab->description(static_cast<int>(style));
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
void QsciLexerMatlab_OnDescription(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Description_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMatlab_Paper(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return new QColor(vqscilexermatlab->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMatlab_QBasePaper(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Paper_IsBase(true);
        return new QColor(vqscilexermatlab->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnPaper(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Paper_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMatlab_DefaultColorWithStyle(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return new QColor(vqscilexermatlab->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMatlab_QBaseDefaultColorWithStyle(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexermatlab->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultColorWithStyle(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_DefaultEolFill(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexermatlab->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseDefaultEolFill(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultEolFill_IsBase(true);
        return vqscilexermatlab->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexermatlab->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultEolFill(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerMatlab_DefaultFontWithStyle(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return new QFont(vqscilexermatlab->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerMatlab_QBaseDefaultFontWithStyle(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexermatlab->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultFontWithStyle(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMatlab_DefaultPaperWithStyle(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return new QColor(vqscilexermatlab->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMatlab_QBaseDefaultPaperWithStyle(const QsciLexerMatlab* self, int style) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexermatlab->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultPaperWithStyle(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_SetEditor(QsciLexerMatlab* self, QsciScintilla* editor) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setEditor(editor);
    } else {
        vqscilexermatlab->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseSetEditor(QsciLexerMatlab* self, QsciScintilla* editor) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_SetEditor_IsBase(true);
        vqscilexermatlab->setEditor(editor);
    } else {
        vqscilexermatlab->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetEditor(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_RefreshProperties(QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->refreshProperties();
    } else {
        vqscilexermatlab->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseRefreshProperties(QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_RefreshProperties_IsBase(true);
        vqscilexermatlab->refreshProperties();
    } else {
        vqscilexermatlab->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnRefreshProperties(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_StyleBitsNeeded(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->styleBitsNeeded();
    } else {
        return vqscilexermatlab->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseStyleBitsNeeded(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_StyleBitsNeeded_IsBase(true);
        return vqscilexermatlab->styleBitsNeeded();
    } else {
        return vqscilexermatlab->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnStyleBitsNeeded(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMatlab_WordCharacters(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return (const char*)vqscilexermatlab->wordCharacters();
    } else {
        return (const char*)vqscilexermatlab->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerMatlab_QBaseWordCharacters(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_WordCharacters_IsBase(true);
        return (const char*)vqscilexermatlab->wordCharacters();
    } else {
        return (const char*)vqscilexermatlab->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnWordCharacters(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_SetAutoIndentStyle(QsciLexerMatlab* self, int autoindentstyle) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexermatlab->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseSetAutoIndentStyle(QsciLexerMatlab* self, int autoindentstyle) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_SetAutoIndentStyle_IsBase(true);
        vqscilexermatlab->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexermatlab->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetAutoIndentStyle(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_SetColor(QsciLexerMatlab* self, QColor* c, int style) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexermatlab->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseSetColor(QsciLexerMatlab* self, QColor* c, int style) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_SetColor_IsBase(true);
        vqscilexermatlab->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexermatlab->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetColor(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_SetColor_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_SetEolFill(QsciLexerMatlab* self, bool eoffill, int style) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexermatlab->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseSetEolFill(QsciLexerMatlab* self, bool eoffill, int style) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_SetEolFill_IsBase(true);
        vqscilexermatlab->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexermatlab->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetEolFill(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_SetFont(QsciLexerMatlab* self, QFont* f, int style) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexermatlab->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseSetFont(QsciLexerMatlab* self, QFont* f, int style) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_SetFont_IsBase(true);
        vqscilexermatlab->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexermatlab->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetFont(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_SetFont_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_SetPaper(QsciLexerMatlab* self, QColor* c, int style) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexermatlab->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseSetPaper(QsciLexerMatlab* self, QColor* c, int style) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_SetPaper_IsBase(true);
        vqscilexermatlab->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexermatlab->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetPaper(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_ReadProperties(QsciLexerMatlab* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        return vqscilexermatlab->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexermatlab->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseReadProperties(QsciLexerMatlab* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_ReadProperties_IsBase(true);
        return vqscilexermatlab->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexermatlab->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnReadProperties(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_WriteProperties(const QsciLexerMatlab* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexermatlab->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseWriteProperties(const QsciLexerMatlab* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_WriteProperties_IsBase(true);
        return vqscilexermatlab->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexermatlab->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnWriteProperties(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_Event(QsciLexerMatlab* self, QEvent* event) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        return vqscilexermatlab->event(event);
    } else {
        return vqscilexermatlab->event(event);
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseEvent(QsciLexerMatlab* self, QEvent* event) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_Event_IsBase(true);
        return vqscilexermatlab->event(event);
    } else {
        return vqscilexermatlab->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnEvent(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_Event_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_EventFilter(QsciLexerMatlab* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        return vqscilexermatlab->eventFilter(watched, event);
    } else {
        return vqscilexermatlab->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseEventFilter(QsciLexerMatlab* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_EventFilter_IsBase(true);
        return vqscilexermatlab->eventFilter(watched, event);
    } else {
        return vqscilexermatlab->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnEventFilter(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_TimerEvent(QsciLexerMatlab* self, QTimerEvent* event) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->timerEvent(event);
    } else {
        vqscilexermatlab->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseTimerEvent(QsciLexerMatlab* self, QTimerEvent* event) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_TimerEvent_IsBase(true);
        vqscilexermatlab->timerEvent(event);
    } else {
        vqscilexermatlab->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnTimerEvent(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_ChildEvent(QsciLexerMatlab* self, QChildEvent* event) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->childEvent(event);
    } else {
        vqscilexermatlab->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseChildEvent(QsciLexerMatlab* self, QChildEvent* event) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_ChildEvent_IsBase(true);
        vqscilexermatlab->childEvent(event);
    } else {
        vqscilexermatlab->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnChildEvent(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_CustomEvent(QsciLexerMatlab* self, QEvent* event) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->customEvent(event);
    } else {
        vqscilexermatlab->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseCustomEvent(QsciLexerMatlab* self, QEvent* event) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_CustomEvent_IsBase(true);
        vqscilexermatlab->customEvent(event);
    } else {
        vqscilexermatlab->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnCustomEvent(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_ConnectNotify(QsciLexerMatlab* self, QMetaMethod* signal) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->connectNotify(*signal);
    } else {
        vqscilexermatlab->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseConnectNotify(QsciLexerMatlab* self, QMetaMethod* signal) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_ConnectNotify_IsBase(true);
        vqscilexermatlab->connectNotify(*signal);
    } else {
        vqscilexermatlab->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnConnectNotify(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMatlab_DisconnectNotify(QsciLexerMatlab* self, QMetaMethod* signal) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->disconnectNotify(*signal);
    } else {
        vqscilexermatlab->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerMatlab_QBaseDisconnectNotify(QsciLexerMatlab* self, QMetaMethod* signal) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_DisconnectNotify_IsBase(true);
        vqscilexermatlab->disconnectNotify(*signal);
    } else {
        vqscilexermatlab->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDisconnectNotify(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->setQsciLexerMatlab_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerMatlab_Sender(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->sender();
    } else {
        return vqscilexermatlab->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerMatlab_QBaseSender(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Sender_IsBase(true);
        return vqscilexermatlab->sender();
    } else {
        return vqscilexermatlab->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSender(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Sender_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_SenderSignalIndex(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->senderSignalIndex();
    } else {
        return vqscilexermatlab->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseSenderSignalIndex(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_SenderSignalIndex_IsBase(true);
        return vqscilexermatlab->senderSignalIndex();
    } else {
        return vqscilexermatlab->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSenderSignalIndex(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMatlab_Receivers(const QsciLexerMatlab* self, const char* signal) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->receivers(signal);
    } else {
        return vqscilexermatlab->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerMatlab_QBaseReceivers(const QsciLexerMatlab* self, const char* signal) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Receivers_IsBase(true);
        return vqscilexermatlab->receivers(signal);
    } else {
        return vqscilexermatlab->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnReceivers(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_Receivers_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMatlab_IsSignalConnected(const QsciLexerMatlab* self, QMetaMethod* signal) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->isSignalConnected(*signal);
    } else {
        return vqscilexermatlab->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerMatlab_QBaseIsSignalConnected(const QsciLexerMatlab* self, QMetaMethod* signal) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_IsSignalConnected_IsBase(true);
        return vqscilexermatlab->isSignalConnected(*signal);
    } else {
        return vqscilexermatlab->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnIsSignalConnected(const QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        vqscilexermatlab->setQsciLexerMatlab_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerMatlab_Delete(QsciLexerMatlab* self) {
    delete self;
}
