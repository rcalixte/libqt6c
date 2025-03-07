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
#include <qscilexerxml.h>
#include "libqscilexerxml.hpp"
#include "libqscilexerxml.hxx"

QsciLexerXML* QsciLexerXML_new() {
    return new VirtualQsciLexerXML();
}

QsciLexerXML* QsciLexerXML_new2(QObject* parent) {
    return new VirtualQsciLexerXML(parent);
}

QMetaObject* QsciLexerXML_MetaObject(const QsciLexerXML* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerXML_Metacast(QsciLexerXML* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerXML_Metacall(QsciLexerXML* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerXML_OnMetacall(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_Metacall_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerXML_QBaseMetacall(QsciLexerXML* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_Metacall_IsBase(true);
        return vqscilexerxml->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerXML_Tr(const char* s) {
    QString _ret = QsciLexerXML::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerXML_DefaultColor(const QsciLexerXML* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerXML_DefaultFont(const QsciLexerXML* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerXML_DefaultPaper(const QsciLexerXML* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

void QsciLexerXML_SetScriptsStyled(QsciLexerXML* self, bool styled) {
    self->setScriptsStyled(styled);
}

bool QsciLexerXML_ScriptsStyled(const QsciLexerXML* self) {
    return self->scriptsStyled();
}

libqt_string QsciLexerXML_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerXML::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerXML_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerXML::tr(s, c, static_cast<int>(n));
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
void QsciLexerXML_SetFoldCompact(QsciLexerXML* self, bool fold) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setFoldCompact(fold);
    } else {
        vqscilexerxml->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseSetFoldCompact(QsciLexerXML* self, bool fold) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetFoldCompact_IsBase(true);
        vqscilexerxml->setFoldCompact(fold);
    } else {
        vqscilexerxml->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetFoldCompact(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerXML_SetFoldPreprocessor(QsciLexerXML* self, bool fold) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setFoldPreprocessor(fold);
    } else {
        vqscilexerxml->setFoldPreprocessor(fold);
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseSetFoldPreprocessor(QsciLexerXML* self, bool fold) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetFoldPreprocessor_IsBase(true);
        vqscilexerxml->setFoldPreprocessor(fold);
    } else {
        vqscilexerxml->setFoldPreprocessor(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetFoldPreprocessor(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetFoldPreprocessor_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetFoldPreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerXML_SetCaseSensitiveTags(QsciLexerXML* self, bool sens) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setCaseSensitiveTags(sens);
    } else {
        vqscilexerxml->setCaseSensitiveTags(sens);
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseSetCaseSensitiveTags(QsciLexerXML* self, bool sens) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetCaseSensitiveTags_IsBase(true);
        vqscilexerxml->setCaseSensitiveTags(sens);
    } else {
        vqscilexerxml->setCaseSensitiveTags(sens);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetCaseSensitiveTags(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetCaseSensitiveTags_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetCaseSensitiveTags_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerXML_Language(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return (const char*)vqscilexerxml->language();
    } else {
        return (const char*)vqscilexerxml->language();
    }
}

// Base class handler implementation
const char* QsciLexerXML_QBaseLanguage(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Language_IsBase(true);
        return (const char*)vqscilexerxml->language();
    } else {
        return (const char*)vqscilexerxml->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnLanguage(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Language_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerXML_Lexer(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return (const char*)vqscilexerxml->lexer();
    } else {
        return (const char*)vqscilexerxml->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerXML_QBaseLexer(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Lexer_IsBase(true);
        return (const char*)vqscilexerxml->lexer();
    } else {
        return (const char*)vqscilexerxml->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnLexer(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Lexer_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerXML_LexerId(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->lexerId();
    } else {
        return vqscilexerxml->lexerId();
    }
}

// Base class handler implementation
int QsciLexerXML_QBaseLexerId(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_LexerId_IsBase(true);
        return vqscilexerxml->lexerId();
    } else {
        return vqscilexerxml->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnLexerId(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_LexerId_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerXML_AutoCompletionFillups(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return (const char*)vqscilexerxml->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerxml->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerXML_QBaseAutoCompletionFillups(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerxml->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerxml->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnAutoCompletionFillups(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerXML_AutoCompletionWordSeparators(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        QStringList _ret = vqscilexerxml->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerxml->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerXML_QBaseAutoCompletionWordSeparators(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerxml->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerxml->autoCompletionWordSeparators();
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
void QsciLexerXML_OnAutoCompletionWordSeparators(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerXML_BlockEnd(const QsciLexerXML* self, int* style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return (const char*)vqscilexerxml->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerxml->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerXML_QBaseBlockEnd(const QsciLexerXML* self, int* style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_BlockEnd_IsBase(true);
        return (const char*)vqscilexerxml->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerxml->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnBlockEnd(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerXML_BlockLookback(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->blockLookback();
    } else {
        return vqscilexerxml->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerXML_QBaseBlockLookback(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_BlockLookback_IsBase(true);
        return vqscilexerxml->blockLookback();
    } else {
        return vqscilexerxml->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnBlockLookback(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerXML_BlockStart(const QsciLexerXML* self, int* style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return (const char*)vqscilexerxml->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerxml->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerXML_QBaseBlockStart(const QsciLexerXML* self, int* style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_BlockStart_IsBase(true);
        return (const char*)vqscilexerxml->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerxml->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnBlockStart(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerXML_BlockStartKeyword(const QsciLexerXML* self, int* style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return (const char*)vqscilexerxml->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerxml->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerXML_QBaseBlockStartKeyword(const QsciLexerXML* self, int* style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerxml->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerxml->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnBlockStartKeyword(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerXML_BraceStyle(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->braceStyle();
    } else {
        return vqscilexerxml->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerXML_QBaseBraceStyle(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_BraceStyle_IsBase(true);
        return vqscilexerxml->braceStyle();
    } else {
        return vqscilexerxml->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnBraceStyle(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerXML_CaseSensitive(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->caseSensitive();
    } else {
        return vqscilexerxml->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerXML_QBaseCaseSensitive(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_CaseSensitive_IsBase(true);
        return vqscilexerxml->caseSensitive();
    } else {
        return vqscilexerxml->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnCaseSensitive(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerXML_Color(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return new QColor(vqscilexerxml->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerXML_QBaseColor(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Color_IsBase(true);
        return new QColor(vqscilexerxml->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnColor(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Color_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerXML_EolFill(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerxml->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerXML_QBaseEolFill(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_EolFill_IsBase(true);
        return vqscilexerxml->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerxml->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnEolFill(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_EolFill_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerXML_Font(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return new QFont(vqscilexerxml->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerXML_QBaseFont(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Font_IsBase(true);
        return new QFont(vqscilexerxml->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnFont(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Font_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerXML_IndentationGuideView(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->indentationGuideView();
    } else {
        return vqscilexerxml->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerXML_QBaseIndentationGuideView(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_IndentationGuideView_IsBase(true);
        return vqscilexerxml->indentationGuideView();
    } else {
        return vqscilexerxml->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnIndentationGuideView(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerXML_Keywords(const QsciLexerXML* self, int set) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return (const char*)vqscilexerxml->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerxml->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerXML_QBaseKeywords(const QsciLexerXML* self, int set) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Keywords_IsBase(true);
        return (const char*)vqscilexerxml->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerxml->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnKeywords(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Keywords_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerXML_DefaultStyle(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->defaultStyle();
    } else {
        return vqscilexerxml->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerXML_QBaseDefaultStyle(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_DefaultStyle_IsBase(true);
        return vqscilexerxml->defaultStyle();
    } else {
        return vqscilexerxml->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnDefaultStyle(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerXML_Description(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        QString _ret = vqscilexerxml->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerxml->description(static_cast<int>(style));
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
libqt_string QsciLexerXML_QBaseDescription(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Description_IsBase(true);
        QString _ret = vqscilexerxml->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerxml->description(static_cast<int>(style));
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
void QsciLexerXML_OnDescription(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Description_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerXML_Paper(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return new QColor(vqscilexerxml->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerXML_QBasePaper(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Paper_IsBase(true);
        return new QColor(vqscilexerxml->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnPaper(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Paper_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerXML_DefaultColorWithStyle(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return new QColor(vqscilexerxml->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerXML_QBaseDefaultColorWithStyle(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerxml->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnDefaultColorWithStyle(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerXML_DefaultEolFill(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerxml->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerXML_QBaseDefaultEolFill(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_DefaultEolFill_IsBase(true);
        return vqscilexerxml->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerxml->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnDefaultEolFill(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerXML_DefaultFontWithStyle(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return new QFont(vqscilexerxml->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerXML_QBaseDefaultFontWithStyle(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerxml->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnDefaultFontWithStyle(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerXML_DefaultPaperWithStyle(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return new QColor(vqscilexerxml->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerXML_QBaseDefaultPaperWithStyle(const QsciLexerXML* self, int style) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerxml->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnDefaultPaperWithStyle(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerXML_SetEditor(QsciLexerXML* self, QsciScintilla* editor) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setEditor(editor);
    } else {
        vqscilexerxml->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseSetEditor(QsciLexerXML* self, QsciScintilla* editor) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetEditor_IsBase(true);
        vqscilexerxml->setEditor(editor);
    } else {
        vqscilexerxml->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetEditor(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerXML_RefreshProperties(QsciLexerXML* self) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->refreshProperties();
    } else {
        vqscilexerxml->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseRefreshProperties(QsciLexerXML* self) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_RefreshProperties_IsBase(true);
        vqscilexerxml->refreshProperties();
    } else {
        vqscilexerxml->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnRefreshProperties(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerXML_StyleBitsNeeded(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->styleBitsNeeded();
    } else {
        return vqscilexerxml->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerXML_QBaseStyleBitsNeeded(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_StyleBitsNeeded_IsBase(true);
        return vqscilexerxml->styleBitsNeeded();
    } else {
        return vqscilexerxml->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnStyleBitsNeeded(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerXML_WordCharacters(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return (const char*)vqscilexerxml->wordCharacters();
    } else {
        return (const char*)vqscilexerxml->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerXML_QBaseWordCharacters(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_WordCharacters_IsBase(true);
        return (const char*)vqscilexerxml->wordCharacters();
    } else {
        return (const char*)vqscilexerxml->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnWordCharacters(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerXML_SetAutoIndentStyle(QsciLexerXML* self, int autoindentstyle) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerxml->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseSetAutoIndentStyle(QsciLexerXML* self, int autoindentstyle) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetAutoIndentStyle_IsBase(true);
        vqscilexerxml->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerxml->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetAutoIndentStyle(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerXML_SetColor(QsciLexerXML* self, QColor* c, int style) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerxml->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseSetColor(QsciLexerXML* self, QColor* c, int style) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetColor_IsBase(true);
        vqscilexerxml->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerxml->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetColor(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetColor_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerXML_SetEolFill(QsciLexerXML* self, bool eoffill, int style) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerxml->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseSetEolFill(QsciLexerXML* self, bool eoffill, int style) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetEolFill_IsBase(true);
        vqscilexerxml->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerxml->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetEolFill(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerXML_SetFont(QsciLexerXML* self, QFont* f, int style) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerxml->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseSetFont(QsciLexerXML* self, QFont* f, int style) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetFont_IsBase(true);
        vqscilexerxml->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerxml->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetFont(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetFont_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerXML_SetPaper(QsciLexerXML* self, QColor* c, int style) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerxml->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseSetPaper(QsciLexerXML* self, QColor* c, int style) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetPaper_IsBase(true);
        vqscilexerxml->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerxml->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetPaper(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerXML_ReadProperties(QsciLexerXML* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        return vqscilexerxml->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerxml->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerXML_QBaseReadProperties(QsciLexerXML* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_ReadProperties_IsBase(true);
        return vqscilexerxml->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerxml->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnReadProperties(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerXML_WriteProperties(const QsciLexerXML* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerxml->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerXML_QBaseWriteProperties(const QsciLexerXML* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_WriteProperties_IsBase(true);
        return vqscilexerxml->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerxml->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnWriteProperties(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerXML_Event(QsciLexerXML* self, QEvent* event) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        return vqscilexerxml->event(event);
    } else {
        return vqscilexerxml->event(event);
    }
}

// Base class handler implementation
bool QsciLexerXML_QBaseEvent(QsciLexerXML* self, QEvent* event) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_Event_IsBase(true);
        return vqscilexerxml->event(event);
    } else {
        return vqscilexerxml->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnEvent(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_Event_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerXML_EventFilter(QsciLexerXML* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        return vqscilexerxml->eventFilter(watched, event);
    } else {
        return vqscilexerxml->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerXML_QBaseEventFilter(QsciLexerXML* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_EventFilter_IsBase(true);
        return vqscilexerxml->eventFilter(watched, event);
    } else {
        return vqscilexerxml->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnEventFilter(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerXML_TimerEvent(QsciLexerXML* self, QTimerEvent* event) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->timerEvent(event);
    } else {
        vqscilexerxml->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseTimerEvent(QsciLexerXML* self, QTimerEvent* event) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_TimerEvent_IsBase(true);
        vqscilexerxml->timerEvent(event);
    } else {
        vqscilexerxml->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnTimerEvent(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerXML_ChildEvent(QsciLexerXML* self, QChildEvent* event) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->childEvent(event);
    } else {
        vqscilexerxml->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseChildEvent(QsciLexerXML* self, QChildEvent* event) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_ChildEvent_IsBase(true);
        vqscilexerxml->childEvent(event);
    } else {
        vqscilexerxml->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnChildEvent(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerXML_CustomEvent(QsciLexerXML* self, QEvent* event) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->customEvent(event);
    } else {
        vqscilexerxml->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseCustomEvent(QsciLexerXML* self, QEvent* event) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_CustomEvent_IsBase(true);
        vqscilexerxml->customEvent(event);
    } else {
        vqscilexerxml->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnCustomEvent(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerXML_ConnectNotify(QsciLexerXML* self, QMetaMethod* signal) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->connectNotify(*signal);
    } else {
        vqscilexerxml->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseConnectNotify(QsciLexerXML* self, QMetaMethod* signal) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_ConnectNotify_IsBase(true);
        vqscilexerxml->connectNotify(*signal);
    } else {
        vqscilexerxml->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnConnectNotify(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerXML_DisconnectNotify(QsciLexerXML* self, QMetaMethod* signal) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->disconnectNotify(*signal);
    } else {
        vqscilexerxml->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerXML_QBaseDisconnectNotify(QsciLexerXML* self, QMetaMethod* signal) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_DisconnectNotify_IsBase(true);
        vqscilexerxml->disconnectNotify(*signal);
    } else {
        vqscilexerxml->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnDisconnectNotify(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->setQsciLexerXML_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerXML_Sender(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->sender();
    } else {
        return vqscilexerxml->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerXML_QBaseSender(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Sender_IsBase(true);
        return vqscilexerxml->sender();
    } else {
        return vqscilexerxml->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSender(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Sender_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerXML_SenderSignalIndex(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->senderSignalIndex();
    } else {
        return vqscilexerxml->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerXML_QBaseSenderSignalIndex(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_SenderSignalIndex_IsBase(true);
        return vqscilexerxml->senderSignalIndex();
    } else {
        return vqscilexerxml->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSenderSignalIndex(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerXML_Receivers(const QsciLexerXML* self, const char* signal) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->receivers(signal);
    } else {
        return vqscilexerxml->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerXML_QBaseReceivers(const QsciLexerXML* self, const char* signal) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Receivers_IsBase(true);
        return vqscilexerxml->receivers(signal);
    } else {
        return vqscilexerxml->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnReceivers(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_Receivers_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerXML_IsSignalConnected(const QsciLexerXML* self, QMetaMethod* signal) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->isSignalConnected(*signal);
    } else {
        return vqscilexerxml->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerXML_QBaseIsSignalConnected(const QsciLexerXML* self, QMetaMethod* signal) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_IsSignalConnected_IsBase(true);
        return vqscilexerxml->isSignalConnected(*signal);
    } else {
        return vqscilexerxml->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnIsSignalConnected(const QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        vqscilexerxml->setQsciLexerXML_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerXML_Delete(QsciLexerXML* self) {
    delete self;
}
