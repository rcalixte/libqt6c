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
#include <qscilexerbash.h>
#include "libqscilexerbash.hpp"
#include "libqscilexerbash.hxx"

QsciLexerBash* QsciLexerBash_new() {
    return new VirtualQsciLexerBash();
}

QsciLexerBash* QsciLexerBash_new2(QObject* parent) {
    return new VirtualQsciLexerBash(parent);
}

QMetaObject* QsciLexerBash_MetaObject(const QsciLexerBash* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerBash_Metacast(QsciLexerBash* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerBash_Metacall(QsciLexerBash* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerBash_OnMetacall(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_Metacall_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerBash_QBaseMetacall(QsciLexerBash* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_Metacall_IsBase(true);
        return vqscilexerbash->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerBash_Tr(const char* s) {
    QString _ret = QsciLexerBash::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerBash_DefaultColor(const QsciLexerBash* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerBash_DefaultFont(const QsciLexerBash* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerBash_DefaultPaper(const QsciLexerBash* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerBash_FoldComments(const QsciLexerBash* self) {
    return self->foldComments();
}

bool QsciLexerBash_FoldCompact(const QsciLexerBash* self) {
    return self->foldCompact();
}

libqt_string QsciLexerBash_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerBash::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerBash_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerBash::tr(s, c, static_cast<int>(n));
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
void QsciLexerBash_SetFoldComments(QsciLexerBash* self, bool fold) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setFoldComments(fold);
    } else {
        vqscilexerbash->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerBash_QBaseSetFoldComments(QsciLexerBash* self, bool fold) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetFoldComments_IsBase(true);
        vqscilexerbash->setFoldComments(fold);
    } else {
        vqscilexerbash->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetFoldComments(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBash_SetFoldCompact(QsciLexerBash* self, bool fold) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setFoldCompact(fold);
    } else {
        vqscilexerbash->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerBash_QBaseSetFoldCompact(QsciLexerBash* self, bool fold) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetFoldCompact_IsBase(true);
        vqscilexerbash->setFoldCompact(fold);
    } else {
        vqscilexerbash->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetFoldCompact(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBash_Language(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return (const char*)vqscilexerbash->language();
    } else {
        return (const char*)vqscilexerbash->language();
    }
}

// Base class handler implementation
const char* QsciLexerBash_QBaseLanguage(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Language_IsBase(true);
        return (const char*)vqscilexerbash->language();
    } else {
        return (const char*)vqscilexerbash->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnLanguage(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Language_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBash_Lexer(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return (const char*)vqscilexerbash->lexer();
    } else {
        return (const char*)vqscilexerbash->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerBash_QBaseLexer(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Lexer_IsBase(true);
        return (const char*)vqscilexerbash->lexer();
    } else {
        return (const char*)vqscilexerbash->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnLexer(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Lexer_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBash_LexerId(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->lexerId();
    } else {
        return vqscilexerbash->lexerId();
    }
}

// Base class handler implementation
int QsciLexerBash_QBaseLexerId(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_LexerId_IsBase(true);
        return vqscilexerbash->lexerId();
    } else {
        return vqscilexerbash->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnLexerId(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_LexerId_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBash_AutoCompletionFillups(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return (const char*)vqscilexerbash->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerbash->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerBash_QBaseAutoCompletionFillups(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerbash->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerbash->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnAutoCompletionFillups(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerBash_AutoCompletionWordSeparators(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        QStringList _ret = vqscilexerbash->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerbash->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerBash_QBaseAutoCompletionWordSeparators(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerbash->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerbash->autoCompletionWordSeparators();
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
void QsciLexerBash_OnAutoCompletionWordSeparators(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBash_BlockEnd(const QsciLexerBash* self, int* style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return (const char*)vqscilexerbash->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerbash->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerBash_QBaseBlockEnd(const QsciLexerBash* self, int* style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_BlockEnd_IsBase(true);
        return (const char*)vqscilexerbash->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerbash->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnBlockEnd(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBash_BlockLookback(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->blockLookback();
    } else {
        return vqscilexerbash->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerBash_QBaseBlockLookback(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_BlockLookback_IsBase(true);
        return vqscilexerbash->blockLookback();
    } else {
        return vqscilexerbash->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnBlockLookback(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBash_BlockStart(const QsciLexerBash* self, int* style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return (const char*)vqscilexerbash->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerbash->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerBash_QBaseBlockStart(const QsciLexerBash* self, int* style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_BlockStart_IsBase(true);
        return (const char*)vqscilexerbash->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerbash->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnBlockStart(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBash_BlockStartKeyword(const QsciLexerBash* self, int* style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return (const char*)vqscilexerbash->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerbash->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerBash_QBaseBlockStartKeyword(const QsciLexerBash* self, int* style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerbash->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerbash->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnBlockStartKeyword(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBash_BraceStyle(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->braceStyle();
    } else {
        return vqscilexerbash->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerBash_QBaseBraceStyle(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_BraceStyle_IsBase(true);
        return vqscilexerbash->braceStyle();
    } else {
        return vqscilexerbash->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnBraceStyle(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBash_CaseSensitive(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->caseSensitive();
    } else {
        return vqscilexerbash->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerBash_QBaseCaseSensitive(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_CaseSensitive_IsBase(true);
        return vqscilexerbash->caseSensitive();
    } else {
        return vqscilexerbash->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnCaseSensitive(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerBash_Color(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return new QColor(vqscilexerbash->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerBash_QBaseColor(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Color_IsBase(true);
        return new QColor(vqscilexerbash->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnColor(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Color_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBash_EolFill(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerbash->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerBash_QBaseEolFill(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_EolFill_IsBase(true);
        return vqscilexerbash->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerbash->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnEolFill(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_EolFill_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerBash_Font(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return new QFont(vqscilexerbash->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerBash_QBaseFont(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Font_IsBase(true);
        return new QFont(vqscilexerbash->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnFont(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Font_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBash_IndentationGuideView(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->indentationGuideView();
    } else {
        return vqscilexerbash->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerBash_QBaseIndentationGuideView(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_IndentationGuideView_IsBase(true);
        return vqscilexerbash->indentationGuideView();
    } else {
        return vqscilexerbash->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnIndentationGuideView(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBash_Keywords(const QsciLexerBash* self, int set) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return (const char*)vqscilexerbash->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerbash->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerBash_QBaseKeywords(const QsciLexerBash* self, int set) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Keywords_IsBase(true);
        return (const char*)vqscilexerbash->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerbash->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnKeywords(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Keywords_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBash_DefaultStyle(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->defaultStyle();
    } else {
        return vqscilexerbash->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerBash_QBaseDefaultStyle(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_DefaultStyle_IsBase(true);
        return vqscilexerbash->defaultStyle();
    } else {
        return vqscilexerbash->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnDefaultStyle(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerBash_Description(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        QString _ret = vqscilexerbash->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerbash->description(static_cast<int>(style));
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
libqt_string QsciLexerBash_QBaseDescription(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Description_IsBase(true);
        QString _ret = vqscilexerbash->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerbash->description(static_cast<int>(style));
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
void QsciLexerBash_OnDescription(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Description_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerBash_Paper(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return new QColor(vqscilexerbash->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerBash_QBasePaper(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Paper_IsBase(true);
        return new QColor(vqscilexerbash->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnPaper(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Paper_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerBash_DefaultColorWithStyle(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return new QColor(vqscilexerbash->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerBash_QBaseDefaultColorWithStyle(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerbash->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnDefaultColorWithStyle(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBash_DefaultEolFill(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerbash->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerBash_QBaseDefaultEolFill(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_DefaultEolFill_IsBase(true);
        return vqscilexerbash->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerbash->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnDefaultEolFill(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerBash_DefaultFontWithStyle(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return new QFont(vqscilexerbash->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerBash_QBaseDefaultFontWithStyle(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerbash->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnDefaultFontWithStyle(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerBash_DefaultPaperWithStyle(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return new QColor(vqscilexerbash->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerBash_QBaseDefaultPaperWithStyle(const QsciLexerBash* self, int style) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerbash->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnDefaultPaperWithStyle(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBash_SetEditor(QsciLexerBash* self, QsciScintilla* editor) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setEditor(editor);
    } else {
        vqscilexerbash->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerBash_QBaseSetEditor(QsciLexerBash* self, QsciScintilla* editor) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetEditor_IsBase(true);
        vqscilexerbash->setEditor(editor);
    } else {
        vqscilexerbash->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetEditor(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBash_RefreshProperties(QsciLexerBash* self) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->refreshProperties();
    } else {
        vqscilexerbash->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerBash_QBaseRefreshProperties(QsciLexerBash* self) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_RefreshProperties_IsBase(true);
        vqscilexerbash->refreshProperties();
    } else {
        vqscilexerbash->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnRefreshProperties(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBash_StyleBitsNeeded(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->styleBitsNeeded();
    } else {
        return vqscilexerbash->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerBash_QBaseStyleBitsNeeded(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_StyleBitsNeeded_IsBase(true);
        return vqscilexerbash->styleBitsNeeded();
    } else {
        return vqscilexerbash->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnStyleBitsNeeded(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerBash_WordCharacters(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return (const char*)vqscilexerbash->wordCharacters();
    } else {
        return (const char*)vqscilexerbash->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerBash_QBaseWordCharacters(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_WordCharacters_IsBase(true);
        return (const char*)vqscilexerbash->wordCharacters();
    } else {
        return (const char*)vqscilexerbash->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnWordCharacters(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBash_SetAutoIndentStyle(QsciLexerBash* self, int autoindentstyle) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerbash->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerBash_QBaseSetAutoIndentStyle(QsciLexerBash* self, int autoindentstyle) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetAutoIndentStyle_IsBase(true);
        vqscilexerbash->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerbash->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetAutoIndentStyle(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBash_SetColor(QsciLexerBash* self, QColor* c, int style) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerbash->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerBash_QBaseSetColor(QsciLexerBash* self, QColor* c, int style) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetColor_IsBase(true);
        vqscilexerbash->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerbash->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetColor(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetColor_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBash_SetEolFill(QsciLexerBash* self, bool eoffill, int style) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerbash->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerBash_QBaseSetEolFill(QsciLexerBash* self, bool eoffill, int style) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetEolFill_IsBase(true);
        vqscilexerbash->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerbash->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetEolFill(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBash_SetFont(QsciLexerBash* self, QFont* f, int style) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerbash->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerBash_QBaseSetFont(QsciLexerBash* self, QFont* f, int style) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetFont_IsBase(true);
        vqscilexerbash->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerbash->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetFont(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetFont_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBash_SetPaper(QsciLexerBash* self, QColor* c, int style) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerbash->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerBash_QBaseSetPaper(QsciLexerBash* self, QColor* c, int style) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetPaper_IsBase(true);
        vqscilexerbash->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerbash->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetPaper(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBash_ReadProperties(QsciLexerBash* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        return vqscilexerbash->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerbash->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerBash_QBaseReadProperties(QsciLexerBash* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_ReadProperties_IsBase(true);
        return vqscilexerbash->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerbash->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnReadProperties(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBash_WriteProperties(const QsciLexerBash* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerbash->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerBash_QBaseWriteProperties(const QsciLexerBash* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_WriteProperties_IsBase(true);
        return vqscilexerbash->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerbash->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnWriteProperties(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBash_Event(QsciLexerBash* self, QEvent* event) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        return vqscilexerbash->event(event);
    } else {
        return vqscilexerbash->event(event);
    }
}

// Base class handler implementation
bool QsciLexerBash_QBaseEvent(QsciLexerBash* self, QEvent* event) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_Event_IsBase(true);
        return vqscilexerbash->event(event);
    } else {
        return vqscilexerbash->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnEvent(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_Event_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBash_EventFilter(QsciLexerBash* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        return vqscilexerbash->eventFilter(watched, event);
    } else {
        return vqscilexerbash->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerBash_QBaseEventFilter(QsciLexerBash* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_EventFilter_IsBase(true);
        return vqscilexerbash->eventFilter(watched, event);
    } else {
        return vqscilexerbash->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnEventFilter(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBash_TimerEvent(QsciLexerBash* self, QTimerEvent* event) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->timerEvent(event);
    } else {
        vqscilexerbash->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerBash_QBaseTimerEvent(QsciLexerBash* self, QTimerEvent* event) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_TimerEvent_IsBase(true);
        vqscilexerbash->timerEvent(event);
    } else {
        vqscilexerbash->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnTimerEvent(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBash_ChildEvent(QsciLexerBash* self, QChildEvent* event) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->childEvent(event);
    } else {
        vqscilexerbash->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerBash_QBaseChildEvent(QsciLexerBash* self, QChildEvent* event) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_ChildEvent_IsBase(true);
        vqscilexerbash->childEvent(event);
    } else {
        vqscilexerbash->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnChildEvent(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBash_CustomEvent(QsciLexerBash* self, QEvent* event) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->customEvent(event);
    } else {
        vqscilexerbash->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerBash_QBaseCustomEvent(QsciLexerBash* self, QEvent* event) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_CustomEvent_IsBase(true);
        vqscilexerbash->customEvent(event);
    } else {
        vqscilexerbash->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnCustomEvent(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBash_ConnectNotify(QsciLexerBash* self, QMetaMethod* signal) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->connectNotify(*signal);
    } else {
        vqscilexerbash->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerBash_QBaseConnectNotify(QsciLexerBash* self, QMetaMethod* signal) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_ConnectNotify_IsBase(true);
        vqscilexerbash->connectNotify(*signal);
    } else {
        vqscilexerbash->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnConnectNotify(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerBash_DisconnectNotify(QsciLexerBash* self, QMetaMethod* signal) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->disconnectNotify(*signal);
    } else {
        vqscilexerbash->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerBash_QBaseDisconnectNotify(QsciLexerBash* self, QMetaMethod* signal) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_DisconnectNotify_IsBase(true);
        vqscilexerbash->disconnectNotify(*signal);
    } else {
        vqscilexerbash->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnDisconnectNotify(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->setQsciLexerBash_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerBash_Sender(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->sender();
    } else {
        return vqscilexerbash->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerBash_QBaseSender(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Sender_IsBase(true);
        return vqscilexerbash->sender();
    } else {
        return vqscilexerbash->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSender(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Sender_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBash_SenderSignalIndex(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->senderSignalIndex();
    } else {
        return vqscilexerbash->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerBash_QBaseSenderSignalIndex(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_SenderSignalIndex_IsBase(true);
        return vqscilexerbash->senderSignalIndex();
    } else {
        return vqscilexerbash->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSenderSignalIndex(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerBash_Receivers(const QsciLexerBash* self, const char* signal) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->receivers(signal);
    } else {
        return vqscilexerbash->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerBash_QBaseReceivers(const QsciLexerBash* self, const char* signal) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Receivers_IsBase(true);
        return vqscilexerbash->receivers(signal);
    } else {
        return vqscilexerbash->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnReceivers(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_Receivers_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerBash_IsSignalConnected(const QsciLexerBash* self, QMetaMethod* signal) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->isSignalConnected(*signal);
    } else {
        return vqscilexerbash->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerBash_QBaseIsSignalConnected(const QsciLexerBash* self, QMetaMethod* signal) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_IsSignalConnected_IsBase(true);
        return vqscilexerbash->isSignalConnected(*signal);
    } else {
        return vqscilexerbash->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnIsSignalConnected(const QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        vqscilexerbash->setQsciLexerBash_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerBash_Delete(QsciLexerBash* self) {
    delete self;
}
