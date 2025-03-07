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
#include <qscilexerlua.h>
#include "libqscilexerlua.hpp"
#include "libqscilexerlua.hxx"

QsciLexerLua* QsciLexerLua_new() {
    return new VirtualQsciLexerLua();
}

QsciLexerLua* QsciLexerLua_new2(QObject* parent) {
    return new VirtualQsciLexerLua(parent);
}

QMetaObject* QsciLexerLua_MetaObject(const QsciLexerLua* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerLua_Metacast(QsciLexerLua* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerLua_Metacall(QsciLexerLua* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerLua_OnMetacall(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_Metacall_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerLua_QBaseMetacall(QsciLexerLua* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_Metacall_IsBase(true);
        return vqscilexerlua->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerLua_Tr(const char* s) {
    QString _ret = QsciLexerLua::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerLua_DefaultColor(const QsciLexerLua* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerLua_DefaultFont(const QsciLexerLua* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerLua_DefaultPaper(const QsciLexerLua* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerLua_FoldCompact(const QsciLexerLua* self) {
    return self->foldCompact();
}

libqt_string QsciLexerLua_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerLua::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerLua_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerLua::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

const char* QsciLexerLua_BlockStart1(const QsciLexerLua* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Derived class handler implementation
void QsciLexerLua_SetFoldCompact(QsciLexerLua* self, bool fold) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setFoldCompact(fold);
    } else {
        vqscilexerlua->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerLua_QBaseSetFoldCompact(QsciLexerLua* self, bool fold) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_SetFoldCompact_IsBase(true);
        vqscilexerlua->setFoldCompact(fold);
    } else {
        vqscilexerlua->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSetFoldCompact(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerLua_Language(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return (const char*)vqscilexerlua->language();
    } else {
        return (const char*)vqscilexerlua->language();
    }
}

// Base class handler implementation
const char* QsciLexerLua_QBaseLanguage(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Language_IsBase(true);
        return (const char*)vqscilexerlua->language();
    } else {
        return (const char*)vqscilexerlua->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnLanguage(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Language_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerLua_Lexer(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return (const char*)vqscilexerlua->lexer();
    } else {
        return (const char*)vqscilexerlua->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerLua_QBaseLexer(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Lexer_IsBase(true);
        return (const char*)vqscilexerlua->lexer();
    } else {
        return (const char*)vqscilexerlua->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnLexer(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Lexer_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerLua_LexerId(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->lexerId();
    } else {
        return vqscilexerlua->lexerId();
    }
}

// Base class handler implementation
int QsciLexerLua_QBaseLexerId(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_LexerId_IsBase(true);
        return vqscilexerlua->lexerId();
    } else {
        return vqscilexerlua->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnLexerId(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_LexerId_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerLua_AutoCompletionFillups(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return (const char*)vqscilexerlua->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerlua->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerLua_QBaseAutoCompletionFillups(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerlua->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerlua->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnAutoCompletionFillups(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerLua_AutoCompletionWordSeparators(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        QStringList _ret = vqscilexerlua->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerlua->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerLua_QBaseAutoCompletionWordSeparators(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerlua->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerlua->autoCompletionWordSeparators();
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
void QsciLexerLua_OnAutoCompletionWordSeparators(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerLua_BlockEnd(const QsciLexerLua* self, int* style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return (const char*)vqscilexerlua->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerlua->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerLua_QBaseBlockEnd(const QsciLexerLua* self, int* style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_BlockEnd_IsBase(true);
        return (const char*)vqscilexerlua->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerlua->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnBlockEnd(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerLua_BlockLookback(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->blockLookback();
    } else {
        return vqscilexerlua->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerLua_QBaseBlockLookback(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_BlockLookback_IsBase(true);
        return vqscilexerlua->blockLookback();
    } else {
        return vqscilexerlua->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnBlockLookback(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerLua_BlockStart(const QsciLexerLua* self, int* style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return (const char*)vqscilexerlua->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerlua->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerLua_QBaseBlockStart(const QsciLexerLua* self, int* style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_BlockStart_IsBase(true);
        return (const char*)vqscilexerlua->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerlua->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnBlockStart(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerLua_BlockStartKeyword(const QsciLexerLua* self, int* style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return (const char*)vqscilexerlua->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerlua->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerLua_QBaseBlockStartKeyword(const QsciLexerLua* self, int* style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerlua->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerlua->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnBlockStartKeyword(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerLua_BraceStyle(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->braceStyle();
    } else {
        return vqscilexerlua->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerLua_QBaseBraceStyle(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_BraceStyle_IsBase(true);
        return vqscilexerlua->braceStyle();
    } else {
        return vqscilexerlua->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnBraceStyle(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerLua_CaseSensitive(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->caseSensitive();
    } else {
        return vqscilexerlua->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerLua_QBaseCaseSensitive(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_CaseSensitive_IsBase(true);
        return vqscilexerlua->caseSensitive();
    } else {
        return vqscilexerlua->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnCaseSensitive(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerLua_Color(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return new QColor(vqscilexerlua->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerLua_QBaseColor(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Color_IsBase(true);
        return new QColor(vqscilexerlua->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnColor(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Color_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerLua_EolFill(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerlua->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerLua_QBaseEolFill(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_EolFill_IsBase(true);
        return vqscilexerlua->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerlua->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnEolFill(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_EolFill_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerLua_Font(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return new QFont(vqscilexerlua->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerLua_QBaseFont(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Font_IsBase(true);
        return new QFont(vqscilexerlua->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnFont(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Font_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerLua_IndentationGuideView(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->indentationGuideView();
    } else {
        return vqscilexerlua->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerLua_QBaseIndentationGuideView(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_IndentationGuideView_IsBase(true);
        return vqscilexerlua->indentationGuideView();
    } else {
        return vqscilexerlua->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnIndentationGuideView(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerLua_Keywords(const QsciLexerLua* self, int set) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return (const char*)vqscilexerlua->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerlua->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerLua_QBaseKeywords(const QsciLexerLua* self, int set) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Keywords_IsBase(true);
        return (const char*)vqscilexerlua->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerlua->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnKeywords(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Keywords_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerLua_DefaultStyle(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->defaultStyle();
    } else {
        return vqscilexerlua->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerLua_QBaseDefaultStyle(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_DefaultStyle_IsBase(true);
        return vqscilexerlua->defaultStyle();
    } else {
        return vqscilexerlua->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnDefaultStyle(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerLua_Description(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        QString _ret = vqscilexerlua->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerlua->description(static_cast<int>(style));
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
libqt_string QsciLexerLua_QBaseDescription(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Description_IsBase(true);
        QString _ret = vqscilexerlua->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerlua->description(static_cast<int>(style));
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
void QsciLexerLua_OnDescription(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Description_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerLua_Paper(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return new QColor(vqscilexerlua->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerLua_QBasePaper(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Paper_IsBase(true);
        return new QColor(vqscilexerlua->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnPaper(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Paper_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerLua_DefaultColorWithStyle(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return new QColor(vqscilexerlua->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerLua_QBaseDefaultColorWithStyle(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerlua->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnDefaultColorWithStyle(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerLua_DefaultEolFill(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerlua->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerLua_QBaseDefaultEolFill(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_DefaultEolFill_IsBase(true);
        return vqscilexerlua->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerlua->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnDefaultEolFill(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerLua_DefaultFontWithStyle(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return new QFont(vqscilexerlua->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerLua_QBaseDefaultFontWithStyle(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerlua->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnDefaultFontWithStyle(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerLua_DefaultPaperWithStyle(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return new QColor(vqscilexerlua->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerLua_QBaseDefaultPaperWithStyle(const QsciLexerLua* self, int style) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerlua->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnDefaultPaperWithStyle(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerLua_SetEditor(QsciLexerLua* self, QsciScintilla* editor) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setEditor(editor);
    } else {
        vqscilexerlua->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerLua_QBaseSetEditor(QsciLexerLua* self, QsciScintilla* editor) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_SetEditor_IsBase(true);
        vqscilexerlua->setEditor(editor);
    } else {
        vqscilexerlua->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSetEditor(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerLua_RefreshProperties(QsciLexerLua* self) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->refreshProperties();
    } else {
        vqscilexerlua->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerLua_QBaseRefreshProperties(QsciLexerLua* self) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_RefreshProperties_IsBase(true);
        vqscilexerlua->refreshProperties();
    } else {
        vqscilexerlua->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnRefreshProperties(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerLua_StyleBitsNeeded(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->styleBitsNeeded();
    } else {
        return vqscilexerlua->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerLua_QBaseStyleBitsNeeded(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_StyleBitsNeeded_IsBase(true);
        return vqscilexerlua->styleBitsNeeded();
    } else {
        return vqscilexerlua->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnStyleBitsNeeded(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerLua_WordCharacters(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return (const char*)vqscilexerlua->wordCharacters();
    } else {
        return (const char*)vqscilexerlua->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerLua_QBaseWordCharacters(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_WordCharacters_IsBase(true);
        return (const char*)vqscilexerlua->wordCharacters();
    } else {
        return (const char*)vqscilexerlua->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnWordCharacters(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerLua_SetAutoIndentStyle(QsciLexerLua* self, int autoindentstyle) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerlua->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerLua_QBaseSetAutoIndentStyle(QsciLexerLua* self, int autoindentstyle) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_SetAutoIndentStyle_IsBase(true);
        vqscilexerlua->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerlua->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSetAutoIndentStyle(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerLua_SetColor(QsciLexerLua* self, QColor* c, int style) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerlua->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerLua_QBaseSetColor(QsciLexerLua* self, QColor* c, int style) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_SetColor_IsBase(true);
        vqscilexerlua->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerlua->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSetColor(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_SetColor_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerLua_SetEolFill(QsciLexerLua* self, bool eoffill, int style) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerlua->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerLua_QBaseSetEolFill(QsciLexerLua* self, bool eoffill, int style) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_SetEolFill_IsBase(true);
        vqscilexerlua->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerlua->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSetEolFill(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerLua_SetFont(QsciLexerLua* self, QFont* f, int style) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerlua->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerLua_QBaseSetFont(QsciLexerLua* self, QFont* f, int style) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_SetFont_IsBase(true);
        vqscilexerlua->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerlua->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSetFont(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_SetFont_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerLua_SetPaper(QsciLexerLua* self, QColor* c, int style) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerlua->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerLua_QBaseSetPaper(QsciLexerLua* self, QColor* c, int style) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_SetPaper_IsBase(true);
        vqscilexerlua->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerlua->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSetPaper(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerLua_ReadProperties(QsciLexerLua* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        return vqscilexerlua->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerlua->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerLua_QBaseReadProperties(QsciLexerLua* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_ReadProperties_IsBase(true);
        return vqscilexerlua->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerlua->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnReadProperties(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerLua_WriteProperties(const QsciLexerLua* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerlua->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerLua_QBaseWriteProperties(const QsciLexerLua* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_WriteProperties_IsBase(true);
        return vqscilexerlua->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerlua->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnWriteProperties(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerLua_Event(QsciLexerLua* self, QEvent* event) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        return vqscilexerlua->event(event);
    } else {
        return vqscilexerlua->event(event);
    }
}

// Base class handler implementation
bool QsciLexerLua_QBaseEvent(QsciLexerLua* self, QEvent* event) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_Event_IsBase(true);
        return vqscilexerlua->event(event);
    } else {
        return vqscilexerlua->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnEvent(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_Event_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerLua_EventFilter(QsciLexerLua* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        return vqscilexerlua->eventFilter(watched, event);
    } else {
        return vqscilexerlua->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerLua_QBaseEventFilter(QsciLexerLua* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_EventFilter_IsBase(true);
        return vqscilexerlua->eventFilter(watched, event);
    } else {
        return vqscilexerlua->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnEventFilter(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerLua_TimerEvent(QsciLexerLua* self, QTimerEvent* event) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->timerEvent(event);
    } else {
        vqscilexerlua->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerLua_QBaseTimerEvent(QsciLexerLua* self, QTimerEvent* event) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_TimerEvent_IsBase(true);
        vqscilexerlua->timerEvent(event);
    } else {
        vqscilexerlua->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnTimerEvent(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerLua_ChildEvent(QsciLexerLua* self, QChildEvent* event) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->childEvent(event);
    } else {
        vqscilexerlua->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerLua_QBaseChildEvent(QsciLexerLua* self, QChildEvent* event) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_ChildEvent_IsBase(true);
        vqscilexerlua->childEvent(event);
    } else {
        vqscilexerlua->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnChildEvent(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerLua_CustomEvent(QsciLexerLua* self, QEvent* event) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->customEvent(event);
    } else {
        vqscilexerlua->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerLua_QBaseCustomEvent(QsciLexerLua* self, QEvent* event) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_CustomEvent_IsBase(true);
        vqscilexerlua->customEvent(event);
    } else {
        vqscilexerlua->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnCustomEvent(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerLua_ConnectNotify(QsciLexerLua* self, QMetaMethod* signal) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->connectNotify(*signal);
    } else {
        vqscilexerlua->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerLua_QBaseConnectNotify(QsciLexerLua* self, QMetaMethod* signal) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_ConnectNotify_IsBase(true);
        vqscilexerlua->connectNotify(*signal);
    } else {
        vqscilexerlua->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnConnectNotify(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerLua_DisconnectNotify(QsciLexerLua* self, QMetaMethod* signal) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->disconnectNotify(*signal);
    } else {
        vqscilexerlua->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerLua_QBaseDisconnectNotify(QsciLexerLua* self, QMetaMethod* signal) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_DisconnectNotify_IsBase(true);
        vqscilexerlua->disconnectNotify(*signal);
    } else {
        vqscilexerlua->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnDisconnectNotify(QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = dynamic_cast<VirtualQsciLexerLua*>(self)) {
        vqscilexerlua->setQsciLexerLua_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerLua_Sender(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->sender();
    } else {
        return vqscilexerlua->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerLua_QBaseSender(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Sender_IsBase(true);
        return vqscilexerlua->sender();
    } else {
        return vqscilexerlua->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSender(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Sender_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerLua_SenderSignalIndex(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->senderSignalIndex();
    } else {
        return vqscilexerlua->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerLua_QBaseSenderSignalIndex(const QsciLexerLua* self) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_SenderSignalIndex_IsBase(true);
        return vqscilexerlua->senderSignalIndex();
    } else {
        return vqscilexerlua->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnSenderSignalIndex(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerLua_Receivers(const QsciLexerLua* self, const char* signal) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->receivers(signal);
    } else {
        return vqscilexerlua->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerLua_QBaseReceivers(const QsciLexerLua* self, const char* signal) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Receivers_IsBase(true);
        return vqscilexerlua->receivers(signal);
    } else {
        return vqscilexerlua->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnReceivers(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_Receivers_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerLua_IsSignalConnected(const QsciLexerLua* self, QMetaMethod* signal) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        return vqscilexerlua->isSignalConnected(*signal);
    } else {
        return vqscilexerlua->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerLua_QBaseIsSignalConnected(const QsciLexerLua* self, QMetaMethod* signal) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_IsSignalConnected_IsBase(true);
        return vqscilexerlua->isSignalConnected(*signal);
    } else {
        return vqscilexerlua->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerLua_OnIsSignalConnected(const QsciLexerLua* self, intptr_t slot) {
    if (auto* vqscilexerlua = const_cast<VirtualQsciLexerLua*>(dynamic_cast<const VirtualQsciLexerLua*>(self))) {
        vqscilexerlua->setQsciLexerLua_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerLua::QsciLexerLua_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerLua_Delete(QsciLexerLua* self) {
    delete self;
}
