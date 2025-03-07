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
#include <qscilexerpython.h>
#include "libqscilexerpython.hpp"
#include "libqscilexerpython.hxx"

QsciLexerPython* QsciLexerPython_new() {
    return new VirtualQsciLexerPython();
}

QsciLexerPython* QsciLexerPython_new2(QObject* parent) {
    return new VirtualQsciLexerPython(parent);
}

QMetaObject* QsciLexerPython_MetaObject(const QsciLexerPython* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerPython_Metacast(QsciLexerPython* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerPython_Metacall(QsciLexerPython* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPython_OnMetacall(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_Metacall_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerPython_QBaseMetacall(QsciLexerPython* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_Metacall_IsBase(true);
        return vqscilexerpython->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerPython_Tr(const char* s) {
    QString _ret = QsciLexerPython::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerPython_DefaultColor(const QsciLexerPython* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerPython_DefaultFont(const QsciLexerPython* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPython_DefaultPaper(const QsciLexerPython* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerPython_FoldComments(const QsciLexerPython* self) {
    return self->foldComments();
}

void QsciLexerPython_SetFoldCompact(QsciLexerPython* self, bool fold) {
    self->setFoldCompact(fold);
}

bool QsciLexerPython_FoldCompact(const QsciLexerPython* self) {
    return self->foldCompact();
}

bool QsciLexerPython_FoldQuotes(const QsciLexerPython* self) {
    return self->foldQuotes();
}

int QsciLexerPython_IndentationWarning(const QsciLexerPython* self) {
    return static_cast<int>(self->indentationWarning());
}

void QsciLexerPython_SetHighlightSubidentifiers(QsciLexerPython* self, bool enabled) {
    self->setHighlightSubidentifiers(enabled);
}

bool QsciLexerPython_HighlightSubidentifiers(const QsciLexerPython* self) {
    return self->highlightSubidentifiers();
}

void QsciLexerPython_SetStringsOverNewlineAllowed(QsciLexerPython* self, bool allowed) {
    self->setStringsOverNewlineAllowed(allowed);
}

bool QsciLexerPython_StringsOverNewlineAllowed(const QsciLexerPython* self) {
    return self->stringsOverNewlineAllowed();
}

void QsciLexerPython_SetV2UnicodeAllowed(QsciLexerPython* self, bool allowed) {
    self->setV2UnicodeAllowed(allowed);
}

bool QsciLexerPython_V2UnicodeAllowed(const QsciLexerPython* self) {
    return self->v2UnicodeAllowed();
}

void QsciLexerPython_SetV3BinaryOctalAllowed(QsciLexerPython* self, bool allowed) {
    self->setV3BinaryOctalAllowed(allowed);
}

bool QsciLexerPython_V3BinaryOctalAllowed(const QsciLexerPython* self) {
    return self->v3BinaryOctalAllowed();
}

void QsciLexerPython_SetV3BytesAllowed(QsciLexerPython* self, bool allowed) {
    self->setV3BytesAllowed(allowed);
}

bool QsciLexerPython_V3BytesAllowed(const QsciLexerPython* self) {
    return self->v3BytesAllowed();
}

libqt_string QsciLexerPython_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerPython::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerPython_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerPython::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

const char* QsciLexerPython_BlockStart1(const QsciLexerPython* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Derived class handler implementation
int QsciLexerPython_IndentationGuideView(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->indentationGuideView();
    } else {
        return vqscilexerpython->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerPython_QBaseIndentationGuideView(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_IndentationGuideView_IsBase(true);
        return vqscilexerpython->indentationGuideView();
    } else {
        return vqscilexerpython->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnIndentationGuideView(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetFoldComments(QsciLexerPython* self, bool fold) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setFoldComments(fold);
    } else {
        vqscilexerpython->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetFoldComments(QsciLexerPython* self, bool fold) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetFoldComments_IsBase(true);
        vqscilexerpython->setFoldComments(fold);
    } else {
        vqscilexerpython->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetFoldComments(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetFoldQuotes(QsciLexerPython* self, bool fold) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setFoldQuotes(fold);
    } else {
        vqscilexerpython->setFoldQuotes(fold);
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetFoldQuotes(QsciLexerPython* self, bool fold) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetFoldQuotes_IsBase(true);
        vqscilexerpython->setFoldQuotes(fold);
    } else {
        vqscilexerpython->setFoldQuotes(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetFoldQuotes(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetFoldQuotes_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetFoldQuotes_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetIndentationWarning(QsciLexerPython* self, int warn) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setIndentationWarning(static_cast<QsciLexerPython::IndentationWarning>(warn));
    } else {
        vqscilexerpython->setIndentationWarning(static_cast<QsciLexerPython::IndentationWarning>(warn));
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetIndentationWarning(QsciLexerPython* self, int warn) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetIndentationWarning_IsBase(true);
        vqscilexerpython->setIndentationWarning(static_cast<QsciLexerPython::IndentationWarning>(warn));
    } else {
        vqscilexerpython->setIndentationWarning(static_cast<QsciLexerPython::IndentationWarning>(warn));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetIndentationWarning(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetIndentationWarning_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetIndentationWarning_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPython_Language(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return (const char*)vqscilexerpython->language();
    } else {
        return (const char*)vqscilexerpython->language();
    }
}

// Base class handler implementation
const char* QsciLexerPython_QBaseLanguage(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Language_IsBase(true);
        return (const char*)vqscilexerpython->language();
    } else {
        return (const char*)vqscilexerpython->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnLanguage(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Language_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPython_Lexer(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return (const char*)vqscilexerpython->lexer();
    } else {
        return (const char*)vqscilexerpython->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerPython_QBaseLexer(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Lexer_IsBase(true);
        return (const char*)vqscilexerpython->lexer();
    } else {
        return (const char*)vqscilexerpython->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnLexer(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Lexer_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPython_LexerId(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->lexerId();
    } else {
        return vqscilexerpython->lexerId();
    }
}

// Base class handler implementation
int QsciLexerPython_QBaseLexerId(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_LexerId_IsBase(true);
        return vqscilexerpython->lexerId();
    } else {
        return vqscilexerpython->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnLexerId(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_LexerId_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPython_AutoCompletionFillups(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return (const char*)vqscilexerpython->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerpython->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerPython_QBaseAutoCompletionFillups(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerpython->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerpython->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnAutoCompletionFillups(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerPython_AutoCompletionWordSeparators(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        QStringList _ret = vqscilexerpython->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerpython->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerPython_QBaseAutoCompletionWordSeparators(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerpython->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerpython->autoCompletionWordSeparators();
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
void QsciLexerPython_OnAutoCompletionWordSeparators(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPython_BlockEnd(const QsciLexerPython* self, int* style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return (const char*)vqscilexerpython->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpython->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPython_QBaseBlockEnd(const QsciLexerPython* self, int* style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_BlockEnd_IsBase(true);
        return (const char*)vqscilexerpython->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpython->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnBlockEnd(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPython_BlockLookback(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->blockLookback();
    } else {
        return vqscilexerpython->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerPython_QBaseBlockLookback(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_BlockLookback_IsBase(true);
        return vqscilexerpython->blockLookback();
    } else {
        return vqscilexerpython->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnBlockLookback(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPython_BlockStart(const QsciLexerPython* self, int* style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return (const char*)vqscilexerpython->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpython->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPython_QBaseBlockStart(const QsciLexerPython* self, int* style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_BlockStart_IsBase(true);
        return (const char*)vqscilexerpython->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpython->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnBlockStart(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPython_BlockStartKeyword(const QsciLexerPython* self, int* style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return (const char*)vqscilexerpython->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpython->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPython_QBaseBlockStartKeyword(const QsciLexerPython* self, int* style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerpython->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpython->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnBlockStartKeyword(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPython_BraceStyle(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->braceStyle();
    } else {
        return vqscilexerpython->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerPython_QBaseBraceStyle(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_BraceStyle_IsBase(true);
        return vqscilexerpython->braceStyle();
    } else {
        return vqscilexerpython->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnBraceStyle(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_CaseSensitive(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->caseSensitive();
    } else {
        return vqscilexerpython->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseCaseSensitive(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_CaseSensitive_IsBase(true);
        return vqscilexerpython->caseSensitive();
    } else {
        return vqscilexerpython->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnCaseSensitive(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPython_Color(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return new QColor(vqscilexerpython->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPython_QBaseColor(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Color_IsBase(true);
        return new QColor(vqscilexerpython->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnColor(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Color_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_EolFill(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerpython->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseEolFill(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_EolFill_IsBase(true);
        return vqscilexerpython->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerpython->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnEolFill(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_EolFill_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPython_Font(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return new QFont(vqscilexerpython->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPython_QBaseFont(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Font_IsBase(true);
        return new QFont(vqscilexerpython->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnFont(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Font_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Font_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPython_Keywords(const QsciLexerPython* self, int set) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return (const char*)vqscilexerpython->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerpython->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerPython_QBaseKeywords(const QsciLexerPython* self, int set) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Keywords_IsBase(true);
        return (const char*)vqscilexerpython->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerpython->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnKeywords(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Keywords_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPython_DefaultStyle(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->defaultStyle();
    } else {
        return vqscilexerpython->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerPython_QBaseDefaultStyle(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_DefaultStyle_IsBase(true);
        return vqscilexerpython->defaultStyle();
    } else {
        return vqscilexerpython->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDefaultStyle(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPython_Description(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        QString _ret = vqscilexerpython->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerpython->description(static_cast<int>(style));
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
libqt_string QsciLexerPython_QBaseDescription(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Description_IsBase(true);
        QString _ret = vqscilexerpython->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerpython->description(static_cast<int>(style));
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
void QsciLexerPython_OnDescription(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Description_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPython_Paper(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return new QColor(vqscilexerpython->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPython_QBasePaper(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Paper_IsBase(true);
        return new QColor(vqscilexerpython->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnPaper(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Paper_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPython_DefaultColorWithStyle(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return new QColor(vqscilexerpython->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPython_QBaseDefaultColorWithStyle(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerpython->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDefaultColorWithStyle(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_DefaultEolFill(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerpython->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseDefaultEolFill(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_DefaultEolFill_IsBase(true);
        return vqscilexerpython->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerpython->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDefaultEolFill(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPython_DefaultFontWithStyle(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return new QFont(vqscilexerpython->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPython_QBaseDefaultFontWithStyle(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerpython->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDefaultFontWithStyle(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPython_DefaultPaperWithStyle(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return new QColor(vqscilexerpython->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPython_QBaseDefaultPaperWithStyle(const QsciLexerPython* self, int style) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerpython->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDefaultPaperWithStyle(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetEditor(QsciLexerPython* self, QsciScintilla* editor) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setEditor(editor);
    } else {
        vqscilexerpython->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetEditor(QsciLexerPython* self, QsciScintilla* editor) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetEditor_IsBase(true);
        vqscilexerpython->setEditor(editor);
    } else {
        vqscilexerpython->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetEditor(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_RefreshProperties(QsciLexerPython* self) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->refreshProperties();
    } else {
        vqscilexerpython->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseRefreshProperties(QsciLexerPython* self) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_RefreshProperties_IsBase(true);
        vqscilexerpython->refreshProperties();
    } else {
        vqscilexerpython->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnRefreshProperties(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPython_StyleBitsNeeded(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->styleBitsNeeded();
    } else {
        return vqscilexerpython->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerPython_QBaseStyleBitsNeeded(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_StyleBitsNeeded_IsBase(true);
        return vqscilexerpython->styleBitsNeeded();
    } else {
        return vqscilexerpython->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnStyleBitsNeeded(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPython_WordCharacters(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return (const char*)vqscilexerpython->wordCharacters();
    } else {
        return (const char*)vqscilexerpython->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerPython_QBaseWordCharacters(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_WordCharacters_IsBase(true);
        return (const char*)vqscilexerpython->wordCharacters();
    } else {
        return (const char*)vqscilexerpython->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnWordCharacters(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetAutoIndentStyle(QsciLexerPython* self, int autoindentstyle) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerpython->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetAutoIndentStyle(QsciLexerPython* self, int autoindentstyle) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetAutoIndentStyle_IsBase(true);
        vqscilexerpython->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerpython->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetAutoIndentStyle(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetColor(QsciLexerPython* self, QColor* c, int style) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerpython->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetColor(QsciLexerPython* self, QColor* c, int style) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetColor_IsBase(true);
        vqscilexerpython->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerpython->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetColor(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetColor_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetEolFill(QsciLexerPython* self, bool eoffill, int style) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerpython->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetEolFill(QsciLexerPython* self, bool eoffill, int style) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetEolFill_IsBase(true);
        vqscilexerpython->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerpython->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetEolFill(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetFont(QsciLexerPython* self, QFont* f, int style) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerpython->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetFont(QsciLexerPython* self, QFont* f, int style) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetFont_IsBase(true);
        vqscilexerpython->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerpython->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetFont(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetFont_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_SetPaper(QsciLexerPython* self, QColor* c, int style) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerpython->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseSetPaper(QsciLexerPython* self, QColor* c, int style) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetPaper_IsBase(true);
        vqscilexerpython->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerpython->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSetPaper(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_ReadProperties(QsciLexerPython* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        return vqscilexerpython->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerpython->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseReadProperties(QsciLexerPython* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_ReadProperties_IsBase(true);
        return vqscilexerpython->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerpython->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnReadProperties(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_WriteProperties(const QsciLexerPython* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerpython->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseWriteProperties(const QsciLexerPython* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_WriteProperties_IsBase(true);
        return vqscilexerpython->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerpython->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnWriteProperties(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_Event(QsciLexerPython* self, QEvent* event) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        return vqscilexerpython->event(event);
    } else {
        return vqscilexerpython->event(event);
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseEvent(QsciLexerPython* self, QEvent* event) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_Event_IsBase(true);
        return vqscilexerpython->event(event);
    } else {
        return vqscilexerpython->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnEvent(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_Event_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_EventFilter(QsciLexerPython* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        return vqscilexerpython->eventFilter(watched, event);
    } else {
        return vqscilexerpython->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseEventFilter(QsciLexerPython* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_EventFilter_IsBase(true);
        return vqscilexerpython->eventFilter(watched, event);
    } else {
        return vqscilexerpython->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnEventFilter(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_TimerEvent(QsciLexerPython* self, QTimerEvent* event) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->timerEvent(event);
    } else {
        vqscilexerpython->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseTimerEvent(QsciLexerPython* self, QTimerEvent* event) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_TimerEvent_IsBase(true);
        vqscilexerpython->timerEvent(event);
    } else {
        vqscilexerpython->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnTimerEvent(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_ChildEvent(QsciLexerPython* self, QChildEvent* event) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->childEvent(event);
    } else {
        vqscilexerpython->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseChildEvent(QsciLexerPython* self, QChildEvent* event) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_ChildEvent_IsBase(true);
        vqscilexerpython->childEvent(event);
    } else {
        vqscilexerpython->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnChildEvent(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_CustomEvent(QsciLexerPython* self, QEvent* event) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->customEvent(event);
    } else {
        vqscilexerpython->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseCustomEvent(QsciLexerPython* self, QEvent* event) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_CustomEvent_IsBase(true);
        vqscilexerpython->customEvent(event);
    } else {
        vqscilexerpython->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnCustomEvent(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_ConnectNotify(QsciLexerPython* self, QMetaMethod* signal) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->connectNotify(*signal);
    } else {
        vqscilexerpython->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseConnectNotify(QsciLexerPython* self, QMetaMethod* signal) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_ConnectNotify_IsBase(true);
        vqscilexerpython->connectNotify(*signal);
    } else {
        vqscilexerpython->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnConnectNotify(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPython_DisconnectNotify(QsciLexerPython* self, QMetaMethod* signal) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->disconnectNotify(*signal);
    } else {
        vqscilexerpython->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPython_QBaseDisconnectNotify(QsciLexerPython* self, QMetaMethod* signal) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_DisconnectNotify_IsBase(true);
        vqscilexerpython->disconnectNotify(*signal);
    } else {
        vqscilexerpython->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnDisconnectNotify(QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = dynamic_cast<VirtualQsciLexerPython*>(self)) {
        vqscilexerpython->setQsciLexerPython_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerPython_Sender(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->sender();
    } else {
        return vqscilexerpython->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerPython_QBaseSender(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Sender_IsBase(true);
        return vqscilexerpython->sender();
    } else {
        return vqscilexerpython->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSender(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Sender_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPython_SenderSignalIndex(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->senderSignalIndex();
    } else {
        return vqscilexerpython->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerPython_QBaseSenderSignalIndex(const QsciLexerPython* self) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_SenderSignalIndex_IsBase(true);
        return vqscilexerpython->senderSignalIndex();
    } else {
        return vqscilexerpython->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnSenderSignalIndex(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPython_Receivers(const QsciLexerPython* self, const char* signal) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->receivers(signal);
    } else {
        return vqscilexerpython->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerPython_QBaseReceivers(const QsciLexerPython* self, const char* signal) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Receivers_IsBase(true);
        return vqscilexerpython->receivers(signal);
    } else {
        return vqscilexerpython->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnReceivers(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_Receivers_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPython_IsSignalConnected(const QsciLexerPython* self, QMetaMethod* signal) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        return vqscilexerpython->isSignalConnected(*signal);
    } else {
        return vqscilexerpython->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerPython_QBaseIsSignalConnected(const QsciLexerPython* self, QMetaMethod* signal) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_IsSignalConnected_IsBase(true);
        return vqscilexerpython->isSignalConnected(*signal);
    } else {
        return vqscilexerpython->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPython_OnIsSignalConnected(const QsciLexerPython* self, intptr_t slot) {
    if (auto* vqscilexerpython = const_cast<VirtualQsciLexerPython*>(dynamic_cast<const VirtualQsciLexerPython*>(self))) {
        vqscilexerpython->setQsciLexerPython_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerPython::QsciLexerPython_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerPython_Delete(QsciLexerPython* self) {
    delete self;
}
