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
#include <qscilexerfortran.h>
#include "libqscilexerfortran.hpp"
#include "libqscilexerfortran.hxx"

QsciLexerFortran* QsciLexerFortran_new() {
    return new VirtualQsciLexerFortran();
}

QsciLexerFortran* QsciLexerFortran_new2(QObject* parent) {
    return new VirtualQsciLexerFortran(parent);
}

QMetaObject* QsciLexerFortran_MetaObject(const QsciLexerFortran* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerFortran_Metacast(QsciLexerFortran* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerFortran_Metacall(QsciLexerFortran* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerFortran_OnMetacall(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_Metacall_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerFortran_QBaseMetacall(QsciLexerFortran* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_Metacall_IsBase(true);
        return vqscilexerfortran->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerFortran_Tr(const char* s) {
    QString _ret = QsciLexerFortran::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerFortran_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerFortran::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerFortran_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerFortran::tr(s, c, static_cast<int>(n));
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
void QsciLexerFortran_SetFoldCompact(QsciLexerFortran* self, bool fold) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setFoldCompact(fold);
    } else {
        vqscilexerfortran->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseSetFoldCompact(QsciLexerFortran* self, bool fold) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_SetFoldCompact_IsBase(true);
        vqscilexerfortran->setFoldCompact(fold);
    } else {
        vqscilexerfortran->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetFoldCompact(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran_Language(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return (const char*)vqscilexerfortran->language();
    } else {
        return (const char*)vqscilexerfortran->language();
    }
}

// Base class handler implementation
const char* QsciLexerFortran_QBaseLanguage(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Language_IsBase(true);
        return (const char*)vqscilexerfortran->language();
    } else {
        return (const char*)vqscilexerfortran->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnLanguage(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Language_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran_Lexer(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return (const char*)vqscilexerfortran->lexer();
    } else {
        return (const char*)vqscilexerfortran->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerFortran_QBaseLexer(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Lexer_IsBase(true);
        return (const char*)vqscilexerfortran->lexer();
    } else {
        return (const char*)vqscilexerfortran->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnLexer(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Lexer_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_LexerId(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->lexerId();
    } else {
        return vqscilexerfortran->lexerId();
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseLexerId(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_LexerId_IsBase(true);
        return vqscilexerfortran->lexerId();
    } else {
        return vqscilexerfortran->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnLexerId(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_LexerId_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran_AutoCompletionFillups(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return (const char*)vqscilexerfortran->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerfortran->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerFortran_QBaseAutoCompletionFillups(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerfortran->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerfortran->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnAutoCompletionFillups(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerFortran_AutoCompletionWordSeparators(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        QStringList _ret = vqscilexerfortran->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerfortran->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerFortran_QBaseAutoCompletionWordSeparators(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerfortran->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerfortran->autoCompletionWordSeparators();
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
void QsciLexerFortran_OnAutoCompletionWordSeparators(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran_BlockEnd(const QsciLexerFortran* self, int* style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return (const char*)vqscilexerfortran->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerfortran->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerFortran_QBaseBlockEnd(const QsciLexerFortran* self, int* style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_BlockEnd_IsBase(true);
        return (const char*)vqscilexerfortran->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerfortran->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBlockEnd(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_BlockLookback(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->blockLookback();
    } else {
        return vqscilexerfortran->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseBlockLookback(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_BlockLookback_IsBase(true);
        return vqscilexerfortran->blockLookback();
    } else {
        return vqscilexerfortran->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBlockLookback(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran_BlockStart(const QsciLexerFortran* self, int* style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return (const char*)vqscilexerfortran->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerfortran->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerFortran_QBaseBlockStart(const QsciLexerFortran* self, int* style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_BlockStart_IsBase(true);
        return (const char*)vqscilexerfortran->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerfortran->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBlockStart(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran_BlockStartKeyword(const QsciLexerFortran* self, int* style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return (const char*)vqscilexerfortran->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerfortran->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerFortran_QBaseBlockStartKeyword(const QsciLexerFortran* self, int* style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerfortran->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerfortran->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBlockStartKeyword(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_BraceStyle(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->braceStyle();
    } else {
        return vqscilexerfortran->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseBraceStyle(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_BraceStyle_IsBase(true);
        return vqscilexerfortran->braceStyle();
    } else {
        return vqscilexerfortran->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBraceStyle(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_CaseSensitive(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->caseSensitive();
    } else {
        return vqscilexerfortran->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseCaseSensitive(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_CaseSensitive_IsBase(true);
        return vqscilexerfortran->caseSensitive();
    } else {
        return vqscilexerfortran->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnCaseSensitive(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerFortran_Color(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return new QColor(vqscilexerfortran->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerFortran_QBaseColor(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Color_IsBase(true);
        return new QColor(vqscilexerfortran->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnColor(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Color_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_EolFill(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerfortran->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseEolFill(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_EolFill_IsBase(true);
        return vqscilexerfortran->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerfortran->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnEolFill(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_EolFill_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerFortran_Font(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return new QFont(vqscilexerfortran->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerFortran_QBaseFont(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Font_IsBase(true);
        return new QFont(vqscilexerfortran->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnFont(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Font_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_IndentationGuideView(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->indentationGuideView();
    } else {
        return vqscilexerfortran->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseIndentationGuideView(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_IndentationGuideView_IsBase(true);
        return vqscilexerfortran->indentationGuideView();
    } else {
        return vqscilexerfortran->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnIndentationGuideView(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran_Keywords(const QsciLexerFortran* self, int set) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return (const char*)vqscilexerfortran->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerfortran->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerFortran_QBaseKeywords(const QsciLexerFortran* self, int set) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Keywords_IsBase(true);
        return (const char*)vqscilexerfortran->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerfortran->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnKeywords(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Keywords_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_DefaultStyle(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->defaultStyle();
    } else {
        return vqscilexerfortran->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseDefaultStyle(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_DefaultStyle_IsBase(true);
        return vqscilexerfortran->defaultStyle();
    } else {
        return vqscilexerfortran->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultStyle(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerFortran_Description(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        QString _ret = vqscilexerfortran->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerfortran->description(static_cast<int>(style));
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
libqt_string QsciLexerFortran_QBaseDescription(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Description_IsBase(true);
        QString _ret = vqscilexerfortran->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerfortran->description(static_cast<int>(style));
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
void QsciLexerFortran_OnDescription(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Description_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerFortran_Paper(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return new QColor(vqscilexerfortran->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerFortran_QBasePaper(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Paper_IsBase(true);
        return new QColor(vqscilexerfortran->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnPaper(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Paper_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerFortran_DefaultColorWithStyle(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return new QColor(vqscilexerfortran->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerFortran_QBaseDefaultColorWithStyle(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerfortran->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultColorWithStyle(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_DefaultEolFill(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerfortran->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseDefaultEolFill(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_DefaultEolFill_IsBase(true);
        return vqscilexerfortran->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerfortran->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultEolFill(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerFortran_DefaultFontWithStyle(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return new QFont(vqscilexerfortran->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerFortran_QBaseDefaultFontWithStyle(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerfortran->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultFontWithStyle(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerFortran_DefaultPaperWithStyle(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return new QColor(vqscilexerfortran->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerFortran_QBaseDefaultPaperWithStyle(const QsciLexerFortran* self, int style) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerfortran->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultPaperWithStyle(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_SetEditor(QsciLexerFortran* self, QsciScintilla* editor) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setEditor(editor);
    } else {
        vqscilexerfortran->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseSetEditor(QsciLexerFortran* self, QsciScintilla* editor) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_SetEditor_IsBase(true);
        vqscilexerfortran->setEditor(editor);
    } else {
        vqscilexerfortran->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetEditor(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_RefreshProperties(QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->refreshProperties();
    } else {
        vqscilexerfortran->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseRefreshProperties(QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_RefreshProperties_IsBase(true);
        vqscilexerfortran->refreshProperties();
    } else {
        vqscilexerfortran->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnRefreshProperties(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_StyleBitsNeeded(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->styleBitsNeeded();
    } else {
        return vqscilexerfortran->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseStyleBitsNeeded(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_StyleBitsNeeded_IsBase(true);
        return vqscilexerfortran->styleBitsNeeded();
    } else {
        return vqscilexerfortran->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnStyleBitsNeeded(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran_WordCharacters(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return (const char*)vqscilexerfortran->wordCharacters();
    } else {
        return (const char*)vqscilexerfortran->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerFortran_QBaseWordCharacters(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_WordCharacters_IsBase(true);
        return (const char*)vqscilexerfortran->wordCharacters();
    } else {
        return (const char*)vqscilexerfortran->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnWordCharacters(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_SetAutoIndentStyle(QsciLexerFortran* self, int autoindentstyle) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerfortran->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseSetAutoIndentStyle(QsciLexerFortran* self, int autoindentstyle) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_SetAutoIndentStyle_IsBase(true);
        vqscilexerfortran->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerfortran->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetAutoIndentStyle(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_SetColor(QsciLexerFortran* self, QColor* c, int style) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerfortran->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseSetColor(QsciLexerFortran* self, QColor* c, int style) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_SetColor_IsBase(true);
        vqscilexerfortran->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerfortran->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetColor(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_SetColor_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_SetEolFill(QsciLexerFortran* self, bool eoffill, int style) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerfortran->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseSetEolFill(QsciLexerFortran* self, bool eoffill, int style) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_SetEolFill_IsBase(true);
        vqscilexerfortran->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerfortran->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetEolFill(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_SetFont(QsciLexerFortran* self, QFont* f, int style) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerfortran->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseSetFont(QsciLexerFortran* self, QFont* f, int style) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_SetFont_IsBase(true);
        vqscilexerfortran->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerfortran->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetFont(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_SetFont_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_SetPaper(QsciLexerFortran* self, QColor* c, int style) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerfortran->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseSetPaper(QsciLexerFortran* self, QColor* c, int style) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_SetPaper_IsBase(true);
        vqscilexerfortran->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerfortran->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetPaper(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_ReadProperties(QsciLexerFortran* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        return vqscilexerfortran->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerfortran->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseReadProperties(QsciLexerFortran* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_ReadProperties_IsBase(true);
        return vqscilexerfortran->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerfortran->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnReadProperties(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_WriteProperties(const QsciLexerFortran* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerfortran->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseWriteProperties(const QsciLexerFortran* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_WriteProperties_IsBase(true);
        return vqscilexerfortran->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerfortran->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnWriteProperties(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_Event(QsciLexerFortran* self, QEvent* event) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        return vqscilexerfortran->event(event);
    } else {
        return vqscilexerfortran->event(event);
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseEvent(QsciLexerFortran* self, QEvent* event) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_Event_IsBase(true);
        return vqscilexerfortran->event(event);
    } else {
        return vqscilexerfortran->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnEvent(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_Event_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_EventFilter(QsciLexerFortran* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        return vqscilexerfortran->eventFilter(watched, event);
    } else {
        return vqscilexerfortran->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseEventFilter(QsciLexerFortran* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_EventFilter_IsBase(true);
        return vqscilexerfortran->eventFilter(watched, event);
    } else {
        return vqscilexerfortran->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnEventFilter(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_TimerEvent(QsciLexerFortran* self, QTimerEvent* event) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->timerEvent(event);
    } else {
        vqscilexerfortran->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseTimerEvent(QsciLexerFortran* self, QTimerEvent* event) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_TimerEvent_IsBase(true);
        vqscilexerfortran->timerEvent(event);
    } else {
        vqscilexerfortran->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnTimerEvent(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_ChildEvent(QsciLexerFortran* self, QChildEvent* event) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->childEvent(event);
    } else {
        vqscilexerfortran->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseChildEvent(QsciLexerFortran* self, QChildEvent* event) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_ChildEvent_IsBase(true);
        vqscilexerfortran->childEvent(event);
    } else {
        vqscilexerfortran->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnChildEvent(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_CustomEvent(QsciLexerFortran* self, QEvent* event) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->customEvent(event);
    } else {
        vqscilexerfortran->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseCustomEvent(QsciLexerFortran* self, QEvent* event) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_CustomEvent_IsBase(true);
        vqscilexerfortran->customEvent(event);
    } else {
        vqscilexerfortran->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnCustomEvent(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_ConnectNotify(QsciLexerFortran* self, QMetaMethod* signal) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->connectNotify(*signal);
    } else {
        vqscilexerfortran->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseConnectNotify(QsciLexerFortran* self, QMetaMethod* signal) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_ConnectNotify_IsBase(true);
        vqscilexerfortran->connectNotify(*signal);
    } else {
        vqscilexerfortran->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnConnectNotify(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran_DisconnectNotify(QsciLexerFortran* self, QMetaMethod* signal) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->disconnectNotify(*signal);
    } else {
        vqscilexerfortran->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerFortran_QBaseDisconnectNotify(QsciLexerFortran* self, QMetaMethod* signal) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_DisconnectNotify_IsBase(true);
        vqscilexerfortran->disconnectNotify(*signal);
    } else {
        vqscilexerfortran->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDisconnectNotify(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->setQsciLexerFortran_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerFortran_Sender(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->sender();
    } else {
        return vqscilexerfortran->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerFortran_QBaseSender(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Sender_IsBase(true);
        return vqscilexerfortran->sender();
    } else {
        return vqscilexerfortran->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSender(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Sender_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_SenderSignalIndex(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->senderSignalIndex();
    } else {
        return vqscilexerfortran->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseSenderSignalIndex(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_SenderSignalIndex_IsBase(true);
        return vqscilexerfortran->senderSignalIndex();
    } else {
        return vqscilexerfortran->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSenderSignalIndex(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran_Receivers(const QsciLexerFortran* self, const char* signal) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->receivers(signal);
    } else {
        return vqscilexerfortran->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerFortran_QBaseReceivers(const QsciLexerFortran* self, const char* signal) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Receivers_IsBase(true);
        return vqscilexerfortran->receivers(signal);
    } else {
        return vqscilexerfortran->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnReceivers(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_Receivers_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran_IsSignalConnected(const QsciLexerFortran* self, QMetaMethod* signal) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->isSignalConnected(*signal);
    } else {
        return vqscilexerfortran->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerFortran_QBaseIsSignalConnected(const QsciLexerFortran* self, QMetaMethod* signal) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_IsSignalConnected_IsBase(true);
        return vqscilexerfortran->isSignalConnected(*signal);
    } else {
        return vqscilexerfortran->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnIsSignalConnected(const QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        vqscilexerfortran->setQsciLexerFortran_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerFortran_Delete(QsciLexerFortran* self) {
    delete self;
}
