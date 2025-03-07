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
#include <qscilexerdiff.h>
#include "libqscilexerdiff.hpp"
#include "libqscilexerdiff.hxx"

QsciLexerDiff* QsciLexerDiff_new() {
    return new VirtualQsciLexerDiff();
}

QsciLexerDiff* QsciLexerDiff_new2(QObject* parent) {
    return new VirtualQsciLexerDiff(parent);
}

QMetaObject* QsciLexerDiff_MetaObject(const QsciLexerDiff* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerDiff_Metacast(QsciLexerDiff* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerDiff_Metacall(QsciLexerDiff* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerDiff_OnMetacall(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_Metacall_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerDiff_QBaseMetacall(QsciLexerDiff* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_Metacall_IsBase(true);
        return vqscilexerdiff->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerDiff_Tr(const char* s) {
    QString _ret = QsciLexerDiff::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerDiff_DefaultColor(const QsciLexerDiff* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

libqt_string QsciLexerDiff_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerDiff::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerDiff_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerDiff::tr(s, c, static_cast<int>(n));
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
const char* QsciLexerDiff_Language(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return (const char*)vqscilexerdiff->language();
    } else {
        return (const char*)vqscilexerdiff->language();
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseLanguage(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Language_IsBase(true);
        return (const char*)vqscilexerdiff->language();
    } else {
        return (const char*)vqscilexerdiff->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnLanguage(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Language_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerDiff_Lexer(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return (const char*)vqscilexerdiff->lexer();
    } else {
        return (const char*)vqscilexerdiff->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseLexer(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Lexer_IsBase(true);
        return (const char*)vqscilexerdiff->lexer();
    } else {
        return (const char*)vqscilexerdiff->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnLexer(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Lexer_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_LexerId(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->lexerId();
    } else {
        return vqscilexerdiff->lexerId();
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseLexerId(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_LexerId_IsBase(true);
        return vqscilexerdiff->lexerId();
    } else {
        return vqscilexerdiff->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnLexerId(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_LexerId_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerDiff_AutoCompletionFillups(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return (const char*)vqscilexerdiff->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerdiff->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseAutoCompletionFillups(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerdiff->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerdiff->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnAutoCompletionFillups(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerDiff_AutoCompletionWordSeparators(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        QStringList _ret = vqscilexerdiff->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerdiff->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerDiff_QBaseAutoCompletionWordSeparators(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerdiff->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerdiff->autoCompletionWordSeparators();
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
void QsciLexerDiff_OnAutoCompletionWordSeparators(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerDiff_BlockEnd(const QsciLexerDiff* self, int* style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return (const char*)vqscilexerdiff->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerdiff->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseBlockEnd(const QsciLexerDiff* self, int* style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_BlockEnd_IsBase(true);
        return (const char*)vqscilexerdiff->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerdiff->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBlockEnd(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_BlockLookback(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->blockLookback();
    } else {
        return vqscilexerdiff->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseBlockLookback(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_BlockLookback_IsBase(true);
        return vqscilexerdiff->blockLookback();
    } else {
        return vqscilexerdiff->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBlockLookback(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerDiff_BlockStart(const QsciLexerDiff* self, int* style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return (const char*)vqscilexerdiff->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerdiff->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseBlockStart(const QsciLexerDiff* self, int* style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_BlockStart_IsBase(true);
        return (const char*)vqscilexerdiff->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerdiff->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBlockStart(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerDiff_BlockStartKeyword(const QsciLexerDiff* self, int* style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return (const char*)vqscilexerdiff->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerdiff->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseBlockStartKeyword(const QsciLexerDiff* self, int* style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerdiff->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerdiff->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBlockStartKeyword(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_BraceStyle(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->braceStyle();
    } else {
        return vqscilexerdiff->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseBraceStyle(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_BraceStyle_IsBase(true);
        return vqscilexerdiff->braceStyle();
    } else {
        return vqscilexerdiff->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBraceStyle(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_CaseSensitive(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->caseSensitive();
    } else {
        return vqscilexerdiff->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseCaseSensitive(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_CaseSensitive_IsBase(true);
        return vqscilexerdiff->caseSensitive();
    } else {
        return vqscilexerdiff->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnCaseSensitive(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerDiff_Color(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return new QColor(vqscilexerdiff->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerDiff_QBaseColor(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Color_IsBase(true);
        return new QColor(vqscilexerdiff->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnColor(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Color_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_EolFill(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerdiff->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseEolFill(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_EolFill_IsBase(true);
        return vqscilexerdiff->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerdiff->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnEolFill(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_EolFill_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerDiff_Font(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return new QFont(vqscilexerdiff->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerDiff_QBaseFont(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Font_IsBase(true);
        return new QFont(vqscilexerdiff->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnFont(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Font_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_IndentationGuideView(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->indentationGuideView();
    } else {
        return vqscilexerdiff->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseIndentationGuideView(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_IndentationGuideView_IsBase(true);
        return vqscilexerdiff->indentationGuideView();
    } else {
        return vqscilexerdiff->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnIndentationGuideView(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerDiff_Keywords(const QsciLexerDiff* self, int set) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return (const char*)vqscilexerdiff->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerdiff->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseKeywords(const QsciLexerDiff* self, int set) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Keywords_IsBase(true);
        return (const char*)vqscilexerdiff->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerdiff->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnKeywords(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Keywords_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_DefaultStyle(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->defaultStyle();
    } else {
        return vqscilexerdiff->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseDefaultStyle(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_DefaultStyle_IsBase(true);
        return vqscilexerdiff->defaultStyle();
    } else {
        return vqscilexerdiff->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultStyle(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerDiff_Description(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        QString _ret = vqscilexerdiff->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerdiff->description(static_cast<int>(style));
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
libqt_string QsciLexerDiff_QBaseDescription(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Description_IsBase(true);
        QString _ret = vqscilexerdiff->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerdiff->description(static_cast<int>(style));
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
void QsciLexerDiff_OnDescription(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Description_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerDiff_Paper(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return new QColor(vqscilexerdiff->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerDiff_QBasePaper(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Paper_IsBase(true);
        return new QColor(vqscilexerdiff->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnPaper(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Paper_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerDiff_DefaultColorWithStyle(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return new QColor(vqscilexerdiff->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerDiff_QBaseDefaultColorWithStyle(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerdiff->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultColorWithStyle(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_DefaultEolFill(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerdiff->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseDefaultEolFill(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_DefaultEolFill_IsBase(true);
        return vqscilexerdiff->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerdiff->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultEolFill(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerDiff_DefaultFontWithStyle(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return new QFont(vqscilexerdiff->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerDiff_QBaseDefaultFontWithStyle(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerdiff->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultFontWithStyle(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerDiff_DefaultPaperWithStyle(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return new QColor(vqscilexerdiff->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerDiff_QBaseDefaultPaperWithStyle(const QsciLexerDiff* self, int style) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerdiff->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultPaperWithStyle(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_SetEditor(QsciLexerDiff* self, QsciScintilla* editor) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setEditor(editor);
    } else {
        vqscilexerdiff->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseSetEditor(QsciLexerDiff* self, QsciScintilla* editor) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_SetEditor_IsBase(true);
        vqscilexerdiff->setEditor(editor);
    } else {
        vqscilexerdiff->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetEditor(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_RefreshProperties(QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->refreshProperties();
    } else {
        vqscilexerdiff->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseRefreshProperties(QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_RefreshProperties_IsBase(true);
        vqscilexerdiff->refreshProperties();
    } else {
        vqscilexerdiff->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnRefreshProperties(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_StyleBitsNeeded(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->styleBitsNeeded();
    } else {
        return vqscilexerdiff->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseStyleBitsNeeded(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_StyleBitsNeeded_IsBase(true);
        return vqscilexerdiff->styleBitsNeeded();
    } else {
        return vqscilexerdiff->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnStyleBitsNeeded(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerDiff_WordCharacters(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return (const char*)vqscilexerdiff->wordCharacters();
    } else {
        return (const char*)vqscilexerdiff->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerDiff_QBaseWordCharacters(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_WordCharacters_IsBase(true);
        return (const char*)vqscilexerdiff->wordCharacters();
    } else {
        return (const char*)vqscilexerdiff->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnWordCharacters(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_SetAutoIndentStyle(QsciLexerDiff* self, int autoindentstyle) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerdiff->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseSetAutoIndentStyle(QsciLexerDiff* self, int autoindentstyle) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_SetAutoIndentStyle_IsBase(true);
        vqscilexerdiff->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerdiff->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetAutoIndentStyle(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_SetColor(QsciLexerDiff* self, QColor* c, int style) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerdiff->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseSetColor(QsciLexerDiff* self, QColor* c, int style) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_SetColor_IsBase(true);
        vqscilexerdiff->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerdiff->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetColor(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_SetColor_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_SetEolFill(QsciLexerDiff* self, bool eoffill, int style) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerdiff->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseSetEolFill(QsciLexerDiff* self, bool eoffill, int style) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_SetEolFill_IsBase(true);
        vqscilexerdiff->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerdiff->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetEolFill(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_SetFont(QsciLexerDiff* self, QFont* f, int style) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerdiff->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseSetFont(QsciLexerDiff* self, QFont* f, int style) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_SetFont_IsBase(true);
        vqscilexerdiff->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerdiff->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetFont(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_SetFont_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_SetPaper(QsciLexerDiff* self, QColor* c, int style) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerdiff->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseSetPaper(QsciLexerDiff* self, QColor* c, int style) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_SetPaper_IsBase(true);
        vqscilexerdiff->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerdiff->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetPaper(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_ReadProperties(QsciLexerDiff* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        return vqscilexerdiff->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerdiff->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseReadProperties(QsciLexerDiff* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_ReadProperties_IsBase(true);
        return vqscilexerdiff->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerdiff->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnReadProperties(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_WriteProperties(const QsciLexerDiff* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerdiff->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseWriteProperties(const QsciLexerDiff* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_WriteProperties_IsBase(true);
        return vqscilexerdiff->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerdiff->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnWriteProperties(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_Event(QsciLexerDiff* self, QEvent* event) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        return vqscilexerdiff->event(event);
    } else {
        return vqscilexerdiff->event(event);
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseEvent(QsciLexerDiff* self, QEvent* event) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_Event_IsBase(true);
        return vqscilexerdiff->event(event);
    } else {
        return vqscilexerdiff->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnEvent(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_Event_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_EventFilter(QsciLexerDiff* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        return vqscilexerdiff->eventFilter(watched, event);
    } else {
        return vqscilexerdiff->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseEventFilter(QsciLexerDiff* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_EventFilter_IsBase(true);
        return vqscilexerdiff->eventFilter(watched, event);
    } else {
        return vqscilexerdiff->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnEventFilter(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_TimerEvent(QsciLexerDiff* self, QTimerEvent* event) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->timerEvent(event);
    } else {
        vqscilexerdiff->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseTimerEvent(QsciLexerDiff* self, QTimerEvent* event) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_TimerEvent_IsBase(true);
        vqscilexerdiff->timerEvent(event);
    } else {
        vqscilexerdiff->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnTimerEvent(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_ChildEvent(QsciLexerDiff* self, QChildEvent* event) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->childEvent(event);
    } else {
        vqscilexerdiff->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseChildEvent(QsciLexerDiff* self, QChildEvent* event) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_ChildEvent_IsBase(true);
        vqscilexerdiff->childEvent(event);
    } else {
        vqscilexerdiff->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnChildEvent(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_CustomEvent(QsciLexerDiff* self, QEvent* event) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->customEvent(event);
    } else {
        vqscilexerdiff->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseCustomEvent(QsciLexerDiff* self, QEvent* event) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_CustomEvent_IsBase(true);
        vqscilexerdiff->customEvent(event);
    } else {
        vqscilexerdiff->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnCustomEvent(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_ConnectNotify(QsciLexerDiff* self, QMetaMethod* signal) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->connectNotify(*signal);
    } else {
        vqscilexerdiff->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseConnectNotify(QsciLexerDiff* self, QMetaMethod* signal) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_ConnectNotify_IsBase(true);
        vqscilexerdiff->connectNotify(*signal);
    } else {
        vqscilexerdiff->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnConnectNotify(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerDiff_DisconnectNotify(QsciLexerDiff* self, QMetaMethod* signal) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->disconnectNotify(*signal);
    } else {
        vqscilexerdiff->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerDiff_QBaseDisconnectNotify(QsciLexerDiff* self, QMetaMethod* signal) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_DisconnectNotify_IsBase(true);
        vqscilexerdiff->disconnectNotify(*signal);
    } else {
        vqscilexerdiff->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDisconnectNotify(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->setQsciLexerDiff_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerDiff_Sender(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->sender();
    } else {
        return vqscilexerdiff->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerDiff_QBaseSender(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Sender_IsBase(true);
        return vqscilexerdiff->sender();
    } else {
        return vqscilexerdiff->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSender(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Sender_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_SenderSignalIndex(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->senderSignalIndex();
    } else {
        return vqscilexerdiff->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseSenderSignalIndex(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_SenderSignalIndex_IsBase(true);
        return vqscilexerdiff->senderSignalIndex();
    } else {
        return vqscilexerdiff->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSenderSignalIndex(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerDiff_Receivers(const QsciLexerDiff* self, const char* signal) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->receivers(signal);
    } else {
        return vqscilexerdiff->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerDiff_QBaseReceivers(const QsciLexerDiff* self, const char* signal) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Receivers_IsBase(true);
        return vqscilexerdiff->receivers(signal);
    } else {
        return vqscilexerdiff->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnReceivers(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_Receivers_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerDiff_IsSignalConnected(const QsciLexerDiff* self, QMetaMethod* signal) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->isSignalConnected(*signal);
    } else {
        return vqscilexerdiff->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerDiff_QBaseIsSignalConnected(const QsciLexerDiff* self, QMetaMethod* signal) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_IsSignalConnected_IsBase(true);
        return vqscilexerdiff->isSignalConnected(*signal);
    } else {
        return vqscilexerdiff->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnIsSignalConnected(const QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        vqscilexerdiff->setQsciLexerDiff_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerDiff_Delete(QsciLexerDiff* self) {
    delete self;
}
