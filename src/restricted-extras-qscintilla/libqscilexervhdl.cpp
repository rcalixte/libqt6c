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
#include <qscilexervhdl.h>
#include "libqscilexervhdl.hpp"
#include "libqscilexervhdl.hxx"

QsciLexerVHDL* QsciLexerVHDL_new() {
    return new VirtualQsciLexerVHDL();
}

QsciLexerVHDL* QsciLexerVHDL_new2(QObject* parent) {
    return new VirtualQsciLexerVHDL(parent);
}

QMetaObject* QsciLexerVHDL_MetaObject(const QsciLexerVHDL* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerVHDL_Metacast(QsciLexerVHDL* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerVHDL_Metacall(QsciLexerVHDL* self, int param1, int param2, void** param3) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciLexerVHDL_OnMetacall(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_Metacall_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciLexerVHDL_QBaseMetacall(QsciLexerVHDL* self, int param1, int param2, void** param3) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_Metacall_IsBase(true);
        return vqscilexervhdl->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciLexerVHDL_Tr(const char* s) {
    QString _ret = QsciLexerVHDL::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerVHDL_DefaultColor(const QsciLexerVHDL* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerVHDL_DefaultFont(const QsciLexerVHDL* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerVHDL_DefaultPaper(const QsciLexerVHDL* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

bool QsciLexerVHDL_FoldComments(const QsciLexerVHDL* self) {
    return self->foldComments();
}

bool QsciLexerVHDL_FoldCompact(const QsciLexerVHDL* self) {
    return self->foldCompact();
}

bool QsciLexerVHDL_FoldAtElse(const QsciLexerVHDL* self) {
    return self->foldAtElse();
}

bool QsciLexerVHDL_FoldAtBegin(const QsciLexerVHDL* self) {
    return self->foldAtBegin();
}

bool QsciLexerVHDL_FoldAtParenthesis(const QsciLexerVHDL* self) {
    return self->foldAtParenthesis();
}

libqt_string QsciLexerVHDL_Tr2(const char* s, const char* c) {
    QString _ret = QsciLexerVHDL::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerVHDL_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciLexerVHDL::tr(s, c, static_cast<int>(n));
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
void QsciLexerVHDL_SetFoldComments(QsciLexerVHDL* self, bool fold) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setFoldComments(fold);
    } else {
        vqscilexervhdl->setFoldComments(fold);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetFoldComments(QsciLexerVHDL* self, bool fold) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldComments_IsBase(true);
        vqscilexervhdl->setFoldComments(fold);
    } else {
        vqscilexervhdl->setFoldComments(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldComments(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldComments_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldComments_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetFoldCompact(QsciLexerVHDL* self, bool fold) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setFoldCompact(fold);
    } else {
        vqscilexervhdl->setFoldCompact(fold);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetFoldCompact(QsciLexerVHDL* self, bool fold) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldCompact_IsBase(true);
        vqscilexervhdl->setFoldCompact(fold);
    } else {
        vqscilexervhdl->setFoldCompact(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldCompact(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldCompact_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldCompact_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetFoldAtElse(QsciLexerVHDL* self, bool fold) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setFoldAtElse(fold);
    } else {
        vqscilexervhdl->setFoldAtElse(fold);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetFoldAtElse(QsciLexerVHDL* self, bool fold) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldAtElse_IsBase(true);
        vqscilexervhdl->setFoldAtElse(fold);
    } else {
        vqscilexervhdl->setFoldAtElse(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldAtElse(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldAtElse_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldAtElse_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetFoldAtBegin(QsciLexerVHDL* self, bool fold) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setFoldAtBegin(fold);
    } else {
        vqscilexervhdl->setFoldAtBegin(fold);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetFoldAtBegin(QsciLexerVHDL* self, bool fold) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldAtBegin_IsBase(true);
        vqscilexervhdl->setFoldAtBegin(fold);
    } else {
        vqscilexervhdl->setFoldAtBegin(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldAtBegin(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldAtBegin_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldAtBegin_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetFoldAtParenthesis(QsciLexerVHDL* self, bool fold) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setFoldAtParenthesis(fold);
    } else {
        vqscilexervhdl->setFoldAtParenthesis(fold);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetFoldAtParenthesis(QsciLexerVHDL* self, bool fold) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldAtParenthesis_IsBase(true);
        vqscilexervhdl->setFoldAtParenthesis(fold);
    } else {
        vqscilexervhdl->setFoldAtParenthesis(fold);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFoldAtParenthesis(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetFoldAtParenthesis_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFoldAtParenthesis_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVHDL_Language(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return (const char*)vqscilexervhdl->language();
    } else {
        return (const char*)vqscilexervhdl->language();
    }
}

// Base class handler implementation
const char* QsciLexerVHDL_QBaseLanguage(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Language_IsBase(true);
        return (const char*)vqscilexervhdl->language();
    } else {
        return (const char*)vqscilexervhdl->language();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnLanguage(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Language_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Language_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVHDL_Lexer(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return (const char*)vqscilexervhdl->lexer();
    } else {
        return (const char*)vqscilexervhdl->lexer();
    }
}

// Base class handler implementation
const char* QsciLexerVHDL_QBaseLexer(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Lexer_IsBase(true);
        return (const char*)vqscilexervhdl->lexer();
    } else {
        return (const char*)vqscilexervhdl->lexer();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnLexer(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Lexer_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Lexer_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_LexerId(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->lexerId();
    } else {
        return vqscilexervhdl->lexerId();
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseLexerId(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_LexerId_IsBase(true);
        return vqscilexervhdl->lexerId();
    } else {
        return vqscilexervhdl->lexerId();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnLexerId(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_LexerId_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_LexerId_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVHDL_AutoCompletionFillups(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return (const char*)vqscilexervhdl->autoCompletionFillups();
    } else {
        return (const char*)vqscilexervhdl->autoCompletionFillups();
    }
}

// Base class handler implementation
const char* QsciLexerVHDL_QBaseAutoCompletionFillups(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_AutoCompletionFillups_IsBase(true);
        return (const char*)vqscilexervhdl->autoCompletionFillups();
    } else {
        return (const char*)vqscilexervhdl->autoCompletionFillups();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnAutoCompletionFillups(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_AutoCompletionFillups_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_AutoCompletionFillups_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerVHDL_AutoCompletionWordSeparators(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        QStringList _ret = vqscilexervhdl->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexervhdl->autoCompletionWordSeparators();
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
libqt_list /* of libqt_string */ QsciLexerVHDL_QBaseAutoCompletionWordSeparators(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_AutoCompletionWordSeparators_IsBase(true);
        QStringList _ret = vqscilexervhdl->autoCompletionWordSeparators();
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
        QStringList _ret = vqscilexervhdl->autoCompletionWordSeparators();
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
void QsciLexerVHDL_OnAutoCompletionWordSeparators(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_AutoCompletionWordSeparators_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_AutoCompletionWordSeparators_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVHDL_BlockEnd(const QsciLexerVHDL* self, int* style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return (const char*)vqscilexervhdl->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexervhdl->blockEnd(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerVHDL_QBaseBlockEnd(const QsciLexerVHDL* self, int* style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_BlockEnd_IsBase(true);
        return (const char*)vqscilexervhdl->blockEnd(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexervhdl->blockEnd(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnBlockEnd(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_BlockEnd_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_BlockEnd_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_BlockLookback(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->blockLookback();
    } else {
        return vqscilexervhdl->blockLookback();
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseBlockLookback(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_BlockLookback_IsBase(true);
        return vqscilexervhdl->blockLookback();
    } else {
        return vqscilexervhdl->blockLookback();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnBlockLookback(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_BlockLookback_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_BlockLookback_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVHDL_BlockStart(const QsciLexerVHDL* self, int* style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return (const char*)vqscilexervhdl->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexervhdl->blockStart(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerVHDL_QBaseBlockStart(const QsciLexerVHDL* self, int* style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_BlockStart_IsBase(true);
        return (const char*)vqscilexervhdl->blockStart(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexervhdl->blockStart(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnBlockStart(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_BlockStart_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_BlockStart_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVHDL_BlockStartKeyword(const QsciLexerVHDL* self, int* style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return (const char*)vqscilexervhdl->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexervhdl->blockStartKeyword(static_cast<int*>(style));
    }
}

// Base class handler implementation
const char* QsciLexerVHDL_QBaseBlockStartKeyword(const QsciLexerVHDL* self, int* style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_BlockStartKeyword_IsBase(true);
        return (const char*)vqscilexervhdl->blockStartKeyword(static_cast<int*>(style));
    } else {
        return (const char*)vqscilexervhdl->blockStartKeyword(static_cast<int*>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnBlockStartKeyword(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_BlockStartKeyword_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_BlockStartKeyword_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_BraceStyle(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->braceStyle();
    } else {
        return vqscilexervhdl->braceStyle();
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseBraceStyle(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_BraceStyle_IsBase(true);
        return vqscilexervhdl->braceStyle();
    } else {
        return vqscilexervhdl->braceStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnBraceStyle(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_BraceStyle_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_BraceStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_CaseSensitive(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->caseSensitive();
    } else {
        return vqscilexervhdl->caseSensitive();
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseCaseSensitive(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_CaseSensitive_IsBase(true);
        return vqscilexervhdl->caseSensitive();
    } else {
        return vqscilexervhdl->caseSensitive();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnCaseSensitive(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_CaseSensitive_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_CaseSensitive_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerVHDL_Color(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return new QColor(vqscilexervhdl->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerVHDL_QBaseColor(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Color_IsBase(true);
        return new QColor(vqscilexervhdl->color(static_cast<int>(style)));
    } else {
        return new QColor(self->color(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnColor(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Color_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Color_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_EolFill(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->eolFill(static_cast<int>(style));
    } else {
        return vqscilexervhdl->eolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseEolFill(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_EolFill_IsBase(true);
        return vqscilexervhdl->eolFill(static_cast<int>(style));
    } else {
        return vqscilexervhdl->eolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnEolFill(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_EolFill_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_EolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerVHDL_Font(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return new QFont(vqscilexervhdl->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerVHDL_QBaseFont(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Font_IsBase(true);
        return new QFont(vqscilexervhdl->font(static_cast<int>(style)));
    } else {
        return new QFont(self->font(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnFont(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Font_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Font_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_IndentationGuideView(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->indentationGuideView();
    } else {
        return vqscilexervhdl->indentationGuideView();
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseIndentationGuideView(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_IndentationGuideView_IsBase(true);
        return vqscilexervhdl->indentationGuideView();
    } else {
        return vqscilexervhdl->indentationGuideView();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnIndentationGuideView(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_IndentationGuideView_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_IndentationGuideView_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVHDL_Keywords(const QsciLexerVHDL* self, int set) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return (const char*)vqscilexervhdl->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexervhdl->keywords(static_cast<int>(set));
    }
}

// Base class handler implementation
const char* QsciLexerVHDL_QBaseKeywords(const QsciLexerVHDL* self, int set) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Keywords_IsBase(true);
        return (const char*)vqscilexervhdl->keywords(static_cast<int>(set));
    } else {
        return (const char*)vqscilexervhdl->keywords(static_cast<int>(set));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnKeywords(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Keywords_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Keywords_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_DefaultStyle(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->defaultStyle();
    } else {
        return vqscilexervhdl->defaultStyle();
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseDefaultStyle(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultStyle_IsBase(true);
        return vqscilexervhdl->defaultStyle();
    } else {
        return vqscilexervhdl->defaultStyle();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDefaultStyle(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultStyle_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DefaultStyle_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciLexerVHDL_Description(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        QString _ret = vqscilexervhdl->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexervhdl->description(static_cast<int>(style));
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
libqt_string QsciLexerVHDL_QBaseDescription(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Description_IsBase(true);
        QString _ret = vqscilexervhdl->description(static_cast<int>(style));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqscilexervhdl->description(static_cast<int>(style));
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
void QsciLexerVHDL_OnDescription(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Description_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Description_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerVHDL_Paper(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return new QColor(vqscilexervhdl->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerVHDL_QBasePaper(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Paper_IsBase(true);
        return new QColor(vqscilexervhdl->paper(static_cast<int>(style)));
    } else {
        return new QColor(self->paper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnPaper(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Paper_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Paper_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerVHDL_DefaultColorWithStyle(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return new QColor(vqscilexervhdl->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerVHDL_QBaseDefaultColorWithStyle(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultColorWithStyle_IsBase(true);
        return new QColor(vqscilexervhdl->defaultColor(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultColor(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDefaultColorWithStyle(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultColorWithStyle_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DefaultColorWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_DefaultEolFill(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexervhdl->defaultEolFill(static_cast<int>(style));
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseDefaultEolFill(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultEolFill_IsBase(true);
        return vqscilexervhdl->defaultEolFill(static_cast<int>(style));
    } else {
        return vqscilexervhdl->defaultEolFill(static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDefaultEolFill(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultEolFill_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DefaultEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QsciLexerVHDL_DefaultFontWithStyle(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return new QFont(vqscilexervhdl->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Base class handler implementation
QFont* QsciLexerVHDL_QBaseDefaultFontWithStyle(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultFontWithStyle_IsBase(true);
        return new QFont(vqscilexervhdl->defaultFont(static_cast<int>(style)));
    } else {
        return new QFont(self->defaultFont(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDefaultFontWithStyle(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultFontWithStyle_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DefaultFontWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
QColor* QsciLexerVHDL_DefaultPaperWithStyle(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return new QColor(vqscilexervhdl->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Base class handler implementation
QColor* QsciLexerVHDL_QBaseDefaultPaperWithStyle(const QsciLexerVHDL* self, int style) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultPaperWithStyle_IsBase(true);
        return new QColor(vqscilexervhdl->defaultPaper(static_cast<int>(style)));
    } else {
        return new QColor(self->defaultPaper(static_cast<int>(style)));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDefaultPaperWithStyle(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_DefaultPaperWithStyle_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DefaultPaperWithStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetEditor(QsciLexerVHDL* self, QsciScintilla* editor) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setEditor(editor);
    } else {
        vqscilexervhdl->setEditor(editor);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetEditor(QsciLexerVHDL* self, QsciScintilla* editor) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetEditor_IsBase(true);
        vqscilexervhdl->setEditor(editor);
    } else {
        vqscilexervhdl->setEditor(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetEditor(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetEditor_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_RefreshProperties(QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->refreshProperties();
    } else {
        vqscilexervhdl->refreshProperties();
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseRefreshProperties(QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_RefreshProperties_IsBase(true);
        vqscilexervhdl->refreshProperties();
    } else {
        vqscilexervhdl->refreshProperties();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnRefreshProperties(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_RefreshProperties_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_RefreshProperties_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_StyleBitsNeeded(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->styleBitsNeeded();
    } else {
        return vqscilexervhdl->styleBitsNeeded();
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseStyleBitsNeeded(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_StyleBitsNeeded_IsBase(true);
        return vqscilexervhdl->styleBitsNeeded();
    } else {
        return vqscilexervhdl->styleBitsNeeded();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnStyleBitsNeeded(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_StyleBitsNeeded_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_StyleBitsNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
const char* QsciLexerVHDL_WordCharacters(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return (const char*)vqscilexervhdl->wordCharacters();
    } else {
        return (const char*)vqscilexervhdl->wordCharacters();
    }
}

// Base class handler implementation
const char* QsciLexerVHDL_QBaseWordCharacters(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_WordCharacters_IsBase(true);
        return (const char*)vqscilexervhdl->wordCharacters();
    } else {
        return (const char*)vqscilexervhdl->wordCharacters();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnWordCharacters(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_WordCharacters_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetAutoIndentStyle(QsciLexerVHDL* self, int autoindentstyle) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexervhdl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetAutoIndentStyle(QsciLexerVHDL* self, int autoindentstyle) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetAutoIndentStyle_IsBase(true);
        vqscilexervhdl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    } else {
        vqscilexervhdl->setAutoIndentStyle(static_cast<int>(autoindentstyle));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetAutoIndentStyle(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetAutoIndentStyle_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetAutoIndentStyle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetColor(QsciLexerVHDL* self, QColor* c, int style) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexervhdl->setColor(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetColor(QsciLexerVHDL* self, QColor* c, int style) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetColor_IsBase(true);
        vqscilexervhdl->setColor(*c, static_cast<int>(style));
    } else {
        vqscilexervhdl->setColor(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetColor(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetColor_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetEolFill(QsciLexerVHDL* self, bool eoffill, int style) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexervhdl->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetEolFill(QsciLexerVHDL* self, bool eoffill, int style) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetEolFill_IsBase(true);
        vqscilexervhdl->setEolFill(eoffill, static_cast<int>(style));
    } else {
        vqscilexervhdl->setEolFill(eoffill, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetEolFill(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetEolFill_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetEolFill_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetFont(QsciLexerVHDL* self, QFont* f, int style) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexervhdl->setFont(*f, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetFont(QsciLexerVHDL* self, QFont* f, int style) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetFont_IsBase(true);
        vqscilexervhdl->setFont(*f, static_cast<int>(style));
    } else {
        vqscilexervhdl->setFont(*f, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetFont(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetFont_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_SetPaper(QsciLexerVHDL* self, QColor* c, int style) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexervhdl->setPaper(*c, static_cast<int>(style));
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseSetPaper(QsciLexerVHDL* self, QColor* c, int style) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetPaper_IsBase(true);
        vqscilexervhdl->setPaper(*c, static_cast<int>(style));
    } else {
        vqscilexervhdl->setPaper(*c, static_cast<int>(style));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSetPaper(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_SetPaper_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_ReadProperties(QsciLexerVHDL* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        return vqscilexervhdl->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexervhdl->readProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseReadProperties(QsciLexerVHDL* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_ReadProperties_IsBase(true);
        return vqscilexervhdl->readProperties(*qs, prefix_QString);
    } else {
        return vqscilexervhdl->readProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnReadProperties(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_ReadProperties_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_ReadProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_WriteProperties(const QsciLexerVHDL* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexervhdl->writeProperties(*qs, prefix_QString);
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseWriteProperties(const QsciLexerVHDL* self, QSettings* qs, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_WriteProperties_IsBase(true);
        return vqscilexervhdl->writeProperties(*qs, prefix_QString);
    } else {
        return vqscilexervhdl->writeProperties(*qs, prefix_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnWriteProperties(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_WriteProperties_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_WriteProperties_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_Event(QsciLexerVHDL* self, QEvent* event) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        return vqscilexervhdl->event(event);
    } else {
        return vqscilexervhdl->event(event);
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseEvent(QsciLexerVHDL* self, QEvent* event) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_Event_IsBase(true);
        return vqscilexervhdl->event(event);
    } else {
        return vqscilexervhdl->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnEvent(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_Event_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_EventFilter(QsciLexerVHDL* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        return vqscilexervhdl->eventFilter(watched, event);
    } else {
        return vqscilexervhdl->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseEventFilter(QsciLexerVHDL* self, QObject* watched, QEvent* event) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_EventFilter_IsBase(true);
        return vqscilexervhdl->eventFilter(watched, event);
    } else {
        return vqscilexervhdl->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnEventFilter(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_EventFilter_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_TimerEvent(QsciLexerVHDL* self, QTimerEvent* event) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->timerEvent(event);
    } else {
        vqscilexervhdl->timerEvent(event);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseTimerEvent(QsciLexerVHDL* self, QTimerEvent* event) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_TimerEvent_IsBase(true);
        vqscilexervhdl->timerEvent(event);
    } else {
        vqscilexervhdl->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnTimerEvent(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_TimerEvent_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_ChildEvent(QsciLexerVHDL* self, QChildEvent* event) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->childEvent(event);
    } else {
        vqscilexervhdl->childEvent(event);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseChildEvent(QsciLexerVHDL* self, QChildEvent* event) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_ChildEvent_IsBase(true);
        vqscilexervhdl->childEvent(event);
    } else {
        vqscilexervhdl->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnChildEvent(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_ChildEvent_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_CustomEvent(QsciLexerVHDL* self, QEvent* event) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->customEvent(event);
    } else {
        vqscilexervhdl->customEvent(event);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseCustomEvent(QsciLexerVHDL* self, QEvent* event) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_CustomEvent_IsBase(true);
        vqscilexervhdl->customEvent(event);
    } else {
        vqscilexervhdl->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnCustomEvent(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_CustomEvent_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_ConnectNotify(QsciLexerVHDL* self, QMetaMethod* signal) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->connectNotify(*signal);
    } else {
        vqscilexervhdl->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseConnectNotify(QsciLexerVHDL* self, QMetaMethod* signal) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_ConnectNotify_IsBase(true);
        vqscilexervhdl->connectNotify(*signal);
    } else {
        vqscilexervhdl->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnConnectNotify(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_ConnectNotify_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciLexerVHDL_DisconnectNotify(QsciLexerVHDL* self, QMetaMethod* signal) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->disconnectNotify(*signal);
    } else {
        vqscilexervhdl->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciLexerVHDL_QBaseDisconnectNotify(QsciLexerVHDL* self, QMetaMethod* signal) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_DisconnectNotify_IsBase(true);
        vqscilexervhdl->disconnectNotify(*signal);
    } else {
        vqscilexervhdl->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnDisconnectNotify(QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = dynamic_cast<VirtualQsciLexerVHDL*>(self)) {
        vqscilexervhdl->setQsciLexerVHDL_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciLexerVHDL_Sender(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->sender();
    } else {
        return vqscilexervhdl->sender();
    }
}

// Base class handler implementation
QObject* QsciLexerVHDL_QBaseSender(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Sender_IsBase(true);
        return vqscilexervhdl->sender();
    } else {
        return vqscilexervhdl->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSender(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Sender_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_SenderSignalIndex(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->senderSignalIndex();
    } else {
        return vqscilexervhdl->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseSenderSignalIndex(const QsciLexerVHDL* self) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_SenderSignalIndex_IsBase(true);
        return vqscilexervhdl->senderSignalIndex();
    } else {
        return vqscilexervhdl->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnSenderSignalIndex(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciLexerVHDL_Receivers(const QsciLexerVHDL* self, const char* signal) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->receivers(signal);
    } else {
        return vqscilexervhdl->receivers(signal);
    }
}

// Base class handler implementation
int QsciLexerVHDL_QBaseReceivers(const QsciLexerVHDL* self, const char* signal) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Receivers_IsBase(true);
        return vqscilexervhdl->receivers(signal);
    } else {
        return vqscilexervhdl->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnReceivers(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_Receivers_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciLexerVHDL_IsSignalConnected(const QsciLexerVHDL* self, QMetaMethod* signal) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        return vqscilexervhdl->isSignalConnected(*signal);
    } else {
        return vqscilexervhdl->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciLexerVHDL_QBaseIsSignalConnected(const QsciLexerVHDL* self, QMetaMethod* signal) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_IsSignalConnected_IsBase(true);
        return vqscilexervhdl->isSignalConnected(*signal);
    } else {
        return vqscilexervhdl->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVHDL_OnIsSignalConnected(const QsciLexerVHDL* self, intptr_t slot) {
    if (auto* vqscilexervhdl = const_cast<VirtualQsciLexerVHDL*>(dynamic_cast<const VirtualQsciLexerVHDL*>(self))) {
        vqscilexervhdl->setQsciLexerVHDL_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciLexerVHDL::QsciLexerVHDL_IsSignalConnected_Callback>(slot));
    }
}

void QsciLexerVHDL_Delete(QsciLexerVHDL* self) {
    delete self;
}
