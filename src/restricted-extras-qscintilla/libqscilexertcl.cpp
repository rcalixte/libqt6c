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
#include <qscilexertcl.h>
#include "libqscilexertcl.hpp"
#include "libqscilexertcl.hxx"

QsciLexerTCL* QsciLexerTCL_new() {
    return new VirtualQsciLexerTCL();
}

QsciLexerTCL* QsciLexerTCL_new2(QObject* parent) {
    return new VirtualQsciLexerTCL(parent);
}

QMetaObject* QsciLexerTCL_MetaObject(const QsciLexerTCL* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerTCL_Metacast(QsciLexerTCL* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerTCL_Metacall(QsciLexerTCL* self, int param1, int param2, void** param3) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerTCL_OnMetacall(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_Metacall_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerTCL_QBaseMetacall(QsciLexerTCL* self, int param1, int param2, void** param3) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_Metacall_IsBase(true);
        return vqscilexertcl->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerTCL_Tr(const char* s) {
    QString _ret = QsciLexerTCL::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerTCL_DefaultColor(const QsciLexerTCL* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerTCL_DefaultFont(const QsciLexerTCL* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerTCL_DefaultPaper(const QsciLexerTCL* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

void QsciLexerTCL_SetFoldComments(QsciLexerTCL* self, bool fold) {
    self->setFoldComments(fold);
}

bool QsciLexerTCL_FoldComments(const QsciLexerTCL* self) {
    return self->foldComments();
}

libqt_string QsciLexerTCL_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerTCL::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerTCL_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerTCL::tr(s, c, static_cast<int>(n));
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
const char* QsciLexerTCL_Language(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return (const char*)vqscilexertcl->language();
    } else {
        return (const char*)vqscilexertcl->language();
    }
}

// Base class handler implementation
const char* QsciLexerTCL_QBaseLanguage(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Language_IsBase(true);
        return (const char*)vqscilexertcl->language();
    } else {
        return (const char*)vqscilexertcl->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnLanguage(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Language_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTCL_Lexer(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return (const char*)vqscilexertcl->lexer();
    } else {
        return (const char*)vqscilexertcl->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerTCL_QBaseLexer(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Lexer_IsBase(true);
        return (const char*)vqscilexertcl->lexer();
    } else {
        return (const char*)vqscilexertcl->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnLexer(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Lexer_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTCL_LexerId(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->lexerId();
    } else {
        return vqscilexertcl->lexerId();
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseLexerId(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_LexerId_IsBase(true);
        return vqscilexertcl->lexerId();
    } else {
        return vqscilexertcl->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnLexerId(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_LexerId_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTCL_AutoCompletionFillups(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return (const char*)vqscilexertcl->autoCompletionFillups();
    } else {
        return (const char*)vqscilexertcl->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerTCL_QBaseAutoCompletionFillups(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexertcl->autoCompletionFillups();
    } else {
        return (const char*)vqscilexertcl->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnAutoCompletionFillups(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerTCL_AutoCompletionWordSeparators(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        QStringList _ret = vqscilexertcl->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexertcl->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerTCL_QBaseAutoCompletionWordSeparators(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexertcl->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexertcl->autoCompletionWordSeparators();
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
void QsciLexerTCL_OnAutoCompletionWordSeparators(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTCL_BlockEnd(const QsciLexerTCL* self, int* style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return (const char*)vqscilexertcl->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexertcl->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerTCL_QBaseBlockEnd(const QsciLexerTCL* self, int* style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_BlockEnd_IsBase(true);
        return (const char*)vqscilexertcl->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexertcl->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnBlockEnd(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTCL_BlockLookback(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->blockLookback();
    } else {
        return vqscilexertcl->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseBlockLookback(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_BlockLookback_IsBase(true);
        return vqscilexertcl->blockLookback();
    } else {
        return vqscilexertcl->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnBlockLookback(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTCL_BlockStart(const QsciLexerTCL* self, int* style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return (const char*)vqscilexertcl->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexertcl->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerTCL_QBaseBlockStart(const QsciLexerTCL* self, int* style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_BlockStart_IsBase(true);
        return (const char*)vqscilexertcl->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexertcl->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnBlockStart(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTCL_BlockStartKeyword(const QsciLexerTCL* self, int* style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return (const char*)vqscilexertcl->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexertcl->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerTCL_QBaseBlockStartKeyword(const QsciLexerTCL* self, int* style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexertcl->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexertcl->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnBlockStartKeyword(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTCL_BraceStyle(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->braceStyle();
    } else {
        return vqscilexertcl->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseBraceStyle(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_BraceStyle_IsBase(true);
        return vqscilexertcl->braceStyle();
    } else {
        return vqscilexertcl->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnBraceStyle(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_CaseSensitive(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->caseSensitive();
    } else {
        return vqscilexertcl->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseCaseSensitive(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_CaseSensitive_IsBase(true);
        return vqscilexertcl->caseSensitive();
    } else {
        return vqscilexertcl->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnCaseSensitive(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTCL_Color(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return new QColor(vqscilexertcl->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTCL_QBaseColor(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Color_IsBase(true);
        return new QColor(vqscilexertcl->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnColor(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Color_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_EolFill(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->eolFill(static_cast<int>(style));
    } else {
        return vqscilexertcl->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseEolFill(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_EolFill_IsBase(true);
        return vqscilexertcl->eolFill(static_cast<int>(style));
    } else {
        return vqscilexertcl->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnEolFill(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_EolFill_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerTCL_Font(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return new QFont(vqscilexertcl->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerTCL_QBaseFont(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Font_IsBase(true);
        return new QFont(vqscilexertcl->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnFont(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Font_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTCL_IndentationGuideView(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->indentationGuideView();
    } else {
        return vqscilexertcl->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseIndentationGuideView(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_IndentationGuideView_IsBase(true);
        return vqscilexertcl->indentationGuideView();
    } else {
        return vqscilexertcl->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnIndentationGuideView(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTCL_Keywords(const QsciLexerTCL* self, int set) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return (const char*)vqscilexertcl->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexertcl->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerTCL_QBaseKeywords(const QsciLexerTCL* self, int set) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Keywords_IsBase(true);
        return (const char*)vqscilexertcl->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexertcl->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnKeywords(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Keywords_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTCL_DefaultStyle(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->defaultStyle();
    } else {
        return vqscilexertcl->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseDefaultStyle(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_DefaultStyle_IsBase(true);
        return vqscilexertcl->defaultStyle();
    } else {
        return vqscilexertcl->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDefaultStyle(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerTCL_Description(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        QString _ret = vqscilexertcl->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexertcl->description(static_cast<int>(style));
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
libqt_string QsciLexerTCL_QBaseDescription(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Description_IsBase(true);
        QString _ret = vqscilexertcl->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexertcl->description(static_cast<int>(style));
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
void QsciLexerTCL_OnDescription(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Description_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTCL_Paper(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return new QColor(vqscilexertcl->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTCL_QBasePaper(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Paper_IsBase(true);
        return new QColor(vqscilexertcl->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnPaper(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Paper_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTCL_DefaultColorWithStyle(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return new QColor(vqscilexertcl->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTCL_QBaseDefaultColorWithStyle(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexertcl->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDefaultColorWithStyle(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_DefaultEolFill(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexertcl->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseDefaultEolFill(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_DefaultEolFill_IsBase(true);
        return vqscilexertcl->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexertcl->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDefaultEolFill(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerTCL_DefaultFontWithStyle(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return new QFont(vqscilexertcl->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerTCL_QBaseDefaultFontWithStyle(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexertcl->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDefaultFontWithStyle(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerTCL_DefaultPaperWithStyle(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return new QColor(vqscilexertcl->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerTCL_QBaseDefaultPaperWithStyle(const QsciLexerTCL* self, int style) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexertcl->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDefaultPaperWithStyle(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_SetEditor(QsciLexerTCL* self, QsciScintilla* editor) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setEditor(editor);
    } else {
        vqscilexertcl->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseSetEditor(QsciLexerTCL* self, QsciScintilla* editor) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_SetEditor_IsBase(true);
        vqscilexertcl->setEditor(editor);
    } else {
        vqscilexertcl->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetEditor(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_RefreshProperties(QsciLexerTCL* self) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->refreshProperties();
    } else {
        vqscilexertcl->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseRefreshProperties(QsciLexerTCL* self) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_RefreshProperties_IsBase(true);
        vqscilexertcl->refreshProperties();
    } else {
        vqscilexertcl->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnRefreshProperties(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTCL_StyleBitsNeeded(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->styleBitsNeeded();
    } else {
        return vqscilexertcl->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseStyleBitsNeeded(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_StyleBitsNeeded_IsBase(true);
        return vqscilexertcl->styleBitsNeeded();
    } else {
        return vqscilexertcl->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnStyleBitsNeeded(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerTCL_WordCharacters(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return (const char*)vqscilexertcl->wordCharacters();
    } else {
        return (const char*)vqscilexertcl->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerTCL_QBaseWordCharacters(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_WordCharacters_IsBase(true);
        return (const char*)vqscilexertcl->wordCharacters();
    } else {
        return (const char*)vqscilexertcl->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnWordCharacters(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_SetAutoIndentStyle(QsciLexerTCL* self, int autoindentstyle) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexertcl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseSetAutoIndentStyle(QsciLexerTCL* self, int autoindentstyle) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_SetAutoIndentStyle_IsBase(true);
        vqscilexertcl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexertcl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetAutoIndentStyle(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_SetColor(QsciLexerTCL* self, QColor* c, int style) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexertcl->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseSetColor(QsciLexerTCL* self, QColor* c, int style) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_SetColor_IsBase(true);
        vqscilexertcl->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexertcl->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetColor(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_SetColor_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_SetEolFill(QsciLexerTCL* self, bool eoffill, int style) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexertcl->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseSetEolFill(QsciLexerTCL* self, bool eoffill, int style) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_SetEolFill_IsBase(true);
        vqscilexertcl->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexertcl->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetEolFill(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_SetFont(QsciLexerTCL* self, QFont* f, int style) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexertcl->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseSetFont(QsciLexerTCL* self, QFont* f, int style) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_SetFont_IsBase(true);
        vqscilexertcl->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexertcl->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetFont(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_SetFont_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_SetPaper(QsciLexerTCL* self, QColor* c, int style) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexertcl->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseSetPaper(QsciLexerTCL* self, QColor* c, int style) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_SetPaper_IsBase(true);
        vqscilexertcl->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexertcl->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSetPaper(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_ReadProperties(QsciLexerTCL* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        return vqscilexertcl->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexertcl->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseReadProperties(QsciLexerTCL* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_ReadProperties_IsBase(true);
        return vqscilexertcl->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexertcl->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnReadProperties(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_WriteProperties(const QsciLexerTCL* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexertcl->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseWriteProperties(const QsciLexerTCL* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_WriteProperties_IsBase(true);
        return vqscilexertcl->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexertcl->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnWriteProperties(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_Event(QsciLexerTCL* self, QEvent* event) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        return vqscilexertcl->event(event);
    } else {
        return vqscilexertcl->event(event);
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseEvent(QsciLexerTCL* self, QEvent* event) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_Event_IsBase(true);
        return vqscilexertcl->event(event);
    } else {
        return vqscilexertcl->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnEvent(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_Event_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_EventFilter(QsciLexerTCL* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        return vqscilexertcl->eventFilter(watched, event);
    } else {
        return vqscilexertcl->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseEventFilter(QsciLexerTCL* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_EventFilter_IsBase(true);
        return vqscilexertcl->eventFilter(watched, event);
    } else {
        return vqscilexertcl->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnEventFilter(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_TimerEvent(QsciLexerTCL* self, QTimerEvent* event) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->timerEvent(event);
    } else {
        vqscilexertcl->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseTimerEvent(QsciLexerTCL* self, QTimerEvent* event) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_TimerEvent_IsBase(true);
        vqscilexertcl->timerEvent(event);
    } else {
        vqscilexertcl->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnTimerEvent(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_ChildEvent(QsciLexerTCL* self, QChildEvent* event) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->childEvent(event);
    } else {
        vqscilexertcl->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseChildEvent(QsciLexerTCL* self, QChildEvent* event) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_ChildEvent_IsBase(true);
        vqscilexertcl->childEvent(event);
    } else {
        vqscilexertcl->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnChildEvent(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_CustomEvent(QsciLexerTCL* self, QEvent* event) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->customEvent(event);
    } else {
        vqscilexertcl->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseCustomEvent(QsciLexerTCL* self, QEvent* event) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_CustomEvent_IsBase(true);
        vqscilexertcl->customEvent(event);
    } else {
        vqscilexertcl->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnCustomEvent(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_ConnectNotify(QsciLexerTCL* self, QMetaMethod* signal) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->connectNotify(*signal);
    } else {
        vqscilexertcl->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseConnectNotify(QsciLexerTCL* self, QMetaMethod* signal) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_ConnectNotify_IsBase(true);
        vqscilexertcl->connectNotify(*signal);
    } else {
        vqscilexertcl->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnConnectNotify(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerTCL_DisconnectNotify(QsciLexerTCL* self, QMetaMethod* signal) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->disconnectNotify(*signal);
    } else {
        vqscilexertcl->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerTCL_QBaseDisconnectNotify(QsciLexerTCL* self, QMetaMethod* signal) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_DisconnectNotify_IsBase(true);
        vqscilexertcl->disconnectNotify(*signal);
    } else {
        vqscilexertcl->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnDisconnectNotify(QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = dynamic_cast<VirtualQsciLexerTCL*>(self)) {
        vqscilexertcl->setQsciLexerTCL_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerTCL_Sender(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->sender();
    } else {
        return vqscilexertcl->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerTCL_QBaseSender(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Sender_IsBase(true);
        return vqscilexertcl->sender();
    } else {
        return vqscilexertcl->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSender(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Sender_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTCL_SenderSignalIndex(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->senderSignalIndex();
    } else {
        return vqscilexertcl->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseSenderSignalIndex(const QsciLexerTCL* self) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_SenderSignalIndex_IsBase(true);
        return vqscilexertcl->senderSignalIndex();
    } else {
        return vqscilexertcl->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnSenderSignalIndex(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerTCL_Receivers(const QsciLexerTCL* self, const char* signal) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->receivers(signal);
    } else {
        return vqscilexertcl->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerTCL_QBaseReceivers(const QsciLexerTCL* self, const char* signal) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Receivers_IsBase(true);
        return vqscilexertcl->receivers(signal);
    } else {
        return vqscilexertcl->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnReceivers(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_Receivers_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerTCL_IsSignalConnected(const QsciLexerTCL* self, QMetaMethod* signal) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        return vqscilexertcl->isSignalConnected(*signal);
    } else {
        return vqscilexertcl->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerTCL_QBaseIsSignalConnected(const QsciLexerTCL* self, QMetaMethod* signal) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_IsSignalConnected_IsBase(true);
        return vqscilexertcl->isSignalConnected(*signal);
    } else {
        return vqscilexertcl->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTCL_OnIsSignalConnected(const QsciLexerTCL* self, intptr_t slot) {
    if (auto* vqscilexertcl = const_cast<VirtualQsciLexerTCL*>(dynamic_cast<const VirtualQsciLexerTCL*>(self))) {
        vqscilexertcl->setQsciLexerTCL_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerTCL::QsciLexerTCL_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerTCL_Delete(QsciLexerTCL* self) {
    delete self;
}
