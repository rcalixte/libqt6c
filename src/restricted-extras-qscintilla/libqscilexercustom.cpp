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
#include <qscilexercustom.h>
#include "libqscilexercustom.hpp"
#include "libqscilexercustom.hxx"

QsciLexerCustom* QsciLexerCustom_new() {
    return new VirtualQsciLexerCustom();
}

QsciLexerCustom* QsciLexerCustom_new2(QObject* parent) {
    return new VirtualQsciLexerCustom(parent);
}

QMetaObject* QsciLexerCustom_MetaObject(const QsciLexerCustom* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCustom_Metacast(QsciLexerCustom* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCustom_Metacall(QsciLexerCustom* self, int param1, int param2, void** param3) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerCustom_OnMetacall(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_Metacall_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerCustom_QBaseMetacall(QsciLexerCustom* self, int param1, int param2, void** param3) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_Metacall_IsBase(true);
        return vqscilexercustom->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerCustom_Tr(const char* s) {
    QString _ret = QsciLexerCustom::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QsciLexerCustom_SetStyling(QsciLexerCustom* self, int length, int style) {
    self->setStyling(static_cast<int>(length), static_cast<int>(style));
}

void QsciLexerCustom_SetStyling2(QsciLexerCustom* self, int length, QsciStyle* style) {
    self->setStyling(static_cast<int>(length), *style);
}

void QsciLexerCustom_StartStyling(QsciLexerCustom* self, int pos) {
    self->startStyling(static_cast<int>(pos));
}

libqt_string QsciLexerCustom_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerCustom::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCustom_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerCustom::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QsciLexerCustom_StartStyling2(QsciLexerCustom* self, int pos, int styleBits) {
    self->startStyling(static_cast<int>(pos), static_cast<int>(styleBits));
}

// Derived class handler implementation
void QsciLexerCustom_StyleText(QsciLexerCustom* self, int start, int end) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->styleText(static_cast<int>(start), static_cast<int>(end));
    } else {
        vqscilexercustom->styleText(static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QsciLexerCustom_QBaseStyleText(QsciLexerCustom* self, int start, int end) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_StyleText_IsBase(true);
        vqscilexercustom->styleText(static_cast<int>(start), static_cast<int>(end));
    } else {
        vqscilexercustom->styleText(static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnStyleText(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_StyleText_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_StyleText_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCustom_SetEditor(QsciLexerCustom* self, QsciScintilla* editor) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setEditor(editor);
    } else {
        vqscilexercustom->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerCustom_QBaseSetEditor(QsciLexerCustom* self, QsciScintilla* editor) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_SetEditor_IsBase(true);
        vqscilexercustom->setEditor(editor);
    } else {
        vqscilexercustom->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnSetEditor(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCustom_StyleBitsNeeded(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->styleBitsNeeded();
    } else {
        return vqscilexercustom->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerCustom_QBaseStyleBitsNeeded(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_StyleBitsNeeded_IsBase(true);
        return vqscilexercustom->styleBitsNeeded();
    } else {
        return vqscilexercustom->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnStyleBitsNeeded(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCustom_Language(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return (const char*)vqscilexercustom->language();
    } else {
        return (const char*)vqscilexercustom->language();
    }
}

// Base class handler implementation
const char* QsciLexerCustom_QBaseLanguage(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Language_IsBase(true);
        return (const char*)vqscilexercustom->language();
    } else {
        return (const char*)vqscilexercustom->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnLanguage(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Language_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCustom_Lexer(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return (const char*)vqscilexercustom->lexer();
    } else {
        return (const char*)vqscilexercustom->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerCustom_QBaseLexer(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Lexer_IsBase(true);
        return (const char*)vqscilexercustom->lexer();
    } else {
        return (const char*)vqscilexercustom->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnLexer(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Lexer_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCustom_LexerId(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->lexerId();
    } else {
        return vqscilexercustom->lexerId();
    }
}

// Base class handler implementation
int QsciLexerCustom_QBaseLexerId(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_LexerId_IsBase(true);
        return vqscilexercustom->lexerId();
    } else {
        return vqscilexercustom->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnLexerId(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_LexerId_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCustom_AutoCompletionFillups(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return (const char*)vqscilexercustom->autoCompletionFillups();
    } else {
        return (const char*)vqscilexercustom->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerCustom_QBaseAutoCompletionFillups(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexercustom->autoCompletionFillups();
    } else {
        return (const char*)vqscilexercustom->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnAutoCompletionFillups(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerCustom_AutoCompletionWordSeparators(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        QStringList _ret = vqscilexercustom->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexercustom->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerCustom_QBaseAutoCompletionWordSeparators(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexercustom->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexercustom->autoCompletionWordSeparators();
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
void QsciLexerCustom_OnAutoCompletionWordSeparators(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCustom_BlockEnd(const QsciLexerCustom* self, int* style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return (const char*)vqscilexercustom->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercustom->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCustom_QBaseBlockEnd(const QsciLexerCustom* self, int* style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_BlockEnd_IsBase(true);
        return (const char*)vqscilexercustom->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercustom->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnBlockEnd(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCustom_BlockLookback(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->blockLookback();
    } else {
        return vqscilexercustom->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerCustom_QBaseBlockLookback(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_BlockLookback_IsBase(true);
        return vqscilexercustom->blockLookback();
    } else {
        return vqscilexercustom->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnBlockLookback(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCustom_BlockStart(const QsciLexerCustom* self, int* style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return (const char*)vqscilexercustom->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercustom->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCustom_QBaseBlockStart(const QsciLexerCustom* self, int* style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_BlockStart_IsBase(true);
        return (const char*)vqscilexercustom->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercustom->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnBlockStart(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCustom_BlockStartKeyword(const QsciLexerCustom* self, int* style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return (const char*)vqscilexercustom->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercustom->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerCustom_QBaseBlockStartKeyword(const QsciLexerCustom* self, int* style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexercustom->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexercustom->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnBlockStartKeyword(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCustom_BraceStyle(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->braceStyle();
    } else {
        return vqscilexercustom->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerCustom_QBaseBraceStyle(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_BraceStyle_IsBase(true);
        return vqscilexercustom->braceStyle();
    } else {
        return vqscilexercustom->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnBraceStyle(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCustom_CaseSensitive(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->caseSensitive();
    } else {
        return vqscilexercustom->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerCustom_QBaseCaseSensitive(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_CaseSensitive_IsBase(true);
        return vqscilexercustom->caseSensitive();
    } else {
        return vqscilexercustom->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnCaseSensitive(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCustom_Color(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return new QColor(vqscilexercustom->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCustom_QBaseColor(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Color_IsBase(true);
        return new QColor(vqscilexercustom->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnColor(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Color_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCustom_EolFill(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->eolFill(static_cast<int>(style));
    } else {
        return vqscilexercustom->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCustom_QBaseEolFill(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_EolFill_IsBase(true);
        return vqscilexercustom->eolFill(static_cast<int>(style));
    } else {
        return vqscilexercustom->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnEolFill(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_EolFill_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCustom_Font(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return new QFont(vqscilexercustom->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCustom_QBaseFont(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Font_IsBase(true);
        return new QFont(vqscilexercustom->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnFont(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Font_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCustom_IndentationGuideView(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->indentationGuideView();
    } else {
        return vqscilexercustom->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerCustom_QBaseIndentationGuideView(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_IndentationGuideView_IsBase(true);
        return vqscilexercustom->indentationGuideView();
    } else {
        return vqscilexercustom->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnIndentationGuideView(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCustom_Keywords(const QsciLexerCustom* self, int set) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return (const char*)vqscilexercustom->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexercustom->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerCustom_QBaseKeywords(const QsciLexerCustom* self, int set) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Keywords_IsBase(true);
        return (const char*)vqscilexercustom->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexercustom->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnKeywords(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Keywords_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCustom_DefaultStyle(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->defaultStyle();
    } else {
        return vqscilexercustom->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerCustom_QBaseDefaultStyle(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_DefaultStyle_IsBase(true);
        return vqscilexercustom->defaultStyle();
    } else {
        return vqscilexercustom->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnDefaultStyle(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerCustom_Description(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        QString _ret = vqscilexercustom->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexercustom->description(static_cast<int>(style));
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
libqt_string QsciLexerCustom_QBaseDescription(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Description_IsBase(true);
        QString _ret = vqscilexercustom->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexercustom->description(static_cast<int>(style));
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
void QsciLexerCustom_OnDescription(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Description_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCustom_Paper(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return new QColor(vqscilexercustom->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCustom_QBasePaper(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Paper_IsBase(true);
        return new QColor(vqscilexercustom->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnPaper(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Paper_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCustom_DefaultColorWithStyle(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return new QColor(vqscilexercustom->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCustom_QBaseDefaultColorWithStyle(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexercustom->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnDefaultColorWithStyle(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCustom_DefaultEolFill(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexercustom->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerCustom_QBaseDefaultEolFill(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_DefaultEolFill_IsBase(true);
        return vqscilexercustom->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexercustom->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnDefaultEolFill(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerCustom_DefaultFontWithStyle(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return new QFont(vqscilexercustom->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerCustom_QBaseDefaultFontWithStyle(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexercustom->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnDefaultFontWithStyle(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerCustom_DefaultPaperWithStyle(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return new QColor(vqscilexercustom->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerCustom_QBaseDefaultPaperWithStyle(const QsciLexerCustom* self, int style) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexercustom->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnDefaultPaperWithStyle(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCustom_RefreshProperties(QsciLexerCustom* self) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->refreshProperties();
    } else {
        vqscilexercustom->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerCustom_QBaseRefreshProperties(QsciLexerCustom* self) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_RefreshProperties_IsBase(true);
        vqscilexercustom->refreshProperties();
    } else {
        vqscilexercustom->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnRefreshProperties(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerCustom_WordCharacters(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return (const char*)vqscilexercustom->wordCharacters();
    } else {
        return (const char*)vqscilexercustom->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerCustom_QBaseWordCharacters(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_WordCharacters_IsBase(true);
        return (const char*)vqscilexercustom->wordCharacters();
    } else {
        return (const char*)vqscilexercustom->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnWordCharacters(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCustom_SetAutoIndentStyle(QsciLexerCustom* self, int autoindentstyle) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexercustom->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerCustom_QBaseSetAutoIndentStyle(QsciLexerCustom* self, int autoindentstyle) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_SetAutoIndentStyle_IsBase(true);
        vqscilexercustom->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexercustom->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnSetAutoIndentStyle(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCustom_SetColor(QsciLexerCustom* self, QColor* c, int style) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexercustom->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCustom_QBaseSetColor(QsciLexerCustom* self, QColor* c, int style) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_SetColor_IsBase(true);
        vqscilexercustom->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexercustom->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnSetColor(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_SetColor_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCustom_SetEolFill(QsciLexerCustom* self, bool eoffill, int style) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexercustom->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCustom_QBaseSetEolFill(QsciLexerCustom* self, bool eoffill, int style) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_SetEolFill_IsBase(true);
        vqscilexercustom->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexercustom->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnSetEolFill(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCustom_SetFont(QsciLexerCustom* self, QFont* f, int style) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexercustom->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCustom_QBaseSetFont(QsciLexerCustom* self, QFont* f, int style) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_SetFont_IsBase(true);
        vqscilexercustom->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexercustom->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnSetFont(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_SetFont_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCustom_SetPaper(QsciLexerCustom* self, QColor* c, int style) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexercustom->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerCustom_QBaseSetPaper(QsciLexerCustom* self, QColor* c, int style) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_SetPaper_IsBase(true);
        vqscilexercustom->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexercustom->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnSetPaper(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCustom_ReadProperties(QsciLexerCustom* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        return vqscilexercustom->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexercustom->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCustom_QBaseReadProperties(QsciLexerCustom* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_ReadProperties_IsBase(true);
        return vqscilexercustom->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexercustom->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnReadProperties(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCustom_WriteProperties(const QsciLexerCustom* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexercustom->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerCustom_QBaseWriteProperties(const QsciLexerCustom* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_WriteProperties_IsBase(true);
        return vqscilexercustom->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexercustom->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnWriteProperties(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCustom_Event(QsciLexerCustom* self, QEvent* event) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        return vqscilexercustom->event(event);
    } else {
        return vqscilexercustom->event(event);
    }
}

// Base class handler implementation
bool QsciLexerCustom_QBaseEvent(QsciLexerCustom* self, QEvent* event) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_Event_IsBase(true);
        return vqscilexercustom->event(event);
    } else {
        return vqscilexercustom->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnEvent(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_Event_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCustom_EventFilter(QsciLexerCustom* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        return vqscilexercustom->eventFilter(watched, event);
    } else {
        return vqscilexercustom->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerCustom_QBaseEventFilter(QsciLexerCustom* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_EventFilter_IsBase(true);
        return vqscilexercustom->eventFilter(watched, event);
    } else {
        return vqscilexercustom->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnEventFilter(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCustom_TimerEvent(QsciLexerCustom* self, QTimerEvent* event) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->timerEvent(event);
    } else {
        vqscilexercustom->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCustom_QBaseTimerEvent(QsciLexerCustom* self, QTimerEvent* event) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_TimerEvent_IsBase(true);
        vqscilexercustom->timerEvent(event);
    } else {
        vqscilexercustom->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnTimerEvent(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCustom_ChildEvent(QsciLexerCustom* self, QChildEvent* event) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->childEvent(event);
    } else {
        vqscilexercustom->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCustom_QBaseChildEvent(QsciLexerCustom* self, QChildEvent* event) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_ChildEvent_IsBase(true);
        vqscilexercustom->childEvent(event);
    } else {
        vqscilexercustom->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnChildEvent(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCustom_CustomEvent(QsciLexerCustom* self, QEvent* event) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->customEvent(event);
    } else {
        vqscilexercustom->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerCustom_QBaseCustomEvent(QsciLexerCustom* self, QEvent* event) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_CustomEvent_IsBase(true);
        vqscilexercustom->customEvent(event);
    } else {
        vqscilexercustom->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnCustomEvent(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCustom_ConnectNotify(QsciLexerCustom* self, QMetaMethod* signal) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->connectNotify(*signal);
    } else {
        vqscilexercustom->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCustom_QBaseConnectNotify(QsciLexerCustom* self, QMetaMethod* signal) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_ConnectNotify_IsBase(true);
        vqscilexercustom->connectNotify(*signal);
    } else {
        vqscilexercustom->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnConnectNotify(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerCustom_DisconnectNotify(QsciLexerCustom* self, QMetaMethod* signal) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->disconnectNotify(*signal);
    } else {
        vqscilexercustom->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerCustom_QBaseDisconnectNotify(QsciLexerCustom* self, QMetaMethod* signal) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_DisconnectNotify_IsBase(true);
        vqscilexercustom->disconnectNotify(*signal);
    } else {
        vqscilexercustom->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnDisconnectNotify(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->setQsciLexerCustom_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerCustom_Sender(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->sender();
    } else {
        return vqscilexercustom->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerCustom_QBaseSender(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Sender_IsBase(true);
        return vqscilexercustom->sender();
    } else {
        return vqscilexercustom->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnSender(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Sender_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCustom_SenderSignalIndex(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->senderSignalIndex();
    } else {
        return vqscilexercustom->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerCustom_QBaseSenderSignalIndex(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_SenderSignalIndex_IsBase(true);
        return vqscilexercustom->senderSignalIndex();
    } else {
        return vqscilexercustom->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnSenderSignalIndex(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerCustom_Receivers(const QsciLexerCustom* self, const char* signal) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->receivers(signal);
    } else {
        return vqscilexercustom->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerCustom_QBaseReceivers(const QsciLexerCustom* self, const char* signal) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Receivers_IsBase(true);
        return vqscilexercustom->receivers(signal);
    } else {
        return vqscilexercustom->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnReceivers(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_Receivers_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerCustom_IsSignalConnected(const QsciLexerCustom* self, QMetaMethod* signal) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->isSignalConnected(*signal);
    } else {
        return vqscilexercustom->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerCustom_QBaseIsSignalConnected(const QsciLexerCustom* self, QMetaMethod* signal) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_IsSignalConnected_IsBase(true);
        return vqscilexercustom->isSignalConnected(*signal);
    } else {
        return vqscilexercustom->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnIsSignalConnected(const QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        vqscilexercustom->setQsciLexerCustom_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerCustom_Delete(QsciLexerCustom* self) {
    delete self;
}
