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
#include <qscilexercmake.h>
#include "libqscilexercmake.hpp"
#include "libqscilexercmake.hxx"

QsciLexerCMake* QsciLexerCMake_new() {
    return new VirtualQsciLexerCMake();
}

QsciLexerCMake* QsciLexerCMake_new2(QObject* parent) {
    return new VirtualQsciLexerCMake(parent);
}

QMetaObject* QsciLexerCMake_MetaObject(const QsciLexerCMake* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCMake_Metacast(QsciLexerCMake* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCMake_Metacall(QsciLexerCMake* self, int param1, int param2, void** param3) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerCMake_OnMetacall(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_Metacall_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerCMake_QBaseMetacall(QsciLexerCMake* self, int param1, int param2, void** param3) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_Metacall_IsBase(true);
        return vqscilexercmake->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerCMake_Tr(const char* s) {
    QString _ret = QsciLexerCMake::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerCMake_DefaultColor(const QsciLexerCMake* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerCMake_DefaultFont(const QsciLexerCMake* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCMake_DefaultPaper(const QsciLexerCMake* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerCMake_FoldAtElse(const QsciLexerCMake* self) {
    return self->foldAtElse();
}

libqt_string QsciLexerCMake_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerCMake::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCMake_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerCMake::tr(s, c, static_cast<int>(n));
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
void QsciLexerCMake_SetFoldAtElse(QsciLexerCMake* self, bool fold) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setFoldAtElse(fold);
    } else {
        vqscilexercmake->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseSetFoldAtElse(QsciLexerCMake* self, bool fold) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_SetFoldAtElse_IsBase(true);
        vqscilexercmake->setFoldAtElse(fold);
    } else {
        vqscilexercmake->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetFoldAtElse(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_Language(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return (const char*)vqscilexercmake->language();
    } else {
        return (const char*)vqscilexercmake->language();
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseLanguage(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Language_IsBase(true);
        return (const char*)vqscilexercmake->language();
    } else {
        return (const char*)vqscilexercmake->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnLanguage(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Language_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_Lexer(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return (const char*)vqscilexercmake->lexer();
    } else {
        return (const char*)vqscilexercmake->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseLexer(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Lexer_IsBase(true);
        return (const char*)vqscilexercmake->lexer();
    } else {
        return (const char*)vqscilexercmake->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnLexer(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Lexer_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_LexerId(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->lexerId();
    } else {
        return vqscilexercmake->lexerId();
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseLexerId(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_LexerId_IsBase(true);
        return vqscilexercmake->lexerId();
    } else {
        return vqscilexercmake->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnLexerId(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_LexerId_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_AutoCompletionFillups(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return (const char*)vqscilexercmake->autoCompletionFillups();
    } else {
        return (const char*)vqscilexercmake->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseAutoCompletionFillups(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexercmake->autoCompletionFillups();
    } else {
        return (const char*)vqscilexercmake->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnAutoCompletionFillups(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerCMake_AutoCompletionWordSeparators(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        QStringList _ret = vqscilexercmake->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexercmake->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerCMake_QBaseAutoCompletionWordSeparators(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexercmake->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexercmake->autoCompletionWordSeparators();
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
void QsciLexerCMake_OnAutoCompletionWordSeparators(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_BlockEnd(const QsciLexerCMake* self, int* style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return (const char*)vqscilexercmake->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercmake->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseBlockEnd(const QsciLexerCMake* self, int* style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_BlockEnd_IsBase(true);
        return (const char*)vqscilexercmake->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercmake->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBlockEnd(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_BlockLookback(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->blockLookback();
    } else {
        return vqscilexercmake->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseBlockLookback(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_BlockLookback_IsBase(true);
        return vqscilexercmake->blockLookback();
    } else {
        return vqscilexercmake->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBlockLookback(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_BlockStart(const QsciLexerCMake* self, int* style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return (const char*)vqscilexercmake->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercmake->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseBlockStart(const QsciLexerCMake* self, int* style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_BlockStart_IsBase(true);
        return (const char*)vqscilexercmake->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercmake->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBlockStart(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_BlockStartKeyword(const QsciLexerCMake* self, int* style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return (const char*)vqscilexercmake->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercmake->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseBlockStartKeyword(const QsciLexerCMake* self, int* style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexercmake->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercmake->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBlockStartKeyword(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_BraceStyle(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->braceStyle();
    } else {
        return vqscilexercmake->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseBraceStyle(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_BraceStyle_IsBase(true);
        return vqscilexercmake->braceStyle();
    } else {
        return vqscilexercmake->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBraceStyle(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_CaseSensitive(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->caseSensitive();
    } else {
        return vqscilexercmake->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseCaseSensitive(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_CaseSensitive_IsBase(true);
        return vqscilexercmake->caseSensitive();
    } else {
        return vqscilexercmake->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnCaseSensitive(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCMake_Color(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return new QColor(vqscilexercmake->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCMake_QBaseColor(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Color_IsBase(true);
        return new QColor(vqscilexercmake->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnColor(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Color_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_EolFill(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->eolFill(static_cast<int>(style));
    } else {
        return vqscilexercmake->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseEolFill(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_EolFill_IsBase(true);
        return vqscilexercmake->eolFill(static_cast<int>(style));
    } else {
        return vqscilexercmake->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnEolFill(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_EolFill_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCMake_Font(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return new QFont(vqscilexercmake->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCMake_QBaseFont(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Font_IsBase(true);
        return new QFont(vqscilexercmake->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnFont(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Font_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_IndentationGuideView(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->indentationGuideView();
    } else {
        return vqscilexercmake->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseIndentationGuideView(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_IndentationGuideView_IsBase(true);
        return vqscilexercmake->indentationGuideView();
    } else {
        return vqscilexercmake->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnIndentationGuideView(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_Keywords(const QsciLexerCMake* self, int set) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return (const char*)vqscilexercmake->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexercmake->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseKeywords(const QsciLexerCMake* self, int set) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Keywords_IsBase(true);
        return (const char*)vqscilexercmake->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexercmake->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnKeywords(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Keywords_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_DefaultStyle(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->defaultStyle();
    } else {
        return vqscilexercmake->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseDefaultStyle(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_DefaultStyle_IsBase(true);
        return vqscilexercmake->defaultStyle();
    } else {
        return vqscilexercmake->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultStyle(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCMake_Description(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        QString _ret = vqscilexercmake->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexercmake->description(static_cast<int>(style));
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
libqt_string QsciLexerCMake_QBaseDescription(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Description_IsBase(true);
        QString _ret = vqscilexercmake->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexercmake->description(static_cast<int>(style));
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
void QsciLexerCMake_OnDescription(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Description_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCMake_Paper(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return new QColor(vqscilexercmake->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCMake_QBasePaper(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Paper_IsBase(true);
        return new QColor(vqscilexercmake->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnPaper(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Paper_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCMake_DefaultColorWithStyle(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return new QColor(vqscilexercmake->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCMake_QBaseDefaultColorWithStyle(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexercmake->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultColorWithStyle(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_DefaultEolFill(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexercmake->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseDefaultEolFill(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_DefaultEolFill_IsBase(true);
        return vqscilexercmake->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexercmake->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultEolFill(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCMake_DefaultFontWithStyle(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return new QFont(vqscilexercmake->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCMake_QBaseDefaultFontWithStyle(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexercmake->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultFontWithStyle(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCMake_DefaultPaperWithStyle(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return new QColor(vqscilexercmake->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCMake_QBaseDefaultPaperWithStyle(const QsciLexerCMake* self, int style) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexercmake->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultPaperWithStyle(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_SetEditor(QsciLexerCMake* self, QsciScintilla* editor) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setEditor(editor);
    } else {
        vqscilexercmake->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseSetEditor(QsciLexerCMake* self, QsciScintilla* editor) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_SetEditor_IsBase(true);
        vqscilexercmake->setEditor(editor);
    } else {
        vqscilexercmake->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetEditor(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_RefreshProperties(QsciLexerCMake* self) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->refreshProperties();
    } else {
        vqscilexercmake->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseRefreshProperties(QsciLexerCMake* self) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_RefreshProperties_IsBase(true);
        vqscilexercmake->refreshProperties();
    } else {
        vqscilexercmake->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnRefreshProperties(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_StyleBitsNeeded(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->styleBitsNeeded();
    } else {
        return vqscilexercmake->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseStyleBitsNeeded(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_StyleBitsNeeded_IsBase(true);
        return vqscilexercmake->styleBitsNeeded();
    } else {
        return vqscilexercmake->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnStyleBitsNeeded(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCMake_WordCharacters(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return (const char*)vqscilexercmake->wordCharacters();
    } else {
        return (const char*)vqscilexercmake->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerCMake_QBaseWordCharacters(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_WordCharacters_IsBase(true);
        return (const char*)vqscilexercmake->wordCharacters();
    } else {
        return (const char*)vqscilexercmake->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnWordCharacters(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_SetAutoIndentStyle(QsciLexerCMake* self, int autoindentstyle) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexercmake->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseSetAutoIndentStyle(QsciLexerCMake* self, int autoindentstyle) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_SetAutoIndentStyle_IsBase(true);
        vqscilexercmake->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexercmake->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetAutoIndentStyle(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_SetColor(QsciLexerCMake* self, QColor* c, int style) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexercmake->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseSetColor(QsciLexerCMake* self, QColor* c, int style) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_SetColor_IsBase(true);
        vqscilexercmake->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexercmake->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetColor(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_SetColor_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_SetEolFill(QsciLexerCMake* self, bool eoffill, int style) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexercmake->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseSetEolFill(QsciLexerCMake* self, bool eoffill, int style) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_SetEolFill_IsBase(true);
        vqscilexercmake->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexercmake->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetEolFill(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_SetFont(QsciLexerCMake* self, QFont* f, int style) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexercmake->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseSetFont(QsciLexerCMake* self, QFont* f, int style) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_SetFont_IsBase(true);
        vqscilexercmake->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexercmake->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetFont(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_SetFont_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_SetPaper(QsciLexerCMake* self, QColor* c, int style) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexercmake->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseSetPaper(QsciLexerCMake* self, QColor* c, int style) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_SetPaper_IsBase(true);
        vqscilexercmake->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexercmake->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetPaper(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_ReadProperties(QsciLexerCMake* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        return vqscilexercmake->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexercmake->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseReadProperties(QsciLexerCMake* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_ReadProperties_IsBase(true);
        return vqscilexercmake->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexercmake->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnReadProperties(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_WriteProperties(const QsciLexerCMake* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexercmake->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseWriteProperties(const QsciLexerCMake* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_WriteProperties_IsBase(true);
        return vqscilexercmake->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexercmake->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnWriteProperties(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_Event(QsciLexerCMake* self, QEvent* event) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        return vqscilexercmake->event(event);
    } else {
        return vqscilexercmake->event(event);
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseEvent(QsciLexerCMake* self, QEvent* event) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_Event_IsBase(true);
        return vqscilexercmake->event(event);
    } else {
        return vqscilexercmake->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnEvent(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_Event_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_EventFilter(QsciLexerCMake* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        return vqscilexercmake->eventFilter(watched, event);
    } else {
        return vqscilexercmake->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseEventFilter(QsciLexerCMake* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_EventFilter_IsBase(true);
        return vqscilexercmake->eventFilter(watched, event);
    } else {
        return vqscilexercmake->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnEventFilter(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_TimerEvent(QsciLexerCMake* self, QTimerEvent* event) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->timerEvent(event);
    } else {
        vqscilexercmake->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseTimerEvent(QsciLexerCMake* self, QTimerEvent* event) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_TimerEvent_IsBase(true);
        vqscilexercmake->timerEvent(event);
    } else {
        vqscilexercmake->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnTimerEvent(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_ChildEvent(QsciLexerCMake* self, QChildEvent* event) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->childEvent(event);
    } else {
        vqscilexercmake->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseChildEvent(QsciLexerCMake* self, QChildEvent* event) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_ChildEvent_IsBase(true);
        vqscilexercmake->childEvent(event);
    } else {
        vqscilexercmake->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnChildEvent(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_CustomEvent(QsciLexerCMake* self, QEvent* event) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->customEvent(event);
    } else {
        vqscilexercmake->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseCustomEvent(QsciLexerCMake* self, QEvent* event) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_CustomEvent_IsBase(true);
        vqscilexercmake->customEvent(event);
    } else {
        vqscilexercmake->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnCustomEvent(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_ConnectNotify(QsciLexerCMake* self, QMetaMethod* signal) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->connectNotify(*signal);
    } else {
        vqscilexercmake->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseConnectNotify(QsciLexerCMake* self, QMetaMethod* signal) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_ConnectNotify_IsBase(true);
        vqscilexercmake->connectNotify(*signal);
    } else {
        vqscilexercmake->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnConnectNotify(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCMake_DisconnectNotify(QsciLexerCMake* self, QMetaMethod* signal) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->disconnectNotify(*signal);
    } else {
        vqscilexercmake->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCMake_QBaseDisconnectNotify(QsciLexerCMake* self, QMetaMethod* signal) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_DisconnectNotify_IsBase(true);
        vqscilexercmake->disconnectNotify(*signal);
    } else {
        vqscilexercmake->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDisconnectNotify(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->setQsciLexerCMake_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerCMake_Sender(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->sender();
    } else {
        return vqscilexercmake->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerCMake_QBaseSender(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Sender_IsBase(true);
        return vqscilexercmake->sender();
    } else {
        return vqscilexercmake->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSender(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Sender_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_SenderSignalIndex(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->senderSignalIndex();
    } else {
        return vqscilexercmake->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseSenderSignalIndex(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_SenderSignalIndex_IsBase(true);
        return vqscilexercmake->senderSignalIndex();
    } else {
        return vqscilexercmake->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSenderSignalIndex(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCMake_Receivers(const QsciLexerCMake* self, const char* signal) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->receivers(signal);
    } else {
        return vqscilexercmake->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerCMake_QBaseReceivers(const QsciLexerCMake* self, const char* signal) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Receivers_IsBase(true);
        return vqscilexercmake->receivers(signal);
    } else {
        return vqscilexercmake->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnReceivers(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_Receivers_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCMake_IsSignalConnected(const QsciLexerCMake* self, QMetaMethod* signal) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->isSignalConnected(*signal);
    } else {
        return vqscilexercmake->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerCMake_QBaseIsSignalConnected(const QsciLexerCMake* self, QMetaMethod* signal) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_IsSignalConnected_IsBase(true);
        return vqscilexercmake->isSignalConnected(*signal);
    } else {
        return vqscilexercmake->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnIsSignalConnected(const QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        vqscilexercmake->setQsciLexerCMake_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerCMake_Delete(QsciLexerCMake* self) {
    delete self;
}
