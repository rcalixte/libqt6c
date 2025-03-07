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
#include <qscilexeredifact.h>
#include "libqscilexeredifact.hpp"
#include "libqscilexeredifact.hxx"

QsciLexerEDIFACT* QsciLexerEDIFACT_new() {
    return new VirtualQsciLexerEDIFACT();
}

QsciLexerEDIFACT* QsciLexerEDIFACT_new2(QObject* parent) {
    return new VirtualQsciLexerEDIFACT(parent);
}

QMetaObject* QsciLexerEDIFACT_MetaObject(const QsciLexerEDIFACT* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerEDIFACT_Metacast(QsciLexerEDIFACT* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerEDIFACT_Metacall(QsciLexerEDIFACT* self, int param1, int param2, void** param3) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerEDIFACT_OnMetacall(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_Metacall_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerEDIFACT_QBaseMetacall(QsciLexerEDIFACT* self, int param1, int param2, void** param3) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_Metacall_IsBase(true);
        return vqscilexeredifact->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerEDIFACT_Tr(const char* s) {
    QString _ret = QsciLexerEDIFACT::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerEDIFACT_DefaultColor(const QsciLexerEDIFACT* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

libqt_string QsciLexerEDIFACT_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerEDIFACT::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerEDIFACT_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerEDIFACT::tr(s, c, static_cast<int>(n));
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
const char* QsciLexerEDIFACT_Language(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return (const char*)vqscilexeredifact->language();
    } else {
        return (const char*)vqscilexeredifact->language();
    }
}

// Base class handler implementation
const char* QsciLexerEDIFACT_QBaseLanguage(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Language_IsBase(true);
        return (const char*)vqscilexeredifact->language();
    } else {
        return (const char*)vqscilexeredifact->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnLanguage(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Language_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerEDIFACT_Lexer(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return (const char*)vqscilexeredifact->lexer();
    } else {
        return (const char*)vqscilexeredifact->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerEDIFACT_QBaseLexer(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Lexer_IsBase(true);
        return (const char*)vqscilexeredifact->lexer();
    } else {
        return (const char*)vqscilexeredifact->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnLexer(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Lexer_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerEDIFACT_LexerId(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->lexerId();
    } else {
        return vqscilexeredifact->lexerId();
    }
}

// Base class handler implementation
int QsciLexerEDIFACT_QBaseLexerId(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_LexerId_IsBase(true);
        return vqscilexeredifact->lexerId();
    } else {
        return vqscilexeredifact->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnLexerId(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_LexerId_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerEDIFACT_AutoCompletionFillups(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return (const char*)vqscilexeredifact->autoCompletionFillups();
    } else {
        return (const char*)vqscilexeredifact->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerEDIFACT_QBaseAutoCompletionFillups(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexeredifact->autoCompletionFillups();
    } else {
        return (const char*)vqscilexeredifact->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnAutoCompletionFillups(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerEDIFACT_AutoCompletionWordSeparators(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        QStringList _ret = vqscilexeredifact->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexeredifact->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerEDIFACT_QBaseAutoCompletionWordSeparators(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexeredifact->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexeredifact->autoCompletionWordSeparators();
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
void QsciLexerEDIFACT_OnAutoCompletionWordSeparators(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerEDIFACT_BlockEnd(const QsciLexerEDIFACT* self, int* style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return (const char*)vqscilexeredifact->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexeredifact->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerEDIFACT_QBaseBlockEnd(const QsciLexerEDIFACT* self, int* style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_BlockEnd_IsBase(true);
        return (const char*)vqscilexeredifact->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexeredifact->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnBlockEnd(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerEDIFACT_BlockLookback(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->blockLookback();
    } else {
        return vqscilexeredifact->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerEDIFACT_QBaseBlockLookback(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_BlockLookback_IsBase(true);
        return vqscilexeredifact->blockLookback();
    } else {
        return vqscilexeredifact->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnBlockLookback(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerEDIFACT_BlockStart(const QsciLexerEDIFACT* self, int* style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return (const char*)vqscilexeredifact->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexeredifact->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerEDIFACT_QBaseBlockStart(const QsciLexerEDIFACT* self, int* style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_BlockStart_IsBase(true);
        return (const char*)vqscilexeredifact->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexeredifact->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnBlockStart(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerEDIFACT_BlockStartKeyword(const QsciLexerEDIFACT* self, int* style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return (const char*)vqscilexeredifact->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexeredifact->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerEDIFACT_QBaseBlockStartKeyword(const QsciLexerEDIFACT* self, int* style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexeredifact->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexeredifact->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnBlockStartKeyword(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerEDIFACT_BraceStyle(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->braceStyle();
    } else {
        return vqscilexeredifact->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerEDIFACT_QBaseBraceStyle(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_BraceStyle_IsBase(true);
        return vqscilexeredifact->braceStyle();
    } else {
        return vqscilexeredifact->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnBraceStyle(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerEDIFACT_CaseSensitive(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->caseSensitive();
    } else {
        return vqscilexeredifact->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerEDIFACT_QBaseCaseSensitive(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_CaseSensitive_IsBase(true);
        return vqscilexeredifact->caseSensitive();
    } else {
        return vqscilexeredifact->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnCaseSensitive(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerEDIFACT_Color(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return new QColor(vqscilexeredifact->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerEDIFACT_QBaseColor(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Color_IsBase(true);
        return new QColor(vqscilexeredifact->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnColor(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Color_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerEDIFACT_EolFill(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->eolFill(static_cast<int>(style));
    } else {
        return vqscilexeredifact->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerEDIFACT_QBaseEolFill(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_EolFill_IsBase(true);
        return vqscilexeredifact->eolFill(static_cast<int>(style));
    } else {
        return vqscilexeredifact->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnEolFill(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_EolFill_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerEDIFACT_Font(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return new QFont(vqscilexeredifact->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerEDIFACT_QBaseFont(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Font_IsBase(true);
        return new QFont(vqscilexeredifact->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnFont(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Font_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerEDIFACT_IndentationGuideView(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->indentationGuideView();
    } else {
        return vqscilexeredifact->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerEDIFACT_QBaseIndentationGuideView(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_IndentationGuideView_IsBase(true);
        return vqscilexeredifact->indentationGuideView();
    } else {
        return vqscilexeredifact->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnIndentationGuideView(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerEDIFACT_Keywords(const QsciLexerEDIFACT* self, int set) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return (const char*)vqscilexeredifact->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexeredifact->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerEDIFACT_QBaseKeywords(const QsciLexerEDIFACT* self, int set) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Keywords_IsBase(true);
        return (const char*)vqscilexeredifact->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexeredifact->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnKeywords(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Keywords_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerEDIFACT_DefaultStyle(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->defaultStyle();
    } else {
        return vqscilexeredifact->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerEDIFACT_QBaseDefaultStyle(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_DefaultStyle_IsBase(true);
        return vqscilexeredifact->defaultStyle();
    } else {
        return vqscilexeredifact->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnDefaultStyle(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerEDIFACT_Description(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        QString _ret = vqscilexeredifact->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexeredifact->description(static_cast<int>(style));
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
libqt_string QsciLexerEDIFACT_QBaseDescription(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Description_IsBase(true);
        QString _ret = vqscilexeredifact->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexeredifact->description(static_cast<int>(style));
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
void QsciLexerEDIFACT_OnDescription(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Description_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerEDIFACT_Paper(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return new QColor(vqscilexeredifact->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerEDIFACT_QBasePaper(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Paper_IsBase(true);
        return new QColor(vqscilexeredifact->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnPaper(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Paper_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerEDIFACT_DefaultColorWithStyle(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return new QColor(vqscilexeredifact->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerEDIFACT_QBaseDefaultColorWithStyle(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexeredifact->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnDefaultColorWithStyle(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerEDIFACT_DefaultEolFill(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexeredifact->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerEDIFACT_QBaseDefaultEolFill(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_DefaultEolFill_IsBase(true);
        return vqscilexeredifact->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexeredifact->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnDefaultEolFill(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerEDIFACT_DefaultFontWithStyle(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return new QFont(vqscilexeredifact->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerEDIFACT_QBaseDefaultFontWithStyle(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexeredifact->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnDefaultFontWithStyle(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerEDIFACT_DefaultPaperWithStyle(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return new QColor(vqscilexeredifact->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerEDIFACT_QBaseDefaultPaperWithStyle(const QsciLexerEDIFACT* self, int style) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexeredifact->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnDefaultPaperWithStyle(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerEDIFACT_SetEditor(QsciLexerEDIFACT* self, QsciScintilla* editor) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setEditor(editor);
    } else {
        vqscilexeredifact->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_QBaseSetEditor(QsciLexerEDIFACT* self, QsciScintilla* editor) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_SetEditor_IsBase(true);
        vqscilexeredifact->setEditor(editor);
    } else {
        vqscilexeredifact->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnSetEditor(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerEDIFACT_RefreshProperties(QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->refreshProperties();
    } else {
        vqscilexeredifact->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_QBaseRefreshProperties(QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_RefreshProperties_IsBase(true);
        vqscilexeredifact->refreshProperties();
    } else {
        vqscilexeredifact->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnRefreshProperties(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerEDIFACT_StyleBitsNeeded(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->styleBitsNeeded();
    } else {
        return vqscilexeredifact->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerEDIFACT_QBaseStyleBitsNeeded(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_StyleBitsNeeded_IsBase(true);
        return vqscilexeredifact->styleBitsNeeded();
    } else {
        return vqscilexeredifact->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnStyleBitsNeeded(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerEDIFACT_WordCharacters(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return (const char*)vqscilexeredifact->wordCharacters();
    } else {
        return (const char*)vqscilexeredifact->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerEDIFACT_QBaseWordCharacters(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_WordCharacters_IsBase(true);
        return (const char*)vqscilexeredifact->wordCharacters();
    } else {
        return (const char*)vqscilexeredifact->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnWordCharacters(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerEDIFACT_SetAutoIndentStyle(QsciLexerEDIFACT* self, int autoindentstyle) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexeredifact->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_QBaseSetAutoIndentStyle(QsciLexerEDIFACT* self, int autoindentstyle) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_SetAutoIndentStyle_IsBase(true);
        vqscilexeredifact->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexeredifact->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnSetAutoIndentStyle(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerEDIFACT_SetColor(QsciLexerEDIFACT* self, QColor* c, int style) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexeredifact->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_QBaseSetColor(QsciLexerEDIFACT* self, QColor* c, int style) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_SetColor_IsBase(true);
        vqscilexeredifact->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexeredifact->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnSetColor(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_SetColor_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerEDIFACT_SetEolFill(QsciLexerEDIFACT* self, bool eoffill, int style) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexeredifact->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_QBaseSetEolFill(QsciLexerEDIFACT* self, bool eoffill, int style) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_SetEolFill_IsBase(true);
        vqscilexeredifact->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexeredifact->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnSetEolFill(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerEDIFACT_SetFont(QsciLexerEDIFACT* self, QFont* f, int style) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexeredifact->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_QBaseSetFont(QsciLexerEDIFACT* self, QFont* f, int style) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_SetFont_IsBase(true);
        vqscilexeredifact->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexeredifact->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnSetFont(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_SetFont_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerEDIFACT_SetPaper(QsciLexerEDIFACT* self, QColor* c, int style) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexeredifact->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_QBaseSetPaper(QsciLexerEDIFACT* self, QColor* c, int style) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_SetPaper_IsBase(true);
        vqscilexeredifact->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexeredifact->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnSetPaper(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerEDIFACT_ReadProperties(QsciLexerEDIFACT* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        return vqscilexeredifact->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexeredifact->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerEDIFACT_QBaseReadProperties(QsciLexerEDIFACT* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_ReadProperties_IsBase(true);
        return vqscilexeredifact->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexeredifact->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnReadProperties(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerEDIFACT_WriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexeredifact->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerEDIFACT_QBaseWriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_WriteProperties_IsBase(true);
        return vqscilexeredifact->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexeredifact->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnWriteProperties(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerEDIFACT_Event(QsciLexerEDIFACT* self, QEvent* event) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        return vqscilexeredifact->event(event);
    } else {
        return vqscilexeredifact->event(event);
    }
}

// Base class handler implementation
bool QsciLexerEDIFACT_QBaseEvent(QsciLexerEDIFACT* self, QEvent* event) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_Event_IsBase(true);
        return vqscilexeredifact->event(event);
    } else {
        return vqscilexeredifact->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnEvent(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_Event_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerEDIFACT_EventFilter(QsciLexerEDIFACT* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        return vqscilexeredifact->eventFilter(watched, event);
    } else {
        return vqscilexeredifact->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerEDIFACT_QBaseEventFilter(QsciLexerEDIFACT* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_EventFilter_IsBase(true);
        return vqscilexeredifact->eventFilter(watched, event);
    } else {
        return vqscilexeredifact->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnEventFilter(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerEDIFACT_TimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->timerEvent(event);
    } else {
        vqscilexeredifact->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_QBaseTimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_TimerEvent_IsBase(true);
        vqscilexeredifact->timerEvent(event);
    } else {
        vqscilexeredifact->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnTimerEvent(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerEDIFACT_ChildEvent(QsciLexerEDIFACT* self, QChildEvent* event) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->childEvent(event);
    } else {
        vqscilexeredifact->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_QBaseChildEvent(QsciLexerEDIFACT* self, QChildEvent* event) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_ChildEvent_IsBase(true);
        vqscilexeredifact->childEvent(event);
    } else {
        vqscilexeredifact->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnChildEvent(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerEDIFACT_CustomEvent(QsciLexerEDIFACT* self, QEvent* event) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->customEvent(event);
    } else {
        vqscilexeredifact->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_QBaseCustomEvent(QsciLexerEDIFACT* self, QEvent* event) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_CustomEvent_IsBase(true);
        vqscilexeredifact->customEvent(event);
    } else {
        vqscilexeredifact->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnCustomEvent(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerEDIFACT_ConnectNotify(QsciLexerEDIFACT* self, QMetaMethod* signal) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->connectNotify(*signal);
    } else {
        vqscilexeredifact->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_QBaseConnectNotify(QsciLexerEDIFACT* self, QMetaMethod* signal) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_ConnectNotify_IsBase(true);
        vqscilexeredifact->connectNotify(*signal);
    } else {
        vqscilexeredifact->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnConnectNotify(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerEDIFACT_DisconnectNotify(QsciLexerEDIFACT* self, QMetaMethod* signal) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->disconnectNotify(*signal);
    } else {
        vqscilexeredifact->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_QBaseDisconnectNotify(QsciLexerEDIFACT* self, QMetaMethod* signal) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_DisconnectNotify_IsBase(true);
        vqscilexeredifact->disconnectNotify(*signal);
    } else {
        vqscilexeredifact->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnDisconnectNotify(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->setQsciLexerEDIFACT_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerEDIFACT_Sender(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->sender();
    } else {
        return vqscilexeredifact->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerEDIFACT_QBaseSender(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Sender_IsBase(true);
        return vqscilexeredifact->sender();
    } else {
        return vqscilexeredifact->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnSender(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Sender_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerEDIFACT_SenderSignalIndex(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->senderSignalIndex();
    } else {
        return vqscilexeredifact->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerEDIFACT_QBaseSenderSignalIndex(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_SenderSignalIndex_IsBase(true);
        return vqscilexeredifact->senderSignalIndex();
    } else {
        return vqscilexeredifact->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnSenderSignalIndex(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerEDIFACT_Receivers(const QsciLexerEDIFACT* self, const char* signal) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->receivers(signal);
    } else {
        return vqscilexeredifact->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerEDIFACT_QBaseReceivers(const QsciLexerEDIFACT* self, const char* signal) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Receivers_IsBase(true);
        return vqscilexeredifact->receivers(signal);
    } else {
        return vqscilexeredifact->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnReceivers(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_Receivers_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerEDIFACT_IsSignalConnected(const QsciLexerEDIFACT* self, QMetaMethod* signal) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->isSignalConnected(*signal);
    } else {
        return vqscilexeredifact->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerEDIFACT_QBaseIsSignalConnected(const QsciLexerEDIFACT* self, QMetaMethod* signal) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_IsSignalConnected_IsBase(true);
        return vqscilexeredifact->isSignalConnected(*signal);
    } else {
        return vqscilexeredifact->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnIsSignalConnected(const QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        vqscilexeredifact->setQsciLexerEDIFACT_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerEDIFACT_Delete(QsciLexerEDIFACT* self) {
    delete self;
}
