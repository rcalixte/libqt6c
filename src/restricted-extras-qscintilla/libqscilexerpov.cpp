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
#include <qscilexerpov.h>
#include "libqscilexerpov.hpp"
#include "libqscilexerpov.hxx"

QsciLexerPOV* QsciLexerPOV_new() {
    return new VirtualQsciLexerPOV();
}

QsciLexerPOV* QsciLexerPOV_new2(QObject* parent) {
    return new VirtualQsciLexerPOV(parent);
}

QMetaObject* QsciLexerPOV_MetaObject(const QsciLexerPOV* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerPOV_Metacast(QsciLexerPOV* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerPOV_Metacall(QsciLexerPOV* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerPOV_OnMetacall(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_Metacall_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerPOV_QBaseMetacall(QsciLexerPOV* self, int param1, int param2, void** param3) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_Metacall_IsBase(true);
        return vqscilexerpov->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerPOV_Tr(const char* s) {
    QString _ret = QsciLexerPOV::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerPOV_DefaultColor(const QsciLexerPOV* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerPOV_DefaultFont(const QsciLexerPOV* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPOV_DefaultPaper(const QsciLexerPOV* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerPOV_FoldComments(const QsciLexerPOV* self) {
    return self->foldComments();
}

bool QsciLexerPOV_FoldCompact(const QsciLexerPOV* self) {
    return self->foldCompact();
}

bool QsciLexerPOV_FoldDirectives(const QsciLexerPOV* self) {
    return self->foldDirectives();
}

libqt_string QsciLexerPOV_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerPOV::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerPOV_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerPOV::tr(s, c, static_cast<int>(n));
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
void QsciLexerPOV_SetFoldComments(QsciLexerPOV* self, bool fold) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setFoldComments(fold);
    } else {
        vqscilexerpov->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseSetFoldComments(QsciLexerPOV* self, bool fold) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetFoldComments_IsBase(true);
        vqscilexerpov->setFoldComments(fold);
    } else {
        vqscilexerpov->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetFoldComments(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPOV_SetFoldCompact(QsciLexerPOV* self, bool fold) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setFoldCompact(fold);
    } else {
        vqscilexerpov->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseSetFoldCompact(QsciLexerPOV* self, bool fold) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetFoldCompact_IsBase(true);
        vqscilexerpov->setFoldCompact(fold);
    } else {
        vqscilexerpov->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetFoldCompact(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPOV_SetFoldDirectives(QsciLexerPOV* self, bool fold) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setFoldDirectives(fold);
    } else {
        vqscilexerpov->setFoldDirectives(fold);
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseSetFoldDirectives(QsciLexerPOV* self, bool fold) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetFoldDirectives_IsBase(true);
        vqscilexerpov->setFoldDirectives(fold);
    } else {
        vqscilexerpov->setFoldDirectives(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetFoldDirectives(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetFoldDirectives_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetFoldDirectives_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPOV_Language(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return (const char*)vqscilexerpov->language();
    } else {
        return (const char*)vqscilexerpov->language();
    }
}

// Base class handler implementation
const char* QsciLexerPOV_QBaseLanguage(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Language_IsBase(true);
        return (const char*)vqscilexerpov->language();
    } else {
        return (const char*)vqscilexerpov->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnLanguage(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Language_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPOV_Lexer(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return (const char*)vqscilexerpov->lexer();
    } else {
        return (const char*)vqscilexerpov->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerPOV_QBaseLexer(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Lexer_IsBase(true);
        return (const char*)vqscilexerpov->lexer();
    } else {
        return (const char*)vqscilexerpov->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnLexer(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Lexer_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPOV_LexerId(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->lexerId();
    } else {
        return vqscilexerpov->lexerId();
    }
}

// Base class handler implementation
int QsciLexerPOV_QBaseLexerId(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_LexerId_IsBase(true);
        return vqscilexerpov->lexerId();
    } else {
        return vqscilexerpov->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnLexerId(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_LexerId_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPOV_AutoCompletionFillups(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return (const char*)vqscilexerpov->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerpov->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerPOV_QBaseAutoCompletionFillups(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexerpov->autoCompletionFillups();
    } else {
        return (const char*)vqscilexerpov->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnAutoCompletionFillups(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerPOV_AutoCompletionWordSeparators(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        QStringList _ret = vqscilexerpov->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerpov->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerPOV_QBaseAutoCompletionWordSeparators(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexerpov->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexerpov->autoCompletionWordSeparators();
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
void QsciLexerPOV_OnAutoCompletionWordSeparators(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPOV_BlockEnd(const QsciLexerPOV* self, int* style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return (const char*)vqscilexerpov->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpov->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPOV_QBaseBlockEnd(const QsciLexerPOV* self, int* style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_BlockEnd_IsBase(true);
        return (const char*)vqscilexerpov->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpov->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnBlockEnd(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPOV_BlockLookback(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->blockLookback();
    } else {
        return vqscilexerpov->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerPOV_QBaseBlockLookback(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_BlockLookback_IsBase(true);
        return vqscilexerpov->blockLookback();
    } else {
        return vqscilexerpov->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnBlockLookback(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPOV_BlockStart(const QsciLexerPOV* self, int* style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return (const char*)vqscilexerpov->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpov->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPOV_QBaseBlockStart(const QsciLexerPOV* self, int* style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_BlockStart_IsBase(true);
        return (const char*)vqscilexerpov->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpov->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnBlockStart(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPOV_BlockStartKeyword(const QsciLexerPOV* self, int* style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return (const char*)vqscilexerpov->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpov->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerPOV_QBaseBlockStartKeyword(const QsciLexerPOV* self, int* style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexerpov->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexerpov->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnBlockStartKeyword(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPOV_BraceStyle(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->braceStyle();
    } else {
        return vqscilexerpov->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerPOV_QBaseBraceStyle(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_BraceStyle_IsBase(true);
        return vqscilexerpov->braceStyle();
    } else {
        return vqscilexerpov->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnBraceStyle(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPOV_CaseSensitive(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->caseSensitive();
    } else {
        return vqscilexerpov->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerPOV_QBaseCaseSensitive(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_CaseSensitive_IsBase(true);
        return vqscilexerpov->caseSensitive();
    } else {
        return vqscilexerpov->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnCaseSensitive(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPOV_Color(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return new QColor(vqscilexerpov->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPOV_QBaseColor(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Color_IsBase(true);
        return new QColor(vqscilexerpov->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnColor(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Color_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPOV_EolFill(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerpov->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPOV_QBaseEolFill(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_EolFill_IsBase(true);
        return vqscilexerpov->eolFill(static_cast<int>(style));
    } else {
        return vqscilexerpov->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnEolFill(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_EolFill_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPOV_Font(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return new QFont(vqscilexerpov->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPOV_QBaseFont(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Font_IsBase(true);
        return new QFont(vqscilexerpov->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnFont(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Font_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPOV_IndentationGuideView(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->indentationGuideView();
    } else {
        return vqscilexerpov->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerPOV_QBaseIndentationGuideView(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_IndentationGuideView_IsBase(true);
        return vqscilexerpov->indentationGuideView();
    } else {
        return vqscilexerpov->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnIndentationGuideView(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPOV_Keywords(const QsciLexerPOV* self, int set) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return (const char*)vqscilexerpov->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerpov->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerPOV_QBaseKeywords(const QsciLexerPOV* self, int set) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Keywords_IsBase(true);
        return (const char*)vqscilexerpov->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexerpov->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnKeywords(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Keywords_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPOV_DefaultStyle(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->defaultStyle();
    } else {
        return vqscilexerpov->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerPOV_QBaseDefaultStyle(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_DefaultStyle_IsBase(true);
        return vqscilexerpov->defaultStyle();
    } else {
        return vqscilexerpov->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnDefaultStyle(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerPOV_Description(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        QString _ret = vqscilexerpov->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerpov->description(static_cast<int>(style));
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
libqt_string QsciLexerPOV_QBaseDescription(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Description_IsBase(true);
        QString _ret = vqscilexerpov->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexerpov->description(static_cast<int>(style));
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
void QsciLexerPOV_OnDescription(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Description_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPOV_Paper(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return new QColor(vqscilexerpov->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPOV_QBasePaper(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Paper_IsBase(true);
        return new QColor(vqscilexerpov->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnPaper(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Paper_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPOV_DefaultColorWithStyle(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return new QColor(vqscilexerpov->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPOV_QBaseDefaultColorWithStyle(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexerpov->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnDefaultColorWithStyle(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPOV_DefaultEolFill(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerpov->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerPOV_QBaseDefaultEolFill(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_DefaultEolFill_IsBase(true);
        return vqscilexerpov->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexerpov->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnDefaultEolFill(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerPOV_DefaultFontWithStyle(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return new QFont(vqscilexerpov->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerPOV_QBaseDefaultFontWithStyle(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexerpov->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnDefaultFontWithStyle(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerPOV_DefaultPaperWithStyle(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return new QColor(vqscilexerpov->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerPOV_QBaseDefaultPaperWithStyle(const QsciLexerPOV* self, int style) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexerpov->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnDefaultPaperWithStyle(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPOV_SetEditor(QsciLexerPOV* self, QsciScintilla* editor) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setEditor(editor);
    } else {
        vqscilexerpov->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseSetEditor(QsciLexerPOV* self, QsciScintilla* editor) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetEditor_IsBase(true);
        vqscilexerpov->setEditor(editor);
    } else {
        vqscilexerpov->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetEditor(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPOV_RefreshProperties(QsciLexerPOV* self) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->refreshProperties();
    } else {
        vqscilexerpov->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseRefreshProperties(QsciLexerPOV* self) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_RefreshProperties_IsBase(true);
        vqscilexerpov->refreshProperties();
    } else {
        vqscilexerpov->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnRefreshProperties(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPOV_StyleBitsNeeded(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->styleBitsNeeded();
    } else {
        return vqscilexerpov->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerPOV_QBaseStyleBitsNeeded(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_StyleBitsNeeded_IsBase(true);
        return vqscilexerpov->styleBitsNeeded();
    } else {
        return vqscilexerpov->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnStyleBitsNeeded(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerPOV_WordCharacters(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return (const char*)vqscilexerpov->wordCharacters();
    } else {
        return (const char*)vqscilexerpov->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerPOV_QBaseWordCharacters(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_WordCharacters_IsBase(true);
        return (const char*)vqscilexerpov->wordCharacters();
    } else {
        return (const char*)vqscilexerpov->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnWordCharacters(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPOV_SetAutoIndentStyle(QsciLexerPOV* self, int autoindentstyle) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerpov->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseSetAutoIndentStyle(QsciLexerPOV* self, int autoindentstyle) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetAutoIndentStyle_IsBase(true);
        vqscilexerpov->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexerpov->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetAutoIndentStyle(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPOV_SetColor(QsciLexerPOV* self, QColor* c, int style) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerpov->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseSetColor(QsciLexerPOV* self, QColor* c, int style) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetColor_IsBase(true);
        vqscilexerpov->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexerpov->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetColor(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetColor_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPOV_SetEolFill(QsciLexerPOV* self, bool eoffill, int style) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerpov->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseSetEolFill(QsciLexerPOV* self, bool eoffill, int style) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetEolFill_IsBase(true);
        vqscilexerpov->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexerpov->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetEolFill(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPOV_SetFont(QsciLexerPOV* self, QFont* f, int style) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerpov->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseSetFont(QsciLexerPOV* self, QFont* f, int style) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetFont_IsBase(true);
        vqscilexerpov->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexerpov->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetFont(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetFont_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPOV_SetPaper(QsciLexerPOV* self, QColor* c, int style) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerpov->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseSetPaper(QsciLexerPOV* self, QColor* c, int style) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetPaper_IsBase(true);
        vqscilexerpov->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexerpov->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSetPaper(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPOV_ReadProperties(QsciLexerPOV* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        return vqscilexerpov->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerpov->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPOV_QBaseReadProperties(QsciLexerPOV* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_ReadProperties_IsBase(true);
        return vqscilexerpov->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexerpov->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnReadProperties(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPOV_WriteProperties(const QsciLexerPOV* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerpov->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerPOV_QBaseWriteProperties(const QsciLexerPOV* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_WriteProperties_IsBase(true);
        return vqscilexerpov->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexerpov->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnWriteProperties(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPOV_Event(QsciLexerPOV* self, QEvent* event) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        return vqscilexerpov->event(event);
    } else {
        return vqscilexerpov->event(event);
    }
}

// Base class handler implementation
bool QsciLexerPOV_QBaseEvent(QsciLexerPOV* self, QEvent* event) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_Event_IsBase(true);
        return vqscilexerpov->event(event);
    } else {
        return vqscilexerpov->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnEvent(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_Event_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPOV_EventFilter(QsciLexerPOV* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        return vqscilexerpov->eventFilter(watched, event);
    } else {
        return vqscilexerpov->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerPOV_QBaseEventFilter(QsciLexerPOV* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_EventFilter_IsBase(true);
        return vqscilexerpov->eventFilter(watched, event);
    } else {
        return vqscilexerpov->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnEventFilter(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPOV_TimerEvent(QsciLexerPOV* self, QTimerEvent* event) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->timerEvent(event);
    } else {
        vqscilexerpov->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseTimerEvent(QsciLexerPOV* self, QTimerEvent* event) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_TimerEvent_IsBase(true);
        vqscilexerpov->timerEvent(event);
    } else {
        vqscilexerpov->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnTimerEvent(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPOV_ChildEvent(QsciLexerPOV* self, QChildEvent* event) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->childEvent(event);
    } else {
        vqscilexerpov->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseChildEvent(QsciLexerPOV* self, QChildEvent* event) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_ChildEvent_IsBase(true);
        vqscilexerpov->childEvent(event);
    } else {
        vqscilexerpov->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnChildEvent(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPOV_CustomEvent(QsciLexerPOV* self, QEvent* event) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->customEvent(event);
    } else {
        vqscilexerpov->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseCustomEvent(QsciLexerPOV* self, QEvent* event) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_CustomEvent_IsBase(true);
        vqscilexerpov->customEvent(event);
    } else {
        vqscilexerpov->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnCustomEvent(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPOV_ConnectNotify(QsciLexerPOV* self, QMetaMethod* signal) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->connectNotify(*signal);
    } else {
        vqscilexerpov->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseConnectNotify(QsciLexerPOV* self, QMetaMethod* signal) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_ConnectNotify_IsBase(true);
        vqscilexerpov->connectNotify(*signal);
    } else {
        vqscilexerpov->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnConnectNotify(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerPOV_DisconnectNotify(QsciLexerPOV* self, QMetaMethod* signal) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->disconnectNotify(*signal);
    } else {
        vqscilexerpov->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerPOV_QBaseDisconnectNotify(QsciLexerPOV* self, QMetaMethod* signal) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_DisconnectNotify_IsBase(true);
        vqscilexerpov->disconnectNotify(*signal);
    } else {
        vqscilexerpov->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnDisconnectNotify(QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = dynamic_cast<VirtualQsciLexerPOV*>(self)) {
        vqscilexerpov->setQsciLexerPOV_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerPOV_Sender(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->sender();
    } else {
        return vqscilexerpov->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerPOV_QBaseSender(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Sender_IsBase(true);
        return vqscilexerpov->sender();
    } else {
        return vqscilexerpov->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSender(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Sender_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPOV_SenderSignalIndex(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->senderSignalIndex();
    } else {
        return vqscilexerpov->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerPOV_QBaseSenderSignalIndex(const QsciLexerPOV* self) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_SenderSignalIndex_IsBase(true);
        return vqscilexerpov->senderSignalIndex();
    } else {
        return vqscilexerpov->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnSenderSignalIndex(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerPOV_Receivers(const QsciLexerPOV* self, const char* signal) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->receivers(signal);
    } else {
        return vqscilexerpov->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerPOV_QBaseReceivers(const QsciLexerPOV* self, const char* signal) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Receivers_IsBase(true);
        return vqscilexerpov->receivers(signal);
    } else {
        return vqscilexerpov->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnReceivers(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_Receivers_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerPOV_IsSignalConnected(const QsciLexerPOV* self, QMetaMethod* signal) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        return vqscilexerpov->isSignalConnected(*signal);
    } else {
        return vqscilexerpov->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerPOV_QBaseIsSignalConnected(const QsciLexerPOV* self, QMetaMethod* signal) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_IsSignalConnected_IsBase(true);
        return vqscilexerpov->isSignalConnected(*signal);
    } else {
        return vqscilexerpov->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPOV_OnIsSignalConnected(const QsciLexerPOV* self, intptr_t slot) {
    if (auto* vqscilexerpov = const_cast<VirtualQsciLexerPOV*>(dynamic_cast<const VirtualQsciLexerPOV*>(self))) {
        vqscilexerpov->setQsciLexerPOV_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerPOV::QsciLexerPOV_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerPOV_Delete(QsciLexerPOV* self) {
    delete self;
}
