#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QComboBox>
#include <QCompleter>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFontComboBox>
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
#include <QModelIndex>
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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionComboBox>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QValidator>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qfontcombobox.h>
#include "libqfontcombobox.hpp"
#include "libqfontcombobox.hxx"

QFontComboBox* QFontComboBox_new(QWidget* parent) {
    return new VirtualQFontComboBox(parent);
}

QFontComboBox* QFontComboBox_new2() {
    return new VirtualQFontComboBox();
}

QMetaObject* QFontComboBox_MetaObject(const QFontComboBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFontComboBox_Metacast(QFontComboBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFontComboBox_Metacall(QFontComboBox* self, int param1, int param2, void** param3) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFontComboBox_OnMetacall(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_Metacall_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFontComboBox_QBaseMetacall(QFontComboBox* self, int param1, int param2, void** param3) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_Metacall_IsBase(true);
        return vqfontcombobox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QFontComboBox_Tr(const char* s) {
    QString _ret = QFontComboBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QFontComboBox_SetWritingSystem(QFontComboBox* self, int writingSystem) {
    self->setWritingSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
}

int QFontComboBox_WritingSystem(const QFontComboBox* self) {
    return static_cast<int>(self->writingSystem());
}

void QFontComboBox_SetFontFilters(QFontComboBox* self, int filters) {
    self->setFontFilters(static_cast<QFontComboBox::FontFilters>(filters));
}

int QFontComboBox_FontFilters(const QFontComboBox* self) {
    return static_cast<int>(self->fontFilters());
}

QFont* QFontComboBox_CurrentFont(const QFontComboBox* self) {
    return new QFont(self->currentFont());
}

void QFontComboBox_SetSampleTextForSystem(QFontComboBox* self, int writingSystem, libqt_string sampleText) {
    QString sampleText_QString = QString::fromUtf8(sampleText.data, sampleText.len);
    self->setSampleTextForSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem), sampleText_QString);
}

libqt_string QFontComboBox_SampleTextForSystem(const QFontComboBox* self, int writingSystem) {
    QString _ret = self->sampleTextForSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QFontComboBox_SetSampleTextForFont(QFontComboBox* self, libqt_string fontFamily, libqt_string sampleText) {
    QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
    QString sampleText_QString = QString::fromUtf8(sampleText.data, sampleText.len);
    self->setSampleTextForFont(fontFamily_QString, sampleText_QString);
}

libqt_string QFontComboBox_SampleTextForFont(const QFontComboBox* self, libqt_string fontFamily) {
    QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
    QString _ret = self->sampleTextForFont(fontFamily_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QFontComboBox_SetDisplayFont(QFontComboBox* self, libqt_string fontFamily, QFont* font) {
    QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
    self->setDisplayFont(fontFamily_QString, *font);
}

void QFontComboBox_SetCurrentFont(QFontComboBox* self, QFont* f) {
    self->setCurrentFont(*f);
}

void QFontComboBox_CurrentFontChanged(QFontComboBox* self, QFont* f) {
    self->currentFontChanged(*f);
}

void QFontComboBox_Connect_CurrentFontChanged(QFontComboBox* self, intptr_t slot) {
    void (*slotFunc)(QFontComboBox*, QFont*) = reinterpret_cast<void (*)(QFontComboBox*, QFont*)>(slot);
    QFontComboBox::connect(self, &QFontComboBox::currentFontChanged, [self, slotFunc](const QFont& f) {
        const QFont& f_ret = f;
        // Cast returned reference into pointer
        QFont* sigval1 = const_cast<QFont*>(&f_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QFontComboBox_Tr2(const char* s, const char* c) {
    QString _ret = QFontComboBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFontComboBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = QFontComboBox::tr(s, c, static_cast<int>(n));
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
QSize* QFontComboBox_SizeHint(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return new QSize(vqfontcombobox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QFontComboBox_QBaseSizeHint(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_SizeHint_IsBase(true);
        return new QSize(vqfontcombobox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSizeHint(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_SizeHint_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_Event(QFontComboBox* self, QEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        return vqfontcombobox->event(e);
    } else {
        return vqfontcombobox->event(e);
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseEvent(QFontComboBox* self, QEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_Event_IsBase(true);
        return vqfontcombobox->event(e);
    } else {
        return vqfontcombobox->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_Event_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_SetModel(QFontComboBox* self, QAbstractItemModel* model) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setModel(model);
    } else {
        vqfontcombobox->setModel(model);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseSetModel(QFontComboBox* self, QAbstractItemModel* model) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_SetModel_IsBase(true);
        vqfontcombobox->setModel(model);
    } else {
        vqfontcombobox->setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSetModel(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_SetModel_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFontComboBox_MinimumSizeHint(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return new QSize(vqfontcombobox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QFontComboBox_QBaseMinimumSizeHint(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_MinimumSizeHint_IsBase(true);
        return new QSize(vqfontcombobox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMinimumSizeHint(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ShowPopup(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->showPopup();
    } else {
        vqfontcombobox->showPopup();
    }
}

// Base class handler implementation
void QFontComboBox_QBaseShowPopup(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ShowPopup_IsBase(true);
        vqfontcombobox->showPopup();
    } else {
        vqfontcombobox->showPopup();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnShowPopup(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ShowPopup_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ShowPopup_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_HidePopup(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->hidePopup();
    } else {
        vqfontcombobox->hidePopup();
    }
}

// Base class handler implementation
void QFontComboBox_QBaseHidePopup(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_HidePopup_IsBase(true);
        vqfontcombobox->hidePopup();
    } else {
        vqfontcombobox->hidePopup();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnHidePopup(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_HidePopup_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_HidePopup_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QFontComboBox_InputMethodQuery(const QFontComboBox* self, int param1) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return new QVariant(vqfontcombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QFontComboBox_QBaseInputMethodQuery(const QFontComboBox* self, int param1) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_InputMethodQuery_IsBase(true);
        return new QVariant(vqfontcombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnInputMethodQuery(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_FocusInEvent(QFontComboBox* self, QFocusEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->focusInEvent(e);
    } else {
        vqfontcombobox->focusInEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseFocusInEvent(QFontComboBox* self, QFocusEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_FocusInEvent_IsBase(true);
        vqfontcombobox->focusInEvent(e);
    } else {
        vqfontcombobox->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnFocusInEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_FocusInEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_FocusOutEvent(QFontComboBox* self, QFocusEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->focusOutEvent(e);
    } else {
        vqfontcombobox->focusOutEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseFocusOutEvent(QFontComboBox* self, QFocusEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_FocusOutEvent_IsBase(true);
        vqfontcombobox->focusOutEvent(e);
    } else {
        vqfontcombobox->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnFocusOutEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ChangeEvent(QFontComboBox* self, QEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->changeEvent(e);
    } else {
        vqfontcombobox->changeEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseChangeEvent(QFontComboBox* self, QEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ChangeEvent_IsBase(true);
        vqfontcombobox->changeEvent(e);
    } else {
        vqfontcombobox->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnChangeEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ChangeEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ResizeEvent(QFontComboBox* self, QResizeEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->resizeEvent(e);
    } else {
        vqfontcombobox->resizeEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseResizeEvent(QFontComboBox* self, QResizeEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ResizeEvent_IsBase(true);
        vqfontcombobox->resizeEvent(e);
    } else {
        vqfontcombobox->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnResizeEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ResizeEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_PaintEvent(QFontComboBox* self, QPaintEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->paintEvent(e);
    } else {
        vqfontcombobox->paintEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBasePaintEvent(QFontComboBox* self, QPaintEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_PaintEvent_IsBase(true);
        vqfontcombobox->paintEvent(e);
    } else {
        vqfontcombobox->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnPaintEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_PaintEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ShowEvent(QFontComboBox* self, QShowEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->showEvent(e);
    } else {
        vqfontcombobox->showEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseShowEvent(QFontComboBox* self, QShowEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ShowEvent_IsBase(true);
        vqfontcombobox->showEvent(e);
    } else {
        vqfontcombobox->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnShowEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ShowEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_HideEvent(QFontComboBox* self, QHideEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->hideEvent(e);
    } else {
        vqfontcombobox->hideEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseHideEvent(QFontComboBox* self, QHideEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_HideEvent_IsBase(true);
        vqfontcombobox->hideEvent(e);
    } else {
        vqfontcombobox->hideEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnHideEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_HideEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_MousePressEvent(QFontComboBox* self, QMouseEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->mousePressEvent(e);
    } else {
        vqfontcombobox->mousePressEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseMousePressEvent(QFontComboBox* self, QMouseEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_MousePressEvent_IsBase(true);
        vqfontcombobox->mousePressEvent(e);
    } else {
        vqfontcombobox->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMousePressEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_MousePressEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_MouseReleaseEvent(QFontComboBox* self, QMouseEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->mouseReleaseEvent(e);
    } else {
        vqfontcombobox->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseMouseReleaseEvent(QFontComboBox* self, QMouseEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_MouseReleaseEvent_IsBase(true);
        vqfontcombobox->mouseReleaseEvent(e);
    } else {
        vqfontcombobox->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMouseReleaseEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_KeyPressEvent(QFontComboBox* self, QKeyEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->keyPressEvent(e);
    } else {
        vqfontcombobox->keyPressEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseKeyPressEvent(QFontComboBox* self, QKeyEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_KeyPressEvent_IsBase(true);
        vqfontcombobox->keyPressEvent(e);
    } else {
        vqfontcombobox->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnKeyPressEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_KeyReleaseEvent(QFontComboBox* self, QKeyEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->keyReleaseEvent(e);
    } else {
        vqfontcombobox->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseKeyReleaseEvent(QFontComboBox* self, QKeyEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_KeyReleaseEvent_IsBase(true);
        vqfontcombobox->keyReleaseEvent(e);
    } else {
        vqfontcombobox->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnKeyReleaseEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_WheelEvent(QFontComboBox* self, QWheelEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->wheelEvent(e);
    } else {
        vqfontcombobox->wheelEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseWheelEvent(QFontComboBox* self, QWheelEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_WheelEvent_IsBase(true);
        vqfontcombobox->wheelEvent(e);
    } else {
        vqfontcombobox->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnWheelEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_WheelEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ContextMenuEvent(QFontComboBox* self, QContextMenuEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->contextMenuEvent(e);
    } else {
        vqfontcombobox->contextMenuEvent(e);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseContextMenuEvent(QFontComboBox* self, QContextMenuEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ContextMenuEvent_IsBase(true);
        vqfontcombobox->contextMenuEvent(e);
    } else {
        vqfontcombobox->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnContextMenuEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_InputMethodEvent(QFontComboBox* self, QInputMethodEvent* param1) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->inputMethodEvent(param1);
    } else {
        vqfontcombobox->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseInputMethodEvent(QFontComboBox* self, QInputMethodEvent* param1) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_InputMethodEvent_IsBase(true);
        vqfontcombobox->inputMethodEvent(param1);
    } else {
        vqfontcombobox->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnInputMethodEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_InitStyleOption(const QFontComboBox* self, QStyleOptionComboBox* option) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->initStyleOption(option);
    } else {
        vqfontcombobox->initStyleOption(option);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseInitStyleOption(const QFontComboBox* self, QStyleOptionComboBox* option) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_InitStyleOption_IsBase(true);
        vqfontcombobox->initStyleOption(option);
    } else {
        vqfontcombobox->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnInitStyleOption(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_InitStyleOption_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontComboBox_DevType(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->devType();
    } else {
        return vqfontcombobox->devType();
    }
}

// Base class handler implementation
int QFontComboBox_QBaseDevType(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_DevType_IsBase(true);
        return vqfontcombobox->devType();
    } else {
        return vqfontcombobox->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDevType(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_DevType_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_SetVisible(QFontComboBox* self, bool visible) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setVisible(visible);
    } else {
        vqfontcombobox->setVisible(visible);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseSetVisible(QFontComboBox* self, bool visible) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_SetVisible_IsBase(true);
        vqfontcombobox->setVisible(visible);
    } else {
        vqfontcombobox->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSetVisible(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_SetVisible_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontComboBox_HeightForWidth(const QFontComboBox* self, int param1) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqfontcombobox->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QFontComboBox_QBaseHeightForWidth(const QFontComboBox* self, int param1) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_HeightForWidth_IsBase(true);
        return vqfontcombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqfontcombobox->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnHeightForWidth(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_HeightForWidth_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_HasHeightForWidth(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->hasHeightForWidth();
    } else {
        return vqfontcombobox->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseHasHeightForWidth(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_HasHeightForWidth_IsBase(true);
        return vqfontcombobox->hasHeightForWidth();
    } else {
        return vqfontcombobox->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnHasHeightForWidth(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QFontComboBox_PaintEngine(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->paintEngine();
    } else {
        return vqfontcombobox->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QFontComboBox_QBasePaintEngine(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_PaintEngine_IsBase(true);
        return vqfontcombobox->paintEngine();
    } else {
        return vqfontcombobox->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnPaintEngine(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_PaintEngine_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_MouseDoubleClickEvent(QFontComboBox* self, QMouseEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->mouseDoubleClickEvent(event);
    } else {
        vqfontcombobox->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseMouseDoubleClickEvent(QFontComboBox* self, QMouseEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_MouseDoubleClickEvent_IsBase(true);
        vqfontcombobox->mouseDoubleClickEvent(event);
    } else {
        vqfontcombobox->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMouseDoubleClickEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_MouseMoveEvent(QFontComboBox* self, QMouseEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->mouseMoveEvent(event);
    } else {
        vqfontcombobox->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseMouseMoveEvent(QFontComboBox* self, QMouseEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_MouseMoveEvent_IsBase(true);
        vqfontcombobox->mouseMoveEvent(event);
    } else {
        vqfontcombobox->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMouseMoveEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_EnterEvent(QFontComboBox* self, QEnterEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->enterEvent(event);
    } else {
        vqfontcombobox->enterEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseEnterEvent(QFontComboBox* self, QEnterEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_EnterEvent_IsBase(true);
        vqfontcombobox->enterEvent(event);
    } else {
        vqfontcombobox->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnEnterEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_EnterEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_LeaveEvent(QFontComboBox* self, QEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->leaveEvent(event);
    } else {
        vqfontcombobox->leaveEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseLeaveEvent(QFontComboBox* self, QEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_LeaveEvent_IsBase(true);
        vqfontcombobox->leaveEvent(event);
    } else {
        vqfontcombobox->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnLeaveEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_LeaveEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_MoveEvent(QFontComboBox* self, QMoveEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->moveEvent(event);
    } else {
        vqfontcombobox->moveEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseMoveEvent(QFontComboBox* self, QMoveEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_MoveEvent_IsBase(true);
        vqfontcombobox->moveEvent(event);
    } else {
        vqfontcombobox->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMoveEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_MoveEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_CloseEvent(QFontComboBox* self, QCloseEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->closeEvent(event);
    } else {
        vqfontcombobox->closeEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseCloseEvent(QFontComboBox* self, QCloseEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_CloseEvent_IsBase(true);
        vqfontcombobox->closeEvent(event);
    } else {
        vqfontcombobox->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnCloseEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_CloseEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_TabletEvent(QFontComboBox* self, QTabletEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->tabletEvent(event);
    } else {
        vqfontcombobox->tabletEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseTabletEvent(QFontComboBox* self, QTabletEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_TabletEvent_IsBase(true);
        vqfontcombobox->tabletEvent(event);
    } else {
        vqfontcombobox->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnTabletEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_TabletEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ActionEvent(QFontComboBox* self, QActionEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->actionEvent(event);
    } else {
        vqfontcombobox->actionEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseActionEvent(QFontComboBox* self, QActionEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ActionEvent_IsBase(true);
        vqfontcombobox->actionEvent(event);
    } else {
        vqfontcombobox->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnActionEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ActionEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_DragEnterEvent(QFontComboBox* self, QDragEnterEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->dragEnterEvent(event);
    } else {
        vqfontcombobox->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseDragEnterEvent(QFontComboBox* self, QDragEnterEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_DragEnterEvent_IsBase(true);
        vqfontcombobox->dragEnterEvent(event);
    } else {
        vqfontcombobox->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDragEnterEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_DragEnterEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_DragMoveEvent(QFontComboBox* self, QDragMoveEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->dragMoveEvent(event);
    } else {
        vqfontcombobox->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseDragMoveEvent(QFontComboBox* self, QDragMoveEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_DragMoveEvent_IsBase(true);
        vqfontcombobox->dragMoveEvent(event);
    } else {
        vqfontcombobox->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDragMoveEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_DragMoveEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_DragLeaveEvent(QFontComboBox* self, QDragLeaveEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->dragLeaveEvent(event);
    } else {
        vqfontcombobox->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseDragLeaveEvent(QFontComboBox* self, QDragLeaveEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_DragLeaveEvent_IsBase(true);
        vqfontcombobox->dragLeaveEvent(event);
    } else {
        vqfontcombobox->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDragLeaveEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_DropEvent(QFontComboBox* self, QDropEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->dropEvent(event);
    } else {
        vqfontcombobox->dropEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseDropEvent(QFontComboBox* self, QDropEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_DropEvent_IsBase(true);
        vqfontcombobox->dropEvent(event);
    } else {
        vqfontcombobox->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDropEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_DropEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_NativeEvent(QFontComboBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        return vqfontcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqfontcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseNativeEvent(QFontComboBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_NativeEvent_IsBase(true);
        return vqfontcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqfontcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnNativeEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_NativeEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontComboBox_Metric(const QFontComboBox* self, int param1) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqfontcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QFontComboBox_QBaseMetric(const QFontComboBox* self, int param1) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_Metric_IsBase(true);
        return vqfontcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqfontcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMetric(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_Metric_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_InitPainter(const QFontComboBox* self, QPainter* painter) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->initPainter(painter);
    } else {
        vqfontcombobox->initPainter(painter);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseInitPainter(const QFontComboBox* self, QPainter* painter) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_InitPainter_IsBase(true);
        vqfontcombobox->initPainter(painter);
    } else {
        vqfontcombobox->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnInitPainter(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_InitPainter_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QFontComboBox_Redirected(const QFontComboBox* self, QPoint* offset) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->redirected(offset);
    } else {
        return vqfontcombobox->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QFontComboBox_QBaseRedirected(const QFontComboBox* self, QPoint* offset) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_Redirected_IsBase(true);
        return vqfontcombobox->redirected(offset);
    } else {
        return vqfontcombobox->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnRedirected(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_Redirected_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QFontComboBox_SharedPainter(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->sharedPainter();
    } else {
        return vqfontcombobox->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QFontComboBox_QBaseSharedPainter(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_SharedPainter_IsBase(true);
        return vqfontcombobox->sharedPainter();
    } else {
        return vqfontcombobox->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSharedPainter(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_SharedPainter_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_FocusNextPrevChild(QFontComboBox* self, bool next) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        return vqfontcombobox->focusNextPrevChild(next);
    } else {
        return vqfontcombobox->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseFocusNextPrevChild(QFontComboBox* self, bool next) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_FocusNextPrevChild_IsBase(true);
        return vqfontcombobox->focusNextPrevChild(next);
    } else {
        return vqfontcombobox->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnFocusNextPrevChild(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_EventFilter(QFontComboBox* self, QObject* watched, QEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        return vqfontcombobox->eventFilter(watched, event);
    } else {
        return vqfontcombobox->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseEventFilter(QFontComboBox* self, QObject* watched, QEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_EventFilter_IsBase(true);
        return vqfontcombobox->eventFilter(watched, event);
    } else {
        return vqfontcombobox->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnEventFilter(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_EventFilter_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_TimerEvent(QFontComboBox* self, QTimerEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->timerEvent(event);
    } else {
        vqfontcombobox->timerEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseTimerEvent(QFontComboBox* self, QTimerEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_TimerEvent_IsBase(true);
        vqfontcombobox->timerEvent(event);
    } else {
        vqfontcombobox->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnTimerEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_TimerEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ChildEvent(QFontComboBox* self, QChildEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->childEvent(event);
    } else {
        vqfontcombobox->childEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseChildEvent(QFontComboBox* self, QChildEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ChildEvent_IsBase(true);
        vqfontcombobox->childEvent(event);
    } else {
        vqfontcombobox->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnChildEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ChildEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_CustomEvent(QFontComboBox* self, QEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->customEvent(event);
    } else {
        vqfontcombobox->customEvent(event);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseCustomEvent(QFontComboBox* self, QEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_CustomEvent_IsBase(true);
        vqfontcombobox->customEvent(event);
    } else {
        vqfontcombobox->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnCustomEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_CustomEvent_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_ConnectNotify(QFontComboBox* self, QMetaMethod* signal) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->connectNotify(*signal);
    } else {
        vqfontcombobox->connectNotify(*signal);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseConnectNotify(QFontComboBox* self, QMetaMethod* signal) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ConnectNotify_IsBase(true);
        vqfontcombobox->connectNotify(*signal);
    } else {
        vqfontcombobox->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnConnectNotify(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_ConnectNotify_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_DisconnectNotify(QFontComboBox* self, QMetaMethod* signal) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->disconnectNotify(*signal);
    } else {
        vqfontcombobox->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QFontComboBox_QBaseDisconnectNotify(QFontComboBox* self, QMetaMethod* signal) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_DisconnectNotify_IsBase(true);
        vqfontcombobox->disconnectNotify(*signal);
    } else {
        vqfontcombobox->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDisconnectNotify(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_DisconnectNotify_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_UpdateMicroFocus(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->updateMicroFocus();
    } else {
        vqfontcombobox->updateMicroFocus();
    }
}

// Base class handler implementation
void QFontComboBox_QBaseUpdateMicroFocus(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_UpdateMicroFocus_IsBase(true);
        vqfontcombobox->updateMicroFocus();
    } else {
        vqfontcombobox->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnUpdateMicroFocus(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_Create(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->create();
    } else {
        vqfontcombobox->create();
    }
}

// Base class handler implementation
void QFontComboBox_QBaseCreate(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_Create_IsBase(true);
        vqfontcombobox->create();
    } else {
        vqfontcombobox->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnCreate(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_Create_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontComboBox_Destroy(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->destroy();
    } else {
        vqfontcombobox->destroy();
    }
}

// Base class handler implementation
void QFontComboBox_QBaseDestroy(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_Destroy_IsBase(true);
        vqfontcombobox->destroy();
    } else {
        vqfontcombobox->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDestroy(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_Destroy_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_FocusNextChild(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        return vqfontcombobox->focusNextChild();
    } else {
        return vqfontcombobox->focusNextChild();
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseFocusNextChild(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_FocusNextChild_IsBase(true);
        return vqfontcombobox->focusNextChild();
    } else {
        return vqfontcombobox->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnFocusNextChild(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_FocusNextChild_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_FocusPreviousChild(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        return vqfontcombobox->focusPreviousChild();
    } else {
        return vqfontcombobox->focusPreviousChild();
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseFocusPreviousChild(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_FocusPreviousChild_IsBase(true);
        return vqfontcombobox->focusPreviousChild();
    } else {
        return vqfontcombobox->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnFocusPreviousChild(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->setQFontComboBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QFontComboBox_Sender(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->sender();
    } else {
        return vqfontcombobox->sender();
    }
}

// Base class handler implementation
QObject* QFontComboBox_QBaseSender(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_Sender_IsBase(true);
        return vqfontcombobox->sender();
    } else {
        return vqfontcombobox->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSender(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_Sender_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontComboBox_SenderSignalIndex(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->senderSignalIndex();
    } else {
        return vqfontcombobox->senderSignalIndex();
    }
}

// Base class handler implementation
int QFontComboBox_QBaseSenderSignalIndex(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_SenderSignalIndex_IsBase(true);
        return vqfontcombobox->senderSignalIndex();
    } else {
        return vqfontcombobox->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSenderSignalIndex(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontComboBox_Receivers(const QFontComboBox* self, const char* signal) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->receivers(signal);
    } else {
        return vqfontcombobox->receivers(signal);
    }
}

// Base class handler implementation
int QFontComboBox_QBaseReceivers(const QFontComboBox* self, const char* signal) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_Receivers_IsBase(true);
        return vqfontcombobox->receivers(signal);
    } else {
        return vqfontcombobox->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnReceivers(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_Receivers_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontComboBox_IsSignalConnected(const QFontComboBox* self, QMetaMethod* signal) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->isSignalConnected(*signal);
    } else {
        return vqfontcombobox->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QFontComboBox_QBaseIsSignalConnected(const QFontComboBox* self, QMetaMethod* signal) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_IsSignalConnected_IsBase(true);
        return vqfontcombobox->isSignalConnected(*signal);
    } else {
        return vqfontcombobox->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnIsSignalConnected(const QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->setQFontComboBox_IsSignalConnected_Callback(reinterpret_cast<VirtualQFontComboBox::QFontComboBox_IsSignalConnected_Callback>(slot));
    }
}

void QFontComboBox_Delete(QFontComboBox* self) {
    delete self;
}
