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
#include <qscilexerperl.h>
#include "libqscilexerperl.hpp"
#include "libqscilexerperl.hxx"

QsciLexerPerl* QsciLexerPerl_new() {
    return new VirtualQsciLexerPerl();
}

QsciLexerPerl* QsciLexerPerl_new2(QObject* parent) {
    return new VirtualQsciLexerPerl(parent);
}

QMetaObject* QsciLexerPerl_MetaObject(const QsciLexerPerl* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerPerl_Metacast(QsciLexerPerl* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerPerl_Metacall(QsciLexerPerl* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPerl_OnMetacall(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_Metacall_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerPerl_QBaseMetacall(QsciLexerPerl* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_Metacall_IsBase(true);
        return vqscilexerperl->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerPerl_Tr(const char* s) {
    QString _ret = QsciLexerPerl::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerPerl_DefaultColor(const QsciLexerPerl* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerPerl_DefaultFont(const QsciLexerPerl* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPerl_DefaultPaper(const QsciLexerPerl* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

void QsciLexerPerl_SetFoldAtElse(QsciLexerPerl* self, bool fold) {
    self->setFoldAtElse(fold);
}

bool QsciLexerPerl_FoldAtElse(const QsciLexerPerl* self) {
    return self->foldAtElse();
}

bool QsciLexerPerl_FoldComments(const QsciLexerPerl* self) {
    return self->foldComments();
}

bool QsciLexerPerl_FoldCompact(const QsciLexerPerl* self) {
    return self->foldCompact();
}

void QsciLexerPerl_SetFoldPackages(QsciLexerPerl* self, bool fold) {
    self->setFoldPackages(fold);
}

bool QsciLexerPerl_FoldPackages(const QsciLexerPerl* self) {
    return self->foldPackages();
}

void QsciLexerPerl_SetFoldPODBlocks(QsciLexerPerl* self, bool fold) {
    self->setFoldPODBlocks(fold);
}

bool QsciLexerPerl_FoldPODBlocks(const QsciLexerPerl* self) {
    return self->foldPODBlocks();
}

libqt_string QsciLexerPerl_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerPerl::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerPerl_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerPerl::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

const char* QsciLexerPerl_BlockEnd1(const QsciLexerPerl* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerPerl_BlockStart1(const QsciLexerPerl* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Derived class handler implementation
void QsciLexerPerl_SetFoldComments(QsciLexerPerl* self, bool fold) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setFoldComments(fold);
    } else {
        vqscilexerperl->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetFoldComments(QsciLexerPerl* self, bool fold) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetFoldComments_IsBase(true);
        vqscilexerperl->setFoldComments(fold);
    } else {
        vqscilexerperl->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetFoldComments(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_SetFoldCompact(QsciLexerPerl* self, bool fold) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setFoldCompact(fold);
    } else {
        vqscilexerperl->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetFoldCompact(QsciLexerPerl* self, bool fold) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetFoldCompact_IsBase(true);
        vqscilexerperl->setFoldCompact(fold);
    } else {
        vqscilexerperl->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetFoldCompact(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_Language(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return (const char*)vqscilexerperl->language();
    } else {
        return (const char*)vqscilexerperl->language();
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseLanguage(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Language_IsBase(true);
        return (const char*)vqscilexerperl->language();
    } else {
        return (const char*)vqscilexerperl->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnLanguage(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Language_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_Lexer(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return (const char*)vqscilexerperl->lexer();
    } else {
        return (const char*)vqscilexerperl->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseLexer(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Lexer_IsBase(true);
        return (const char*)vqscilexerperl->lexer();
    } else {
        return (const char*)vqscilexerperl->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnLexer(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Lexer_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_LexerId(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->lexerId();
    } else {
        return vqscilexerperl->lexerId();
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseLexerId(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_LexerId_IsBase(true);
        return vqscilexerperl->lexerId();
    } else {
        return vqscilexerperl->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnLexerId(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_LexerId_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_AutoCompletionFillups(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return (const char*)vqscilexerperl->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerperl->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseAutoCompletionFillups(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerperl->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerperl->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnAutoCompletionFillups(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerPerl_AutoCompletionWordSeparators(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        QStringList _ret = vqscilexerperl->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerperl->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerPerl_QBaseAutoCompletionWordSeparators(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerperl->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerperl->autoCompletionWordSeparators();
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
void QsciLexerPerl_OnAutoCompletionWordSeparators(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_BlockEnd(const QsciLexerPerl* self, int* style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return (const char*)vqscilexerperl->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerperl->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseBlockEnd(const QsciLexerPerl* self, int* style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_BlockEnd_IsBase(true);
        return (const char*)vqscilexerperl->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerperl->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnBlockEnd(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_BlockLookback(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->blockLookback();
    } else {
        return vqscilexerperl->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseBlockLookback(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_BlockLookback_IsBase(true);
        return vqscilexerperl->blockLookback();
    } else {
        return vqscilexerperl->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnBlockLookback(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_BlockStart(const QsciLexerPerl* self, int* style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return (const char*)vqscilexerperl->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerperl->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseBlockStart(const QsciLexerPerl* self, int* style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_BlockStart_IsBase(true);
        return (const char*)vqscilexerperl->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerperl->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnBlockStart(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_BlockStartKeyword(const QsciLexerPerl* self, int* style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return (const char*)vqscilexerperl->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerperl->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseBlockStartKeyword(const QsciLexerPerl* self, int* style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerperl->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerperl->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnBlockStartKeyword(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_BraceStyle(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->braceStyle();
    } else {
        return vqscilexerperl->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseBraceStyle(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_BraceStyle_IsBase(true);
        return vqscilexerperl->braceStyle();
    } else {
        return vqscilexerperl->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnBraceStyle(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_CaseSensitive(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->caseSensitive();
    } else {
        return vqscilexerperl->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseCaseSensitive(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_CaseSensitive_IsBase(true);
        return vqscilexerperl->caseSensitive();
    } else {
        return vqscilexerperl->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnCaseSensitive(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPerl_Color(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return new QColor(vqscilexerperl->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPerl_QBaseColor(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Color_IsBase(true);
        return new QColor(vqscilexerperl->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnColor(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Color_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_EolFill(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerperl->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseEolFill(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_EolFill_IsBase(true);
        return vqscilexerperl->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerperl->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnEolFill(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_EolFill_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPerl_Font(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return new QFont(vqscilexerperl->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPerl_QBaseFont(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Font_IsBase(true);
        return new QFont(vqscilexerperl->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnFont(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Font_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_IndentationGuideView(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->indentationGuideView();
    } else {
        return vqscilexerperl->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseIndentationGuideView(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_IndentationGuideView_IsBase(true);
        return vqscilexerperl->indentationGuideView();
    } else {
        return vqscilexerperl->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnIndentationGuideView(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_Keywords(const QsciLexerPerl* self, int set) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return (const char*)vqscilexerperl->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerperl->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseKeywords(const QsciLexerPerl* self, int set) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Keywords_IsBase(true);
        return (const char*)vqscilexerperl->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerperl->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnKeywords(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Keywords_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_DefaultStyle(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->defaultStyle();
    } else {
        return vqscilexerperl->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseDefaultStyle(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_DefaultStyle_IsBase(true);
        return vqscilexerperl->defaultStyle();
    } else {
        return vqscilexerperl->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDefaultStyle(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPerl_Description(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        QString _ret = vqscilexerperl->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerperl->description(static_cast<int>(style));
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
libqt_string QsciLexerPerl_QBaseDescription(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Description_IsBase(true);
        QString _ret = vqscilexerperl->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerperl->description(static_cast<int>(style));
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
void QsciLexerPerl_OnDescription(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Description_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPerl_Paper(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return new QColor(vqscilexerperl->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPerl_QBasePaper(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Paper_IsBase(true);
        return new QColor(vqscilexerperl->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnPaper(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Paper_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPerl_DefaultColorWithStyle(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return new QColor(vqscilexerperl->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPerl_QBaseDefaultColorWithStyle(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerperl->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDefaultColorWithStyle(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_DefaultEolFill(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerperl->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseDefaultEolFill(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_DefaultEolFill_IsBase(true);
        return vqscilexerperl->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerperl->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDefaultEolFill(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPerl_DefaultFontWithStyle(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return new QFont(vqscilexerperl->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPerl_QBaseDefaultFontWithStyle(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerperl->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDefaultFontWithStyle(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPerl_DefaultPaperWithStyle(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return new QColor(vqscilexerperl->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPerl_QBaseDefaultPaperWithStyle(const QsciLexerPerl* self, int style) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerperl->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDefaultPaperWithStyle(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_SetEditor(QsciLexerPerl* self, QsciScintilla* editor) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setEditor(editor);
    } else {
        vqscilexerperl->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetEditor(QsciLexerPerl* self, QsciScintilla* editor) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetEditor_IsBase(true);
        vqscilexerperl->setEditor(editor);
    } else {
        vqscilexerperl->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetEditor(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_RefreshProperties(QsciLexerPerl* self) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->refreshProperties();
    } else {
        vqscilexerperl->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseRefreshProperties(QsciLexerPerl* self) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_RefreshProperties_IsBase(true);
        vqscilexerperl->refreshProperties();
    } else {
        vqscilexerperl->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnRefreshProperties(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_StyleBitsNeeded(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->styleBitsNeeded();
    } else {
        return vqscilexerperl->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseStyleBitsNeeded(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_StyleBitsNeeded_IsBase(true);
        return vqscilexerperl->styleBitsNeeded();
    } else {
        return vqscilexerperl->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnStyleBitsNeeded(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPerl_WordCharacters(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return (const char*)vqscilexerperl->wordCharacters();
    } else {
        return (const char*)vqscilexerperl->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerPerl_QBaseWordCharacters(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_WordCharacters_IsBase(true);
        return (const char*)vqscilexerperl->wordCharacters();
    } else {
        return (const char*)vqscilexerperl->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnWordCharacters(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_SetAutoIndentStyle(QsciLexerPerl* self, int autoindentstyle) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerperl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetAutoIndentStyle(QsciLexerPerl* self, int autoindentstyle) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetAutoIndentStyle_IsBase(true);
        vqscilexerperl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerperl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetAutoIndentStyle(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_SetColor(QsciLexerPerl* self, QColor* c, int style) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerperl->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetColor(QsciLexerPerl* self, QColor* c, int style) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetColor_IsBase(true);
        vqscilexerperl->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerperl->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetColor(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetColor_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_SetEolFill(QsciLexerPerl* self, bool eoffill, int style) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerperl->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetEolFill(QsciLexerPerl* self, bool eoffill, int style) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetEolFill_IsBase(true);
        vqscilexerperl->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerperl->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetEolFill(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_SetFont(QsciLexerPerl* self, QFont* f, int style) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerperl->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetFont(QsciLexerPerl* self, QFont* f, int style) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetFont_IsBase(true);
        vqscilexerperl->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerperl->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetFont(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetFont_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_SetPaper(QsciLexerPerl* self, QColor* c, int style) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerperl->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseSetPaper(QsciLexerPerl* self, QColor* c, int style) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetPaper_IsBase(true);
        vqscilexerperl->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerperl->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSetPaper(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_ReadProperties(QsciLexerPerl* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        return vqscilexerperl->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerperl->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseReadProperties(QsciLexerPerl* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_ReadProperties_IsBase(true);
        return vqscilexerperl->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerperl->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnReadProperties(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_WriteProperties(const QsciLexerPerl* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerperl->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseWriteProperties(const QsciLexerPerl* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_WriteProperties_IsBase(true);
        return vqscilexerperl->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerperl->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnWriteProperties(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_Event(QsciLexerPerl* self, QEvent* event) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        return vqscilexerperl->event(event);
    } else {
        return vqscilexerperl->event(event);
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseEvent(QsciLexerPerl* self, QEvent* event) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_Event_IsBase(true);
        return vqscilexerperl->event(event);
    } else {
        return vqscilexerperl->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnEvent(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_Event_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_EventFilter(QsciLexerPerl* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        return vqscilexerperl->eventFilter(watched, event);
    } else {
        return vqscilexerperl->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseEventFilter(QsciLexerPerl* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_EventFilter_IsBase(true);
        return vqscilexerperl->eventFilter(watched, event);
    } else {
        return vqscilexerperl->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnEventFilter(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_TimerEvent(QsciLexerPerl* self, QTimerEvent* event) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->timerEvent(event);
    } else {
        vqscilexerperl->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseTimerEvent(QsciLexerPerl* self, QTimerEvent* event) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_TimerEvent_IsBase(true);
        vqscilexerperl->timerEvent(event);
    } else {
        vqscilexerperl->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnTimerEvent(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_ChildEvent(QsciLexerPerl* self, QChildEvent* event) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->childEvent(event);
    } else {
        vqscilexerperl->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseChildEvent(QsciLexerPerl* self, QChildEvent* event) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_ChildEvent_IsBase(true);
        vqscilexerperl->childEvent(event);
    } else {
        vqscilexerperl->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnChildEvent(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_CustomEvent(QsciLexerPerl* self, QEvent* event) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->customEvent(event);
    } else {
        vqscilexerperl->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseCustomEvent(QsciLexerPerl* self, QEvent* event) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_CustomEvent_IsBase(true);
        vqscilexerperl->customEvent(event);
    } else {
        vqscilexerperl->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnCustomEvent(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_ConnectNotify(QsciLexerPerl* self, QMetaMethod* signal) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->connectNotify(*signal);
    } else {
        vqscilexerperl->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseConnectNotify(QsciLexerPerl* self, QMetaMethod* signal) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_ConnectNotify_IsBase(true);
        vqscilexerperl->connectNotify(*signal);
    } else {
        vqscilexerperl->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnConnectNotify(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPerl_DisconnectNotify(QsciLexerPerl* self, QMetaMethod* signal) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->disconnectNotify(*signal);
    } else {
        vqscilexerperl->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPerl_QBaseDisconnectNotify(QsciLexerPerl* self, QMetaMethod* signal) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_DisconnectNotify_IsBase(true);
        vqscilexerperl->disconnectNotify(*signal);
    } else {
        vqscilexerperl->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnDisconnectNotify(QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = dynamic_cast<VirtualQsciLexerPerl*>(self)) {
        vqscilexerperl->setQsciLexerPerl_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerPerl_Sender(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->sender();
    } else {
        return vqscilexerperl->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerPerl_QBaseSender(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Sender_IsBase(true);
        return vqscilexerperl->sender();
    } else {
        return vqscilexerperl->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSender(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Sender_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_SenderSignalIndex(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->senderSignalIndex();
    } else {
        return vqscilexerperl->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseSenderSignalIndex(const QsciLexerPerl* self) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_SenderSignalIndex_IsBase(true);
        return vqscilexerperl->senderSignalIndex();
    } else {
        return vqscilexerperl->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnSenderSignalIndex(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPerl_Receivers(const QsciLexerPerl* self, const char* signal) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->receivers(signal);
    } else {
        return vqscilexerperl->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerPerl_QBaseReceivers(const QsciLexerPerl* self, const char* signal) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Receivers_IsBase(true);
        return vqscilexerperl->receivers(signal);
    } else {
        return vqscilexerperl->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnReceivers(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_Receivers_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPerl_IsSignalConnected(const QsciLexerPerl* self, QMetaMethod* signal) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        return vqscilexerperl->isSignalConnected(*signal);
    } else {
        return vqscilexerperl->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerPerl_QBaseIsSignalConnected(const QsciLexerPerl* self, QMetaMethod* signal) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_IsSignalConnected_IsBase(true);
        return vqscilexerperl->isSignalConnected(*signal);
    } else {
        return vqscilexerperl->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPerl_OnIsSignalConnected(const QsciLexerPerl* self, intptr_t slot) {
    if (auto* vqscilexerperl = const_cast<VirtualQsciLexerPerl*>(dynamic_cast<const VirtualQsciLexerPerl*>(self))) {
        vqscilexerperl->setQsciLexerPerl_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerPerl::QsciLexerPerl_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerPerl_Delete(QsciLexerPerl* self) {
    delete self;
}
