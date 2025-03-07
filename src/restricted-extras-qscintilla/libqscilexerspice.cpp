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
#include <qscilexerspice.h>
#include "libqscilexerspice.hpp"
#include "libqscilexerspice.hxx"

QsciLexerSpice* QsciLexerSpice_new() {
    return new VirtualQsciLexerSpice();
}

QsciLexerSpice* QsciLexerSpice_new2(QObject* parent) {
    return new VirtualQsciLexerSpice(parent);
}

QMetaObject* QsciLexerSpice_MetaObject(const QsciLexerSpice* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerSpice_Metacast(QsciLexerSpice* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerSpice_Metacall(QsciLexerSpice* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerSpice_OnMetacall(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_Metacall_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerSpice_QBaseMetacall(QsciLexerSpice* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_Metacall_IsBase(true);
        return vqscilexerspice->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerSpice_Tr(const char* s) {
    QString _ret = QsciLexerSpice::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerSpice_DefaultColor(const QsciLexerSpice* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerSpice_DefaultFont(const QsciLexerSpice* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

libqt_string QsciLexerSpice_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerSpice::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerSpice_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerSpice::tr(s, c, static_cast<int>(n));
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
const char* QsciLexerSpice_Language(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return (const char*)vqscilexerspice->language();
    } else {
        return (const char*)vqscilexerspice->language();
    }
}

// Base class handler implementation
const char* QsciLexerSpice_QBaseLanguage(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Language_IsBase(true);
        return (const char*)vqscilexerspice->language();
    } else {
        return (const char*)vqscilexerspice->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnLanguage(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Language_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSpice_Lexer(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return (const char*)vqscilexerspice->lexer();
    } else {
        return (const char*)vqscilexerspice->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerSpice_QBaseLexer(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Lexer_IsBase(true);
        return (const char*)vqscilexerspice->lexer();
    } else {
        return (const char*)vqscilexerspice->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnLexer(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Lexer_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSpice_LexerId(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->lexerId();
    } else {
        return vqscilexerspice->lexerId();
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseLexerId(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_LexerId_IsBase(true);
        return vqscilexerspice->lexerId();
    } else {
        return vqscilexerspice->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnLexerId(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_LexerId_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSpice_AutoCompletionFillups(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return (const char*)vqscilexerspice->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerspice->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerSpice_QBaseAutoCompletionFillups(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerspice->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerspice->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnAutoCompletionFillups(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerSpice_AutoCompletionWordSeparators(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        QStringList _ret = vqscilexerspice->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerspice->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerSpice_QBaseAutoCompletionWordSeparators(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerspice->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerspice->autoCompletionWordSeparators();
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
void QsciLexerSpice_OnAutoCompletionWordSeparators(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSpice_BlockEnd(const QsciLexerSpice* self, int* style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return (const char*)vqscilexerspice->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerspice->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerSpice_QBaseBlockEnd(const QsciLexerSpice* self, int* style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_BlockEnd_IsBase(true);
        return (const char*)vqscilexerspice->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerspice->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnBlockEnd(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSpice_BlockLookback(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->blockLookback();
    } else {
        return vqscilexerspice->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseBlockLookback(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_BlockLookback_IsBase(true);
        return vqscilexerspice->blockLookback();
    } else {
        return vqscilexerspice->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnBlockLookback(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSpice_BlockStart(const QsciLexerSpice* self, int* style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return (const char*)vqscilexerspice->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerspice->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerSpice_QBaseBlockStart(const QsciLexerSpice* self, int* style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_BlockStart_IsBase(true);
        return (const char*)vqscilexerspice->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerspice->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnBlockStart(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSpice_BlockStartKeyword(const QsciLexerSpice* self, int* style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return (const char*)vqscilexerspice->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerspice->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerSpice_QBaseBlockStartKeyword(const QsciLexerSpice* self, int* style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerspice->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerspice->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnBlockStartKeyword(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSpice_BraceStyle(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->braceStyle();
    } else {
        return vqscilexerspice->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseBraceStyle(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_BraceStyle_IsBase(true);
        return vqscilexerspice->braceStyle();
    } else {
        return vqscilexerspice->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnBraceStyle(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_CaseSensitive(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->caseSensitive();
    } else {
        return vqscilexerspice->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseCaseSensitive(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_CaseSensitive_IsBase(true);
        return vqscilexerspice->caseSensitive();
    } else {
        return vqscilexerspice->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnCaseSensitive(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSpice_Color(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return new QColor(vqscilexerspice->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSpice_QBaseColor(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Color_IsBase(true);
        return new QColor(vqscilexerspice->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnColor(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Color_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_EolFill(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerspice->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseEolFill(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_EolFill_IsBase(true);
        return vqscilexerspice->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerspice->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnEolFill(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_EolFill_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerSpice_Font(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return new QFont(vqscilexerspice->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerSpice_QBaseFont(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Font_IsBase(true);
        return new QFont(vqscilexerspice->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnFont(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Font_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSpice_IndentationGuideView(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->indentationGuideView();
    } else {
        return vqscilexerspice->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseIndentationGuideView(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_IndentationGuideView_IsBase(true);
        return vqscilexerspice->indentationGuideView();
    } else {
        return vqscilexerspice->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnIndentationGuideView(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSpice_Keywords(const QsciLexerSpice* self, int set) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return (const char*)vqscilexerspice->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerspice->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerSpice_QBaseKeywords(const QsciLexerSpice* self, int set) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Keywords_IsBase(true);
        return (const char*)vqscilexerspice->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerspice->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnKeywords(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Keywords_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSpice_DefaultStyle(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->defaultStyle();
    } else {
        return vqscilexerspice->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseDefaultStyle(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_DefaultStyle_IsBase(true);
        return vqscilexerspice->defaultStyle();
    } else {
        return vqscilexerspice->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultStyle(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerSpice_Description(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        QString _ret = vqscilexerspice->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerspice->description(static_cast<int>(style));
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
libqt_string QsciLexerSpice_QBaseDescription(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Description_IsBase(true);
        QString _ret = vqscilexerspice->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerspice->description(static_cast<int>(style));
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
void QsciLexerSpice_OnDescription(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Description_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSpice_Paper(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return new QColor(vqscilexerspice->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSpice_QBasePaper(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Paper_IsBase(true);
        return new QColor(vqscilexerspice->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnPaper(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Paper_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSpice_DefaultColorWithStyle(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return new QColor(vqscilexerspice->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSpice_QBaseDefaultColorWithStyle(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerspice->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultColorWithStyle(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_DefaultEolFill(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerspice->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseDefaultEolFill(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_DefaultEolFill_IsBase(true);
        return vqscilexerspice->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerspice->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultEolFill(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerSpice_DefaultFontWithStyle(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return new QFont(vqscilexerspice->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerSpice_QBaseDefaultFontWithStyle(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerspice->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultFontWithStyle(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerSpice_DefaultPaperWithStyle(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return new QColor(vqscilexerspice->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerSpice_QBaseDefaultPaperWithStyle(const QsciLexerSpice* self, int style) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerspice->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultPaperWithStyle(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_SetEditor(QsciLexerSpice* self, QsciScintilla* editor) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setEditor(editor);
    } else {
        vqscilexerspice->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseSetEditor(QsciLexerSpice* self, QsciScintilla* editor) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_SetEditor_IsBase(true);
        vqscilexerspice->setEditor(editor);
    } else {
        vqscilexerspice->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetEditor(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_RefreshProperties(QsciLexerSpice* self) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->refreshProperties();
    } else {
        vqscilexerspice->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseRefreshProperties(QsciLexerSpice* self) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_RefreshProperties_IsBase(true);
        vqscilexerspice->refreshProperties();
    } else {
        vqscilexerspice->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnRefreshProperties(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSpice_StyleBitsNeeded(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->styleBitsNeeded();
    } else {
        return vqscilexerspice->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseStyleBitsNeeded(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_StyleBitsNeeded_IsBase(true);
        return vqscilexerspice->styleBitsNeeded();
    } else {
        return vqscilexerspice->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnStyleBitsNeeded(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerSpice_WordCharacters(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return (const char*)vqscilexerspice->wordCharacters();
    } else {
        return (const char*)vqscilexerspice->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerSpice_QBaseWordCharacters(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_WordCharacters_IsBase(true);
        return (const char*)vqscilexerspice->wordCharacters();
    } else {
        return (const char*)vqscilexerspice->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnWordCharacters(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_SetAutoIndentStyle(QsciLexerSpice* self, int autoindentstyle) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerspice->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseSetAutoIndentStyle(QsciLexerSpice* self, int autoindentstyle) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_SetAutoIndentStyle_IsBase(true);
        vqscilexerspice->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerspice->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetAutoIndentStyle(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_SetColor(QsciLexerSpice* self, QColor* c, int style) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerspice->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseSetColor(QsciLexerSpice* self, QColor* c, int style) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_SetColor_IsBase(true);
        vqscilexerspice->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerspice->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetColor(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_SetColor_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_SetEolFill(QsciLexerSpice* self, bool eoffill, int style) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerspice->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseSetEolFill(QsciLexerSpice* self, bool eoffill, int style) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_SetEolFill_IsBase(true);
        vqscilexerspice->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerspice->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetEolFill(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_SetFont(QsciLexerSpice* self, QFont* f, int style) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerspice->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseSetFont(QsciLexerSpice* self, QFont* f, int style) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_SetFont_IsBase(true);
        vqscilexerspice->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerspice->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetFont(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_SetFont_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_SetPaper(QsciLexerSpice* self, QColor* c, int style) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerspice->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseSetPaper(QsciLexerSpice* self, QColor* c, int style) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_SetPaper_IsBase(true);
        vqscilexerspice->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerspice->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetPaper(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_ReadProperties(QsciLexerSpice* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        return vqscilexerspice->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerspice->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseReadProperties(QsciLexerSpice* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_ReadProperties_IsBase(true);
        return vqscilexerspice->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerspice->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnReadProperties(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_WriteProperties(const QsciLexerSpice* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerspice->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseWriteProperties(const QsciLexerSpice* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_WriteProperties_IsBase(true);
        return vqscilexerspice->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerspice->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnWriteProperties(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_Event(QsciLexerSpice* self, QEvent* event) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        return vqscilexerspice->event(event);
    } else {
        return vqscilexerspice->event(event);
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseEvent(QsciLexerSpice* self, QEvent* event) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_Event_IsBase(true);
        return vqscilexerspice->event(event);
    } else {
        return vqscilexerspice->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnEvent(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_Event_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_EventFilter(QsciLexerSpice* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        return vqscilexerspice->eventFilter(watched, event);
    } else {
        return vqscilexerspice->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseEventFilter(QsciLexerSpice* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_EventFilter_IsBase(true);
        return vqscilexerspice->eventFilter(watched, event);
    } else {
        return vqscilexerspice->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnEventFilter(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_TimerEvent(QsciLexerSpice* self, QTimerEvent* event) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->timerEvent(event);
    } else {
        vqscilexerspice->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseTimerEvent(QsciLexerSpice* self, QTimerEvent* event) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_TimerEvent_IsBase(true);
        vqscilexerspice->timerEvent(event);
    } else {
        vqscilexerspice->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnTimerEvent(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_ChildEvent(QsciLexerSpice* self, QChildEvent* event) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->childEvent(event);
    } else {
        vqscilexerspice->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseChildEvent(QsciLexerSpice* self, QChildEvent* event) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_ChildEvent_IsBase(true);
        vqscilexerspice->childEvent(event);
    } else {
        vqscilexerspice->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnChildEvent(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_CustomEvent(QsciLexerSpice* self, QEvent* event) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->customEvent(event);
    } else {
        vqscilexerspice->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseCustomEvent(QsciLexerSpice* self, QEvent* event) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_CustomEvent_IsBase(true);
        vqscilexerspice->customEvent(event);
    } else {
        vqscilexerspice->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnCustomEvent(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_ConnectNotify(QsciLexerSpice* self, QMetaMethod* signal) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->connectNotify(*signal);
    } else {
        vqscilexerspice->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseConnectNotify(QsciLexerSpice* self, QMetaMethod* signal) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_ConnectNotify_IsBase(true);
        vqscilexerspice->connectNotify(*signal);
    } else {
        vqscilexerspice->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnConnectNotify(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerSpice_DisconnectNotify(QsciLexerSpice* self, QMetaMethod* signal) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->disconnectNotify(*signal);
    } else {
        vqscilexerspice->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerSpice_QBaseDisconnectNotify(QsciLexerSpice* self, QMetaMethod* signal) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_DisconnectNotify_IsBase(true);
        vqscilexerspice->disconnectNotify(*signal);
    } else {
        vqscilexerspice->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDisconnectNotify(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->setQsciLexerSpice_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerSpice_Sender(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->sender();
    } else {
        return vqscilexerspice->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerSpice_QBaseSender(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Sender_IsBase(true);
        return vqscilexerspice->sender();
    } else {
        return vqscilexerspice->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSender(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Sender_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSpice_SenderSignalIndex(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->senderSignalIndex();
    } else {
        return vqscilexerspice->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseSenderSignalIndex(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_SenderSignalIndex_IsBase(true);
        return vqscilexerspice->senderSignalIndex();
    } else {
        return vqscilexerspice->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSenderSignalIndex(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerSpice_Receivers(const QsciLexerSpice* self, const char* signal) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->receivers(signal);
    } else {
        return vqscilexerspice->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerSpice_QBaseReceivers(const QsciLexerSpice* self, const char* signal) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Receivers_IsBase(true);
        return vqscilexerspice->receivers(signal);
    } else {
        return vqscilexerspice->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnReceivers(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_Receivers_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerSpice_IsSignalConnected(const QsciLexerSpice* self, QMetaMethod* signal) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->isSignalConnected(*signal);
    } else {
        return vqscilexerspice->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerSpice_QBaseIsSignalConnected(const QsciLexerSpice* self, QMetaMethod* signal) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_IsSignalConnected_IsBase(true);
        return vqscilexerspice->isSignalConnected(*signal);
    } else {
        return vqscilexerspice->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnIsSignalConnected(const QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        vqscilexerspice->setQsciLexerSpice_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerSpice_Delete(QsciLexerSpice* self) {
    delete self;
}
