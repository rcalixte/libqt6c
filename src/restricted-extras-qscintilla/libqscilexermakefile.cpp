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
#include <qscilexermakefile.h>
#include "libqscilexermakefile.hpp"
#include "libqscilexermakefile.hxx"

QsciLexerMakefile* QsciLexerMakefile_new() {
    return new VirtualQsciLexerMakefile();
}

QsciLexerMakefile* QsciLexerMakefile_new2(QObject* parent) {
    return new VirtualQsciLexerMakefile(parent);
}

QMetaObject* QsciLexerMakefile_MetaObject(const QsciLexerMakefile* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerMakefile_Metacast(QsciLexerMakefile* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerMakefile_Metacall(QsciLexerMakefile* self, int param1, int param2, void** param3) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerMakefile_OnMetacall(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_Metacall_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerMakefile_QBaseMetacall(QsciLexerMakefile* self, int param1, int param2, void** param3) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_Metacall_IsBase(true);
        return vqscilexermakefile->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerMakefile_Tr(const char* s) {
    QString _ret = QsciLexerMakefile::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerMakefile_DefaultColor(const QsciLexerMakefile* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerMakefile_DefaultFont(const QsciLexerMakefile* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerMakefile_DefaultPaper(const QsciLexerMakefile* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

libqt_string QsciLexerMakefile_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerMakefile::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerMakefile_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerMakefile::tr(s, c, static_cast<int>(n));
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
const char* QsciLexerMakefile_Language(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return (const char*)vqscilexermakefile->language();
    } else {
        return (const char*)vqscilexermakefile->language();
    }
}

// Base class handler implementation
const char* QsciLexerMakefile_QBaseLanguage(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Language_IsBase(true);
        return (const char*)vqscilexermakefile->language();
    } else {
        return (const char*)vqscilexermakefile->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnLanguage(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Language_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMakefile_Lexer(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return (const char*)vqscilexermakefile->lexer();
    } else {
        return (const char*)vqscilexermakefile->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerMakefile_QBaseLexer(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Lexer_IsBase(true);
        return (const char*)vqscilexermakefile->lexer();
    } else {
        return (const char*)vqscilexermakefile->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnLexer(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Lexer_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMakefile_LexerId(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->lexerId();
    } else {
        return vqscilexermakefile->lexerId();
    }
}

// Base class handler implementation
int QsciLexerMakefile_QBaseLexerId(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_LexerId_IsBase(true);
        return vqscilexermakefile->lexerId();
    } else {
        return vqscilexermakefile->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnLexerId(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_LexerId_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMakefile_AutoCompletionFillups(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return (const char*)vqscilexermakefile->autoCompletionFillups();
    } else {
        return (const char*)vqscilexermakefile->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerMakefile_QBaseAutoCompletionFillups(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexermakefile->autoCompletionFillups();
    } else {
        return (const char*)vqscilexermakefile->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnAutoCompletionFillups(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerMakefile_AutoCompletionWordSeparators(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        QStringList _ret = vqscilexermakefile->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexermakefile->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerMakefile_QBaseAutoCompletionWordSeparators(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexermakefile->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexermakefile->autoCompletionWordSeparators();
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
void QsciLexerMakefile_OnAutoCompletionWordSeparators(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMakefile_BlockEnd(const QsciLexerMakefile* self, int* style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return (const char*)vqscilexermakefile->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexermakefile->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMakefile_QBaseBlockEnd(const QsciLexerMakefile* self, int* style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_BlockEnd_IsBase(true);
        return (const char*)vqscilexermakefile->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexermakefile->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnBlockEnd(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMakefile_BlockLookback(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->blockLookback();
    } else {
        return vqscilexermakefile->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerMakefile_QBaseBlockLookback(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_BlockLookback_IsBase(true);
        return vqscilexermakefile->blockLookback();
    } else {
        return vqscilexermakefile->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnBlockLookback(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMakefile_BlockStart(const QsciLexerMakefile* self, int* style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return (const char*)vqscilexermakefile->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexermakefile->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMakefile_QBaseBlockStart(const QsciLexerMakefile* self, int* style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_BlockStart_IsBase(true);
        return (const char*)vqscilexermakefile->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexermakefile->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnBlockStart(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMakefile_BlockStartKeyword(const QsciLexerMakefile* self, int* style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return (const char*)vqscilexermakefile->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexermakefile->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerMakefile_QBaseBlockStartKeyword(const QsciLexerMakefile* self, int* style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexermakefile->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexermakefile->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnBlockStartKeyword(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMakefile_BraceStyle(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->braceStyle();
    } else {
        return vqscilexermakefile->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerMakefile_QBaseBraceStyle(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_BraceStyle_IsBase(true);
        return vqscilexermakefile->braceStyle();
    } else {
        return vqscilexermakefile->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnBraceStyle(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMakefile_CaseSensitive(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->caseSensitive();
    } else {
        return vqscilexermakefile->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerMakefile_QBaseCaseSensitive(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_CaseSensitive_IsBase(true);
        return vqscilexermakefile->caseSensitive();
    } else {
        return vqscilexermakefile->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnCaseSensitive(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMakefile_Color(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return new QColor(vqscilexermakefile->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMakefile_QBaseColor(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Color_IsBase(true);
        return new QColor(vqscilexermakefile->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnColor(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Color_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMakefile_EolFill(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->eolFill(static_cast<int>(style));
    } else {
        return vqscilexermakefile->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerMakefile_QBaseEolFill(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_EolFill_IsBase(true);
        return vqscilexermakefile->eolFill(static_cast<int>(style));
    } else {
        return vqscilexermakefile->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnEolFill(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_EolFill_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerMakefile_Font(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return new QFont(vqscilexermakefile->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerMakefile_QBaseFont(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Font_IsBase(true);
        return new QFont(vqscilexermakefile->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnFont(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Font_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMakefile_IndentationGuideView(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->indentationGuideView();
    } else {
        return vqscilexermakefile->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerMakefile_QBaseIndentationGuideView(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_IndentationGuideView_IsBase(true);
        return vqscilexermakefile->indentationGuideView();
    } else {
        return vqscilexermakefile->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnIndentationGuideView(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMakefile_Keywords(const QsciLexerMakefile* self, int set) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return (const char*)vqscilexermakefile->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexermakefile->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerMakefile_QBaseKeywords(const QsciLexerMakefile* self, int set) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Keywords_IsBase(true);
        return (const char*)vqscilexermakefile->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexermakefile->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnKeywords(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Keywords_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMakefile_DefaultStyle(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->defaultStyle();
    } else {
        return vqscilexermakefile->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerMakefile_QBaseDefaultStyle(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_DefaultStyle_IsBase(true);
        return vqscilexermakefile->defaultStyle();
    } else {
        return vqscilexermakefile->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnDefaultStyle(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerMakefile_Description(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        QString _ret = vqscilexermakefile->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexermakefile->description(static_cast<int>(style));
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
libqt_string QsciLexerMakefile_QBaseDescription(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Description_IsBase(true);
        QString _ret = vqscilexermakefile->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexermakefile->description(static_cast<int>(style));
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
void QsciLexerMakefile_OnDescription(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Description_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMakefile_Paper(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return new QColor(vqscilexermakefile->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMakefile_QBasePaper(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Paper_IsBase(true);
        return new QColor(vqscilexermakefile->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnPaper(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Paper_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMakefile_DefaultColorWithStyle(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return new QColor(vqscilexermakefile->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMakefile_QBaseDefaultColorWithStyle(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexermakefile->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnDefaultColorWithStyle(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMakefile_DefaultEolFill(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexermakefile->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerMakefile_QBaseDefaultEolFill(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_DefaultEolFill_IsBase(true);
        return vqscilexermakefile->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexermakefile->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnDefaultEolFill(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerMakefile_DefaultFontWithStyle(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return new QFont(vqscilexermakefile->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerMakefile_QBaseDefaultFontWithStyle(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexermakefile->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnDefaultFontWithStyle(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerMakefile_DefaultPaperWithStyle(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return new QColor(vqscilexermakefile->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerMakefile_QBaseDefaultPaperWithStyle(const QsciLexerMakefile* self, int style) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexermakefile->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnDefaultPaperWithStyle(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMakefile_SetEditor(QsciLexerMakefile* self, QsciScintilla* editor) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setEditor(editor);
    } else {
        vqscilexermakefile->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerMakefile_QBaseSetEditor(QsciLexerMakefile* self, QsciScintilla* editor) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_SetEditor_IsBase(true);
        vqscilexermakefile->setEditor(editor);
    } else {
        vqscilexermakefile->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnSetEditor(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMakefile_RefreshProperties(QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->refreshProperties();
    } else {
        vqscilexermakefile->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerMakefile_QBaseRefreshProperties(QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_RefreshProperties_IsBase(true);
        vqscilexermakefile->refreshProperties();
    } else {
        vqscilexermakefile->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnRefreshProperties(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMakefile_StyleBitsNeeded(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->styleBitsNeeded();
    } else {
        return vqscilexermakefile->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerMakefile_QBaseStyleBitsNeeded(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_StyleBitsNeeded_IsBase(true);
        return vqscilexermakefile->styleBitsNeeded();
    } else {
        return vqscilexermakefile->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnStyleBitsNeeded(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerMakefile_WordCharacters(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return (const char*)vqscilexermakefile->wordCharacters();
    } else {
        return (const char*)vqscilexermakefile->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerMakefile_QBaseWordCharacters(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_WordCharacters_IsBase(true);
        return (const char*)vqscilexermakefile->wordCharacters();
    } else {
        return (const char*)vqscilexermakefile->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnWordCharacters(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMakefile_SetAutoIndentStyle(QsciLexerMakefile* self, int autoindentstyle) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexermakefile->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerMakefile_QBaseSetAutoIndentStyle(QsciLexerMakefile* self, int autoindentstyle) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_SetAutoIndentStyle_IsBase(true);
        vqscilexermakefile->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexermakefile->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnSetAutoIndentStyle(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMakefile_SetColor(QsciLexerMakefile* self, QColor* c, int style) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexermakefile->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMakefile_QBaseSetColor(QsciLexerMakefile* self, QColor* c, int style) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_SetColor_IsBase(true);
        vqscilexermakefile->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexermakefile->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnSetColor(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_SetColor_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMakefile_SetEolFill(QsciLexerMakefile* self, bool eoffill, int style) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexermakefile->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMakefile_QBaseSetEolFill(QsciLexerMakefile* self, bool eoffill, int style) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_SetEolFill_IsBase(true);
        vqscilexermakefile->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexermakefile->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnSetEolFill(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMakefile_SetFont(QsciLexerMakefile* self, QFont* f, int style) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexermakefile->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMakefile_QBaseSetFont(QsciLexerMakefile* self, QFont* f, int style) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_SetFont_IsBase(true);
        vqscilexermakefile->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexermakefile->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnSetFont(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_SetFont_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMakefile_SetPaper(QsciLexerMakefile* self, QColor* c, int style) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexermakefile->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerMakefile_QBaseSetPaper(QsciLexerMakefile* self, QColor* c, int style) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_SetPaper_IsBase(true);
        vqscilexermakefile->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexermakefile->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnSetPaper(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMakefile_ReadProperties(QsciLexerMakefile* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        return vqscilexermakefile->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexermakefile->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerMakefile_QBaseReadProperties(QsciLexerMakefile* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_ReadProperties_IsBase(true);
        return vqscilexermakefile->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexermakefile->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnReadProperties(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMakefile_WriteProperties(const QsciLexerMakefile* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexermakefile->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerMakefile_QBaseWriteProperties(const QsciLexerMakefile* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_WriteProperties_IsBase(true);
        return vqscilexermakefile->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexermakefile->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnWriteProperties(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMakefile_Event(QsciLexerMakefile* self, QEvent* event) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        return vqscilexermakefile->event(event);
    } else {
        return vqscilexermakefile->event(event);
    }
}

// Base class handler implementation
bool QsciLexerMakefile_QBaseEvent(QsciLexerMakefile* self, QEvent* event) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_Event_IsBase(true);
        return vqscilexermakefile->event(event);
    } else {
        return vqscilexermakefile->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnEvent(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_Event_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMakefile_EventFilter(QsciLexerMakefile* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        return vqscilexermakefile->eventFilter(watched, event);
    } else {
        return vqscilexermakefile->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerMakefile_QBaseEventFilter(QsciLexerMakefile* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_EventFilter_IsBase(true);
        return vqscilexermakefile->eventFilter(watched, event);
    } else {
        return vqscilexermakefile->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnEventFilter(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMakefile_TimerEvent(QsciLexerMakefile* self, QTimerEvent* event) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->timerEvent(event);
    } else {
        vqscilexermakefile->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMakefile_QBaseTimerEvent(QsciLexerMakefile* self, QTimerEvent* event) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_TimerEvent_IsBase(true);
        vqscilexermakefile->timerEvent(event);
    } else {
        vqscilexermakefile->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnTimerEvent(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMakefile_ChildEvent(QsciLexerMakefile* self, QChildEvent* event) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->childEvent(event);
    } else {
        vqscilexermakefile->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMakefile_QBaseChildEvent(QsciLexerMakefile* self, QChildEvent* event) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_ChildEvent_IsBase(true);
        vqscilexermakefile->childEvent(event);
    } else {
        vqscilexermakefile->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnChildEvent(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMakefile_CustomEvent(QsciLexerMakefile* self, QEvent* event) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->customEvent(event);
    } else {
        vqscilexermakefile->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerMakefile_QBaseCustomEvent(QsciLexerMakefile* self, QEvent* event) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_CustomEvent_IsBase(true);
        vqscilexermakefile->customEvent(event);
    } else {
        vqscilexermakefile->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnCustomEvent(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMakefile_ConnectNotify(QsciLexerMakefile* self, QMetaMethod* signal) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->connectNotify(*signal);
    } else {
        vqscilexermakefile->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerMakefile_QBaseConnectNotify(QsciLexerMakefile* self, QMetaMethod* signal) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_ConnectNotify_IsBase(true);
        vqscilexermakefile->connectNotify(*signal);
    } else {
        vqscilexermakefile->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnConnectNotify(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerMakefile_DisconnectNotify(QsciLexerMakefile* self, QMetaMethod* signal) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->disconnectNotify(*signal);
    } else {
        vqscilexermakefile->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerMakefile_QBaseDisconnectNotify(QsciLexerMakefile* self, QMetaMethod* signal) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_DisconnectNotify_IsBase(true);
        vqscilexermakefile->disconnectNotify(*signal);
    } else {
        vqscilexermakefile->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnDisconnectNotify(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->setQsciLexerMakefile_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerMakefile_Sender(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->sender();
    } else {
        return vqscilexermakefile->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerMakefile_QBaseSender(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Sender_IsBase(true);
        return vqscilexermakefile->sender();
    } else {
        return vqscilexermakefile->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnSender(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Sender_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMakefile_SenderSignalIndex(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->senderSignalIndex();
    } else {
        return vqscilexermakefile->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerMakefile_QBaseSenderSignalIndex(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_SenderSignalIndex_IsBase(true);
        return vqscilexermakefile->senderSignalIndex();
    } else {
        return vqscilexermakefile->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnSenderSignalIndex(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerMakefile_Receivers(const QsciLexerMakefile* self, const char* signal) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->receivers(signal);
    } else {
        return vqscilexermakefile->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerMakefile_QBaseReceivers(const QsciLexerMakefile* self, const char* signal) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Receivers_IsBase(true);
        return vqscilexermakefile->receivers(signal);
    } else {
        return vqscilexermakefile->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnReceivers(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_Receivers_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerMakefile_IsSignalConnected(const QsciLexerMakefile* self, QMetaMethod* signal) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->isSignalConnected(*signal);
    } else {
        return vqscilexermakefile->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerMakefile_QBaseIsSignalConnected(const QsciLexerMakefile* self, QMetaMethod* signal) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_IsSignalConnected_IsBase(true);
        return vqscilexermakefile->isSignalConnected(*signal);
    } else {
        return vqscilexermakefile->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnIsSignalConnected(const QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        vqscilexermakefile->setQsciLexerMakefile_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerMakefile_Delete(QsciLexerMakefile* self) {
    delete self;
}
