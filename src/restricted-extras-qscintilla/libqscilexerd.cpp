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
#include <qscilexerd.h>
#include "libqscilexerd.hpp"
#include "libqscilexerd.hxx"

QsciLexerD* QsciLexerD_new() {
    return new VirtualQsciLexerD();
}

QsciLexerD* QsciLexerD_new2(QObject* parent) {
    return new VirtualQsciLexerD(parent);
}

QMetaObject* QsciLexerD_MetaObject(const QsciLexerD* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerD_Metacast(QsciLexerD* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerD_Metacall(QsciLexerD* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerD_OnMetacall(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_Metacall_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerD_QBaseMetacall(QsciLexerD* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_Metacall_IsBase(true);
        return vqscilexerd->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerD_Tr(const char* s) {
    QString _ret = QsciLexerD::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerD_DefaultColor(const QsciLexerD* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerD_DefaultFont(const QsciLexerD* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerD_DefaultPaper(const QsciLexerD* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerD_FoldAtElse(const QsciLexerD* self) {
    return self->foldAtElse();
}

bool QsciLexerD_FoldComments(const QsciLexerD* self) {
    return self->foldComments();
}

bool QsciLexerD_FoldCompact(const QsciLexerD* self) {
    return self->foldCompact();
}

libqt_string QsciLexerD_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerD::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerD_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerD::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

const char* QsciLexerD_BlockEnd1(const QsciLexerD* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerD_BlockStart1(const QsciLexerD* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerD_BlockStartKeyword1(const QsciLexerD* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Derived class handler implementation
void QsciLexerD_SetFoldAtElse(QsciLexerD* self, bool fold) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setFoldAtElse(fold);
    } else {
        vqscilexerd->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetFoldAtElse(QsciLexerD* self, bool fold) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetFoldAtElse_IsBase(true);
        vqscilexerd->setFoldAtElse(fold);
    } else {
        vqscilexerd->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetFoldAtElse(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetFoldComments(QsciLexerD* self, bool fold) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setFoldComments(fold);
    } else {
        vqscilexerd->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetFoldComments(QsciLexerD* self, bool fold) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetFoldComments_IsBase(true);
        vqscilexerd->setFoldComments(fold);
    } else {
        vqscilexerd->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetFoldComments(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetFoldCompact(QsciLexerD* self, bool fold) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setFoldCompact(fold);
    } else {
        vqscilexerd->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetFoldCompact(QsciLexerD* self, bool fold) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetFoldCompact_IsBase(true);
        vqscilexerd->setFoldCompact(fold);
    } else {
        vqscilexerd->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetFoldCompact(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_Language(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return (const char*)vqscilexerd->language();
    } else {
        return (const char*)vqscilexerd->language();
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseLanguage(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Language_IsBase(true);
        return (const char*)vqscilexerd->language();
    } else {
        return (const char*)vqscilexerd->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnLanguage(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Language_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_Lexer(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return (const char*)vqscilexerd->lexer();
    } else {
        return (const char*)vqscilexerd->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseLexer(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Lexer_IsBase(true);
        return (const char*)vqscilexerd->lexer();
    } else {
        return (const char*)vqscilexerd->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnLexer(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Lexer_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_LexerId(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->lexerId();
    } else {
        return vqscilexerd->lexerId();
    }
}

// Base class handler implementation
int QsciLexerD_QBaseLexerId(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_LexerId_IsBase(true);
        return vqscilexerd->lexerId();
    } else {
        return vqscilexerd->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnLexerId(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_LexerId_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_AutoCompletionFillups(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return (const char*)vqscilexerd->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerd->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseAutoCompletionFillups(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerd->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerd->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnAutoCompletionFillups(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerD_AutoCompletionWordSeparators(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        QStringList _ret = vqscilexerd->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerd->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerD_QBaseAutoCompletionWordSeparators(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerd->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerd->autoCompletionWordSeparators();
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
void QsciLexerD_OnAutoCompletionWordSeparators(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_BlockEnd(const QsciLexerD* self, int* style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return (const char*)vqscilexerd->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerd->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseBlockEnd(const QsciLexerD* self, int* style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_BlockEnd_IsBase(true);
        return (const char*)vqscilexerd->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerd->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnBlockEnd(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_BlockLookback(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->blockLookback();
    } else {
        return vqscilexerd->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerD_QBaseBlockLookback(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_BlockLookback_IsBase(true);
        return vqscilexerd->blockLookback();
    } else {
        return vqscilexerd->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnBlockLookback(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_BlockStart(const QsciLexerD* self, int* style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return (const char*)vqscilexerd->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerd->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseBlockStart(const QsciLexerD* self, int* style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_BlockStart_IsBase(true);
        return (const char*)vqscilexerd->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerd->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnBlockStart(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_BlockStartKeyword(const QsciLexerD* self, int* style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return (const char*)vqscilexerd->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerd->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseBlockStartKeyword(const QsciLexerD* self, int* style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerd->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerd->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnBlockStartKeyword(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_BraceStyle(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->braceStyle();
    } else {
        return vqscilexerd->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerD_QBaseBraceStyle(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_BraceStyle_IsBase(true);
        return vqscilexerd->braceStyle();
    } else {
        return vqscilexerd->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnBraceStyle(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_CaseSensitive(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->caseSensitive();
    } else {
        return vqscilexerd->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseCaseSensitive(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_CaseSensitive_IsBase(true);
        return vqscilexerd->caseSensitive();
    } else {
        return vqscilexerd->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnCaseSensitive(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerD_Color(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return new QColor(vqscilexerd->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerD_QBaseColor(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Color_IsBase(true);
        return new QColor(vqscilexerd->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnColor(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Color_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_EolFill(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerd->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseEolFill(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_EolFill_IsBase(true);
        return vqscilexerd->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerd->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnEolFill(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_EolFill_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerD_Font(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return new QFont(vqscilexerd->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerD_QBaseFont(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Font_IsBase(true);
        return new QFont(vqscilexerd->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnFont(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Font_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_IndentationGuideView(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->indentationGuideView();
    } else {
        return vqscilexerd->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerD_QBaseIndentationGuideView(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_IndentationGuideView_IsBase(true);
        return vqscilexerd->indentationGuideView();
    } else {
        return vqscilexerd->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnIndentationGuideView(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_Keywords(const QsciLexerD* self, int set) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return (const char*)vqscilexerd->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerd->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseKeywords(const QsciLexerD* self, int set) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Keywords_IsBase(true);
        return (const char*)vqscilexerd->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerd->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnKeywords(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Keywords_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_DefaultStyle(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->defaultStyle();
    } else {
        return vqscilexerd->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerD_QBaseDefaultStyle(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_DefaultStyle_IsBase(true);
        return vqscilexerd->defaultStyle();
    } else {
        return vqscilexerd->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDefaultStyle(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerD_Description(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        QString _ret = vqscilexerd->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerd->description(static_cast<int>(style));
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
libqt_string QsciLexerD_QBaseDescription(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Description_IsBase(true);
        QString _ret = vqscilexerd->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerd->description(static_cast<int>(style));
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
void QsciLexerD_OnDescription(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Description_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerD_Paper(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return new QColor(vqscilexerd->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerD_QBasePaper(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Paper_IsBase(true);
        return new QColor(vqscilexerd->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnPaper(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Paper_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerD_DefaultColorWithStyle(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return new QColor(vqscilexerd->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerD_QBaseDefaultColorWithStyle(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerd->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDefaultColorWithStyle(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_DefaultEolFill(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerd->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseDefaultEolFill(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_DefaultEolFill_IsBase(true);
        return vqscilexerd->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerd->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDefaultEolFill(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerD_DefaultFontWithStyle(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return new QFont(vqscilexerd->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerD_QBaseDefaultFontWithStyle(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerd->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDefaultFontWithStyle(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerD_DefaultPaperWithStyle(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return new QColor(vqscilexerd->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerD_QBaseDefaultPaperWithStyle(const QsciLexerD* self, int style) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerd->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDefaultPaperWithStyle(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetEditor(QsciLexerD* self, QsciScintilla* editor) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setEditor(editor);
    } else {
        vqscilexerd->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetEditor(QsciLexerD* self, QsciScintilla* editor) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetEditor_IsBase(true);
        vqscilexerd->setEditor(editor);
    } else {
        vqscilexerd->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetEditor(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_RefreshProperties(QsciLexerD* self) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->refreshProperties();
    } else {
        vqscilexerd->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerD_QBaseRefreshProperties(QsciLexerD* self) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_RefreshProperties_IsBase(true);
        vqscilexerd->refreshProperties();
    } else {
        vqscilexerd->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnRefreshProperties(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_StyleBitsNeeded(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->styleBitsNeeded();
    } else {
        return vqscilexerd->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerD_QBaseStyleBitsNeeded(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_StyleBitsNeeded_IsBase(true);
        return vqscilexerd->styleBitsNeeded();
    } else {
        return vqscilexerd->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnStyleBitsNeeded(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerD_WordCharacters(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return (const char*)vqscilexerd->wordCharacters();
    } else {
        return (const char*)vqscilexerd->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerD_QBaseWordCharacters(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_WordCharacters_IsBase(true);
        return (const char*)vqscilexerd->wordCharacters();
    } else {
        return (const char*)vqscilexerd->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnWordCharacters(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetAutoIndentStyle(QsciLexerD* self, int autoindentstyle) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerd->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetAutoIndentStyle(QsciLexerD* self, int autoindentstyle) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetAutoIndentStyle_IsBase(true);
        vqscilexerd->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerd->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetAutoIndentStyle(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetColor(QsciLexerD* self, QColor* c, int style) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerd->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetColor(QsciLexerD* self, QColor* c, int style) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetColor_IsBase(true);
        vqscilexerd->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerd->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetColor(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetColor_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetEolFill(QsciLexerD* self, bool eoffill, int style) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerd->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetEolFill(QsciLexerD* self, bool eoffill, int style) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetEolFill_IsBase(true);
        vqscilexerd->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerd->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetEolFill(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetFont(QsciLexerD* self, QFont* f, int style) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerd->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetFont(QsciLexerD* self, QFont* f, int style) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetFont_IsBase(true);
        vqscilexerd->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerd->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetFont(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetFont_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_SetPaper(QsciLexerD* self, QColor* c, int style) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerd->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerD_QBaseSetPaper(QsciLexerD* self, QColor* c, int style) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetPaper_IsBase(true);
        vqscilexerd->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerd->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSetPaper(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_ReadProperties(QsciLexerD* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        return vqscilexerd->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerd->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseReadProperties(QsciLexerD* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_ReadProperties_IsBase(true);
        return vqscilexerd->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerd->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnReadProperties(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_WriteProperties(const QsciLexerD* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerd->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseWriteProperties(const QsciLexerD* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_WriteProperties_IsBase(true);
        return vqscilexerd->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerd->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnWriteProperties(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_Event(QsciLexerD* self, QEvent* event) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        return vqscilexerd->event(event);
    } else {
        return vqscilexerd->event(event);
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseEvent(QsciLexerD* self, QEvent* event) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_Event_IsBase(true);
        return vqscilexerd->event(event);
    } else {
        return vqscilexerd->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnEvent(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_Event_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_EventFilter(QsciLexerD* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        return vqscilexerd->eventFilter(watched, event);
    } else {
        return vqscilexerd->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseEventFilter(QsciLexerD* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_EventFilter_IsBase(true);
        return vqscilexerd->eventFilter(watched, event);
    } else {
        return vqscilexerd->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnEventFilter(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_TimerEvent(QsciLexerD* self, QTimerEvent* event) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->timerEvent(event);
    } else {
        vqscilexerd->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseTimerEvent(QsciLexerD* self, QTimerEvent* event) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_TimerEvent_IsBase(true);
        vqscilexerd->timerEvent(event);
    } else {
        vqscilexerd->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnTimerEvent(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_ChildEvent(QsciLexerD* self, QChildEvent* event) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->childEvent(event);
    } else {
        vqscilexerd->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseChildEvent(QsciLexerD* self, QChildEvent* event) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_ChildEvent_IsBase(true);
        vqscilexerd->childEvent(event);
    } else {
        vqscilexerd->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnChildEvent(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_CustomEvent(QsciLexerD* self, QEvent* event) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->customEvent(event);
    } else {
        vqscilexerd->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseCustomEvent(QsciLexerD* self, QEvent* event) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_CustomEvent_IsBase(true);
        vqscilexerd->customEvent(event);
    } else {
        vqscilexerd->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnCustomEvent(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_ConnectNotify(QsciLexerD* self, QMetaMethod* signal) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->connectNotify(*signal);
    } else {
        vqscilexerd->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseConnectNotify(QsciLexerD* self, QMetaMethod* signal) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_ConnectNotify_IsBase(true);
        vqscilexerd->connectNotify(*signal);
    } else {
        vqscilexerd->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnConnectNotify(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerD_DisconnectNotify(QsciLexerD* self, QMetaMethod* signal) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->disconnectNotify(*signal);
    } else {
        vqscilexerd->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerD_QBaseDisconnectNotify(QsciLexerD* self, QMetaMethod* signal) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_DisconnectNotify_IsBase(true);
        vqscilexerd->disconnectNotify(*signal);
    } else {
        vqscilexerd->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnDisconnectNotify(QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = dynamic_cast<VirtualQsciLexerD*>(self)) {
        vqscilexerd->setQsciLexerD_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerD_Sender(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->sender();
    } else {
        return vqscilexerd->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerD_QBaseSender(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Sender_IsBase(true);
        return vqscilexerd->sender();
    } else {
        return vqscilexerd->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSender(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Sender_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_SenderSignalIndex(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->senderSignalIndex();
    } else {
        return vqscilexerd->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerD_QBaseSenderSignalIndex(const QsciLexerD* self) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_SenderSignalIndex_IsBase(true);
        return vqscilexerd->senderSignalIndex();
    } else {
        return vqscilexerd->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnSenderSignalIndex(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerD_Receivers(const QsciLexerD* self, const char* signal) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->receivers(signal);
    } else {
        return vqscilexerd->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerD_QBaseReceivers(const QsciLexerD* self, const char* signal) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Receivers_IsBase(true);
        return vqscilexerd->receivers(signal);
    } else {
        return vqscilexerd->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnReceivers(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_Receivers_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerD_IsSignalConnected(const QsciLexerD* self, QMetaMethod* signal) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        return vqscilexerd->isSignalConnected(*signal);
    } else {
        return vqscilexerd->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerD_QBaseIsSignalConnected(const QsciLexerD* self, QMetaMethod* signal) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_IsSignalConnected_IsBase(true);
        return vqscilexerd->isSignalConnected(*signal);
    } else {
        return vqscilexerd->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerD_OnIsSignalConnected(const QsciLexerD* self, intptr_t slot) {
    if (auto* vqscilexerd = const_cast<VirtualQsciLexerD*>(dynamic_cast<const VirtualQsciLexerD*>(self))) {
        vqscilexerd->setQsciLexerD_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerD::QsciLexerD_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerD_Delete(QsciLexerD* self) {
    delete self;
}
