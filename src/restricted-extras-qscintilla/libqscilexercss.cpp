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
#include <qscilexercss.h>
#include "libqscilexercss.hpp"
#include "libqscilexercss.hxx"

QsciLexerCSS* QsciLexerCSS_new() {
    return new VirtualQsciLexerCSS();
}

QsciLexerCSS* QsciLexerCSS_new2(QObject* parent) {
    return new VirtualQsciLexerCSS(parent);
}

QMetaObject* QsciLexerCSS_MetaObject(const QsciLexerCSS* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCSS_Metacast(QsciLexerCSS* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCSS_Metacall(QsciLexerCSS* self, int param1, int param2, void** param3) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerCSS_OnMetacall(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_Metacall_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerCSS_QBaseMetacall(QsciLexerCSS* self, int param1, int param2, void** param3) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_Metacall_IsBase(true);
        return vqscilexercss->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerCSS_Tr(const char* s) {
    QString _ret = QsciLexerCSS::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerCSS_DefaultColor(const QsciLexerCSS* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerCSS_DefaultFont(const QsciLexerCSS* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

bool QsciLexerCSS_FoldComments(const QsciLexerCSS* self) {
    return self->foldComments();
}

bool QsciLexerCSS_FoldCompact(const QsciLexerCSS* self) {
    return self->foldCompact();
}

void QsciLexerCSS_SetHSSLanguage(QsciLexerCSS* self, bool enabled) {
    self->setHSSLanguage(enabled);
}

bool QsciLexerCSS_HSSLanguage(const QsciLexerCSS* self) {
    return self->HSSLanguage();
}

void QsciLexerCSS_SetLessLanguage(QsciLexerCSS* self, bool enabled) {
    self->setLessLanguage(enabled);
}

bool QsciLexerCSS_LessLanguage(const QsciLexerCSS* self) {
    return self->LessLanguage();
}

void QsciLexerCSS_SetSCSSLanguage(QsciLexerCSS* self, bool enabled) {
    self->setSCSSLanguage(enabled);
}

bool QsciLexerCSS_SCSSLanguage(const QsciLexerCSS* self) {
    return self->SCSSLanguage();
}

libqt_string QsciLexerCSS_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerCSS::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCSS_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerCSS::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

const char* QsciLexerCSS_BlockEnd1(const QsciLexerCSS* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCSS_BlockStart1(const QsciLexerCSS* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Derived class handler implementation
void QsciLexerCSS_SetFoldComments(QsciLexerCSS* self, bool fold) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setFoldComments(fold);
    } else {
        vqscilexercss->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetFoldComments(QsciLexerCSS* self, bool fold) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetFoldComments_IsBase(true);
        vqscilexercss->setFoldComments(fold);
    } else {
        vqscilexercss->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetFoldComments(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_SetFoldCompact(QsciLexerCSS* self, bool fold) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setFoldCompact(fold);
    } else {
        vqscilexercss->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetFoldCompact(QsciLexerCSS* self, bool fold) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetFoldCompact_IsBase(true);
        vqscilexercss->setFoldCompact(fold);
    } else {
        vqscilexercss->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetFoldCompact(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_Language(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return (const char*)vqscilexercss->language();
    } else {
        return (const char*)vqscilexercss->language();
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseLanguage(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Language_IsBase(true);
        return (const char*)vqscilexercss->language();
    } else {
        return (const char*)vqscilexercss->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnLanguage(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Language_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_Lexer(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return (const char*)vqscilexercss->lexer();
    } else {
        return (const char*)vqscilexercss->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseLexer(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Lexer_IsBase(true);
        return (const char*)vqscilexercss->lexer();
    } else {
        return (const char*)vqscilexercss->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnLexer(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Lexer_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_LexerId(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->lexerId();
    } else {
        return vqscilexercss->lexerId();
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseLexerId(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_LexerId_IsBase(true);
        return vqscilexercss->lexerId();
    } else {
        return vqscilexercss->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnLexerId(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_LexerId_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_AutoCompletionFillups(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return (const char*)vqscilexercss->autoCompletionFillups();
    } else {
        return (const char*)vqscilexercss->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseAutoCompletionFillups(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexercss->autoCompletionFillups();
    } else {
        return (const char*)vqscilexercss->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnAutoCompletionFillups(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerCSS_AutoCompletionWordSeparators(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        QStringList _ret = vqscilexercss->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexercss->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerCSS_QBaseAutoCompletionWordSeparators(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexercss->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexercss->autoCompletionWordSeparators();
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
void QsciLexerCSS_OnAutoCompletionWordSeparators(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_BlockEnd(const QsciLexerCSS* self, int* style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return (const char*)vqscilexercss->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercss->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseBlockEnd(const QsciLexerCSS* self, int* style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_BlockEnd_IsBase(true);
        return (const char*)vqscilexercss->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercss->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnBlockEnd(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_BlockLookback(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->blockLookback();
    } else {
        return vqscilexercss->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseBlockLookback(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_BlockLookback_IsBase(true);
        return vqscilexercss->blockLookback();
    } else {
        return vqscilexercss->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnBlockLookback(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_BlockStart(const QsciLexerCSS* self, int* style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return (const char*)vqscilexercss->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercss->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseBlockStart(const QsciLexerCSS* self, int* style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_BlockStart_IsBase(true);
        return (const char*)vqscilexercss->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercss->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnBlockStart(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_BlockStartKeyword(const QsciLexerCSS* self, int* style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return (const char*)vqscilexercss->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercss->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseBlockStartKeyword(const QsciLexerCSS* self, int* style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexercss->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercss->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnBlockStartKeyword(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_BraceStyle(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->braceStyle();
    } else {
        return vqscilexercss->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseBraceStyle(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_BraceStyle_IsBase(true);
        return vqscilexercss->braceStyle();
    } else {
        return vqscilexercss->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnBraceStyle(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_CaseSensitive(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->caseSensitive();
    } else {
        return vqscilexercss->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseCaseSensitive(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_CaseSensitive_IsBase(true);
        return vqscilexercss->caseSensitive();
    } else {
        return vqscilexercss->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnCaseSensitive(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCSS_Color(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return new QColor(vqscilexercss->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCSS_QBaseColor(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Color_IsBase(true);
        return new QColor(vqscilexercss->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnColor(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Color_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_EolFill(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->eolFill(static_cast<int>(style));
    } else {
        return vqscilexercss->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseEolFill(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_EolFill_IsBase(true);
        return vqscilexercss->eolFill(static_cast<int>(style));
    } else {
        return vqscilexercss->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnEolFill(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_EolFill_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCSS_Font(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return new QFont(vqscilexercss->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCSS_QBaseFont(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Font_IsBase(true);
        return new QFont(vqscilexercss->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnFont(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Font_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_IndentationGuideView(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->indentationGuideView();
    } else {
        return vqscilexercss->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseIndentationGuideView(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_IndentationGuideView_IsBase(true);
        return vqscilexercss->indentationGuideView();
    } else {
        return vqscilexercss->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnIndentationGuideView(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_Keywords(const QsciLexerCSS* self, int set) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return (const char*)vqscilexercss->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexercss->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseKeywords(const QsciLexerCSS* self, int set) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Keywords_IsBase(true);
        return (const char*)vqscilexercss->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexercss->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnKeywords(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Keywords_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_DefaultStyle(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->defaultStyle();
    } else {
        return vqscilexercss->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseDefaultStyle(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_DefaultStyle_IsBase(true);
        return vqscilexercss->defaultStyle();
    } else {
        return vqscilexercss->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultStyle(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCSS_Description(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        QString _ret = vqscilexercss->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexercss->description(static_cast<int>(style));
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
libqt_string QsciLexerCSS_QBaseDescription(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Description_IsBase(true);
        QString _ret = vqscilexercss->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexercss->description(static_cast<int>(style));
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
void QsciLexerCSS_OnDescription(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Description_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCSS_Paper(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return new QColor(vqscilexercss->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCSS_QBasePaper(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Paper_IsBase(true);
        return new QColor(vqscilexercss->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnPaper(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Paper_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCSS_DefaultColorWithStyle(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return new QColor(vqscilexercss->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCSS_QBaseDefaultColorWithStyle(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexercss->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultColorWithStyle(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_DefaultEolFill(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexercss->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseDefaultEolFill(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_DefaultEolFill_IsBase(true);
        return vqscilexercss->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexercss->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultEolFill(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCSS_DefaultFontWithStyle(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return new QFont(vqscilexercss->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCSS_QBaseDefaultFontWithStyle(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexercss->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultFontWithStyle(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCSS_DefaultPaperWithStyle(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return new QColor(vqscilexercss->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCSS_QBaseDefaultPaperWithStyle(const QsciLexerCSS* self, int style) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexercss->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultPaperWithStyle(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_SetEditor(QsciLexerCSS* self, QsciScintilla* editor) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setEditor(editor);
    } else {
        vqscilexercss->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetEditor(QsciLexerCSS* self, QsciScintilla* editor) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetEditor_IsBase(true);
        vqscilexercss->setEditor(editor);
    } else {
        vqscilexercss->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetEditor(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_RefreshProperties(QsciLexerCSS* self) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->refreshProperties();
    } else {
        vqscilexercss->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseRefreshProperties(QsciLexerCSS* self) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_RefreshProperties_IsBase(true);
        vqscilexercss->refreshProperties();
    } else {
        vqscilexercss->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnRefreshProperties(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_StyleBitsNeeded(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->styleBitsNeeded();
    } else {
        return vqscilexercss->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseStyleBitsNeeded(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_StyleBitsNeeded_IsBase(true);
        return vqscilexercss->styleBitsNeeded();
    } else {
        return vqscilexercss->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnStyleBitsNeeded(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCSS_WordCharacters(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return (const char*)vqscilexercss->wordCharacters();
    } else {
        return (const char*)vqscilexercss->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerCSS_QBaseWordCharacters(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_WordCharacters_IsBase(true);
        return (const char*)vqscilexercss->wordCharacters();
    } else {
        return (const char*)vqscilexercss->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnWordCharacters(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_SetAutoIndentStyle(QsciLexerCSS* self, int autoindentstyle) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexercss->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetAutoIndentStyle(QsciLexerCSS* self, int autoindentstyle) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetAutoIndentStyle_IsBase(true);
        vqscilexercss->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexercss->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetAutoIndentStyle(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_SetColor(QsciLexerCSS* self, QColor* c, int style) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexercss->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetColor(QsciLexerCSS* self, QColor* c, int style) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetColor_IsBase(true);
        vqscilexercss->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexercss->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetColor(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetColor_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_SetEolFill(QsciLexerCSS* self, bool eoffill, int style) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexercss->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetEolFill(QsciLexerCSS* self, bool eoffill, int style) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetEolFill_IsBase(true);
        vqscilexercss->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexercss->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetEolFill(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_SetFont(QsciLexerCSS* self, QFont* f, int style) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexercss->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetFont(QsciLexerCSS* self, QFont* f, int style) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetFont_IsBase(true);
        vqscilexercss->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexercss->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetFont(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetFont_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_SetPaper(QsciLexerCSS* self, QColor* c, int style) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexercss->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseSetPaper(QsciLexerCSS* self, QColor* c, int style) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetPaper_IsBase(true);
        vqscilexercss->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexercss->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetPaper(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_ReadProperties(QsciLexerCSS* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        return vqscilexercss->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexercss->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseReadProperties(QsciLexerCSS* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_ReadProperties_IsBase(true);
        return vqscilexercss->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexercss->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnReadProperties(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_WriteProperties(const QsciLexerCSS* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexercss->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseWriteProperties(const QsciLexerCSS* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_WriteProperties_IsBase(true);
        return vqscilexercss->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexercss->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnWriteProperties(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_Event(QsciLexerCSS* self, QEvent* event) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        return vqscilexercss->event(event);
    } else {
        return vqscilexercss->event(event);
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseEvent(QsciLexerCSS* self, QEvent* event) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_Event_IsBase(true);
        return vqscilexercss->event(event);
    } else {
        return vqscilexercss->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnEvent(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_Event_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_EventFilter(QsciLexerCSS* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        return vqscilexercss->eventFilter(watched, event);
    } else {
        return vqscilexercss->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseEventFilter(QsciLexerCSS* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_EventFilter_IsBase(true);
        return vqscilexercss->eventFilter(watched, event);
    } else {
        return vqscilexercss->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnEventFilter(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_TimerEvent(QsciLexerCSS* self, QTimerEvent* event) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->timerEvent(event);
    } else {
        vqscilexercss->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseTimerEvent(QsciLexerCSS* self, QTimerEvent* event) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_TimerEvent_IsBase(true);
        vqscilexercss->timerEvent(event);
    } else {
        vqscilexercss->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnTimerEvent(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_ChildEvent(QsciLexerCSS* self, QChildEvent* event) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->childEvent(event);
    } else {
        vqscilexercss->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseChildEvent(QsciLexerCSS* self, QChildEvent* event) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_ChildEvent_IsBase(true);
        vqscilexercss->childEvent(event);
    } else {
        vqscilexercss->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnChildEvent(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_CustomEvent(QsciLexerCSS* self, QEvent* event) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->customEvent(event);
    } else {
        vqscilexercss->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseCustomEvent(QsciLexerCSS* self, QEvent* event) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_CustomEvent_IsBase(true);
        vqscilexercss->customEvent(event);
    } else {
        vqscilexercss->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnCustomEvent(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_ConnectNotify(QsciLexerCSS* self, QMetaMethod* signal) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->connectNotify(*signal);
    } else {
        vqscilexercss->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseConnectNotify(QsciLexerCSS* self, QMetaMethod* signal) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_ConnectNotify_IsBase(true);
        vqscilexercss->connectNotify(*signal);
    } else {
        vqscilexercss->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnConnectNotify(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCSS_DisconnectNotify(QsciLexerCSS* self, QMetaMethod* signal) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->disconnectNotify(*signal);
    } else {
        vqscilexercss->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCSS_QBaseDisconnectNotify(QsciLexerCSS* self, QMetaMethod* signal) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_DisconnectNotify_IsBase(true);
        vqscilexercss->disconnectNotify(*signal);
    } else {
        vqscilexercss->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDisconnectNotify(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->setQsciLexerCSS_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerCSS_Sender(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->sender();
    } else {
        return vqscilexercss->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerCSS_QBaseSender(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Sender_IsBase(true);
        return vqscilexercss->sender();
    } else {
        return vqscilexercss->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSender(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Sender_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_SenderSignalIndex(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->senderSignalIndex();
    } else {
        return vqscilexercss->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseSenderSignalIndex(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_SenderSignalIndex_IsBase(true);
        return vqscilexercss->senderSignalIndex();
    } else {
        return vqscilexercss->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSenderSignalIndex(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCSS_Receivers(const QsciLexerCSS* self, const char* signal) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->receivers(signal);
    } else {
        return vqscilexercss->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerCSS_QBaseReceivers(const QsciLexerCSS* self, const char* signal) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Receivers_IsBase(true);
        return vqscilexercss->receivers(signal);
    } else {
        return vqscilexercss->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnReceivers(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_Receivers_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCSS_IsSignalConnected(const QsciLexerCSS* self, QMetaMethod* signal) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->isSignalConnected(*signal);
    } else {
        return vqscilexercss->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerCSS_QBaseIsSignalConnected(const QsciLexerCSS* self, QMetaMethod* signal) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_IsSignalConnected_IsBase(true);
        return vqscilexercss->isSignalConnected(*signal);
    } else {
        return vqscilexercss->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnIsSignalConnected(const QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        vqscilexercss->setQsciLexerCSS_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerCSS_Delete(QsciLexerCSS* self) {
    delete self;
}
