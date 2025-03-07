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
#include <qscilexercpp.h>
#include "libqscilexercpp.hpp"
#include "libqscilexercpp.hxx"

QsciLexerCPP* QsciLexerCPP_new() {
    return new VirtualQsciLexerCPP();
}

QsciLexerCPP* QsciLexerCPP_new2(QObject* parent) {
    return new VirtualQsciLexerCPP(parent);
}

QsciLexerCPP* QsciLexerCPP_new3(QObject* parent, bool caseInsensitiveKeywords) {
    return new VirtualQsciLexerCPP(parent, caseInsensitiveKeywords);
}

QMetaObject* QsciLexerCPP_MetaObject(const QsciLexerCPP* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCPP_Metacast(QsciLexerCPP* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCPP_Metacall(QsciLexerCPP* self, int param1, int param2, void** param3) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerCPP_OnMetacall(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_Metacall_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerCPP_QBaseMetacall(QsciLexerCPP* self, int param1, int param2, void** param3) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_Metacall_IsBase(true);
        return vqscilexercpp->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerCPP_Tr(const char* s) {
    QString _ret = QsciLexerCPP::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerCPP_DefaultColor(const QsciLexerCPP* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerCPP_DefaultFont(const QsciLexerCPP* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCPP_DefaultPaper(const QsciLexerCPP* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerCPP_FoldAtElse(const QsciLexerCPP* self) {
    return self->foldAtElse();
}

bool QsciLexerCPP_FoldComments(const QsciLexerCPP* self) {
    return self->foldComments();
}

bool QsciLexerCPP_FoldCompact(const QsciLexerCPP* self) {
    return self->foldCompact();
}

bool QsciLexerCPP_FoldPreprocessor(const QsciLexerCPP* self) {
    return self->foldPreprocessor();
}

bool QsciLexerCPP_StylePreprocessor(const QsciLexerCPP* self) {
    return self->stylePreprocessor();
}

void QsciLexerCPP_SetDollarsAllowed(QsciLexerCPP* self, bool allowed) {
    self->setDollarsAllowed(allowed);
}

bool QsciLexerCPP_DollarsAllowed(const QsciLexerCPP* self) {
    return self->dollarsAllowed();
}

void QsciLexerCPP_SetHighlightTripleQuotedStrings(QsciLexerCPP* self, bool enabled) {
    self->setHighlightTripleQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightTripleQuotedStrings(const QsciLexerCPP* self) {
    return self->highlightTripleQuotedStrings();
}

void QsciLexerCPP_SetHighlightHashQuotedStrings(QsciLexerCPP* self, bool enabled) {
    self->setHighlightHashQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightHashQuotedStrings(const QsciLexerCPP* self) {
    return self->highlightHashQuotedStrings();
}

void QsciLexerCPP_SetHighlightBackQuotedStrings(QsciLexerCPP* self, bool enabled) {
    self->setHighlightBackQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightBackQuotedStrings(const QsciLexerCPP* self) {
    return self->highlightBackQuotedStrings();
}

void QsciLexerCPP_SetHighlightEscapeSequences(QsciLexerCPP* self, bool enabled) {
    self->setHighlightEscapeSequences(enabled);
}

bool QsciLexerCPP_HighlightEscapeSequences(const QsciLexerCPP* self) {
    return self->highlightEscapeSequences();
}

void QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed(QsciLexerCPP* self, bool allowed) {
    self->setVerbatimStringEscapeSequencesAllowed(allowed);
}

bool QsciLexerCPP_VerbatimStringEscapeSequencesAllowed(const QsciLexerCPP* self) {
    return self->verbatimStringEscapeSequencesAllowed();
}

libqt_string QsciLexerCPP_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerCPP::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCPP_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerCPP::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

const char* QsciLexerCPP_BlockEnd1(const QsciLexerCPP* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCPP_BlockStart1(const QsciLexerCPP* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerCPP_BlockStartKeyword1(const QsciLexerCPP* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Derived class handler implementation
void QsciLexerCPP_SetFoldAtElse(QsciLexerCPP* self, bool fold) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setFoldAtElse(fold);
    } else {
        vqscilexercpp->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetFoldAtElse(QsciLexerCPP* self, bool fold) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetFoldAtElse_IsBase(true);
        vqscilexercpp->setFoldAtElse(fold);
    } else {
        vqscilexercpp->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFoldAtElse(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetFoldComments(QsciLexerCPP* self, bool fold) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setFoldComments(fold);
    } else {
        vqscilexercpp->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetFoldComments(QsciLexerCPP* self, bool fold) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetFoldComments_IsBase(true);
        vqscilexercpp->setFoldComments(fold);
    } else {
        vqscilexercpp->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFoldComments(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetFoldCompact(QsciLexerCPP* self, bool fold) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setFoldCompact(fold);
    } else {
        vqscilexercpp->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetFoldCompact(QsciLexerCPP* self, bool fold) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetFoldCompact_IsBase(true);
        vqscilexercpp->setFoldCompact(fold);
    } else {
        vqscilexercpp->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFoldCompact(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetFoldPreprocessor(QsciLexerCPP* self, bool fold) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setFoldPreprocessor(fold);
    } else {
        vqscilexercpp->setFoldPreprocessor(fold);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetFoldPreprocessor(QsciLexerCPP* self, bool fold) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetFoldPreprocessor_IsBase(true);
        vqscilexercpp->setFoldPreprocessor(fold);
    } else {
        vqscilexercpp->setFoldPreprocessor(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFoldPreprocessor(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetFoldPreprocessor_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFoldPreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetStylePreprocessor(QsciLexerCPP* self, bool style) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setStylePreprocessor(style);
    } else {
        vqscilexercpp->setStylePreprocessor(style);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetStylePreprocessor(QsciLexerCPP* self, bool style) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetStylePreprocessor_IsBase(true);
        vqscilexercpp->setStylePreprocessor(style);
    } else {
        vqscilexercpp->setStylePreprocessor(style);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetStylePreprocessor(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetStylePreprocessor_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetStylePreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_Language(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return (const char*)vqscilexercpp->language();
    } else {
        return (const char*)vqscilexercpp->language();
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseLanguage(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Language_IsBase(true);
        return (const char*)vqscilexercpp->language();
    } else {
        return (const char*)vqscilexercpp->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnLanguage(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Language_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_Lexer(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return (const char*)vqscilexercpp->lexer();
    } else {
        return (const char*)vqscilexercpp->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseLexer(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Lexer_IsBase(true);
        return (const char*)vqscilexercpp->lexer();
    } else {
        return (const char*)vqscilexercpp->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnLexer(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Lexer_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_LexerId(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->lexerId();
    } else {
        return vqscilexercpp->lexerId();
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseLexerId(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_LexerId_IsBase(true);
        return vqscilexercpp->lexerId();
    } else {
        return vqscilexercpp->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnLexerId(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_LexerId_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_AutoCompletionFillups(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return (const char*)vqscilexercpp->autoCompletionFillups();
    } else {
        return (const char*)vqscilexercpp->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseAutoCompletionFillups(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexercpp->autoCompletionFillups();
    } else {
        return (const char*)vqscilexercpp->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnAutoCompletionFillups(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerCPP_AutoCompletionWordSeparators(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        QStringList _ret = vqscilexercpp->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexercpp->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerCPP_QBaseAutoCompletionWordSeparators(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexercpp->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexercpp->autoCompletionWordSeparators();
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
void QsciLexerCPP_OnAutoCompletionWordSeparators(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_BlockEnd(const QsciLexerCPP* self, int* style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return (const char*)vqscilexercpp->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercpp->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseBlockEnd(const QsciLexerCPP* self, int* style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_BlockEnd_IsBase(true);
        return (const char*)vqscilexercpp->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercpp->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnBlockEnd(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_BlockLookback(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->blockLookback();
    } else {
        return vqscilexercpp->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseBlockLookback(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_BlockLookback_IsBase(true);
        return vqscilexercpp->blockLookback();
    } else {
        return vqscilexercpp->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnBlockLookback(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_BlockStart(const QsciLexerCPP* self, int* style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return (const char*)vqscilexercpp->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercpp->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseBlockStart(const QsciLexerCPP* self, int* style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_BlockStart_IsBase(true);
        return (const char*)vqscilexercpp->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercpp->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnBlockStart(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_BlockStartKeyword(const QsciLexerCPP* self, int* style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return (const char*)vqscilexercpp->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercpp->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseBlockStartKeyword(const QsciLexerCPP* self, int* style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexercpp->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercpp->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnBlockStartKeyword(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_BraceStyle(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->braceStyle();
    } else {
        return vqscilexercpp->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseBraceStyle(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_BraceStyle_IsBase(true);
        return vqscilexercpp->braceStyle();
    } else {
        return vqscilexercpp->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnBraceStyle(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_CaseSensitive(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->caseSensitive();
    } else {
        return vqscilexercpp->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseCaseSensitive(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_CaseSensitive_IsBase(true);
        return vqscilexercpp->caseSensitive();
    } else {
        return vqscilexercpp->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnCaseSensitive(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCPP_Color(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return new QColor(vqscilexercpp->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCPP_QBaseColor(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Color_IsBase(true);
        return new QColor(vqscilexercpp->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnColor(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Color_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_EolFill(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->eolFill(static_cast<int>(style));
    } else {
        return vqscilexercpp->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseEolFill(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_EolFill_IsBase(true);
        return vqscilexercpp->eolFill(static_cast<int>(style));
    } else {
        return vqscilexercpp->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnEolFill(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_EolFill_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCPP_Font(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return new QFont(vqscilexercpp->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCPP_QBaseFont(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Font_IsBase(true);
        return new QFont(vqscilexercpp->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnFont(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Font_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_IndentationGuideView(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->indentationGuideView();
    } else {
        return vqscilexercpp->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseIndentationGuideView(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_IndentationGuideView_IsBase(true);
        return vqscilexercpp->indentationGuideView();
    } else {
        return vqscilexercpp->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnIndentationGuideView(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_Keywords(const QsciLexerCPP* self, int set) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return (const char*)vqscilexercpp->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexercpp->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseKeywords(const QsciLexerCPP* self, int set) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Keywords_IsBase(true);
        return (const char*)vqscilexercpp->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexercpp->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnKeywords(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Keywords_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_DefaultStyle(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->defaultStyle();
    } else {
        return vqscilexercpp->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseDefaultStyle(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_DefaultStyle_IsBase(true);
        return vqscilexercpp->defaultStyle();
    } else {
        return vqscilexercpp->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDefaultStyle(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCPP_Description(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        QString _ret = vqscilexercpp->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexercpp->description(static_cast<int>(style));
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
libqt_string QsciLexerCPP_QBaseDescription(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Description_IsBase(true);
        QString _ret = vqscilexercpp->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexercpp->description(static_cast<int>(style));
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
void QsciLexerCPP_OnDescription(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Description_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCPP_Paper(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return new QColor(vqscilexercpp->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCPP_QBasePaper(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Paper_IsBase(true);
        return new QColor(vqscilexercpp->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnPaper(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Paper_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCPP_DefaultColorWithStyle(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return new QColor(vqscilexercpp->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCPP_QBaseDefaultColorWithStyle(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexercpp->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDefaultColorWithStyle(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_DefaultEolFill(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexercpp->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseDefaultEolFill(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_DefaultEolFill_IsBase(true);
        return vqscilexercpp->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexercpp->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDefaultEolFill(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCPP_DefaultFontWithStyle(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return new QFont(vqscilexercpp->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCPP_QBaseDefaultFontWithStyle(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexercpp->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDefaultFontWithStyle(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCPP_DefaultPaperWithStyle(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return new QColor(vqscilexercpp->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCPP_QBaseDefaultPaperWithStyle(const QsciLexerCPP* self, int style) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexercpp->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDefaultPaperWithStyle(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetEditor(QsciLexerCPP* self, QsciScintilla* editor) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setEditor(editor);
    } else {
        vqscilexercpp->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetEditor(QsciLexerCPP* self, QsciScintilla* editor) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetEditor_IsBase(true);
        vqscilexercpp->setEditor(editor);
    } else {
        vqscilexercpp->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetEditor(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_RefreshProperties(QsciLexerCPP* self) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->refreshProperties();
    } else {
        vqscilexercpp->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseRefreshProperties(QsciLexerCPP* self) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_RefreshProperties_IsBase(true);
        vqscilexercpp->refreshProperties();
    } else {
        vqscilexercpp->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnRefreshProperties(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_StyleBitsNeeded(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->styleBitsNeeded();
    } else {
        return vqscilexercpp->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseStyleBitsNeeded(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_StyleBitsNeeded_IsBase(true);
        return vqscilexercpp->styleBitsNeeded();
    } else {
        return vqscilexercpp->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnStyleBitsNeeded(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCPP_WordCharacters(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return (const char*)vqscilexercpp->wordCharacters();
    } else {
        return (const char*)vqscilexercpp->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerCPP_QBaseWordCharacters(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_WordCharacters_IsBase(true);
        return (const char*)vqscilexercpp->wordCharacters();
    } else {
        return (const char*)vqscilexercpp->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnWordCharacters(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetAutoIndentStyle(QsciLexerCPP* self, int autoindentstyle) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexercpp->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetAutoIndentStyle(QsciLexerCPP* self, int autoindentstyle) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetAutoIndentStyle_IsBase(true);
        vqscilexercpp->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexercpp->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetAutoIndentStyle(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetColor(QsciLexerCPP* self, QColor* c, int style) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexercpp->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetColor(QsciLexerCPP* self, QColor* c, int style) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetColor_IsBase(true);
        vqscilexercpp->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexercpp->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetColor(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetColor_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetEolFill(QsciLexerCPP* self, bool eoffill, int style) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexercpp->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetEolFill(QsciLexerCPP* self, bool eoffill, int style) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetEolFill_IsBase(true);
        vqscilexercpp->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexercpp->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetEolFill(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetFont(QsciLexerCPP* self, QFont* f, int style) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexercpp->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetFont(QsciLexerCPP* self, QFont* f, int style) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetFont_IsBase(true);
        vqscilexercpp->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexercpp->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFont(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetFont_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_SetPaper(QsciLexerCPP* self, QColor* c, int style) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexercpp->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseSetPaper(QsciLexerCPP* self, QColor* c, int style) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetPaper_IsBase(true);
        vqscilexercpp->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexercpp->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetPaper(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_ReadProperties(QsciLexerCPP* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        return vqscilexercpp->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexercpp->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseReadProperties(QsciLexerCPP* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_ReadProperties_IsBase(true);
        return vqscilexercpp->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexercpp->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnReadProperties(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_WriteProperties(const QsciLexerCPP* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexercpp->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseWriteProperties(const QsciLexerCPP* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_WriteProperties_IsBase(true);
        return vqscilexercpp->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexercpp->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnWriteProperties(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_Event(QsciLexerCPP* self, QEvent* event) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        return vqscilexercpp->event(event);
    } else {
        return vqscilexercpp->event(event);
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseEvent(QsciLexerCPP* self, QEvent* event) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_Event_IsBase(true);
        return vqscilexercpp->event(event);
    } else {
        return vqscilexercpp->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnEvent(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_Event_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_EventFilter(QsciLexerCPP* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        return vqscilexercpp->eventFilter(watched, event);
    } else {
        return vqscilexercpp->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseEventFilter(QsciLexerCPP* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_EventFilter_IsBase(true);
        return vqscilexercpp->eventFilter(watched, event);
    } else {
        return vqscilexercpp->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnEventFilter(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_TimerEvent(QsciLexerCPP* self, QTimerEvent* event) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->timerEvent(event);
    } else {
        vqscilexercpp->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseTimerEvent(QsciLexerCPP* self, QTimerEvent* event) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_TimerEvent_IsBase(true);
        vqscilexercpp->timerEvent(event);
    } else {
        vqscilexercpp->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnTimerEvent(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_ChildEvent(QsciLexerCPP* self, QChildEvent* event) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->childEvent(event);
    } else {
        vqscilexercpp->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseChildEvent(QsciLexerCPP* self, QChildEvent* event) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_ChildEvent_IsBase(true);
        vqscilexercpp->childEvent(event);
    } else {
        vqscilexercpp->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnChildEvent(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_CustomEvent(QsciLexerCPP* self, QEvent* event) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->customEvent(event);
    } else {
        vqscilexercpp->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseCustomEvent(QsciLexerCPP* self, QEvent* event) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_CustomEvent_IsBase(true);
        vqscilexercpp->customEvent(event);
    } else {
        vqscilexercpp->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnCustomEvent(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_ConnectNotify(QsciLexerCPP* self, QMetaMethod* signal) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->connectNotify(*signal);
    } else {
        vqscilexercpp->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseConnectNotify(QsciLexerCPP* self, QMetaMethod* signal) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_ConnectNotify_IsBase(true);
        vqscilexercpp->connectNotify(*signal);
    } else {
        vqscilexercpp->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnConnectNotify(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCPP_DisconnectNotify(QsciLexerCPP* self, QMetaMethod* signal) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->disconnectNotify(*signal);
    } else {
        vqscilexercpp->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCPP_QBaseDisconnectNotify(QsciLexerCPP* self, QMetaMethod* signal) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_DisconnectNotify_IsBase(true);
        vqscilexercpp->disconnectNotify(*signal);
    } else {
        vqscilexercpp->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDisconnectNotify(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->setQsciLexerCPP_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerCPP_Sender(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->sender();
    } else {
        return vqscilexercpp->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerCPP_QBaseSender(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Sender_IsBase(true);
        return vqscilexercpp->sender();
    } else {
        return vqscilexercpp->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSender(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Sender_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_SenderSignalIndex(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->senderSignalIndex();
    } else {
        return vqscilexercpp->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseSenderSignalIndex(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_SenderSignalIndex_IsBase(true);
        return vqscilexercpp->senderSignalIndex();
    } else {
        return vqscilexercpp->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSenderSignalIndex(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCPP_Receivers(const QsciLexerCPP* self, const char* signal) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->receivers(signal);
    } else {
        return vqscilexercpp->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerCPP_QBaseReceivers(const QsciLexerCPP* self, const char* signal) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Receivers_IsBase(true);
        return vqscilexercpp->receivers(signal);
    } else {
        return vqscilexercpp->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnReceivers(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_Receivers_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCPP_IsSignalConnected(const QsciLexerCPP* self, QMetaMethod* signal) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->isSignalConnected(*signal);
    } else {
        return vqscilexercpp->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerCPP_QBaseIsSignalConnected(const QsciLexerCPP* self, QMetaMethod* signal) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_IsSignalConnected_IsBase(true);
        return vqscilexercpp->isSignalConnected(*signal);
    } else {
        return vqscilexercpp->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnIsSignalConnected(const QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        vqscilexercpp->setQsciLexerCPP_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerCPP_Delete(QsciLexerCPP* self) {
    delete self;
}
