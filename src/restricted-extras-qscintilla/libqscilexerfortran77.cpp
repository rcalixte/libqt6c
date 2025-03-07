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
#include <qscilexerfortran77.h>
#include "libqscilexerfortran77.hpp"
#include "libqscilexerfortran77.hxx"

QsciLexerFortran77* QsciLexerFortran77_new() {
    return new VirtualQsciLexerFortran77();
}

QsciLexerFortran77* QsciLexerFortran77_new2(QObject* parent) {
    return new VirtualQsciLexerFortran77(parent);
}

QMetaObject* QsciLexerFortran77_MetaObject(const QsciLexerFortran77* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerFortran77_Metacast(QsciLexerFortran77* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerFortran77_Metacall(QsciLexerFortran77* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerFortran77_OnMetacall(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_Metacall_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerFortran77_QBaseMetacall(QsciLexerFortran77* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_Metacall_IsBase(true);
        return vqscilexerfortran77->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerFortran77_Tr(const char* s) {
    QString _ret = QsciLexerFortran77::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerFortran77_DefaultColor(const QsciLexerFortran77* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerFortran77_DefaultFont(const QsciLexerFortran77* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerFortran77_DefaultPaper(const QsciLexerFortran77* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerFortran77_FoldCompact(const QsciLexerFortran77* self) {
    return self->foldCompact();
}

libqt_string QsciLexerFortran77_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerFortran77::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerFortran77_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerFortran77::tr(s, c, static_cast<int>(n));
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
void QsciLexerFortran77_SetFoldCompact(QsciLexerFortran77* self, bool fold) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setFoldCompact(fold);
    } else {
        vqscilexerfortran77->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerFortran77_QBaseSetFoldCompact(QsciLexerFortran77* self, bool fold) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_SetFoldCompact_IsBase(true);
        vqscilexerfortran77->setFoldCompact(fold);
    } else {
        vqscilexerfortran77->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSetFoldCompact(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran77_Language(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return (const char*)vqscilexerfortran77->language();
    } else {
        return (const char*)vqscilexerfortran77->language();
    }
}

// Base class handler implementation
const char* QsciLexerFortran77_QBaseLanguage(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Language_IsBase(true);
        return (const char*)vqscilexerfortran77->language();
    } else {
        return (const char*)vqscilexerfortran77->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnLanguage(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Language_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran77_Lexer(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return (const char*)vqscilexerfortran77->lexer();
    } else {
        return (const char*)vqscilexerfortran77->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerFortran77_QBaseLexer(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Lexer_IsBase(true);
        return (const char*)vqscilexerfortran77->lexer();
    } else {
        return (const char*)vqscilexerfortran77->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnLexer(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Lexer_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran77_LexerId(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->lexerId();
    } else {
        return vqscilexerfortran77->lexerId();
    }
}

// Base class handler implementation
int QsciLexerFortran77_QBaseLexerId(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_LexerId_IsBase(true);
        return vqscilexerfortran77->lexerId();
    } else {
        return vqscilexerfortran77->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnLexerId(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_LexerId_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran77_AutoCompletionFillups(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return (const char*)vqscilexerfortran77->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerfortran77->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerFortran77_QBaseAutoCompletionFillups(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerfortran77->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerfortran77->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnAutoCompletionFillups(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerFortran77_AutoCompletionWordSeparators(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        QStringList _ret = vqscilexerfortran77->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerfortran77->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerFortran77_QBaseAutoCompletionWordSeparators(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerfortran77->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerfortran77->autoCompletionWordSeparators();
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
void QsciLexerFortran77_OnAutoCompletionWordSeparators(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran77_BlockEnd(const QsciLexerFortran77* self, int* style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return (const char*)vqscilexerfortran77->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerfortran77->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerFortran77_QBaseBlockEnd(const QsciLexerFortran77* self, int* style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_BlockEnd_IsBase(true);
        return (const char*)vqscilexerfortran77->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerfortran77->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnBlockEnd(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran77_BlockLookback(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->blockLookback();
    } else {
        return vqscilexerfortran77->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerFortran77_QBaseBlockLookback(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_BlockLookback_IsBase(true);
        return vqscilexerfortran77->blockLookback();
    } else {
        return vqscilexerfortran77->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnBlockLookback(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran77_BlockStart(const QsciLexerFortran77* self, int* style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return (const char*)vqscilexerfortran77->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerfortran77->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerFortran77_QBaseBlockStart(const QsciLexerFortran77* self, int* style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_BlockStart_IsBase(true);
        return (const char*)vqscilexerfortran77->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerfortran77->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnBlockStart(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran77_BlockStartKeyword(const QsciLexerFortran77* self, int* style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return (const char*)vqscilexerfortran77->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerfortran77->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerFortran77_QBaseBlockStartKeyword(const QsciLexerFortran77* self, int* style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerfortran77->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerfortran77->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnBlockStartKeyword(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran77_BraceStyle(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->braceStyle();
    } else {
        return vqscilexerfortran77->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerFortran77_QBaseBraceStyle(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_BraceStyle_IsBase(true);
        return vqscilexerfortran77->braceStyle();
    } else {
        return vqscilexerfortran77->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnBraceStyle(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran77_CaseSensitive(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->caseSensitive();
    } else {
        return vqscilexerfortran77->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerFortran77_QBaseCaseSensitive(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_CaseSensitive_IsBase(true);
        return vqscilexerfortran77->caseSensitive();
    } else {
        return vqscilexerfortran77->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnCaseSensitive(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerFortran77_Color(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return new QColor(vqscilexerfortran77->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerFortran77_QBaseColor(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Color_IsBase(true);
        return new QColor(vqscilexerfortran77->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnColor(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Color_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran77_EolFill(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerfortran77->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerFortran77_QBaseEolFill(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_EolFill_IsBase(true);
        return vqscilexerfortran77->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerfortran77->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnEolFill(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_EolFill_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerFortran77_Font(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return new QFont(vqscilexerfortran77->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerFortran77_QBaseFont(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Font_IsBase(true);
        return new QFont(vqscilexerfortran77->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnFont(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Font_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran77_IndentationGuideView(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->indentationGuideView();
    } else {
        return vqscilexerfortran77->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerFortran77_QBaseIndentationGuideView(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_IndentationGuideView_IsBase(true);
        return vqscilexerfortran77->indentationGuideView();
    } else {
        return vqscilexerfortran77->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnIndentationGuideView(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran77_Keywords(const QsciLexerFortran77* self, int set) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return (const char*)vqscilexerfortran77->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerfortran77->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerFortran77_QBaseKeywords(const QsciLexerFortran77* self, int set) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Keywords_IsBase(true);
        return (const char*)vqscilexerfortran77->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerfortran77->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnKeywords(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Keywords_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran77_DefaultStyle(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->defaultStyle();
    } else {
        return vqscilexerfortran77->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerFortran77_QBaseDefaultStyle(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_DefaultStyle_IsBase(true);
        return vqscilexerfortran77->defaultStyle();
    } else {
        return vqscilexerfortran77->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnDefaultStyle(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerFortran77_Description(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        QString _ret = vqscilexerfortran77->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerfortran77->description(static_cast<int>(style));
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
libqt_string QsciLexerFortran77_QBaseDescription(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Description_IsBase(true);
        QString _ret = vqscilexerfortran77->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerfortran77->description(static_cast<int>(style));
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
void QsciLexerFortran77_OnDescription(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Description_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerFortran77_Paper(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return new QColor(vqscilexerfortran77->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerFortran77_QBasePaper(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Paper_IsBase(true);
        return new QColor(vqscilexerfortran77->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnPaper(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Paper_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerFortran77_DefaultColorWithStyle(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return new QColor(vqscilexerfortran77->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerFortran77_QBaseDefaultColorWithStyle(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerfortran77->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnDefaultColorWithStyle(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran77_DefaultEolFill(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerfortran77->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerFortran77_QBaseDefaultEolFill(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_DefaultEolFill_IsBase(true);
        return vqscilexerfortran77->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerfortran77->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnDefaultEolFill(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerFortran77_DefaultFontWithStyle(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return new QFont(vqscilexerfortran77->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerFortran77_QBaseDefaultFontWithStyle(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerfortran77->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnDefaultFontWithStyle(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerFortran77_DefaultPaperWithStyle(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return new QColor(vqscilexerfortran77->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerFortran77_QBaseDefaultPaperWithStyle(const QsciLexerFortran77* self, int style) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerfortran77->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnDefaultPaperWithStyle(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran77_SetEditor(QsciLexerFortran77* self, QsciScintilla* editor) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setEditor(editor);
    } else {
        vqscilexerfortran77->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerFortran77_QBaseSetEditor(QsciLexerFortran77* self, QsciScintilla* editor) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_SetEditor_IsBase(true);
        vqscilexerfortran77->setEditor(editor);
    } else {
        vqscilexerfortran77->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSetEditor(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran77_RefreshProperties(QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->refreshProperties();
    } else {
        vqscilexerfortran77->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerFortran77_QBaseRefreshProperties(QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_RefreshProperties_IsBase(true);
        vqscilexerfortran77->refreshProperties();
    } else {
        vqscilexerfortran77->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnRefreshProperties(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran77_StyleBitsNeeded(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->styleBitsNeeded();
    } else {
        return vqscilexerfortran77->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerFortran77_QBaseStyleBitsNeeded(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_StyleBitsNeeded_IsBase(true);
        return vqscilexerfortran77->styleBitsNeeded();
    } else {
        return vqscilexerfortran77->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnStyleBitsNeeded(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerFortran77_WordCharacters(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return (const char*)vqscilexerfortran77->wordCharacters();
    } else {
        return (const char*)vqscilexerfortran77->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerFortran77_QBaseWordCharacters(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_WordCharacters_IsBase(true);
        return (const char*)vqscilexerfortran77->wordCharacters();
    } else {
        return (const char*)vqscilexerfortran77->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnWordCharacters(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran77_SetAutoIndentStyle(QsciLexerFortran77* self, int autoindentstyle) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerfortran77->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerFortran77_QBaseSetAutoIndentStyle(QsciLexerFortran77* self, int autoindentstyle) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_SetAutoIndentStyle_IsBase(true);
        vqscilexerfortran77->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerfortran77->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSetAutoIndentStyle(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran77_SetColor(QsciLexerFortran77* self, QColor* c, int style) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerfortran77->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerFortran77_QBaseSetColor(QsciLexerFortran77* self, QColor* c, int style) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_SetColor_IsBase(true);
        vqscilexerfortran77->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerfortran77->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSetColor(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_SetColor_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran77_SetEolFill(QsciLexerFortran77* self, bool eoffill, int style) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerfortran77->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerFortran77_QBaseSetEolFill(QsciLexerFortran77* self, bool eoffill, int style) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_SetEolFill_IsBase(true);
        vqscilexerfortran77->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerfortran77->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSetEolFill(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran77_SetFont(QsciLexerFortran77* self, QFont* f, int style) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerfortran77->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerFortran77_QBaseSetFont(QsciLexerFortran77* self, QFont* f, int style) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_SetFont_IsBase(true);
        vqscilexerfortran77->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerfortran77->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSetFont(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_SetFont_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran77_SetPaper(QsciLexerFortran77* self, QColor* c, int style) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerfortran77->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerFortran77_QBaseSetPaper(QsciLexerFortran77* self, QColor* c, int style) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_SetPaper_IsBase(true);
        vqscilexerfortran77->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerfortran77->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSetPaper(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran77_ReadProperties(QsciLexerFortran77* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        return vqscilexerfortran77->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerfortran77->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerFortran77_QBaseReadProperties(QsciLexerFortran77* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_ReadProperties_IsBase(true);
        return vqscilexerfortran77->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerfortran77->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnReadProperties(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran77_WriteProperties(const QsciLexerFortran77* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerfortran77->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerFortran77_QBaseWriteProperties(const QsciLexerFortran77* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_WriteProperties_IsBase(true);
        return vqscilexerfortran77->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerfortran77->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnWriteProperties(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran77_Event(QsciLexerFortran77* self, QEvent* event) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        return vqscilexerfortran77->event(event);
    } else {
        return vqscilexerfortran77->event(event);
    }
}

// Base class handler implementation
bool QsciLexerFortran77_QBaseEvent(QsciLexerFortran77* self, QEvent* event) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_Event_IsBase(true);
        return vqscilexerfortran77->event(event);
    } else {
        return vqscilexerfortran77->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnEvent(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_Event_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran77_EventFilter(QsciLexerFortran77* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        return vqscilexerfortran77->eventFilter(watched, event);
    } else {
        return vqscilexerfortran77->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerFortran77_QBaseEventFilter(QsciLexerFortran77* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_EventFilter_IsBase(true);
        return vqscilexerfortran77->eventFilter(watched, event);
    } else {
        return vqscilexerfortran77->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnEventFilter(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran77_TimerEvent(QsciLexerFortran77* self, QTimerEvent* event) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->timerEvent(event);
    } else {
        vqscilexerfortran77->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerFortran77_QBaseTimerEvent(QsciLexerFortran77* self, QTimerEvent* event) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_TimerEvent_IsBase(true);
        vqscilexerfortran77->timerEvent(event);
    } else {
        vqscilexerfortran77->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnTimerEvent(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran77_ChildEvent(QsciLexerFortran77* self, QChildEvent* event) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->childEvent(event);
    } else {
        vqscilexerfortran77->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerFortran77_QBaseChildEvent(QsciLexerFortran77* self, QChildEvent* event) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_ChildEvent_IsBase(true);
        vqscilexerfortran77->childEvent(event);
    } else {
        vqscilexerfortran77->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnChildEvent(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran77_CustomEvent(QsciLexerFortran77* self, QEvent* event) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->customEvent(event);
    } else {
        vqscilexerfortran77->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerFortran77_QBaseCustomEvent(QsciLexerFortran77* self, QEvent* event) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_CustomEvent_IsBase(true);
        vqscilexerfortran77->customEvent(event);
    } else {
        vqscilexerfortran77->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnCustomEvent(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran77_ConnectNotify(QsciLexerFortran77* self, QMetaMethod* signal) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->connectNotify(*signal);
    } else {
        vqscilexerfortran77->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerFortran77_QBaseConnectNotify(QsciLexerFortran77* self, QMetaMethod* signal) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_ConnectNotify_IsBase(true);
        vqscilexerfortran77->connectNotify(*signal);
    } else {
        vqscilexerfortran77->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnConnectNotify(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerFortran77_DisconnectNotify(QsciLexerFortran77* self, QMetaMethod* signal) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->disconnectNotify(*signal);
    } else {
        vqscilexerfortran77->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerFortran77_QBaseDisconnectNotify(QsciLexerFortran77* self, QMetaMethod* signal) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_DisconnectNotify_IsBase(true);
        vqscilexerfortran77->disconnectNotify(*signal);
    } else {
        vqscilexerfortran77->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnDisconnectNotify(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->setQsciLexerFortran77_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerFortran77_Sender(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->sender();
    } else {
        return vqscilexerfortran77->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerFortran77_QBaseSender(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Sender_IsBase(true);
        return vqscilexerfortran77->sender();
    } else {
        return vqscilexerfortran77->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSender(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Sender_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran77_SenderSignalIndex(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->senderSignalIndex();
    } else {
        return vqscilexerfortran77->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerFortran77_QBaseSenderSignalIndex(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_SenderSignalIndex_IsBase(true);
        return vqscilexerfortran77->senderSignalIndex();
    } else {
        return vqscilexerfortran77->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSenderSignalIndex(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerFortran77_Receivers(const QsciLexerFortran77* self, const char* signal) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->receivers(signal);
    } else {
        return vqscilexerfortran77->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerFortran77_QBaseReceivers(const QsciLexerFortran77* self, const char* signal) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Receivers_IsBase(true);
        return vqscilexerfortran77->receivers(signal);
    } else {
        return vqscilexerfortran77->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnReceivers(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_Receivers_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerFortran77_IsSignalConnected(const QsciLexerFortran77* self, QMetaMethod* signal) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->isSignalConnected(*signal);
    } else {
        return vqscilexerfortran77->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerFortran77_QBaseIsSignalConnected(const QsciLexerFortran77* self, QMetaMethod* signal) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_IsSignalConnected_IsBase(true);
        return vqscilexerfortran77->isSignalConnected(*signal);
    } else {
        return vqscilexerfortran77->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnIsSignalConnected(const QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        vqscilexerfortran77->setQsciLexerFortran77_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerFortran77_Delete(QsciLexerFortran77* self) {
    delete self;
}
