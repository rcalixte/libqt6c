#include <QByteArray>
#include <QFont>
#include <QFontDatabase>
#include <QFontInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfontdatabase.h>
#include "libqfontdatabase.hpp"
#include "libqfontdatabase.hxx"

QFontDatabase* QFontDatabase_new(QFontDatabase* other) {
    return new QFontDatabase(*other);
}

QFontDatabase* QFontDatabase_new2(QFontDatabase* other) {
    return new QFontDatabase(std::move(*other));
}

QFontDatabase* QFontDatabase_new3() {
    return new QFontDatabase();
}

void QFontDatabase_CopyAssign(QFontDatabase* self, QFontDatabase* other) {
    *self = *other;
}

void QFontDatabase_MoveAssign(QFontDatabase* self, QFontDatabase* other) {
    *self = std::move(*other);
}

libqt_list /* of int */ QFontDatabase_StandardSizes() {
    QList<int> _ret = QFontDatabase::standardSizes();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ints = _arr;
    return _out;
}

libqt_list /* of int */ QFontDatabase_WritingSystems() {
    QList<QFontDatabase::WritingSystem> _ret = QFontDatabase::writingSystems();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ints = _arr;
    return _out;
}

libqt_list /* of int */ QFontDatabase_WritingSystemsWithFamily(libqt_string family) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    QList<QFontDatabase::WritingSystem> _ret = QFontDatabase::writingSystems(family_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ints = _arr;
    return _out;
}

libqt_list /* of libqt_string */ QFontDatabase_Families() {
    QStringList _ret = QFontDatabase::families();
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

libqt_list /* of libqt_string */ QFontDatabase_Styles(libqt_string family) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    QStringList _ret = QFontDatabase::styles(family_QString);
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

libqt_list /* of int */ QFontDatabase_PointSizes(libqt_string family) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    QList<int> _ret = QFontDatabase::pointSizes(family_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ints = _arr;
    return _out;
}

libqt_list /* of int */ QFontDatabase_SmoothSizes(libqt_string family, libqt_string style) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    QString style_QString = QString::fromUtf8(style.data, style.len);
    QList<int> _ret = QFontDatabase::smoothSizes(family_QString, style_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ints = _arr;
    return _out;
}

libqt_string QFontDatabase_StyleString(QFont* font) {
    QString _ret = QFontDatabase::styleString(*font);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFontDatabase_StyleStringWithFontInfo(QFontInfo* fontInfo) {
    QString _ret = QFontDatabase::styleString(*fontInfo);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QFont* QFontDatabase_Font(libqt_string family, libqt_string style, int pointSize) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    QString style_QString = QString::fromUtf8(style.data, style.len);
    return new QFont(QFontDatabase::font(family_QString, style_QString, static_cast<int>(pointSize)));
}

bool QFontDatabase_IsBitmapScalable(libqt_string family) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    return QFontDatabase::isBitmapScalable(family_QString);
}

bool QFontDatabase_IsSmoothlyScalable(libqt_string family) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    return QFontDatabase::isSmoothlyScalable(family_QString);
}

bool QFontDatabase_IsScalable(libqt_string family) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    return QFontDatabase::isScalable(family_QString);
}

bool QFontDatabase_IsFixedPitch(libqt_string family) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    return QFontDatabase::isFixedPitch(family_QString);
}

bool QFontDatabase_Italic(libqt_string family, libqt_string style) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    QString style_QString = QString::fromUtf8(style.data, style.len);
    return QFontDatabase::italic(family_QString, style_QString);
}

bool QFontDatabase_Bold(libqt_string family, libqt_string style) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    QString style_QString = QString::fromUtf8(style.data, style.len);
    return QFontDatabase::bold(family_QString, style_QString);
}

int QFontDatabase_Weight(libqt_string family, libqt_string style) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    QString style_QString = QString::fromUtf8(style.data, style.len);
    return QFontDatabase::weight(family_QString, style_QString);
}

bool QFontDatabase_HasFamily(libqt_string family) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    return QFontDatabase::hasFamily(family_QString);
}

bool QFontDatabase_IsPrivateFamily(libqt_string family) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    return QFontDatabase::isPrivateFamily(family_QString);
}

libqt_string QFontDatabase_WritingSystemName(int writingSystem) {
    QString _ret = QFontDatabase::writingSystemName(static_cast<QFontDatabase::WritingSystem>(writingSystem));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFontDatabase_WritingSystemSample(int writingSystem) {
    QString _ret = QFontDatabase::writingSystemSample(static_cast<QFontDatabase::WritingSystem>(writingSystem));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QFontDatabase_AddApplicationFont(libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QFontDatabase::addApplicationFont(fileName_QString);
}

int QFontDatabase_AddApplicationFontFromData(libqt_string fontData) {
    QByteArray fontData_QByteArray(fontData.data, fontData.len);
    return QFontDatabase::addApplicationFontFromData(fontData_QByteArray);
}

libqt_list /* of libqt_string */ QFontDatabase_ApplicationFontFamilies(int id) {
    QStringList _ret = QFontDatabase::applicationFontFamilies(static_cast<int>(id));
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

bool QFontDatabase_RemoveApplicationFont(int id) {
    return QFontDatabase::removeApplicationFont(static_cast<int>(id));
}

bool QFontDatabase_RemoveAllApplicationFonts() {
    return QFontDatabase::removeAllApplicationFonts();
}

QFont* QFontDatabase_SystemFont(int typeVal) {
    return new QFont(QFontDatabase::systemFont(static_cast<QFontDatabase::SystemFont>(typeVal)));
}

libqt_list /* of libqt_string */ QFontDatabase_Families1(int writingSystem) {
    QStringList _ret = QFontDatabase::families(static_cast<QFontDatabase::WritingSystem>(writingSystem));
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

libqt_list /* of int */ QFontDatabase_PointSizes2(libqt_string family, libqt_string style) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    QString style_QString = QString::fromUtf8(style.data, style.len);
    QList<int> _ret = QFontDatabase::pointSizes(family_QString, style_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ints = _arr;
    return _out;
}

bool QFontDatabase_IsBitmapScalable2(libqt_string family, libqt_string style) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    QString style_QString = QString::fromUtf8(style.data, style.len);
    return QFontDatabase::isBitmapScalable(family_QString, style_QString);
}

bool QFontDatabase_IsSmoothlyScalable2(libqt_string family, libqt_string style) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    QString style_QString = QString::fromUtf8(style.data, style.len);
    return QFontDatabase::isSmoothlyScalable(family_QString, style_QString);
}

bool QFontDatabase_IsScalable2(libqt_string family, libqt_string style) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    QString style_QString = QString::fromUtf8(style.data, style.len);
    return QFontDatabase::isScalable(family_QString, style_QString);
}

bool QFontDatabase_IsFixedPitch2(libqt_string family, libqt_string style) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    QString style_QString = QString::fromUtf8(style.data, style.len);
    return QFontDatabase::isFixedPitch(family_QString, style_QString);
}

void QFontDatabase_Delete(QFontDatabase* self) {
    delete self;
}
