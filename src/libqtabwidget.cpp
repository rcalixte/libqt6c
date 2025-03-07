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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionTabWidgetFrame>
#include <QTabBar>
#include <QTabWidget>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qtabwidget.h>
#include "libqtabwidget.hpp"
#include "libqtabwidget.hxx"

QTabWidget* QTabWidget_new(QWidget* parent) {
    return new VirtualQTabWidget(parent);
}

QTabWidget* QTabWidget_new2() {
    return new VirtualQTabWidget();
}

QMetaObject* QTabWidget_MetaObject(const QTabWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTabWidget_Metacast(QTabWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTabWidget_Metacall(QTabWidget* self, int param1, int param2, void** param3) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnMetacall(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_Metacall_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTabWidget_QBaseMetacall(QTabWidget* self, int param1, int param2, void** param3) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_Metacall_IsBase(true);
        return vqtabwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTabWidget_Tr(const char* s) {
    QString _ret = QTabWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QTabWidget_AddTab(QTabWidget* self, QWidget* widget, libqt_string param2) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return self->addTab(widget, param2_QString);
}

int QTabWidget_AddTab2(QTabWidget* self, QWidget* widget, QIcon* icon, libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return self->addTab(widget, *icon, label_QString);
}

int QTabWidget_InsertTab(QTabWidget* self, int index, QWidget* widget, libqt_string param3) {
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    return self->insertTab(static_cast<int>(index), widget, param3_QString);
}

int QTabWidget_InsertTab2(QTabWidget* self, int index, QWidget* widget, QIcon* icon, libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return self->insertTab(static_cast<int>(index), widget, *icon, label_QString);
}

void QTabWidget_RemoveTab(QTabWidget* self, int index) {
    self->removeTab(static_cast<int>(index));
}

bool QTabWidget_IsTabEnabled(const QTabWidget* self, int index) {
    return self->isTabEnabled(static_cast<int>(index));
}

void QTabWidget_SetTabEnabled(QTabWidget* self, int index, bool enabled) {
    self->setTabEnabled(static_cast<int>(index), enabled);
}

bool QTabWidget_IsTabVisible(const QTabWidget* self, int index) {
    return self->isTabVisible(static_cast<int>(index));
}

void QTabWidget_SetTabVisible(QTabWidget* self, int index, bool visible) {
    self->setTabVisible(static_cast<int>(index), visible);
}

libqt_string QTabWidget_TabText(const QTabWidget* self, int index) {
    QString _ret = self->tabText(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTabWidget_SetTabText(QTabWidget* self, int index, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setTabText(static_cast<int>(index), text_QString);
}

QIcon* QTabWidget_TabIcon(const QTabWidget* self, int index) {
    return new QIcon(self->tabIcon(static_cast<int>(index)));
}

void QTabWidget_SetTabIcon(QTabWidget* self, int index, QIcon* icon) {
    self->setTabIcon(static_cast<int>(index), *icon);
}

void QTabWidget_SetTabToolTip(QTabWidget* self, int index, libqt_string tip) {
    QString tip_QString = QString::fromUtf8(tip.data, tip.len);
    self->setTabToolTip(static_cast<int>(index), tip_QString);
}

libqt_string QTabWidget_TabToolTip(const QTabWidget* self, int index) {
    QString _ret = self->tabToolTip(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTabWidget_SetTabWhatsThis(QTabWidget* self, int index, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setTabWhatsThis(static_cast<int>(index), text_QString);
}

libqt_string QTabWidget_TabWhatsThis(const QTabWidget* self, int index) {
    QString _ret = self->tabWhatsThis(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QTabWidget_CurrentIndex(const QTabWidget* self) {
    return self->currentIndex();
}

QWidget* QTabWidget_CurrentWidget(const QTabWidget* self) {
    return self->currentWidget();
}

QWidget* QTabWidget_Widget(const QTabWidget* self, int index) {
    return self->widget(static_cast<int>(index));
}

int QTabWidget_IndexOf(const QTabWidget* self, QWidget* widget) {
    return self->indexOf(widget);
}

int QTabWidget_Count(const QTabWidget* self) {
    return self->count();
}

int QTabWidget_TabPosition(const QTabWidget* self) {
    return static_cast<int>(self->tabPosition());
}

void QTabWidget_SetTabPosition(QTabWidget* self, int position) {
    self->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
}

bool QTabWidget_TabsClosable(const QTabWidget* self) {
    return self->tabsClosable();
}

void QTabWidget_SetTabsClosable(QTabWidget* self, bool closeable) {
    self->setTabsClosable(closeable);
}

bool QTabWidget_IsMovable(const QTabWidget* self) {
    return self->isMovable();
}

void QTabWidget_SetMovable(QTabWidget* self, bool movable) {
    self->setMovable(movable);
}

int QTabWidget_TabShape(const QTabWidget* self) {
    return static_cast<int>(self->tabShape());
}

void QTabWidget_SetTabShape(QTabWidget* self, int s) {
    self->setTabShape(static_cast<QTabWidget::TabShape>(s));
}

void QTabWidget_SetCornerWidget(QTabWidget* self, QWidget* w) {
    self->setCornerWidget(w);
}

QWidget* QTabWidget_CornerWidget(const QTabWidget* self) {
    return self->cornerWidget();
}

int QTabWidget_ElideMode(const QTabWidget* self) {
    return static_cast<int>(self->elideMode());
}

void QTabWidget_SetElideMode(QTabWidget* self, int mode) {
    self->setElideMode(static_cast<Qt::TextElideMode>(mode));
}

QSize* QTabWidget_IconSize(const QTabWidget* self) {
    return new QSize(self->iconSize());
}

void QTabWidget_SetIconSize(QTabWidget* self, QSize* size) {
    self->setIconSize(*size);
}

bool QTabWidget_UsesScrollButtons(const QTabWidget* self) {
    return self->usesScrollButtons();
}

void QTabWidget_SetUsesScrollButtons(QTabWidget* self, bool useButtons) {
    self->setUsesScrollButtons(useButtons);
}

bool QTabWidget_DocumentMode(const QTabWidget* self) {
    return self->documentMode();
}

void QTabWidget_SetDocumentMode(QTabWidget* self, bool set) {
    self->setDocumentMode(set);
}

bool QTabWidget_TabBarAutoHide(const QTabWidget* self) {
    return self->tabBarAutoHide();
}

void QTabWidget_SetTabBarAutoHide(QTabWidget* self, bool enabled) {
    self->setTabBarAutoHide(enabled);
}

void QTabWidget_Clear(QTabWidget* self) {
    self->clear();
}

QTabBar* QTabWidget_TabBar(const QTabWidget* self) {
    return self->tabBar();
}

void QTabWidget_SetCurrentIndex(QTabWidget* self, int index) {
    self->setCurrentIndex(static_cast<int>(index));
}

void QTabWidget_SetCurrentWidget(QTabWidget* self, QWidget* widget) {
    self->setCurrentWidget(widget);
}

void QTabWidget_CurrentChanged(QTabWidget* self, int index) {
    self->currentChanged(static_cast<int>(index));
}

void QTabWidget_Connect_CurrentChanged(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self, &QTabWidget::currentChanged, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QTabWidget_TabCloseRequested(QTabWidget* self, int index) {
    self->tabCloseRequested(static_cast<int>(index));
}

void QTabWidget_Connect_TabCloseRequested(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self, &QTabWidget::tabCloseRequested, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QTabWidget_TabBarClicked(QTabWidget* self, int index) {
    self->tabBarClicked(static_cast<int>(index));
}

void QTabWidget_Connect_TabBarClicked(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self, &QTabWidget::tabBarClicked, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QTabWidget_TabBarDoubleClicked(QTabWidget* self, int index) {
    self->tabBarDoubleClicked(static_cast<int>(index));
}

void QTabWidget_Connect_TabBarDoubleClicked(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self, &QTabWidget::tabBarDoubleClicked, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

libqt_string QTabWidget_Tr2(const char* s, const char* c) {
    QString _ret = QTabWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTabWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTabWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTabWidget_SetCornerWidget2(QTabWidget* self, QWidget* w, int corner) {
    self->setCornerWidget(w, static_cast<Qt::Corner>(corner));
}

QWidget* QTabWidget_CornerWidget1(const QTabWidget* self, int corner) {
    return self->cornerWidget(static_cast<Qt::Corner>(corner));
}

// Derived class handler implementation
QSize* QTabWidget_SizeHint(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return new QSize(vqtabwidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QTabWidget_QBaseSizeHint(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_SizeHint_IsBase(true);
        return new QSize(vqtabwidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSizeHint(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_SizeHint_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTabWidget_MinimumSizeHint(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return new QSize(vqtabwidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QTabWidget_QBaseMinimumSizeHint(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqtabwidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMinimumSizeHint(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QTabWidget_HeightForWidth(const QTabWidget* self, int width) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->heightForWidth(static_cast<int>(width));
    } else {
        return vqtabwidget->heightForWidth(static_cast<int>(width));
    }
}

// Base class handler implementation
int QTabWidget_QBaseHeightForWidth(const QTabWidget* self, int width) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_HeightForWidth_IsBase(true);
        return vqtabwidget->heightForWidth(static_cast<int>(width));
    } else {
        return vqtabwidget->heightForWidth(static_cast<int>(width));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnHeightForWidth(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabWidget_HasHeightForWidth(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->hasHeightForWidth();
    } else {
        return vqtabwidget->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QTabWidget_QBaseHasHeightForWidth(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_HasHeightForWidth_IsBase(true);
        return vqtabwidget->hasHeightForWidth();
    } else {
        return vqtabwidget->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnHasHeightForWidth(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_TabInserted(QTabWidget* self, int index) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->tabInserted(static_cast<int>(index));
    } else {
        vqtabwidget->tabInserted(static_cast<int>(index));
    }
}

// Base class handler implementation
void QTabWidget_QBaseTabInserted(QTabWidget* self, int index) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_TabInserted_IsBase(true);
        vqtabwidget->tabInserted(static_cast<int>(index));
    } else {
        vqtabwidget->tabInserted(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnTabInserted(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_TabInserted_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_TabInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_TabRemoved(QTabWidget* self, int index) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->tabRemoved(static_cast<int>(index));
    } else {
        vqtabwidget->tabRemoved(static_cast<int>(index));
    }
}

// Base class handler implementation
void QTabWidget_QBaseTabRemoved(QTabWidget* self, int index) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_TabRemoved_IsBase(true);
        vqtabwidget->tabRemoved(static_cast<int>(index));
    } else {
        vqtabwidget->tabRemoved(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnTabRemoved(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_TabRemoved_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_TabRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_ShowEvent(QTabWidget* self, QShowEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->showEvent(param1);
    } else {
        vqtabwidget->showEvent(param1);
    }
}

// Base class handler implementation
void QTabWidget_QBaseShowEvent(QTabWidget* self, QShowEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_ShowEvent_IsBase(true);
        vqtabwidget->showEvent(param1);
    } else {
        vqtabwidget->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnShowEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_ShowEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_ResizeEvent(QTabWidget* self, QResizeEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->resizeEvent(param1);
    } else {
        vqtabwidget->resizeEvent(param1);
    }
}

// Base class handler implementation
void QTabWidget_QBaseResizeEvent(QTabWidget* self, QResizeEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_ResizeEvent_IsBase(true);
        vqtabwidget->resizeEvent(param1);
    } else {
        vqtabwidget->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnResizeEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_KeyPressEvent(QTabWidget* self, QKeyEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->keyPressEvent(param1);
    } else {
        vqtabwidget->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QTabWidget_QBaseKeyPressEvent(QTabWidget* self, QKeyEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_KeyPressEvent_IsBase(true);
        vqtabwidget->keyPressEvent(param1);
    } else {
        vqtabwidget->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnKeyPressEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_PaintEvent(QTabWidget* self, QPaintEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->paintEvent(param1);
    } else {
        vqtabwidget->paintEvent(param1);
    }
}

// Base class handler implementation
void QTabWidget_QBasePaintEvent(QTabWidget* self, QPaintEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_PaintEvent_IsBase(true);
        vqtabwidget->paintEvent(param1);
    } else {
        vqtabwidget->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnPaintEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_PaintEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_ChangeEvent(QTabWidget* self, QEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->changeEvent(param1);
    } else {
        vqtabwidget->changeEvent(param1);
    }
}

// Base class handler implementation
void QTabWidget_QBaseChangeEvent(QTabWidget* self, QEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_ChangeEvent_IsBase(true);
        vqtabwidget->changeEvent(param1);
    } else {
        vqtabwidget->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnChangeEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabWidget_Event(QTabWidget* self, QEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        return vqtabwidget->event(param1);
    } else {
        return vqtabwidget->event(param1);
    }
}

// Base class handler implementation
bool QTabWidget_QBaseEvent(QTabWidget* self, QEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_Event_IsBase(true);
        return vqtabwidget->event(param1);
    } else {
        return vqtabwidget->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_Event_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_InitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->initStyleOption(option);
    } else {
        vqtabwidget->initStyleOption(option);
    }
}

// Base class handler implementation
void QTabWidget_QBaseInitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_InitStyleOption_IsBase(true);
        vqtabwidget->initStyleOption(option);
    } else {
        vqtabwidget->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnInitStyleOption(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QTabWidget_DevType(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->devType();
    } else {
        return vqtabwidget->devType();
    }
}

// Base class handler implementation
int QTabWidget_QBaseDevType(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_DevType_IsBase(true);
        return vqtabwidget->devType();
    } else {
        return vqtabwidget->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDevType(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_DevType_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_SetVisible(QTabWidget* self, bool visible) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setVisible(visible);
    } else {
        vqtabwidget->setVisible(visible);
    }
}

// Base class handler implementation
void QTabWidget_QBaseSetVisible(QTabWidget* self, bool visible) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_SetVisible_IsBase(true);
        vqtabwidget->setVisible(visible);
    } else {
        vqtabwidget->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSetVisible(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_SetVisible_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTabWidget_PaintEngine(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->paintEngine();
    } else {
        return vqtabwidget->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTabWidget_QBasePaintEngine(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_PaintEngine_IsBase(true);
        return vqtabwidget->paintEngine();
    } else {
        return vqtabwidget->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnPaintEngine(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_PaintEngine_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_MousePressEvent(QTabWidget* self, QMouseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->mousePressEvent(event);
    } else {
        vqtabwidget->mousePressEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseMousePressEvent(QTabWidget* self, QMouseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_MousePressEvent_IsBase(true);
        vqtabwidget->mousePressEvent(event);
    } else {
        vqtabwidget->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMousePressEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_MouseReleaseEvent(QTabWidget* self, QMouseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->mouseReleaseEvent(event);
    } else {
        vqtabwidget->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseMouseReleaseEvent(QTabWidget* self, QMouseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_MouseReleaseEvent_IsBase(true);
        vqtabwidget->mouseReleaseEvent(event);
    } else {
        vqtabwidget->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMouseReleaseEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_MouseDoubleClickEvent(QTabWidget* self, QMouseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->mouseDoubleClickEvent(event);
    } else {
        vqtabwidget->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseMouseDoubleClickEvent(QTabWidget* self, QMouseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_MouseDoubleClickEvent_IsBase(true);
        vqtabwidget->mouseDoubleClickEvent(event);
    } else {
        vqtabwidget->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMouseDoubleClickEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_MouseMoveEvent(QTabWidget* self, QMouseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->mouseMoveEvent(event);
    } else {
        vqtabwidget->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseMouseMoveEvent(QTabWidget* self, QMouseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_MouseMoveEvent_IsBase(true);
        vqtabwidget->mouseMoveEvent(event);
    } else {
        vqtabwidget->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMouseMoveEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_WheelEvent(QTabWidget* self, QWheelEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->wheelEvent(event);
    } else {
        vqtabwidget->wheelEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseWheelEvent(QTabWidget* self, QWheelEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_WheelEvent_IsBase(true);
        vqtabwidget->wheelEvent(event);
    } else {
        vqtabwidget->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnWheelEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_WheelEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_KeyReleaseEvent(QTabWidget* self, QKeyEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->keyReleaseEvent(event);
    } else {
        vqtabwidget->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseKeyReleaseEvent(QTabWidget* self, QKeyEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_KeyReleaseEvent_IsBase(true);
        vqtabwidget->keyReleaseEvent(event);
    } else {
        vqtabwidget->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnKeyReleaseEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_FocusInEvent(QTabWidget* self, QFocusEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->focusInEvent(event);
    } else {
        vqtabwidget->focusInEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseFocusInEvent(QTabWidget* self, QFocusEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_FocusInEvent_IsBase(true);
        vqtabwidget->focusInEvent(event);
    } else {
        vqtabwidget->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnFocusInEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_FocusOutEvent(QTabWidget* self, QFocusEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->focusOutEvent(event);
    } else {
        vqtabwidget->focusOutEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseFocusOutEvent(QTabWidget* self, QFocusEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_FocusOutEvent_IsBase(true);
        vqtabwidget->focusOutEvent(event);
    } else {
        vqtabwidget->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnFocusOutEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_EnterEvent(QTabWidget* self, QEnterEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->enterEvent(event);
    } else {
        vqtabwidget->enterEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseEnterEvent(QTabWidget* self, QEnterEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_EnterEvent_IsBase(true);
        vqtabwidget->enterEvent(event);
    } else {
        vqtabwidget->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnEnterEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_EnterEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_LeaveEvent(QTabWidget* self, QEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->leaveEvent(event);
    } else {
        vqtabwidget->leaveEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseLeaveEvent(QTabWidget* self, QEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_LeaveEvent_IsBase(true);
        vqtabwidget->leaveEvent(event);
    } else {
        vqtabwidget->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnLeaveEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_MoveEvent(QTabWidget* self, QMoveEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->moveEvent(event);
    } else {
        vqtabwidget->moveEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseMoveEvent(QTabWidget* self, QMoveEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_MoveEvent_IsBase(true);
        vqtabwidget->moveEvent(event);
    } else {
        vqtabwidget->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMoveEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_MoveEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_CloseEvent(QTabWidget* self, QCloseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->closeEvent(event);
    } else {
        vqtabwidget->closeEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseCloseEvent(QTabWidget* self, QCloseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_CloseEvent_IsBase(true);
        vqtabwidget->closeEvent(event);
    } else {
        vqtabwidget->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnCloseEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_CloseEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_ContextMenuEvent(QTabWidget* self, QContextMenuEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->contextMenuEvent(event);
    } else {
        vqtabwidget->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseContextMenuEvent(QTabWidget* self, QContextMenuEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_ContextMenuEvent_IsBase(true);
        vqtabwidget->contextMenuEvent(event);
    } else {
        vqtabwidget->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnContextMenuEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_TabletEvent(QTabWidget* self, QTabletEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->tabletEvent(event);
    } else {
        vqtabwidget->tabletEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseTabletEvent(QTabWidget* self, QTabletEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_TabletEvent_IsBase(true);
        vqtabwidget->tabletEvent(event);
    } else {
        vqtabwidget->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnTabletEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_TabletEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_ActionEvent(QTabWidget* self, QActionEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->actionEvent(event);
    } else {
        vqtabwidget->actionEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseActionEvent(QTabWidget* self, QActionEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_ActionEvent_IsBase(true);
        vqtabwidget->actionEvent(event);
    } else {
        vqtabwidget->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnActionEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_ActionEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_DragEnterEvent(QTabWidget* self, QDragEnterEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->dragEnterEvent(event);
    } else {
        vqtabwidget->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseDragEnterEvent(QTabWidget* self, QDragEnterEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_DragEnterEvent_IsBase(true);
        vqtabwidget->dragEnterEvent(event);
    } else {
        vqtabwidget->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDragEnterEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_DragMoveEvent(QTabWidget* self, QDragMoveEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->dragMoveEvent(event);
    } else {
        vqtabwidget->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseDragMoveEvent(QTabWidget* self, QDragMoveEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_DragMoveEvent_IsBase(true);
        vqtabwidget->dragMoveEvent(event);
    } else {
        vqtabwidget->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDragMoveEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_DragLeaveEvent(QTabWidget* self, QDragLeaveEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->dragLeaveEvent(event);
    } else {
        vqtabwidget->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseDragLeaveEvent(QTabWidget* self, QDragLeaveEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_DragLeaveEvent_IsBase(true);
        vqtabwidget->dragLeaveEvent(event);
    } else {
        vqtabwidget->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDragLeaveEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_DropEvent(QTabWidget* self, QDropEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->dropEvent(event);
    } else {
        vqtabwidget->dropEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseDropEvent(QTabWidget* self, QDropEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_DropEvent_IsBase(true);
        vqtabwidget->dropEvent(event);
    } else {
        vqtabwidget->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDropEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_DropEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_HideEvent(QTabWidget* self, QHideEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->hideEvent(event);
    } else {
        vqtabwidget->hideEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseHideEvent(QTabWidget* self, QHideEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_HideEvent_IsBase(true);
        vqtabwidget->hideEvent(event);
    } else {
        vqtabwidget->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnHideEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_HideEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabWidget_NativeEvent(QTabWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        return vqtabwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtabwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTabWidget_QBaseNativeEvent(QTabWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_NativeEvent_IsBase(true);
        return vqtabwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtabwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnNativeEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_NativeEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTabWidget_Metric(const QTabWidget* self, int param1) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtabwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTabWidget_QBaseMetric(const QTabWidget* self, int param1) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_Metric_IsBase(true);
        return vqtabwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtabwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMetric(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_Metric_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_InitPainter(const QTabWidget* self, QPainter* painter) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->initPainter(painter);
    } else {
        vqtabwidget->initPainter(painter);
    }
}

// Base class handler implementation
void QTabWidget_QBaseInitPainter(const QTabWidget* self, QPainter* painter) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_InitPainter_IsBase(true);
        vqtabwidget->initPainter(painter);
    } else {
        vqtabwidget->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnInitPainter(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_InitPainter_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTabWidget_Redirected(const QTabWidget* self, QPoint* offset) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->redirected(offset);
    } else {
        return vqtabwidget->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTabWidget_QBaseRedirected(const QTabWidget* self, QPoint* offset) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_Redirected_IsBase(true);
        return vqtabwidget->redirected(offset);
    } else {
        return vqtabwidget->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnRedirected(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_Redirected_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTabWidget_SharedPainter(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->sharedPainter();
    } else {
        return vqtabwidget->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTabWidget_QBaseSharedPainter(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_SharedPainter_IsBase(true);
        return vqtabwidget->sharedPainter();
    } else {
        return vqtabwidget->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSharedPainter(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_SharedPainter_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_InputMethodEvent(QTabWidget* self, QInputMethodEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->inputMethodEvent(param1);
    } else {
        vqtabwidget->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QTabWidget_QBaseInputMethodEvent(QTabWidget* self, QInputMethodEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_InputMethodEvent_IsBase(true);
        vqtabwidget->inputMethodEvent(param1);
    } else {
        vqtabwidget->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnInputMethodEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTabWidget_InputMethodQuery(const QTabWidget* self, int param1) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return new QVariant(vqtabwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QTabWidget_QBaseInputMethodQuery(const QTabWidget* self, int param1) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqtabwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnInputMethodQuery(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabWidget_FocusNextPrevChild(QTabWidget* self, bool next) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        return vqtabwidget->focusNextPrevChild(next);
    } else {
        return vqtabwidget->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTabWidget_QBaseFocusNextPrevChild(QTabWidget* self, bool next) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_FocusNextPrevChild_IsBase(true);
        return vqtabwidget->focusNextPrevChild(next);
    } else {
        return vqtabwidget->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnFocusNextPrevChild(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabWidget_EventFilter(QTabWidget* self, QObject* watched, QEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        return vqtabwidget->eventFilter(watched, event);
    } else {
        return vqtabwidget->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTabWidget_QBaseEventFilter(QTabWidget* self, QObject* watched, QEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_EventFilter_IsBase(true);
        return vqtabwidget->eventFilter(watched, event);
    } else {
        return vqtabwidget->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnEventFilter(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_EventFilter_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_TimerEvent(QTabWidget* self, QTimerEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->timerEvent(event);
    } else {
        vqtabwidget->timerEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseTimerEvent(QTabWidget* self, QTimerEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_TimerEvent_IsBase(true);
        vqtabwidget->timerEvent(event);
    } else {
        vqtabwidget->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnTimerEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_TimerEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_ChildEvent(QTabWidget* self, QChildEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->childEvent(event);
    } else {
        vqtabwidget->childEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseChildEvent(QTabWidget* self, QChildEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_ChildEvent_IsBase(true);
        vqtabwidget->childEvent(event);
    } else {
        vqtabwidget->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnChildEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_ChildEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_CustomEvent(QTabWidget* self, QEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->customEvent(event);
    } else {
        vqtabwidget->customEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseCustomEvent(QTabWidget* self, QEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_CustomEvent_IsBase(true);
        vqtabwidget->customEvent(event);
    } else {
        vqtabwidget->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnCustomEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_CustomEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_ConnectNotify(QTabWidget* self, QMetaMethod* signal) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->connectNotify(*signal);
    } else {
        vqtabwidget->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTabWidget_QBaseConnectNotify(QTabWidget* self, QMetaMethod* signal) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_ConnectNotify_IsBase(true);
        vqtabwidget->connectNotify(*signal);
    } else {
        vqtabwidget->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnConnectNotify(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_DisconnectNotify(QTabWidget* self, QMetaMethod* signal) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->disconnectNotify(*signal);
    } else {
        vqtabwidget->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTabWidget_QBaseDisconnectNotify(QTabWidget* self, QMetaMethod* signal) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_DisconnectNotify_IsBase(true);
        vqtabwidget->disconnectNotify(*signal);
    } else {
        vqtabwidget->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDisconnectNotify(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_SetTabBar(QTabWidget* self, QTabBar* tabBar) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setTabBar(tabBar);
    } else {
        vqtabwidget->setTabBar(tabBar);
    }
}

// Base class handler implementation
void QTabWidget_QBaseSetTabBar(QTabWidget* self, QTabBar* tabBar) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_SetTabBar_IsBase(true);
        vqtabwidget->setTabBar(tabBar);
    } else {
        vqtabwidget->setTabBar(tabBar);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSetTabBar(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_SetTabBar_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_SetTabBar_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_UpdateMicroFocus(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->updateMicroFocus();
    } else {
        vqtabwidget->updateMicroFocus();
    }
}

// Base class handler implementation
void QTabWidget_QBaseUpdateMicroFocus(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_UpdateMicroFocus_IsBase(true);
        vqtabwidget->updateMicroFocus();
    } else {
        vqtabwidget->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnUpdateMicroFocus(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_Create(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->create();
    } else {
        vqtabwidget->create();
    }
}

// Base class handler implementation
void QTabWidget_QBaseCreate(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_Create_IsBase(true);
        vqtabwidget->create();
    } else {
        vqtabwidget->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnCreate(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_Create_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_Destroy(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->destroy();
    } else {
        vqtabwidget->destroy();
    }
}

// Base class handler implementation
void QTabWidget_QBaseDestroy(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_Destroy_IsBase(true);
        vqtabwidget->destroy();
    } else {
        vqtabwidget->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDestroy(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_Destroy_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabWidget_FocusNextChild(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        return vqtabwidget->focusNextChild();
    } else {
        return vqtabwidget->focusNextChild();
    }
}

// Base class handler implementation
bool QTabWidget_QBaseFocusNextChild(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_FocusNextChild_IsBase(true);
        return vqtabwidget->focusNextChild();
    } else {
        return vqtabwidget->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnFocusNextChild(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabWidget_FocusPreviousChild(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        return vqtabwidget->focusPreviousChild();
    } else {
        return vqtabwidget->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTabWidget_QBaseFocusPreviousChild(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_FocusPreviousChild_IsBase(true);
        return vqtabwidget->focusPreviousChild();
    } else {
        return vqtabwidget->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnFocusPreviousChild(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->setQTabWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTabWidget_Sender(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->sender();
    } else {
        return vqtabwidget->sender();
    }
}

// Base class handler implementation
QObject* QTabWidget_QBaseSender(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_Sender_IsBase(true);
        return vqtabwidget->sender();
    } else {
        return vqtabwidget->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSender(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_Sender_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTabWidget_SenderSignalIndex(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->senderSignalIndex();
    } else {
        return vqtabwidget->senderSignalIndex();
    }
}

// Base class handler implementation
int QTabWidget_QBaseSenderSignalIndex(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_SenderSignalIndex_IsBase(true);
        return vqtabwidget->senderSignalIndex();
    } else {
        return vqtabwidget->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSenderSignalIndex(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTabWidget_Receivers(const QTabWidget* self, const char* signal) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->receivers(signal);
    } else {
        return vqtabwidget->receivers(signal);
    }
}

// Base class handler implementation
int QTabWidget_QBaseReceivers(const QTabWidget* self, const char* signal) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_Receivers_IsBase(true);
        return vqtabwidget->receivers(signal);
    } else {
        return vqtabwidget->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnReceivers(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_Receivers_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabWidget_IsSignalConnected(const QTabWidget* self, QMetaMethod* signal) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->isSignalConnected(*signal);
    } else {
        return vqtabwidget->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTabWidget_QBaseIsSignalConnected(const QTabWidget* self, QMetaMethod* signal) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_IsSignalConnected_IsBase(true);
        return vqtabwidget->isSignalConnected(*signal);
    } else {
        return vqtabwidget->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnIsSignalConnected(const QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->setQTabWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_IsSignalConnected_Callback>(slot));
    }
}

void QTabWidget_Delete(QTabWidget* self) {
    delete self;
}
