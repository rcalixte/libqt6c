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
#include <qscilexerjava.h>
#include "libqscilexerjava.hpp"
#include "libqscilexerjava.hxx"

QsciLexerJava* QsciLexerJava_new() {
    return new VirtualQsciLexerJava();
}

QsciLexerJava* QsciLexerJava_new2(QObject* parent) {
    return new VirtualQsciLexerJava(parent);
}

QMetaObject* QsciLexerJava_MetaObject(const QsciLexerJava* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerJava_Metacast(QsciLexerJava* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerJava_Metacall(QsciLexerJava* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerJava_OnMetacall(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_Metacall_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerJava_QBaseMetacall(QsciLexerJava* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_Metacall_IsBase(true);
        return vqscilexerjava->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerJava_Tr(const char* s) {
    QString _ret = QsciLexerJava::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerJava_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerJava::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerJava_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerJava::tr(s, c, static_cast<int>(n));
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
void QsciLexerJava_SetFoldAtElse(QsciLexerJava* self, bool fold) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setFoldAtElse(fold);
    } else {
        vqscilexerjava->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetFoldAtElse(QsciLexerJava* self, bool fold) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetFoldAtElse_IsBase(true);
        vqscilexerjava->setFoldAtElse(fold);
    } else {
        vqscilexerjava->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFoldAtElse(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetFoldComments(QsciLexerJava* self, bool fold) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setFoldComments(fold);
    } else {
        vqscilexerjava->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetFoldComments(QsciLexerJava* self, bool fold) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetFoldComments_IsBase(true);
        vqscilexerjava->setFoldComments(fold);
    } else {
        vqscilexerjava->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFoldComments(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetFoldCompact(QsciLexerJava* self, bool fold) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setFoldCompact(fold);
    } else {
        vqscilexerjava->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetFoldCompact(QsciLexerJava* self, bool fold) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetFoldCompact_IsBase(true);
        vqscilexerjava->setFoldCompact(fold);
    } else {
        vqscilexerjava->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFoldCompact(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetFoldPreprocessor(QsciLexerJava* self, bool fold) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setFoldPreprocessor(fold);
    } else {
        vqscilexerjava->setFoldPreprocessor(fold);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetFoldPreprocessor(QsciLexerJava* self, bool fold) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetFoldPreprocessor_IsBase(true);
        vqscilexerjava->setFoldPreprocessor(fold);
    } else {
        vqscilexerjava->setFoldPreprocessor(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFoldPreprocessor(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetFoldPreprocessor_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFoldPreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetStylePreprocessor(QsciLexerJava* self, bool style) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setStylePreprocessor(style);
    } else {
        vqscilexerjava->setStylePreprocessor(style);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetStylePreprocessor(QsciLexerJava* self, bool style) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetStylePreprocessor_IsBase(true);
        vqscilexerjava->setStylePreprocessor(style);
    } else {
        vqscilexerjava->setStylePreprocessor(style);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetStylePreprocessor(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetStylePreprocessor_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetStylePreprocessor_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJava_Language(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return (const char*)vqscilexerjava->language();
    } else {
        return (const char*)vqscilexerjava->language();
    }
}

// Base class handler implementation
const char* QsciLexerJava_QBaseLanguage(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Language_IsBase(true);
        return (const char*)vqscilexerjava->language();
    } else {
        return (const char*)vqscilexerjava->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnLanguage(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Language_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJava_Lexer(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return (const char*)vqscilexerjava->lexer();
    } else {
        return (const char*)vqscilexerjava->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerJava_QBaseLexer(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Lexer_IsBase(true);
        return (const char*)vqscilexerjava->lexer();
    } else {
        return (const char*)vqscilexerjava->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnLexer(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Lexer_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_LexerId(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->lexerId();
    } else {
        return vqscilexerjava->lexerId();
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseLexerId(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_LexerId_IsBase(true);
        return vqscilexerjava->lexerId();
    } else {
        return vqscilexerjava->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnLexerId(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_LexerId_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJava_AutoCompletionFillups(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return (const char*)vqscilexerjava->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerjava->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerJava_QBaseAutoCompletionFillups(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerjava->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerjava->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnAutoCompletionFillups(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerJava_AutoCompletionWordSeparators(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        QStringList _ret = vqscilexerjava->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerjava->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerJava_QBaseAutoCompletionWordSeparators(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerjava->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerjava->autoCompletionWordSeparators();
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
void QsciLexerJava_OnAutoCompletionWordSeparators(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJava_BlockEnd(const QsciLexerJava* self, int* style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return (const char*)vqscilexerjava->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerjava->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJava_QBaseBlockEnd(const QsciLexerJava* self, int* style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_BlockEnd_IsBase(true);
        return (const char*)vqscilexerjava->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerjava->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBlockEnd(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_BlockLookback(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->blockLookback();
    } else {
        return vqscilexerjava->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseBlockLookback(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_BlockLookback_IsBase(true);
        return vqscilexerjava->blockLookback();
    } else {
        return vqscilexerjava->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBlockLookback(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJava_BlockStart(const QsciLexerJava* self, int* style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return (const char*)vqscilexerjava->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerjava->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJava_QBaseBlockStart(const QsciLexerJava* self, int* style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_BlockStart_IsBase(true);
        return (const char*)vqscilexerjava->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerjava->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBlockStart(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJava_BlockStartKeyword(const QsciLexerJava* self, int* style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return (const char*)vqscilexerjava->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerjava->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerJava_QBaseBlockStartKeyword(const QsciLexerJava* self, int* style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerjava->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerjava->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBlockStartKeyword(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_BraceStyle(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->braceStyle();
    } else {
        return vqscilexerjava->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseBraceStyle(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_BraceStyle_IsBase(true);
        return vqscilexerjava->braceStyle();
    } else {
        return vqscilexerjava->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnBraceStyle(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_CaseSensitive(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->caseSensitive();
    } else {
        return vqscilexerjava->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseCaseSensitive(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_CaseSensitive_IsBase(true);
        return vqscilexerjava->caseSensitive();
    } else {
        return vqscilexerjava->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnCaseSensitive(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJava_Color(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return new QColor(vqscilexerjava->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJava_QBaseColor(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Color_IsBase(true);
        return new QColor(vqscilexerjava->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnColor(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Color_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_EolFill(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerjava->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseEolFill(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_EolFill_IsBase(true);
        return vqscilexerjava->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerjava->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnEolFill(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_EolFill_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerJava_Font(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return new QFont(vqscilexerjava->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerJava_QBaseFont(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Font_IsBase(true);
        return new QFont(vqscilexerjava->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnFont(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Font_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_IndentationGuideView(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->indentationGuideView();
    } else {
        return vqscilexerjava->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseIndentationGuideView(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_IndentationGuideView_IsBase(true);
        return vqscilexerjava->indentationGuideView();
    } else {
        return vqscilexerjava->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnIndentationGuideView(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJava_Keywords(const QsciLexerJava* self, int set) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return (const char*)vqscilexerjava->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerjava->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerJava_QBaseKeywords(const QsciLexerJava* self, int set) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Keywords_IsBase(true);
        return (const char*)vqscilexerjava->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerjava->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnKeywords(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Keywords_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_DefaultStyle(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->defaultStyle();
    } else {
        return vqscilexerjava->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseDefaultStyle(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_DefaultStyle_IsBase(true);
        return vqscilexerjava->defaultStyle();
    } else {
        return vqscilexerjava->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultStyle(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerJava_Description(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        QString _ret = vqscilexerjava->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerjava->description(static_cast<int>(style));
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
libqt_string QsciLexerJava_QBaseDescription(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Description_IsBase(true);
        QString _ret = vqscilexerjava->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerjava->description(static_cast<int>(style));
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
void QsciLexerJava_OnDescription(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Description_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJava_Paper(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return new QColor(vqscilexerjava->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJava_QBasePaper(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Paper_IsBase(true);
        return new QColor(vqscilexerjava->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnPaper(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Paper_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJava_DefaultColorWithStyle(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return new QColor(vqscilexerjava->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJava_QBaseDefaultColorWithStyle(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerjava->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultColorWithStyle(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_DefaultEolFill(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerjava->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseDefaultEolFill(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_DefaultEolFill_IsBase(true);
        return vqscilexerjava->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerjava->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultEolFill(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerJava_DefaultFontWithStyle(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return new QFont(vqscilexerjava->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerJava_QBaseDefaultFontWithStyle(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerjava->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultFontWithStyle(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerJava_DefaultPaperWithStyle(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return new QColor(vqscilexerjava->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerJava_QBaseDefaultPaperWithStyle(const QsciLexerJava* self, int style) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerjava->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDefaultPaperWithStyle(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetEditor(QsciLexerJava* self, QsciScintilla* editor) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setEditor(editor);
    } else {
        vqscilexerjava->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetEditor(QsciLexerJava* self, QsciScintilla* editor) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetEditor_IsBase(true);
        vqscilexerjava->setEditor(editor);
    } else {
        vqscilexerjava->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetEditor(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_RefreshProperties(QsciLexerJava* self) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->refreshProperties();
    } else {
        vqscilexerjava->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseRefreshProperties(QsciLexerJava* self) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_RefreshProperties_IsBase(true);
        vqscilexerjava->refreshProperties();
    } else {
        vqscilexerjava->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnRefreshProperties(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_StyleBitsNeeded(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->styleBitsNeeded();
    } else {
        return vqscilexerjava->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseStyleBitsNeeded(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_StyleBitsNeeded_IsBase(true);
        return vqscilexerjava->styleBitsNeeded();
    } else {
        return vqscilexerjava->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnStyleBitsNeeded(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerJava_WordCharacters(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return (const char*)vqscilexerjava->wordCharacters();
    } else {
        return (const char*)vqscilexerjava->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerJava_QBaseWordCharacters(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_WordCharacters_IsBase(true);
        return (const char*)vqscilexerjava->wordCharacters();
    } else {
        return (const char*)vqscilexerjava->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnWordCharacters(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetAutoIndentStyle(QsciLexerJava* self, int autoindentstyle) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerjava->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetAutoIndentStyle(QsciLexerJava* self, int autoindentstyle) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetAutoIndentStyle_IsBase(true);
        vqscilexerjava->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerjava->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetAutoIndentStyle(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetColor(QsciLexerJava* self, QColor* c, int style) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerjava->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetColor(QsciLexerJava* self, QColor* c, int style) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetColor_IsBase(true);
        vqscilexerjava->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerjava->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetColor(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetColor_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetEolFill(QsciLexerJava* self, bool eoffill, int style) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerjava->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetEolFill(QsciLexerJava* self, bool eoffill, int style) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetEolFill_IsBase(true);
        vqscilexerjava->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerjava->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetEolFill(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetFont(QsciLexerJava* self, QFont* f, int style) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerjava->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetFont(QsciLexerJava* self, QFont* f, int style) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetFont_IsBase(true);
        vqscilexerjava->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerjava->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetFont(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetFont_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_SetPaper(QsciLexerJava* self, QColor* c, int style) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerjava->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseSetPaper(QsciLexerJava* self, QColor* c, int style) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetPaper_IsBase(true);
        vqscilexerjava->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerjava->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSetPaper(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_ReadProperties(QsciLexerJava* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        return vqscilexerjava->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerjava->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseReadProperties(QsciLexerJava* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_ReadProperties_IsBase(true);
        return vqscilexerjava->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerjava->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnReadProperties(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_WriteProperties(const QsciLexerJava* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerjava->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseWriteProperties(const QsciLexerJava* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_WriteProperties_IsBase(true);
        return vqscilexerjava->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerjava->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnWriteProperties(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_Event(QsciLexerJava* self, QEvent* event) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        return vqscilexerjava->event(event);
    } else {
        return vqscilexerjava->event(event);
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseEvent(QsciLexerJava* self, QEvent* event) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_Event_IsBase(true);
        return vqscilexerjava->event(event);
    } else {
        return vqscilexerjava->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnEvent(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_Event_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_EventFilter(QsciLexerJava* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        return vqscilexerjava->eventFilter(watched, event);
    } else {
        return vqscilexerjava->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseEventFilter(QsciLexerJava* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_EventFilter_IsBase(true);
        return vqscilexerjava->eventFilter(watched, event);
    } else {
        return vqscilexerjava->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnEventFilter(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_TimerEvent(QsciLexerJava* self, QTimerEvent* event) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->timerEvent(event);
    } else {
        vqscilexerjava->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseTimerEvent(QsciLexerJava* self, QTimerEvent* event) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_TimerEvent_IsBase(true);
        vqscilexerjava->timerEvent(event);
    } else {
        vqscilexerjava->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnTimerEvent(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_ChildEvent(QsciLexerJava* self, QChildEvent* event) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->childEvent(event);
    } else {
        vqscilexerjava->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseChildEvent(QsciLexerJava* self, QChildEvent* event) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_ChildEvent_IsBase(true);
        vqscilexerjava->childEvent(event);
    } else {
        vqscilexerjava->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnChildEvent(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_CustomEvent(QsciLexerJava* self, QEvent* event) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->customEvent(event);
    } else {
        vqscilexerjava->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseCustomEvent(QsciLexerJava* self, QEvent* event) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_CustomEvent_IsBase(true);
        vqscilexerjava->customEvent(event);
    } else {
        vqscilexerjava->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnCustomEvent(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_ConnectNotify(QsciLexerJava* self, QMetaMethod* signal) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->connectNotify(*signal);
    } else {
        vqscilexerjava->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseConnectNotify(QsciLexerJava* self, QMetaMethod* signal) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_ConnectNotify_IsBase(true);
        vqscilexerjava->connectNotify(*signal);
    } else {
        vqscilexerjava->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnConnectNotify(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerJava_DisconnectNotify(QsciLexerJava* self, QMetaMethod* signal) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->disconnectNotify(*signal);
    } else {
        vqscilexerjava->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerJava_QBaseDisconnectNotify(QsciLexerJava* self, QMetaMethod* signal) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_DisconnectNotify_IsBase(true);
        vqscilexerjava->disconnectNotify(*signal);
    } else {
        vqscilexerjava->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnDisconnectNotify(QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = dynamic_cast<VirtualQsciLexerJava*>(self)) {
        vqscilexerjava->setQsciLexerJava_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerJava_Sender(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->sender();
    } else {
        return vqscilexerjava->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerJava_QBaseSender(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Sender_IsBase(true);
        return vqscilexerjava->sender();
    } else {
        return vqscilexerjava->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSender(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Sender_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_SenderSignalIndex(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->senderSignalIndex();
    } else {
        return vqscilexerjava->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseSenderSignalIndex(const QsciLexerJava* self) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_SenderSignalIndex_IsBase(true);
        return vqscilexerjava->senderSignalIndex();
    } else {
        return vqscilexerjava->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnSenderSignalIndex(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerJava_Receivers(const QsciLexerJava* self, const char* signal) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->receivers(signal);
    } else {
        return vqscilexerjava->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerJava_QBaseReceivers(const QsciLexerJava* self, const char* signal) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Receivers_IsBase(true);
        return vqscilexerjava->receivers(signal);
    } else {
        return vqscilexerjava->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnReceivers(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_Receivers_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerJava_IsSignalConnected(const QsciLexerJava* self, QMetaMethod* signal) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        return vqscilexerjava->isSignalConnected(*signal);
    } else {
        return vqscilexerjava->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerJava_QBaseIsSignalConnected(const QsciLexerJava* self, QMetaMethod* signal) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_IsSignalConnected_IsBase(true);
        return vqscilexerjava->isSignalConnected(*signal);
    } else {
        return vqscilexerjava->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJava_OnIsSignalConnected(const QsciLexerJava* self, intptr_t slot) {
    if (auto* vqscilexerjava = const_cast<VirtualQsciLexerJava*>(dynamic_cast<const VirtualQsciLexerJava*>(self))) {
        vqscilexerjava->setQsciLexerJava_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerJava::QsciLexerJava_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerJava_Delete(QsciLexerJava* self) {
    delete self;
}
