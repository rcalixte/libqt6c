#include <QAbstractSpinBox>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDoubleSpinBox>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QGraphicsEffect>
#include <QGraphicsProxyWidget>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QLineEdit>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QSpinBox>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionSpinBox>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qspinbox.h>
#include "libqspinbox.hpp"
#include "libqspinbox.hxx"

QSpinBox* QSpinBox_new(QWidget* parent) {
    return new VirtualQSpinBox(parent);
}

QSpinBox* QSpinBox_new2() {
    return new VirtualQSpinBox();
}

QMetaObject* QSpinBox_MetaObject(const QSpinBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSpinBox_Metacast(QSpinBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSpinBox_Metacall(QSpinBox* self, int param1, int param2, void** param3) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSpinBox_OnMetacall(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_Metacall_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSpinBox_QBaseMetacall(QSpinBox* self, int param1, int param2, void** param3) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_Metacall_IsBase(true);
        return vqspinbox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSpinBox_Tr(const char* s) {
    QString _ret = QSpinBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QSpinBox_Value(const QSpinBox* self) {
    return self->value();
}

libqt_string QSpinBox_Prefix(const QSpinBox* self) {
    QString _ret = self->prefix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSpinBox_SetPrefix(QSpinBox* self, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    self->setPrefix(prefix_QString);
}

libqt_string QSpinBox_Suffix(const QSpinBox* self) {
    QString _ret = self->suffix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSpinBox_SetSuffix(QSpinBox* self, libqt_string suffix) {
    QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
    self->setSuffix(suffix_QString);
}

libqt_string QSpinBox_CleanText(const QSpinBox* self) {
    QString _ret = self->cleanText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QSpinBox_SingleStep(const QSpinBox* self) {
    return self->singleStep();
}

void QSpinBox_SetSingleStep(QSpinBox* self, int val) {
    self->setSingleStep(static_cast<int>(val));
}

int QSpinBox_Minimum(const QSpinBox* self) {
    return self->minimum();
}

void QSpinBox_SetMinimum(QSpinBox* self, int min) {
    self->setMinimum(static_cast<int>(min));
}

int QSpinBox_Maximum(const QSpinBox* self) {
    return self->maximum();
}

void QSpinBox_SetMaximum(QSpinBox* self, int max) {
    self->setMaximum(static_cast<int>(max));
}

void QSpinBox_SetRange(QSpinBox* self, int min, int max) {
    self->setRange(static_cast<int>(min), static_cast<int>(max));
}

int QSpinBox_StepType(const QSpinBox* self) {
    return static_cast<int>(self->stepType());
}

void QSpinBox_SetStepType(QSpinBox* self, int stepType) {
    self->setStepType(static_cast<QAbstractSpinBox::StepType>(stepType));
}

int QSpinBox_DisplayIntegerBase(const QSpinBox* self) {
    return self->displayIntegerBase();
}

void QSpinBox_SetDisplayIntegerBase(QSpinBox* self, int base) {
    self->setDisplayIntegerBase(static_cast<int>(base));
}

void QSpinBox_SetValue(QSpinBox* self, int val) {
    self->setValue(static_cast<int>(val));
}

void QSpinBox_ValueChanged(QSpinBox* self, int param1) {
    self->valueChanged(static_cast<int>(param1));
}

void QSpinBox_Connect_ValueChanged(QSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QSpinBox*, int) = reinterpret_cast<void (*)(QSpinBox*, int)>(slot);
    QSpinBox::connect(self, &QSpinBox::valueChanged, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QSpinBox_TextChanged(QSpinBox* self, libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textChanged(param1_QString);
}

void QSpinBox_Connect_TextChanged(QSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QSpinBox*, libqt_string) = reinterpret_cast<void (*)(QSpinBox*, libqt_string)>(slot);
    QSpinBox::connect(self, &QSpinBox::textChanged, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        libqt_string param1_str;
        param1_str.len = param1_b.length();
        param1_str.data = static_cast<char*>(malloc((param1_str.len + 1) * sizeof(char)));
        memcpy(param1_str.data, param1_b.data(), param1_str.len);
        param1_str.data[param1_str.len] = '\0';
        libqt_string sigval1 = param1_str;
        slotFunc(self, sigval1);
    });
}

libqt_string QSpinBox_Tr2(const char* s, const char* c) {
    QString _ret = QSpinBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSpinBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSpinBox::tr(s, c, static_cast<int>(n));
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
bool QSpinBox_Event(QSpinBox* self, QEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        return vqspinbox->event(event);
    } else {
        return vqspinbox->event(event);
    }
}

// Base class handler implementation
bool QSpinBox_QBaseEvent(QSpinBox* self, QEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_Event_IsBase(true);
        return vqspinbox->event(event);
    } else {
        return vqspinbox->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_Event_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_Validate(const QSpinBox* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return static_cast<int>(vqspinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(vqspinbox->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Base class handler implementation
int QSpinBox_QBaseValidate(const QSpinBox* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_Validate_IsBase(true);
        return static_cast<int>(vqspinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(vqspinbox->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnValidate(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_Validate_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_ValueFromText(const QSpinBox* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->valueFromText(text_QString);
    } else {
        return vqspinbox->valueFromText(text_QString);
    }
}

// Base class handler implementation
int QSpinBox_QBaseValueFromText(const QSpinBox* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_ValueFromText_IsBase(true);
        return vqspinbox->valueFromText(text_QString);
    } else {
        return vqspinbox->valueFromText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnValueFromText(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_ValueFromText_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ValueFromText_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QSpinBox_TextFromValue(const QSpinBox* self, int val) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        QString _ret = vqspinbox->textFromValue(static_cast<int>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqspinbox->textFromValue(static_cast<int>(val));
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
libqt_string QSpinBox_QBaseTextFromValue(const QSpinBox* self, int val) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_TextFromValue_IsBase(true);
        QString _ret = vqspinbox->textFromValue(static_cast<int>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqspinbox->textFromValue(static_cast<int>(val));
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
void QSpinBox_OnTextFromValue(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_TextFromValue_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_TextFromValue_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_Fixup(const QSpinBox* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->fixup(str_QString);
    } else {
        vqspinbox->fixup(str_QString);
    }
}

// Base class handler implementation
void QSpinBox_QBaseFixup(const QSpinBox* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_Fixup_IsBase(true);
        vqspinbox->fixup(str_QString);
    } else {
        vqspinbox->fixup(str_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFixup(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_Fixup_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSpinBox_SizeHint(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return new QSize(vqspinbox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QSpinBox_QBaseSizeHint(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_SizeHint_IsBase(true);
        return new QSize(vqspinbox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSizeHint(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_SizeHint_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSpinBox_MinimumSizeHint(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return new QSize(vqspinbox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QSpinBox_QBaseMinimumSizeHint(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_MinimumSizeHint_IsBase(true);
        return new QSize(vqspinbox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMinimumSizeHint(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSpinBox_InputMethodQuery(const QSpinBox* self, int param1) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return new QVariant(vqspinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QSpinBox_QBaseInputMethodQuery(const QSpinBox* self, int param1) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_InputMethodQuery_IsBase(true);
        return new QVariant(vqspinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnInputMethodQuery(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_StepBy(QSpinBox* self, int steps) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->stepBy(static_cast<int>(steps));
    } else {
        vqspinbox->stepBy(static_cast<int>(steps));
    }
}

// Base class handler implementation
void QSpinBox_QBaseStepBy(QSpinBox* self, int steps) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_StepBy_IsBase(true);
        vqspinbox->stepBy(static_cast<int>(steps));
    } else {
        vqspinbox->stepBy(static_cast<int>(steps));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnStepBy(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_StepBy_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_StepBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_Clear(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->clear();
    } else {
        vqspinbox->clear();
    }
}

// Base class handler implementation
void QSpinBox_QBaseClear(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_Clear_IsBase(true);
        vqspinbox->clear();
    } else {
        vqspinbox->clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnClear(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_Clear_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_ResizeEvent(QSpinBox* self, QResizeEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->resizeEvent(event);
    } else {
        vqspinbox->resizeEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseResizeEvent(QSpinBox* self, QResizeEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_ResizeEvent_IsBase(true);
        vqspinbox->resizeEvent(event);
    } else {
        vqspinbox->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnResizeEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_ResizeEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_KeyPressEvent(QSpinBox* self, QKeyEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->keyPressEvent(event);
    } else {
        vqspinbox->keyPressEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseKeyPressEvent(QSpinBox* self, QKeyEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_KeyPressEvent_IsBase(true);
        vqspinbox->keyPressEvent(event);
    } else {
        vqspinbox->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnKeyPressEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_KeyReleaseEvent(QSpinBox* self, QKeyEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->keyReleaseEvent(event);
    } else {
        vqspinbox->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseKeyReleaseEvent(QSpinBox* self, QKeyEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_KeyReleaseEvent_IsBase(true);
        vqspinbox->keyReleaseEvent(event);
    } else {
        vqspinbox->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnKeyReleaseEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_WheelEvent(QSpinBox* self, QWheelEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->wheelEvent(event);
    } else {
        vqspinbox->wheelEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseWheelEvent(QSpinBox* self, QWheelEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_WheelEvent_IsBase(true);
        vqspinbox->wheelEvent(event);
    } else {
        vqspinbox->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnWheelEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_WheelEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_FocusInEvent(QSpinBox* self, QFocusEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->focusInEvent(event);
    } else {
        vqspinbox->focusInEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseFocusInEvent(QSpinBox* self, QFocusEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_FocusInEvent_IsBase(true);
        vqspinbox->focusInEvent(event);
    } else {
        vqspinbox->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFocusInEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_FocusInEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_FocusOutEvent(QSpinBox* self, QFocusEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->focusOutEvent(event);
    } else {
        vqspinbox->focusOutEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseFocusOutEvent(QSpinBox* self, QFocusEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_FocusOutEvent_IsBase(true);
        vqspinbox->focusOutEvent(event);
    } else {
        vqspinbox->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFocusOutEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_ContextMenuEvent(QSpinBox* self, QContextMenuEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->contextMenuEvent(event);
    } else {
        vqspinbox->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseContextMenuEvent(QSpinBox* self, QContextMenuEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_ContextMenuEvent_IsBase(true);
        vqspinbox->contextMenuEvent(event);
    } else {
        vqspinbox->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnContextMenuEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_ChangeEvent(QSpinBox* self, QEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->changeEvent(event);
    } else {
        vqspinbox->changeEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseChangeEvent(QSpinBox* self, QEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_ChangeEvent_IsBase(true);
        vqspinbox->changeEvent(event);
    } else {
        vqspinbox->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnChangeEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_ChangeEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_CloseEvent(QSpinBox* self, QCloseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->closeEvent(event);
    } else {
        vqspinbox->closeEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseCloseEvent(QSpinBox* self, QCloseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_CloseEvent_IsBase(true);
        vqspinbox->closeEvent(event);
    } else {
        vqspinbox->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnCloseEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_CloseEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_HideEvent(QSpinBox* self, QHideEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->hideEvent(event);
    } else {
        vqspinbox->hideEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseHideEvent(QSpinBox* self, QHideEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_HideEvent_IsBase(true);
        vqspinbox->hideEvent(event);
    } else {
        vqspinbox->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnHideEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_HideEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_MousePressEvent(QSpinBox* self, QMouseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->mousePressEvent(event);
    } else {
        vqspinbox->mousePressEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseMousePressEvent(QSpinBox* self, QMouseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_MousePressEvent_IsBase(true);
        vqspinbox->mousePressEvent(event);
    } else {
        vqspinbox->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMousePressEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_MousePressEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_MouseReleaseEvent(QSpinBox* self, QMouseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->mouseReleaseEvent(event);
    } else {
        vqspinbox->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseMouseReleaseEvent(QSpinBox* self, QMouseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_MouseReleaseEvent_IsBase(true);
        vqspinbox->mouseReleaseEvent(event);
    } else {
        vqspinbox->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMouseReleaseEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_MouseMoveEvent(QSpinBox* self, QMouseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->mouseMoveEvent(event);
    } else {
        vqspinbox->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseMouseMoveEvent(QSpinBox* self, QMouseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_MouseMoveEvent_IsBase(true);
        vqspinbox->mouseMoveEvent(event);
    } else {
        vqspinbox->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMouseMoveEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_TimerEvent(QSpinBox* self, QTimerEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->timerEvent(event);
    } else {
        vqspinbox->timerEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseTimerEvent(QSpinBox* self, QTimerEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_TimerEvent_IsBase(true);
        vqspinbox->timerEvent(event);
    } else {
        vqspinbox->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnTimerEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_TimerEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_PaintEvent(QSpinBox* self, QPaintEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->paintEvent(event);
    } else {
        vqspinbox->paintEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBasePaintEvent(QSpinBox* self, QPaintEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_PaintEvent_IsBase(true);
        vqspinbox->paintEvent(event);
    } else {
        vqspinbox->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnPaintEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_PaintEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_ShowEvent(QSpinBox* self, QShowEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->showEvent(event);
    } else {
        vqspinbox->showEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseShowEvent(QSpinBox* self, QShowEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_ShowEvent_IsBase(true);
        vqspinbox->showEvent(event);
    } else {
        vqspinbox->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnShowEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_ShowEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_InitStyleOption(const QSpinBox* self, QStyleOptionSpinBox* option) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->initStyleOption(option);
    } else {
        vqspinbox->initStyleOption(option);
    }
}

// Base class handler implementation
void QSpinBox_QBaseInitStyleOption(const QSpinBox* self, QStyleOptionSpinBox* option) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_InitStyleOption_IsBase(true);
        vqspinbox->initStyleOption(option);
    } else {
        vqspinbox->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnInitStyleOption(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_InitStyleOption_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_StepEnabled(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return static_cast<int>(vqspinbox->stepEnabled());
    } else {
        return static_cast<int>(vqspinbox->stepEnabled());
    }
}

// Base class handler implementation
int QSpinBox_QBaseStepEnabled(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_StepEnabled_IsBase(true);
        return static_cast<int>(vqspinbox->stepEnabled());
    } else {
        return static_cast<int>(vqspinbox->stepEnabled());
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnStepEnabled(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_StepEnabled_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_StepEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_DevType(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->devType();
    } else {
        return vqspinbox->devType();
    }
}

// Base class handler implementation
int QSpinBox_QBaseDevType(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_DevType_IsBase(true);
        return vqspinbox->devType();
    } else {
        return vqspinbox->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDevType(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_DevType_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_SetVisible(QSpinBox* self, bool visible) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setVisible(visible);
    } else {
        vqspinbox->setVisible(visible);
    }
}

// Base class handler implementation
void QSpinBox_QBaseSetVisible(QSpinBox* self, bool visible) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_SetVisible_IsBase(true);
        vqspinbox->setVisible(visible);
    } else {
        vqspinbox->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSetVisible(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_SetVisible_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_HeightForWidth(const QSpinBox* self, int param1) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqspinbox->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QSpinBox_QBaseHeightForWidth(const QSpinBox* self, int param1) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_HeightForWidth_IsBase(true);
        return vqspinbox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqspinbox->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnHeightForWidth(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_HeightForWidth_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpinBox_HasHeightForWidth(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->hasHeightForWidth();
    } else {
        return vqspinbox->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QSpinBox_QBaseHasHeightForWidth(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_HasHeightForWidth_IsBase(true);
        return vqspinbox->hasHeightForWidth();
    } else {
        return vqspinbox->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnHasHeightForWidth(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QSpinBox_PaintEngine(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->paintEngine();
    } else {
        return vqspinbox->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QSpinBox_QBasePaintEngine(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_PaintEngine_IsBase(true);
        return vqspinbox->paintEngine();
    } else {
        return vqspinbox->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnPaintEngine(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_PaintEngine_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_MouseDoubleClickEvent(QSpinBox* self, QMouseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->mouseDoubleClickEvent(event);
    } else {
        vqspinbox->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseMouseDoubleClickEvent(QSpinBox* self, QMouseEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_MouseDoubleClickEvent_IsBase(true);
        vqspinbox->mouseDoubleClickEvent(event);
    } else {
        vqspinbox->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMouseDoubleClickEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_EnterEvent(QSpinBox* self, QEnterEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->enterEvent(event);
    } else {
        vqspinbox->enterEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseEnterEvent(QSpinBox* self, QEnterEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_EnterEvent_IsBase(true);
        vqspinbox->enterEvent(event);
    } else {
        vqspinbox->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnEnterEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_EnterEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_LeaveEvent(QSpinBox* self, QEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->leaveEvent(event);
    } else {
        vqspinbox->leaveEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseLeaveEvent(QSpinBox* self, QEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_LeaveEvent_IsBase(true);
        vqspinbox->leaveEvent(event);
    } else {
        vqspinbox->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnLeaveEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_LeaveEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_MoveEvent(QSpinBox* self, QMoveEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->moveEvent(event);
    } else {
        vqspinbox->moveEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseMoveEvent(QSpinBox* self, QMoveEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_MoveEvent_IsBase(true);
        vqspinbox->moveEvent(event);
    } else {
        vqspinbox->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMoveEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_MoveEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_TabletEvent(QSpinBox* self, QTabletEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->tabletEvent(event);
    } else {
        vqspinbox->tabletEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseTabletEvent(QSpinBox* self, QTabletEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_TabletEvent_IsBase(true);
        vqspinbox->tabletEvent(event);
    } else {
        vqspinbox->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnTabletEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_TabletEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_ActionEvent(QSpinBox* self, QActionEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->actionEvent(event);
    } else {
        vqspinbox->actionEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseActionEvent(QSpinBox* self, QActionEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_ActionEvent_IsBase(true);
        vqspinbox->actionEvent(event);
    } else {
        vqspinbox->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnActionEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_ActionEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_DragEnterEvent(QSpinBox* self, QDragEnterEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->dragEnterEvent(event);
    } else {
        vqspinbox->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseDragEnterEvent(QSpinBox* self, QDragEnterEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_DragEnterEvent_IsBase(true);
        vqspinbox->dragEnterEvent(event);
    } else {
        vqspinbox->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDragEnterEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_DragEnterEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_DragMoveEvent(QSpinBox* self, QDragMoveEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->dragMoveEvent(event);
    } else {
        vqspinbox->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseDragMoveEvent(QSpinBox* self, QDragMoveEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_DragMoveEvent_IsBase(true);
        vqspinbox->dragMoveEvent(event);
    } else {
        vqspinbox->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDragMoveEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_DragMoveEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_DragLeaveEvent(QSpinBox* self, QDragLeaveEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->dragLeaveEvent(event);
    } else {
        vqspinbox->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseDragLeaveEvent(QSpinBox* self, QDragLeaveEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_DragLeaveEvent_IsBase(true);
        vqspinbox->dragLeaveEvent(event);
    } else {
        vqspinbox->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDragLeaveEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_DropEvent(QSpinBox* self, QDropEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->dropEvent(event);
    } else {
        vqspinbox->dropEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseDropEvent(QSpinBox* self, QDropEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_DropEvent_IsBase(true);
        vqspinbox->dropEvent(event);
    } else {
        vqspinbox->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDropEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_DropEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpinBox_NativeEvent(QSpinBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        return vqspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QSpinBox_QBaseNativeEvent(QSpinBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_NativeEvent_IsBase(true);
        return vqspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnNativeEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_NativeEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_Metric(const QSpinBox* self, int param1) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QSpinBox_QBaseMetric(const QSpinBox* self, int param1) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_Metric_IsBase(true);
        return vqspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnMetric(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_Metric_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_InitPainter(const QSpinBox* self, QPainter* painter) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->initPainter(painter);
    } else {
        vqspinbox->initPainter(painter);
    }
}

// Base class handler implementation
void QSpinBox_QBaseInitPainter(const QSpinBox* self, QPainter* painter) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_InitPainter_IsBase(true);
        vqspinbox->initPainter(painter);
    } else {
        vqspinbox->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnInitPainter(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_InitPainter_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QSpinBox_Redirected(const QSpinBox* self, QPoint* offset) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->redirected(offset);
    } else {
        return vqspinbox->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QSpinBox_QBaseRedirected(const QSpinBox* self, QPoint* offset) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_Redirected_IsBase(true);
        return vqspinbox->redirected(offset);
    } else {
        return vqspinbox->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnRedirected(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_Redirected_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QSpinBox_SharedPainter(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->sharedPainter();
    } else {
        return vqspinbox->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QSpinBox_QBaseSharedPainter(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_SharedPainter_IsBase(true);
        return vqspinbox->sharedPainter();
    } else {
        return vqspinbox->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSharedPainter(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_SharedPainter_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_InputMethodEvent(QSpinBox* self, QInputMethodEvent* param1) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->inputMethodEvent(param1);
    } else {
        vqspinbox->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QSpinBox_QBaseInputMethodEvent(QSpinBox* self, QInputMethodEvent* param1) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_InputMethodEvent_IsBase(true);
        vqspinbox->inputMethodEvent(param1);
    } else {
        vqspinbox->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnInputMethodEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpinBox_FocusNextPrevChild(QSpinBox* self, bool next) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        return vqspinbox->focusNextPrevChild(next);
    } else {
        return vqspinbox->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QSpinBox_QBaseFocusNextPrevChild(QSpinBox* self, bool next) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_FocusNextPrevChild_IsBase(true);
        return vqspinbox->focusNextPrevChild(next);
    } else {
        return vqspinbox->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFocusNextPrevChild(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpinBox_EventFilter(QSpinBox* self, QObject* watched, QEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        return vqspinbox->eventFilter(watched, event);
    } else {
        return vqspinbox->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSpinBox_QBaseEventFilter(QSpinBox* self, QObject* watched, QEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_EventFilter_IsBase(true);
        return vqspinbox->eventFilter(watched, event);
    } else {
        return vqspinbox->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnEventFilter(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_EventFilter_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_ChildEvent(QSpinBox* self, QChildEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->childEvent(event);
    } else {
        vqspinbox->childEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseChildEvent(QSpinBox* self, QChildEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_ChildEvent_IsBase(true);
        vqspinbox->childEvent(event);
    } else {
        vqspinbox->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnChildEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_ChildEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_CustomEvent(QSpinBox* self, QEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->customEvent(event);
    } else {
        vqspinbox->customEvent(event);
    }
}

// Base class handler implementation
void QSpinBox_QBaseCustomEvent(QSpinBox* self, QEvent* event) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_CustomEvent_IsBase(true);
        vqspinbox->customEvent(event);
    } else {
        vqspinbox->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnCustomEvent(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_CustomEvent_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_ConnectNotify(QSpinBox* self, QMetaMethod* signal) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->connectNotify(*signal);
    } else {
        vqspinbox->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSpinBox_QBaseConnectNotify(QSpinBox* self, QMetaMethod* signal) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_ConnectNotify_IsBase(true);
        vqspinbox->connectNotify(*signal);
    } else {
        vqspinbox->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnConnectNotify(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_ConnectNotify_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_DisconnectNotify(QSpinBox* self, QMetaMethod* signal) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->disconnectNotify(*signal);
    } else {
        vqspinbox->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSpinBox_QBaseDisconnectNotify(QSpinBox* self, QMetaMethod* signal) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_DisconnectNotify_IsBase(true);
        vqspinbox->disconnectNotify(*signal);
    } else {
        vqspinbox->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDisconnectNotify(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_DisconnectNotify_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QLineEdit* QSpinBox_LineEdit(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->lineEdit();
    } else {
        return vqspinbox->lineEdit();
    }
}

// Base class handler implementation
QLineEdit* QSpinBox_QBaseLineEdit(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_LineEdit_IsBase(true);
        return vqspinbox->lineEdit();
    } else {
        return vqspinbox->lineEdit();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnLineEdit(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_LineEdit_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_LineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_SetLineEdit(QSpinBox* self, QLineEdit* edit) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setLineEdit(edit);
    } else {
        vqspinbox->setLineEdit(edit);
    }
}

// Base class handler implementation
void QSpinBox_QBaseSetLineEdit(QSpinBox* self, QLineEdit* edit) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_SetLineEdit_IsBase(true);
        vqspinbox->setLineEdit(edit);
    } else {
        vqspinbox->setLineEdit(edit);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSetLineEdit(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_SetLineEdit_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_UpdateMicroFocus(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->updateMicroFocus();
    } else {
        vqspinbox->updateMicroFocus();
    }
}

// Base class handler implementation
void QSpinBox_QBaseUpdateMicroFocus(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_UpdateMicroFocus_IsBase(true);
        vqspinbox->updateMicroFocus();
    } else {
        vqspinbox->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnUpdateMicroFocus(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_Create(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->create();
    } else {
        vqspinbox->create();
    }
}

// Base class handler implementation
void QSpinBox_QBaseCreate(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_Create_IsBase(true);
        vqspinbox->create();
    } else {
        vqspinbox->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnCreate(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_Create_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpinBox_Destroy(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->destroy();
    } else {
        vqspinbox->destroy();
    }
}

// Base class handler implementation
void QSpinBox_QBaseDestroy(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_Destroy_IsBase(true);
        vqspinbox->destroy();
    } else {
        vqspinbox->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnDestroy(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_Destroy_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpinBox_FocusNextChild(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        return vqspinbox->focusNextChild();
    } else {
        return vqspinbox->focusNextChild();
    }
}

// Base class handler implementation
bool QSpinBox_QBaseFocusNextChild(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_FocusNextChild_IsBase(true);
        return vqspinbox->focusNextChild();
    } else {
        return vqspinbox->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFocusNextChild(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_FocusNextChild_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpinBox_FocusPreviousChild(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        return vqspinbox->focusPreviousChild();
    } else {
        return vqspinbox->focusPreviousChild();
    }
}

// Base class handler implementation
bool QSpinBox_QBaseFocusPreviousChild(QSpinBox* self) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_FocusPreviousChild_IsBase(true);
        return vqspinbox->focusPreviousChild();
    } else {
        return vqspinbox->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnFocusPreviousChild(QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = dynamic_cast<VirtualQSpinBox*>(self)) {
        vqspinbox->setQSpinBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSpinBox_Sender(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->sender();
    } else {
        return vqspinbox->sender();
    }
}

// Base class handler implementation
QObject* QSpinBox_QBaseSender(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_Sender_IsBase(true);
        return vqspinbox->sender();
    } else {
        return vqspinbox->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSender(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_Sender_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_SenderSignalIndex(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->senderSignalIndex();
    } else {
        return vqspinbox->senderSignalIndex();
    }
}

// Base class handler implementation
int QSpinBox_QBaseSenderSignalIndex(const QSpinBox* self) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_SenderSignalIndex_IsBase(true);
        return vqspinbox->senderSignalIndex();
    } else {
        return vqspinbox->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnSenderSignalIndex(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpinBox_Receivers(const QSpinBox* self, const char* signal) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->receivers(signal);
    } else {
        return vqspinbox->receivers(signal);
    }
}

// Base class handler implementation
int QSpinBox_QBaseReceivers(const QSpinBox* self, const char* signal) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_Receivers_IsBase(true);
        return vqspinbox->receivers(signal);
    } else {
        return vqspinbox->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnReceivers(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_Receivers_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpinBox_IsSignalConnected(const QSpinBox* self, QMetaMethod* signal) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        return vqspinbox->isSignalConnected(*signal);
    } else {
        return vqspinbox->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSpinBox_QBaseIsSignalConnected(const QSpinBox* self, QMetaMethod* signal) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_IsSignalConnected_IsBase(true);
        return vqspinbox->isSignalConnected(*signal);
    } else {
        return vqspinbox->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpinBox_OnIsSignalConnected(const QSpinBox* self, intptr_t slot) {
    if (auto* vqspinbox = const_cast<VirtualQSpinBox*>(dynamic_cast<const VirtualQSpinBox*>(self))) {
        vqspinbox->setQSpinBox_IsSignalConnected_Callback(reinterpret_cast<VirtualQSpinBox::QSpinBox_IsSignalConnected_Callback>(slot));
    }
}

void QSpinBox_Delete(QSpinBox* self) {
    delete self;
}

QDoubleSpinBox* QDoubleSpinBox_new(QWidget* parent) {
    return new VirtualQDoubleSpinBox(parent);
}

QDoubleSpinBox* QDoubleSpinBox_new2() {
    return new VirtualQDoubleSpinBox();
}

QMetaObject* QDoubleSpinBox_MetaObject(const QDoubleSpinBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDoubleSpinBox_Metacast(QDoubleSpinBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDoubleSpinBox_Metacall(QDoubleSpinBox* self, int param1, int param2, void** param3) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDoubleSpinBox_OnMetacall(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_Metacall_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDoubleSpinBox_QBaseMetacall(QDoubleSpinBox* self, int param1, int param2, void** param3) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_Metacall_IsBase(true);
        return vqdoublespinbox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDoubleSpinBox_Tr(const char* s) {
    QString _ret = QDoubleSpinBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

double QDoubleSpinBox_Value(const QDoubleSpinBox* self) {
    return self->value();
}

libqt_string QDoubleSpinBox_Prefix(const QDoubleSpinBox* self) {
    QString _ret = self->prefix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QDoubleSpinBox_SetPrefix(QDoubleSpinBox* self, libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    self->setPrefix(prefix_QString);
}

libqt_string QDoubleSpinBox_Suffix(const QDoubleSpinBox* self) {
    QString _ret = self->suffix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QDoubleSpinBox_SetSuffix(QDoubleSpinBox* self, libqt_string suffix) {
    QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
    self->setSuffix(suffix_QString);
}

libqt_string QDoubleSpinBox_CleanText(const QDoubleSpinBox* self) {
    QString _ret = self->cleanText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

double QDoubleSpinBox_SingleStep(const QDoubleSpinBox* self) {
    return self->singleStep();
}

void QDoubleSpinBox_SetSingleStep(QDoubleSpinBox* self, double val) {
    self->setSingleStep(static_cast<double>(val));
}

double QDoubleSpinBox_Minimum(const QDoubleSpinBox* self) {
    return self->minimum();
}

void QDoubleSpinBox_SetMinimum(QDoubleSpinBox* self, double min) {
    self->setMinimum(static_cast<double>(min));
}

double QDoubleSpinBox_Maximum(const QDoubleSpinBox* self) {
    return self->maximum();
}

void QDoubleSpinBox_SetMaximum(QDoubleSpinBox* self, double max) {
    self->setMaximum(static_cast<double>(max));
}

void QDoubleSpinBox_SetRange(QDoubleSpinBox* self, double min, double max) {
    self->setRange(static_cast<double>(min), static_cast<double>(max));
}

int QDoubleSpinBox_StepType(const QDoubleSpinBox* self) {
    return static_cast<int>(self->stepType());
}

void QDoubleSpinBox_SetStepType(QDoubleSpinBox* self, int stepType) {
    self->setStepType(static_cast<QAbstractSpinBox::StepType>(stepType));
}

int QDoubleSpinBox_Decimals(const QDoubleSpinBox* self) {
    return self->decimals();
}

void QDoubleSpinBox_SetDecimals(QDoubleSpinBox* self, int prec) {
    self->setDecimals(static_cast<int>(prec));
}

void QDoubleSpinBox_SetValue(QDoubleSpinBox* self, double val) {
    self->setValue(static_cast<double>(val));
}

void QDoubleSpinBox_ValueChanged(QDoubleSpinBox* self, double param1) {
    self->valueChanged(static_cast<double>(param1));
}

void QDoubleSpinBox_Connect_ValueChanged(QDoubleSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QDoubleSpinBox*, double) = reinterpret_cast<void (*)(QDoubleSpinBox*, double)>(slot);
    QDoubleSpinBox::connect(self, &QDoubleSpinBox::valueChanged, [self, slotFunc](double param1) {
        double sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QDoubleSpinBox_TextChanged(QDoubleSpinBox* self, libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textChanged(param1_QString);
}

void QDoubleSpinBox_Connect_TextChanged(QDoubleSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QDoubleSpinBox*, libqt_string) = reinterpret_cast<void (*)(QDoubleSpinBox*, libqt_string)>(slot);
    QDoubleSpinBox::connect(self, &QDoubleSpinBox::textChanged, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        libqt_string param1_str;
        param1_str.len = param1_b.length();
        param1_str.data = static_cast<char*>(malloc((param1_str.len + 1) * sizeof(char)));
        memcpy(param1_str.data, param1_b.data(), param1_str.len);
        param1_str.data[param1_str.len] = '\0';
        libqt_string sigval1 = param1_str;
        slotFunc(self, sigval1);
    });
}

libqt_string QDoubleSpinBox_Tr2(const char* s, const char* c) {
    QString _ret = QDoubleSpinBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDoubleSpinBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDoubleSpinBox::tr(s, c, static_cast<int>(n));
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
int QDoubleSpinBox_Validate(const QDoubleSpinBox* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return static_cast<int>(vqdoublespinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(vqdoublespinbox->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Base class handler implementation
int QDoubleSpinBox_QBaseValidate(const QDoubleSpinBox* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_Validate_IsBase(true);
        return static_cast<int>(vqdoublespinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(vqdoublespinbox->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnValidate(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_Validate_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
double QDoubleSpinBox_ValueFromText(const QDoubleSpinBox* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->valueFromText(text_QString);
    } else {
        return vqdoublespinbox->valueFromText(text_QString);
    }
}

// Base class handler implementation
double QDoubleSpinBox_QBaseValueFromText(const QDoubleSpinBox* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_ValueFromText_IsBase(true);
        return vqdoublespinbox->valueFromText(text_QString);
    } else {
        return vqdoublespinbox->valueFromText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnValueFromText(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_ValueFromText_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ValueFromText_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QDoubleSpinBox_TextFromValue(const QDoubleSpinBox* self, double val) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        QString _ret = vqdoublespinbox->textFromValue(static_cast<double>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqdoublespinbox->textFromValue(static_cast<double>(val));
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
libqt_string QDoubleSpinBox_QBaseTextFromValue(const QDoubleSpinBox* self, double val) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_TextFromValue_IsBase(true);
        QString _ret = vqdoublespinbox->textFromValue(static_cast<double>(val));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqdoublespinbox->textFromValue(static_cast<double>(val));
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
void QDoubleSpinBox_OnTextFromValue(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_TextFromValue_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_TextFromValue_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_Fixup(const QDoubleSpinBox* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->fixup(str_QString);
    } else {
        vqdoublespinbox->fixup(str_QString);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseFixup(const QDoubleSpinBox* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_Fixup_IsBase(true);
        vqdoublespinbox->fixup(str_QString);
    } else {
        vqdoublespinbox->fixup(str_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFixup(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_Fixup_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDoubleSpinBox_SizeHint(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return new QSize(vqdoublespinbox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QDoubleSpinBox_QBaseSizeHint(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_SizeHint_IsBase(true);
        return new QSize(vqdoublespinbox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSizeHint(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_SizeHint_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDoubleSpinBox_MinimumSizeHint(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return new QSize(vqdoublespinbox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDoubleSpinBox_QBaseMinimumSizeHint(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_MinimumSizeHint_IsBase(true);
        return new QSize(vqdoublespinbox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMinimumSizeHint(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_Event(QDoubleSpinBox* self, QEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        return vqdoublespinbox->event(event);
    } else {
        return vqdoublespinbox->event(event);
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseEvent(QDoubleSpinBox* self, QEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_Event_IsBase(true);
        return vqdoublespinbox->event(event);
    } else {
        return vqdoublespinbox->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_Event_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDoubleSpinBox_InputMethodQuery(const QDoubleSpinBox* self, int param1) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return new QVariant(vqdoublespinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDoubleSpinBox_QBaseInputMethodQuery(const QDoubleSpinBox* self, int param1) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_InputMethodQuery_IsBase(true);
        return new QVariant(vqdoublespinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnInputMethodQuery(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_StepBy(QDoubleSpinBox* self, int steps) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->stepBy(static_cast<int>(steps));
    } else {
        vqdoublespinbox->stepBy(static_cast<int>(steps));
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseStepBy(QDoubleSpinBox* self, int steps) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_StepBy_IsBase(true);
        vqdoublespinbox->stepBy(static_cast<int>(steps));
    } else {
        vqdoublespinbox->stepBy(static_cast<int>(steps));
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnStepBy(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_StepBy_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_StepBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_Clear(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->clear();
    } else {
        vqdoublespinbox->clear();
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseClear(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_Clear_IsBase(true);
        vqdoublespinbox->clear();
    } else {
        vqdoublespinbox->clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnClear(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_Clear_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_ResizeEvent(QDoubleSpinBox* self, QResizeEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->resizeEvent(event);
    } else {
        vqdoublespinbox->resizeEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseResizeEvent(QDoubleSpinBox* self, QResizeEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_ResizeEvent_IsBase(true);
        vqdoublespinbox->resizeEvent(event);
    } else {
        vqdoublespinbox->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnResizeEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_ResizeEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_KeyPressEvent(QDoubleSpinBox* self, QKeyEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->keyPressEvent(event);
    } else {
        vqdoublespinbox->keyPressEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseKeyPressEvent(QDoubleSpinBox* self, QKeyEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_KeyPressEvent_IsBase(true);
        vqdoublespinbox->keyPressEvent(event);
    } else {
        vqdoublespinbox->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnKeyPressEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_KeyReleaseEvent(QDoubleSpinBox* self, QKeyEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->keyReleaseEvent(event);
    } else {
        vqdoublespinbox->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseKeyReleaseEvent(QDoubleSpinBox* self, QKeyEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_KeyReleaseEvent_IsBase(true);
        vqdoublespinbox->keyReleaseEvent(event);
    } else {
        vqdoublespinbox->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnKeyReleaseEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_WheelEvent(QDoubleSpinBox* self, QWheelEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->wheelEvent(event);
    } else {
        vqdoublespinbox->wheelEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseWheelEvent(QDoubleSpinBox* self, QWheelEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_WheelEvent_IsBase(true);
        vqdoublespinbox->wheelEvent(event);
    } else {
        vqdoublespinbox->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnWheelEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_WheelEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_FocusInEvent(QDoubleSpinBox* self, QFocusEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->focusInEvent(event);
    } else {
        vqdoublespinbox->focusInEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseFocusInEvent(QDoubleSpinBox* self, QFocusEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_FocusInEvent_IsBase(true);
        vqdoublespinbox->focusInEvent(event);
    } else {
        vqdoublespinbox->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFocusInEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_FocusInEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_FocusOutEvent(QDoubleSpinBox* self, QFocusEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->focusOutEvent(event);
    } else {
        vqdoublespinbox->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseFocusOutEvent(QDoubleSpinBox* self, QFocusEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_FocusOutEvent_IsBase(true);
        vqdoublespinbox->focusOutEvent(event);
    } else {
        vqdoublespinbox->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFocusOutEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_ContextMenuEvent(QDoubleSpinBox* self, QContextMenuEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->contextMenuEvent(event);
    } else {
        vqdoublespinbox->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseContextMenuEvent(QDoubleSpinBox* self, QContextMenuEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_ContextMenuEvent_IsBase(true);
        vqdoublespinbox->contextMenuEvent(event);
    } else {
        vqdoublespinbox->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnContextMenuEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_ChangeEvent(QDoubleSpinBox* self, QEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->changeEvent(event);
    } else {
        vqdoublespinbox->changeEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseChangeEvent(QDoubleSpinBox* self, QEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_ChangeEvent_IsBase(true);
        vqdoublespinbox->changeEvent(event);
    } else {
        vqdoublespinbox->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnChangeEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_ChangeEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_CloseEvent(QDoubleSpinBox* self, QCloseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->closeEvent(event);
    } else {
        vqdoublespinbox->closeEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseCloseEvent(QDoubleSpinBox* self, QCloseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_CloseEvent_IsBase(true);
        vqdoublespinbox->closeEvent(event);
    } else {
        vqdoublespinbox->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnCloseEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_CloseEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_HideEvent(QDoubleSpinBox* self, QHideEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->hideEvent(event);
    } else {
        vqdoublespinbox->hideEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseHideEvent(QDoubleSpinBox* self, QHideEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_HideEvent_IsBase(true);
        vqdoublespinbox->hideEvent(event);
    } else {
        vqdoublespinbox->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnHideEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_HideEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_MousePressEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->mousePressEvent(event);
    } else {
        vqdoublespinbox->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseMousePressEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_MousePressEvent_IsBase(true);
        vqdoublespinbox->mousePressEvent(event);
    } else {
        vqdoublespinbox->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMousePressEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_MousePressEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_MouseReleaseEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->mouseReleaseEvent(event);
    } else {
        vqdoublespinbox->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseMouseReleaseEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_MouseReleaseEvent_IsBase(true);
        vqdoublespinbox->mouseReleaseEvent(event);
    } else {
        vqdoublespinbox->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMouseReleaseEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_MouseMoveEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->mouseMoveEvent(event);
    } else {
        vqdoublespinbox->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseMouseMoveEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_MouseMoveEvent_IsBase(true);
        vqdoublespinbox->mouseMoveEvent(event);
    } else {
        vqdoublespinbox->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMouseMoveEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_TimerEvent(QDoubleSpinBox* self, QTimerEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->timerEvent(event);
    } else {
        vqdoublespinbox->timerEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseTimerEvent(QDoubleSpinBox* self, QTimerEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_TimerEvent_IsBase(true);
        vqdoublespinbox->timerEvent(event);
    } else {
        vqdoublespinbox->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnTimerEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_TimerEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_PaintEvent(QDoubleSpinBox* self, QPaintEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->paintEvent(event);
    } else {
        vqdoublespinbox->paintEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBasePaintEvent(QDoubleSpinBox* self, QPaintEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_PaintEvent_IsBase(true);
        vqdoublespinbox->paintEvent(event);
    } else {
        vqdoublespinbox->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnPaintEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_PaintEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_ShowEvent(QDoubleSpinBox* self, QShowEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->showEvent(event);
    } else {
        vqdoublespinbox->showEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseShowEvent(QDoubleSpinBox* self, QShowEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_ShowEvent_IsBase(true);
        vqdoublespinbox->showEvent(event);
    } else {
        vqdoublespinbox->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnShowEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_ShowEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_InitStyleOption(const QDoubleSpinBox* self, QStyleOptionSpinBox* option) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->initStyleOption(option);
    } else {
        vqdoublespinbox->initStyleOption(option);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseInitStyleOption(const QDoubleSpinBox* self, QStyleOptionSpinBox* option) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_InitStyleOption_IsBase(true);
        vqdoublespinbox->initStyleOption(option);
    } else {
        vqdoublespinbox->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnInitStyleOption(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_InitStyleOption_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QDoubleSpinBox_StepEnabled(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return static_cast<int>(vqdoublespinbox->stepEnabled());
    } else {
        return static_cast<int>(vqdoublespinbox->stepEnabled());
    }
}

// Base class handler implementation
int QDoubleSpinBox_QBaseStepEnabled(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_StepEnabled_IsBase(true);
        return static_cast<int>(vqdoublespinbox->stepEnabled());
    } else {
        return static_cast<int>(vqdoublespinbox->stepEnabled());
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnStepEnabled(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_StepEnabled_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_StepEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
int QDoubleSpinBox_DevType(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->devType();
    } else {
        return vqdoublespinbox->devType();
    }
}

// Base class handler implementation
int QDoubleSpinBox_QBaseDevType(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_DevType_IsBase(true);
        return vqdoublespinbox->devType();
    } else {
        return vqdoublespinbox->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDevType(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_DevType_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_SetVisible(QDoubleSpinBox* self, bool visible) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setVisible(visible);
    } else {
        vqdoublespinbox->setVisible(visible);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseSetVisible(QDoubleSpinBox* self, bool visible) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_SetVisible_IsBase(true);
        vqdoublespinbox->setVisible(visible);
    } else {
        vqdoublespinbox->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSetVisible(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_SetVisible_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QDoubleSpinBox_HeightForWidth(const QDoubleSpinBox* self, int param1) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqdoublespinbox->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDoubleSpinBox_QBaseHeightForWidth(const QDoubleSpinBox* self, int param1) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_HeightForWidth_IsBase(true);
        return vqdoublespinbox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqdoublespinbox->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnHeightForWidth(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_HeightForWidth_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_HasHeightForWidth(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->hasHeightForWidth();
    } else {
        return vqdoublespinbox->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseHasHeightForWidth(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_HasHeightForWidth_IsBase(true);
        return vqdoublespinbox->hasHeightForWidth();
    } else {
        return vqdoublespinbox->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnHasHeightForWidth(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDoubleSpinBox_PaintEngine(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->paintEngine();
    } else {
        return vqdoublespinbox->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDoubleSpinBox_QBasePaintEngine(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_PaintEngine_IsBase(true);
        return vqdoublespinbox->paintEngine();
    } else {
        return vqdoublespinbox->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnPaintEngine(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_PaintEngine_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_MouseDoubleClickEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->mouseDoubleClickEvent(event);
    } else {
        vqdoublespinbox->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseMouseDoubleClickEvent(QDoubleSpinBox* self, QMouseEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_MouseDoubleClickEvent_IsBase(true);
        vqdoublespinbox->mouseDoubleClickEvent(event);
    } else {
        vqdoublespinbox->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMouseDoubleClickEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_EnterEvent(QDoubleSpinBox* self, QEnterEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->enterEvent(event);
    } else {
        vqdoublespinbox->enterEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseEnterEvent(QDoubleSpinBox* self, QEnterEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_EnterEvent_IsBase(true);
        vqdoublespinbox->enterEvent(event);
    } else {
        vqdoublespinbox->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnEnterEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_EnterEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_LeaveEvent(QDoubleSpinBox* self, QEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->leaveEvent(event);
    } else {
        vqdoublespinbox->leaveEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseLeaveEvent(QDoubleSpinBox* self, QEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_LeaveEvent_IsBase(true);
        vqdoublespinbox->leaveEvent(event);
    } else {
        vqdoublespinbox->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnLeaveEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_LeaveEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_MoveEvent(QDoubleSpinBox* self, QMoveEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->moveEvent(event);
    } else {
        vqdoublespinbox->moveEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseMoveEvent(QDoubleSpinBox* self, QMoveEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_MoveEvent_IsBase(true);
        vqdoublespinbox->moveEvent(event);
    } else {
        vqdoublespinbox->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMoveEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_MoveEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_TabletEvent(QDoubleSpinBox* self, QTabletEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->tabletEvent(event);
    } else {
        vqdoublespinbox->tabletEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseTabletEvent(QDoubleSpinBox* self, QTabletEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_TabletEvent_IsBase(true);
        vqdoublespinbox->tabletEvent(event);
    } else {
        vqdoublespinbox->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnTabletEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_TabletEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_ActionEvent(QDoubleSpinBox* self, QActionEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->actionEvent(event);
    } else {
        vqdoublespinbox->actionEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseActionEvent(QDoubleSpinBox* self, QActionEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_ActionEvent_IsBase(true);
        vqdoublespinbox->actionEvent(event);
    } else {
        vqdoublespinbox->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnActionEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_ActionEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_DragEnterEvent(QDoubleSpinBox* self, QDragEnterEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->dragEnterEvent(event);
    } else {
        vqdoublespinbox->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseDragEnterEvent(QDoubleSpinBox* self, QDragEnterEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_DragEnterEvent_IsBase(true);
        vqdoublespinbox->dragEnterEvent(event);
    } else {
        vqdoublespinbox->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDragEnterEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_DragEnterEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_DragMoveEvent(QDoubleSpinBox* self, QDragMoveEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->dragMoveEvent(event);
    } else {
        vqdoublespinbox->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseDragMoveEvent(QDoubleSpinBox* self, QDragMoveEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_DragMoveEvent_IsBase(true);
        vqdoublespinbox->dragMoveEvent(event);
    } else {
        vqdoublespinbox->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDragMoveEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_DragMoveEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_DragLeaveEvent(QDoubleSpinBox* self, QDragLeaveEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->dragLeaveEvent(event);
    } else {
        vqdoublespinbox->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseDragLeaveEvent(QDoubleSpinBox* self, QDragLeaveEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_DragLeaveEvent_IsBase(true);
        vqdoublespinbox->dragLeaveEvent(event);
    } else {
        vqdoublespinbox->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDragLeaveEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_DropEvent(QDoubleSpinBox* self, QDropEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->dropEvent(event);
    } else {
        vqdoublespinbox->dropEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseDropEvent(QDoubleSpinBox* self, QDropEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_DropEvent_IsBase(true);
        vqdoublespinbox->dropEvent(event);
    } else {
        vqdoublespinbox->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDropEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_DropEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_NativeEvent(QDoubleSpinBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        return vqdoublespinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqdoublespinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseNativeEvent(QDoubleSpinBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_NativeEvent_IsBase(true);
        return vqdoublespinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqdoublespinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnNativeEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_NativeEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDoubleSpinBox_Metric(const QDoubleSpinBox* self, int param1) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqdoublespinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDoubleSpinBox_QBaseMetric(const QDoubleSpinBox* self, int param1) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_Metric_IsBase(true);
        return vqdoublespinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqdoublespinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnMetric(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_Metric_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_InitPainter(const QDoubleSpinBox* self, QPainter* painter) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->initPainter(painter);
    } else {
        vqdoublespinbox->initPainter(painter);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseInitPainter(const QDoubleSpinBox* self, QPainter* painter) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_InitPainter_IsBase(true);
        vqdoublespinbox->initPainter(painter);
    } else {
        vqdoublespinbox->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnInitPainter(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_InitPainter_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDoubleSpinBox_Redirected(const QDoubleSpinBox* self, QPoint* offset) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->redirected(offset);
    } else {
        return vqdoublespinbox->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDoubleSpinBox_QBaseRedirected(const QDoubleSpinBox* self, QPoint* offset) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_Redirected_IsBase(true);
        return vqdoublespinbox->redirected(offset);
    } else {
        return vqdoublespinbox->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnRedirected(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_Redirected_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDoubleSpinBox_SharedPainter(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->sharedPainter();
    } else {
        return vqdoublespinbox->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDoubleSpinBox_QBaseSharedPainter(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_SharedPainter_IsBase(true);
        return vqdoublespinbox->sharedPainter();
    } else {
        return vqdoublespinbox->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSharedPainter(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_SharedPainter_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_InputMethodEvent(QDoubleSpinBox* self, QInputMethodEvent* param1) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->inputMethodEvent(param1);
    } else {
        vqdoublespinbox->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseInputMethodEvent(QDoubleSpinBox* self, QInputMethodEvent* param1) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_InputMethodEvent_IsBase(true);
        vqdoublespinbox->inputMethodEvent(param1);
    } else {
        vqdoublespinbox->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnInputMethodEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_FocusNextPrevChild(QDoubleSpinBox* self, bool next) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        return vqdoublespinbox->focusNextPrevChild(next);
    } else {
        return vqdoublespinbox->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseFocusNextPrevChild(QDoubleSpinBox* self, bool next) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_FocusNextPrevChild_IsBase(true);
        return vqdoublespinbox->focusNextPrevChild(next);
    } else {
        return vqdoublespinbox->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFocusNextPrevChild(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_EventFilter(QDoubleSpinBox* self, QObject* watched, QEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        return vqdoublespinbox->eventFilter(watched, event);
    } else {
        return vqdoublespinbox->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseEventFilter(QDoubleSpinBox* self, QObject* watched, QEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_EventFilter_IsBase(true);
        return vqdoublespinbox->eventFilter(watched, event);
    } else {
        return vqdoublespinbox->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnEventFilter(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_EventFilter_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_ChildEvent(QDoubleSpinBox* self, QChildEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->childEvent(event);
    } else {
        vqdoublespinbox->childEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseChildEvent(QDoubleSpinBox* self, QChildEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_ChildEvent_IsBase(true);
        vqdoublespinbox->childEvent(event);
    } else {
        vqdoublespinbox->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnChildEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_ChildEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_CustomEvent(QDoubleSpinBox* self, QEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->customEvent(event);
    } else {
        vqdoublespinbox->customEvent(event);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseCustomEvent(QDoubleSpinBox* self, QEvent* event) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_CustomEvent_IsBase(true);
        vqdoublespinbox->customEvent(event);
    } else {
        vqdoublespinbox->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnCustomEvent(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_CustomEvent_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_ConnectNotify(QDoubleSpinBox* self, QMetaMethod* signal) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->connectNotify(*signal);
    } else {
        vqdoublespinbox->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseConnectNotify(QDoubleSpinBox* self, QMetaMethod* signal) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_ConnectNotify_IsBase(true);
        vqdoublespinbox->connectNotify(*signal);
    } else {
        vqdoublespinbox->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnConnectNotify(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_ConnectNotify_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_DisconnectNotify(QDoubleSpinBox* self, QMetaMethod* signal) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->disconnectNotify(*signal);
    } else {
        vqdoublespinbox->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseDisconnectNotify(QDoubleSpinBox* self, QMetaMethod* signal) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_DisconnectNotify_IsBase(true);
        vqdoublespinbox->disconnectNotify(*signal);
    } else {
        vqdoublespinbox->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDisconnectNotify(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_DisconnectNotify_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QLineEdit* QDoubleSpinBox_LineEdit(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->lineEdit();
    } else {
        return vqdoublespinbox->lineEdit();
    }
}

// Base class handler implementation
QLineEdit* QDoubleSpinBox_QBaseLineEdit(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_LineEdit_IsBase(true);
        return vqdoublespinbox->lineEdit();
    } else {
        return vqdoublespinbox->lineEdit();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnLineEdit(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_LineEdit_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_LineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_SetLineEdit(QDoubleSpinBox* self, QLineEdit* edit) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setLineEdit(edit);
    } else {
        vqdoublespinbox->setLineEdit(edit);
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseSetLineEdit(QDoubleSpinBox* self, QLineEdit* edit) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_SetLineEdit_IsBase(true);
        vqdoublespinbox->setLineEdit(edit);
    } else {
        vqdoublespinbox->setLineEdit(edit);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSetLineEdit(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_SetLineEdit_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_UpdateMicroFocus(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->updateMicroFocus();
    } else {
        vqdoublespinbox->updateMicroFocus();
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseUpdateMicroFocus(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_UpdateMicroFocus_IsBase(true);
        vqdoublespinbox->updateMicroFocus();
    } else {
        vqdoublespinbox->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnUpdateMicroFocus(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_Create(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->create();
    } else {
        vqdoublespinbox->create();
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseCreate(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_Create_IsBase(true);
        vqdoublespinbox->create();
    } else {
        vqdoublespinbox->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnCreate(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_Create_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDoubleSpinBox_Destroy(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->destroy();
    } else {
        vqdoublespinbox->destroy();
    }
}

// Base class handler implementation
void QDoubleSpinBox_QBaseDestroy(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_Destroy_IsBase(true);
        vqdoublespinbox->destroy();
    } else {
        vqdoublespinbox->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnDestroy(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_Destroy_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_FocusNextChild(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        return vqdoublespinbox->focusNextChild();
    } else {
        return vqdoublespinbox->focusNextChild();
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseFocusNextChild(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_FocusNextChild_IsBase(true);
        return vqdoublespinbox->focusNextChild();
    } else {
        return vqdoublespinbox->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFocusNextChild(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_FocusNextChild_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_FocusPreviousChild(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        return vqdoublespinbox->focusPreviousChild();
    } else {
        return vqdoublespinbox->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseFocusPreviousChild(QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_FocusPreviousChild_IsBase(true);
        return vqdoublespinbox->focusPreviousChild();
    } else {
        return vqdoublespinbox->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFocusPreviousChild(QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = dynamic_cast<VirtualQDoubleSpinBox*>(self)) {
        vqdoublespinbox->setQDoubleSpinBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDoubleSpinBox_Sender(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->sender();
    } else {
        return vqdoublespinbox->sender();
    }
}

// Base class handler implementation
QObject* QDoubleSpinBox_QBaseSender(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_Sender_IsBase(true);
        return vqdoublespinbox->sender();
    } else {
        return vqdoublespinbox->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSender(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_Sender_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDoubleSpinBox_SenderSignalIndex(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->senderSignalIndex();
    } else {
        return vqdoublespinbox->senderSignalIndex();
    }
}

// Base class handler implementation
int QDoubleSpinBox_QBaseSenderSignalIndex(const QDoubleSpinBox* self) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_SenderSignalIndex_IsBase(true);
        return vqdoublespinbox->senderSignalIndex();
    } else {
        return vqdoublespinbox->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnSenderSignalIndex(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDoubleSpinBox_Receivers(const QDoubleSpinBox* self, const char* signal) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->receivers(signal);
    } else {
        return vqdoublespinbox->receivers(signal);
    }
}

// Base class handler implementation
int QDoubleSpinBox_QBaseReceivers(const QDoubleSpinBox* self, const char* signal) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_Receivers_IsBase(true);
        return vqdoublespinbox->receivers(signal);
    } else {
        return vqdoublespinbox->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnReceivers(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_Receivers_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDoubleSpinBox_IsSignalConnected(const QDoubleSpinBox* self, QMetaMethod* signal) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        return vqdoublespinbox->isSignalConnected(*signal);
    } else {
        return vqdoublespinbox->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDoubleSpinBox_QBaseIsSignalConnected(const QDoubleSpinBox* self, QMetaMethod* signal) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_IsSignalConnected_IsBase(true);
        return vqdoublespinbox->isSignalConnected(*signal);
    } else {
        return vqdoublespinbox->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnIsSignalConnected(const QDoubleSpinBox* self, intptr_t slot) {
    if (auto* vqdoublespinbox = const_cast<VirtualQDoubleSpinBox*>(dynamic_cast<const VirtualQDoubleSpinBox*>(self))) {
        vqdoublespinbox->setQDoubleSpinBox_IsSignalConnected_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_IsSignalConnected_Callback>(slot));
    }
}

void QDoubleSpinBox_Delete(QDoubleSpinBox* self) {
    delete self;
}
