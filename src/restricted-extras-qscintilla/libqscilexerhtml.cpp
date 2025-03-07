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
#include <qscilexerhtml.h>
#include "libqscilexerhtml.hpp"
#include "libqscilexerhtml.hxx"

QsciLexerHTML* QsciLexerHTML_new() {
    return new VirtualQsciLexerHTML();
}

QsciLexerHTML* QsciLexerHTML_new2(QObject* parent) {
    return new VirtualQsciLexerHTML(parent);
}

QMetaObject* QsciLexerHTML_MetaObject(const QsciLexerHTML* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerHTML_Metacast(QsciLexerHTML* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerHTML_Metacall(QsciLexerHTML* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerHTML_OnMetacall(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_Metacall_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerHTML_QBaseMetacall(QsciLexerHTML* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_Metacall_IsBase(true);
        return vqscilexerhtml->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerHTML_Tr(const char* s) {
    QString _ret = QsciLexerHTML::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerHTML_DefaultColor(const QsciLexerHTML* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerHTML_DefaultFont(const QsciLexerHTML* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerHTML_DefaultPaper(const QsciLexerHTML* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerHTML_CaseSensitiveTags(const QsciLexerHTML* self) {
    return self->caseSensitiveTags();
}

void QsciLexerHTML_SetDjangoTemplates(QsciLexerHTML* self, bool enabled) {
    self->setDjangoTemplates(enabled);
}

bool QsciLexerHTML_DjangoTemplates(const QsciLexerHTML* self) {
    return self->djangoTemplates();
}

bool QsciLexerHTML_FoldCompact(const QsciLexerHTML* self) {
    return self->foldCompact();
}

bool QsciLexerHTML_FoldPreprocessor(const QsciLexerHTML* self) {
    return self->foldPreprocessor();
}

void QsciLexerHTML_SetFoldScriptComments(QsciLexerHTML* self, bool fold) {
    self->setFoldScriptComments(fold);
}

bool QsciLexerHTML_FoldScriptComments(const QsciLexerHTML* self) {
    return self->foldScriptComments();
}

void QsciLexerHTML_SetFoldScriptHeredocs(QsciLexerHTML* self, bool fold) {
    self->setFoldScriptHeredocs(fold);
}

bool QsciLexerHTML_FoldScriptHeredocs(const QsciLexerHTML* self) {
    return self->foldScriptHeredocs();
}

void QsciLexerHTML_SetMakoTemplates(QsciLexerHTML* self, bool enabled) {
    self->setMakoTemplates(enabled);
}

bool QsciLexerHTML_MakoTemplates(const QsciLexerHTML* self) {
    return self->makoTemplates();
}

libqt_string QsciLexerHTML_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerHTML::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerHTML_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerHTML::tr(s, c, static_cast<int>(n));
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
void QsciLexerHTML_SetFoldCompact(QsciLexerHTML* self, bool fold) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setFoldCompact(fold);
    } else {
        vqscilexerhtml->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetFoldCompact(QsciLexerHTML* self, bool fold) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetFoldCompact_IsBase(true);
        vqscilexerhtml->setFoldCompact(fold);
    } else {
        vqscilexerhtml->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetFoldCompact(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetFoldPreprocessor(QsciLexerHTML* self, bool fold) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setFoldPreprocessor(fold);
    } else {
        vqscilexerhtml->setFoldPreprocessor(fold);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetFoldPreprocessor(QsciLexerHTML* self, bool fold) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetFoldPreprocessor_IsBase(true);
        vqscilexerhtml->setFoldPreprocessor(fold);
    } else {
        vqscilexerhtml->setFoldPreprocessor(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetFoldPreprocessor(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetFoldPreprocessor_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetFoldPreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetCaseSensitiveTags(QsciLexerHTML* self, bool sens) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setCaseSensitiveTags(sens);
    } else {
        vqscilexerhtml->setCaseSensitiveTags(sens);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetCaseSensitiveTags(QsciLexerHTML* self, bool sens) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetCaseSensitiveTags_IsBase(true);
        vqscilexerhtml->setCaseSensitiveTags(sens);
    } else {
        vqscilexerhtml->setCaseSensitiveTags(sens);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetCaseSensitiveTags(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetCaseSensitiveTags_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetCaseSensitiveTags_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_Language(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return (const char*)vqscilexerhtml->language();
    } else {
        return (const char*)vqscilexerhtml->language();
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseLanguage(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Language_IsBase(true);
        return (const char*)vqscilexerhtml->language();
    } else {
        return (const char*)vqscilexerhtml->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnLanguage(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Language_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_Lexer(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return (const char*)vqscilexerhtml->lexer();
    } else {
        return (const char*)vqscilexerhtml->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseLexer(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Lexer_IsBase(true);
        return (const char*)vqscilexerhtml->lexer();
    } else {
        return (const char*)vqscilexerhtml->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnLexer(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Lexer_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_LexerId(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->lexerId();
    } else {
        return vqscilexerhtml->lexerId();
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseLexerId(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_LexerId_IsBase(true);
        return vqscilexerhtml->lexerId();
    } else {
        return vqscilexerhtml->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnLexerId(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_LexerId_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_AutoCompletionFillups(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return (const char*)vqscilexerhtml->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerhtml->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseAutoCompletionFillups(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerhtml->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerhtml->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnAutoCompletionFillups(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerHTML_AutoCompletionWordSeparators(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        QStringList _ret = vqscilexerhtml->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerhtml->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerHTML_QBaseAutoCompletionWordSeparators(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerhtml->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerhtml->autoCompletionWordSeparators();
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
void QsciLexerHTML_OnAutoCompletionWordSeparators(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_BlockEnd(const QsciLexerHTML* self, int* style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return (const char*)vqscilexerhtml->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerhtml->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseBlockEnd(const QsciLexerHTML* self, int* style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_BlockEnd_IsBase(true);
        return (const char*)vqscilexerhtml->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerhtml->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBlockEnd(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_BlockLookback(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->blockLookback();
    } else {
        return vqscilexerhtml->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseBlockLookback(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_BlockLookback_IsBase(true);
        return vqscilexerhtml->blockLookback();
    } else {
        return vqscilexerhtml->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBlockLookback(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_BlockStart(const QsciLexerHTML* self, int* style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return (const char*)vqscilexerhtml->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerhtml->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseBlockStart(const QsciLexerHTML* self, int* style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_BlockStart_IsBase(true);
        return (const char*)vqscilexerhtml->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerhtml->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBlockStart(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_BlockStartKeyword(const QsciLexerHTML* self, int* style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return (const char*)vqscilexerhtml->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerhtml->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseBlockStartKeyword(const QsciLexerHTML* self, int* style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerhtml->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerhtml->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBlockStartKeyword(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_BraceStyle(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->braceStyle();
    } else {
        return vqscilexerhtml->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseBraceStyle(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_BraceStyle_IsBase(true);
        return vqscilexerhtml->braceStyle();
    } else {
        return vqscilexerhtml->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBraceStyle(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_CaseSensitive(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->caseSensitive();
    } else {
        return vqscilexerhtml->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseCaseSensitive(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_CaseSensitive_IsBase(true);
        return vqscilexerhtml->caseSensitive();
    } else {
        return vqscilexerhtml->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnCaseSensitive(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerHTML_Color(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return new QColor(vqscilexerhtml->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerHTML_QBaseColor(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Color_IsBase(true);
        return new QColor(vqscilexerhtml->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnColor(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Color_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_EolFill(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerhtml->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseEolFill(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_EolFill_IsBase(true);
        return vqscilexerhtml->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerhtml->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnEolFill(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_EolFill_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerHTML_Font(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return new QFont(vqscilexerhtml->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerHTML_QBaseFont(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Font_IsBase(true);
        return new QFont(vqscilexerhtml->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnFont(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Font_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_IndentationGuideView(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->indentationGuideView();
    } else {
        return vqscilexerhtml->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseIndentationGuideView(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_IndentationGuideView_IsBase(true);
        return vqscilexerhtml->indentationGuideView();
    } else {
        return vqscilexerhtml->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnIndentationGuideView(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_Keywords(const QsciLexerHTML* self, int set) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return (const char*)vqscilexerhtml->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerhtml->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseKeywords(const QsciLexerHTML* self, int set) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Keywords_IsBase(true);
        return (const char*)vqscilexerhtml->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerhtml->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnKeywords(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Keywords_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_DefaultStyle(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->defaultStyle();
    } else {
        return vqscilexerhtml->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseDefaultStyle(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_DefaultStyle_IsBase(true);
        return vqscilexerhtml->defaultStyle();
    } else {
        return vqscilexerhtml->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDefaultStyle(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerHTML_Description(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        QString _ret = vqscilexerhtml->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerhtml->description(static_cast<int>(style));
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
libqt_string QsciLexerHTML_QBaseDescription(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Description_IsBase(true);
        QString _ret = vqscilexerhtml->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerhtml->description(static_cast<int>(style));
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
void QsciLexerHTML_OnDescription(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Description_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerHTML_Paper(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return new QColor(vqscilexerhtml->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerHTML_QBasePaper(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Paper_IsBase(true);
        return new QColor(vqscilexerhtml->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnPaper(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Paper_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerHTML_DefaultColorWithStyle(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return new QColor(vqscilexerhtml->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerHTML_QBaseDefaultColorWithStyle(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerhtml->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDefaultColorWithStyle(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_DefaultEolFill(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerhtml->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseDefaultEolFill(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_DefaultEolFill_IsBase(true);
        return vqscilexerhtml->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerhtml->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDefaultEolFill(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerHTML_DefaultFontWithStyle(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return new QFont(vqscilexerhtml->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerHTML_QBaseDefaultFontWithStyle(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerhtml->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDefaultFontWithStyle(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerHTML_DefaultPaperWithStyle(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return new QColor(vqscilexerhtml->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerHTML_QBaseDefaultPaperWithStyle(const QsciLexerHTML* self, int style) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerhtml->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDefaultPaperWithStyle(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetEditor(QsciLexerHTML* self, QsciScintilla* editor) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setEditor(editor);
    } else {
        vqscilexerhtml->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetEditor(QsciLexerHTML* self, QsciScintilla* editor) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetEditor_IsBase(true);
        vqscilexerhtml->setEditor(editor);
    } else {
        vqscilexerhtml->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetEditor(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_RefreshProperties(QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->refreshProperties();
    } else {
        vqscilexerhtml->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseRefreshProperties(QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_RefreshProperties_IsBase(true);
        vqscilexerhtml->refreshProperties();
    } else {
        vqscilexerhtml->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnRefreshProperties(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_StyleBitsNeeded(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->styleBitsNeeded();
    } else {
        return vqscilexerhtml->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseStyleBitsNeeded(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_StyleBitsNeeded_IsBase(true);
        return vqscilexerhtml->styleBitsNeeded();
    } else {
        return vqscilexerhtml->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnStyleBitsNeeded(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerHTML_WordCharacters(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return (const char*)vqscilexerhtml->wordCharacters();
    } else {
        return (const char*)vqscilexerhtml->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerHTML_QBaseWordCharacters(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_WordCharacters_IsBase(true);
        return (const char*)vqscilexerhtml->wordCharacters();
    } else {
        return (const char*)vqscilexerhtml->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnWordCharacters(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetAutoIndentStyle(QsciLexerHTML* self, int autoindentstyle) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerhtml->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetAutoIndentStyle(QsciLexerHTML* self, int autoindentstyle) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetAutoIndentStyle_IsBase(true);
        vqscilexerhtml->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerhtml->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetAutoIndentStyle(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetColor(QsciLexerHTML* self, QColor* c, int style) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerhtml->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetColor(QsciLexerHTML* self, QColor* c, int style) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetColor_IsBase(true);
        vqscilexerhtml->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerhtml->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetColor(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetColor_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetEolFill(QsciLexerHTML* self, bool eoffill, int style) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerhtml->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetEolFill(QsciLexerHTML* self, bool eoffill, int style) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetEolFill_IsBase(true);
        vqscilexerhtml->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerhtml->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetEolFill(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetFont(QsciLexerHTML* self, QFont* f, int style) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerhtml->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetFont(QsciLexerHTML* self, QFont* f, int style) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetFont_IsBase(true);
        vqscilexerhtml->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerhtml->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetFont(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetFont_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_SetPaper(QsciLexerHTML* self, QColor* c, int style) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerhtml->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseSetPaper(QsciLexerHTML* self, QColor* c, int style) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetPaper_IsBase(true);
        vqscilexerhtml->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerhtml->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetPaper(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_ReadProperties(QsciLexerHTML* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        return vqscilexerhtml->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerhtml->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseReadProperties(QsciLexerHTML* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_ReadProperties_IsBase(true);
        return vqscilexerhtml->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerhtml->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnReadProperties(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_WriteProperties(const QsciLexerHTML* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerhtml->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseWriteProperties(const QsciLexerHTML* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_WriteProperties_IsBase(true);
        return vqscilexerhtml->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerhtml->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnWriteProperties(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_Event(QsciLexerHTML* self, QEvent* event) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        return vqscilexerhtml->event(event);
    } else {
        return vqscilexerhtml->event(event);
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseEvent(QsciLexerHTML* self, QEvent* event) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_Event_IsBase(true);
        return vqscilexerhtml->event(event);
    } else {
        return vqscilexerhtml->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnEvent(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_Event_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_EventFilter(QsciLexerHTML* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        return vqscilexerhtml->eventFilter(watched, event);
    } else {
        return vqscilexerhtml->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseEventFilter(QsciLexerHTML* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_EventFilter_IsBase(true);
        return vqscilexerhtml->eventFilter(watched, event);
    } else {
        return vqscilexerhtml->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnEventFilter(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_TimerEvent(QsciLexerHTML* self, QTimerEvent* event) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->timerEvent(event);
    } else {
        vqscilexerhtml->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseTimerEvent(QsciLexerHTML* self, QTimerEvent* event) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_TimerEvent_IsBase(true);
        vqscilexerhtml->timerEvent(event);
    } else {
        vqscilexerhtml->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnTimerEvent(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_ChildEvent(QsciLexerHTML* self, QChildEvent* event) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->childEvent(event);
    } else {
        vqscilexerhtml->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseChildEvent(QsciLexerHTML* self, QChildEvent* event) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_ChildEvent_IsBase(true);
        vqscilexerhtml->childEvent(event);
    } else {
        vqscilexerhtml->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnChildEvent(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_CustomEvent(QsciLexerHTML* self, QEvent* event) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->customEvent(event);
    } else {
        vqscilexerhtml->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseCustomEvent(QsciLexerHTML* self, QEvent* event) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_CustomEvent_IsBase(true);
        vqscilexerhtml->customEvent(event);
    } else {
        vqscilexerhtml->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnCustomEvent(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_ConnectNotify(QsciLexerHTML* self, QMetaMethod* signal) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->connectNotify(*signal);
    } else {
        vqscilexerhtml->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseConnectNotify(QsciLexerHTML* self, QMetaMethod* signal) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_ConnectNotify_IsBase(true);
        vqscilexerhtml->connectNotify(*signal);
    } else {
        vqscilexerhtml->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnConnectNotify(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerHTML_DisconnectNotify(QsciLexerHTML* self, QMetaMethod* signal) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->disconnectNotify(*signal);
    } else {
        vqscilexerhtml->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerHTML_QBaseDisconnectNotify(QsciLexerHTML* self, QMetaMethod* signal) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_DisconnectNotify_IsBase(true);
        vqscilexerhtml->disconnectNotify(*signal);
    } else {
        vqscilexerhtml->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDisconnectNotify(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->setQsciLexerHTML_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerHTML_Sender(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->sender();
    } else {
        return vqscilexerhtml->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerHTML_QBaseSender(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Sender_IsBase(true);
        return vqscilexerhtml->sender();
    } else {
        return vqscilexerhtml->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSender(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Sender_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_SenderSignalIndex(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->senderSignalIndex();
    } else {
        return vqscilexerhtml->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseSenderSignalIndex(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_SenderSignalIndex_IsBase(true);
        return vqscilexerhtml->senderSignalIndex();
    } else {
        return vqscilexerhtml->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSenderSignalIndex(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerHTML_Receivers(const QsciLexerHTML* self, const char* signal) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->receivers(signal);
    } else {
        return vqscilexerhtml->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerHTML_QBaseReceivers(const QsciLexerHTML* self, const char* signal) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Receivers_IsBase(true);
        return vqscilexerhtml->receivers(signal);
    } else {
        return vqscilexerhtml->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnReceivers(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_Receivers_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerHTML_IsSignalConnected(const QsciLexerHTML* self, QMetaMethod* signal) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->isSignalConnected(*signal);
    } else {
        return vqscilexerhtml->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerHTML_QBaseIsSignalConnected(const QsciLexerHTML* self, QMetaMethod* signal) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_IsSignalConnected_IsBase(true);
        return vqscilexerhtml->isSignalConnected(*signal);
    } else {
        return vqscilexerhtml->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnIsSignalConnected(const QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        vqscilexerhtml->setQsciLexerHTML_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerHTML_Delete(QsciLexerHTML* self) {
    delete self;
}
