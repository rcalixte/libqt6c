#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QByteArray>
#include <QCalendar>
#include <QCalendarWidget>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDate>
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
#include <QMap>
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
#include <QTabletEvent>
#include <QTextCharFormat>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qcalendarwidget.h>
#include "libqcalendarwidget.hpp"
#include "libqcalendarwidget.hxx"

QCalendarWidget* QCalendarWidget_new(QWidget* parent) {
    return new VirtualQCalendarWidget(parent);
}

QCalendarWidget* QCalendarWidget_new2() {
    return new VirtualQCalendarWidget();
}

QMetaObject* QCalendarWidget_MetaObject(const QCalendarWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCalendarWidget_Metacast(QCalendarWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCalendarWidget_Metacall(QCalendarWidget* self, int param1, int param2, void** param3) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QCalendarWidget_OnMetacall(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_Metacall_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QCalendarWidget_QBaseMetacall(QCalendarWidget* self, int param1, int param2, void** param3) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_Metacall_IsBase(true);
        return vqcalendarwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QCalendarWidget_Tr(const char* s) {
    QString _ret = QCalendarWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QDate* QCalendarWidget_SelectedDate(const QCalendarWidget* self) {
    return new QDate(self->selectedDate());
}

int QCalendarWidget_YearShown(const QCalendarWidget* self) {
    return self->yearShown();
}

int QCalendarWidget_MonthShown(const QCalendarWidget* self) {
    return self->monthShown();
}

QDate* QCalendarWidget_MinimumDate(const QCalendarWidget* self) {
    return new QDate(self->minimumDate());
}

void QCalendarWidget_SetMinimumDate(QCalendarWidget* self, QDate* date) {
    self->setMinimumDate(*date);
}

QDate* QCalendarWidget_MaximumDate(const QCalendarWidget* self) {
    return new QDate(self->maximumDate());
}

void QCalendarWidget_SetMaximumDate(QCalendarWidget* self, QDate* date) {
    self->setMaximumDate(*date);
}

int QCalendarWidget_FirstDayOfWeek(const QCalendarWidget* self) {
    return static_cast<int>(self->firstDayOfWeek());
}

void QCalendarWidget_SetFirstDayOfWeek(QCalendarWidget* self, int dayOfWeek) {
    self->setFirstDayOfWeek(static_cast<Qt::DayOfWeek>(dayOfWeek));
}

bool QCalendarWidget_IsNavigationBarVisible(const QCalendarWidget* self) {
    return self->isNavigationBarVisible();
}

bool QCalendarWidget_IsGridVisible(const QCalendarWidget* self) {
    return self->isGridVisible();
}

QCalendar* QCalendarWidget_Calendar(const QCalendarWidget* self) {
    return new QCalendar(self->calendar());
}

void QCalendarWidget_SetCalendar(QCalendarWidget* self, QCalendar* calendar) {
    self->setCalendar(*calendar);
}

int QCalendarWidget_SelectionMode(const QCalendarWidget* self) {
    return static_cast<int>(self->selectionMode());
}

void QCalendarWidget_SetSelectionMode(QCalendarWidget* self, int mode) {
    self->setSelectionMode(static_cast<QCalendarWidget::SelectionMode>(mode));
}

int QCalendarWidget_HorizontalHeaderFormat(const QCalendarWidget* self) {
    return static_cast<int>(self->horizontalHeaderFormat());
}

void QCalendarWidget_SetHorizontalHeaderFormat(QCalendarWidget* self, int format) {
    self->setHorizontalHeaderFormat(static_cast<QCalendarWidget::HorizontalHeaderFormat>(format));
}

int QCalendarWidget_VerticalHeaderFormat(const QCalendarWidget* self) {
    return static_cast<int>(self->verticalHeaderFormat());
}

void QCalendarWidget_SetVerticalHeaderFormat(QCalendarWidget* self, int format) {
    self->setVerticalHeaderFormat(static_cast<QCalendarWidget::VerticalHeaderFormat>(format));
}

QTextCharFormat* QCalendarWidget_HeaderTextFormat(const QCalendarWidget* self) {
    return new QTextCharFormat(self->headerTextFormat());
}

void QCalendarWidget_SetHeaderTextFormat(QCalendarWidget* self, QTextCharFormat* format) {
    self->setHeaderTextFormat(*format);
}

QTextCharFormat* QCalendarWidget_WeekdayTextFormat(const QCalendarWidget* self, int dayOfWeek) {
    return new QTextCharFormat(self->weekdayTextFormat(static_cast<Qt::DayOfWeek>(dayOfWeek)));
}

void QCalendarWidget_SetWeekdayTextFormat(QCalendarWidget* self, int dayOfWeek, QTextCharFormat* format) {
    self->setWeekdayTextFormat(static_cast<Qt::DayOfWeek>(dayOfWeek), *format);
}

libqt_map /* of QDate* to QTextCharFormat* */ QCalendarWidget_DateTextFormat(const QCalendarWidget* self) {
    QMap<QDate, QTextCharFormat> _ret = self->dateTextFormat();
    // Convert QMap<> from C++ memory to manually-managed C memory
    QDate** _karr = static_cast<QDate**>(malloc(sizeof(QDate*) * _ret.size()));
    QTextCharFormat** _varr = static_cast<QTextCharFormat**>(malloc(sizeof(QTextCharFormat*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = new QDate(_itr->first);
        _varr[_ctr] = new QTextCharFormat(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

QTextCharFormat* QCalendarWidget_DateTextFormatWithDate(const QCalendarWidget* self, QDate* date) {
    return new QTextCharFormat(self->dateTextFormat(*date));
}

void QCalendarWidget_SetDateTextFormat(QCalendarWidget* self, QDate* date, QTextCharFormat* format) {
    self->setDateTextFormat(*date, *format);
}

bool QCalendarWidget_IsDateEditEnabled(const QCalendarWidget* self) {
    return self->isDateEditEnabled();
}

void QCalendarWidget_SetDateEditEnabled(QCalendarWidget* self, bool enable) {
    self->setDateEditEnabled(enable);
}

int QCalendarWidget_DateEditAcceptDelay(const QCalendarWidget* self) {
    return self->dateEditAcceptDelay();
}

void QCalendarWidget_SetDateEditAcceptDelay(QCalendarWidget* self, int delay) {
    self->setDateEditAcceptDelay(static_cast<int>(delay));
}

void QCalendarWidget_SetSelectedDate(QCalendarWidget* self, QDate* date) {
    self->setSelectedDate(*date);
}

void QCalendarWidget_SetDateRange(QCalendarWidget* self, QDate* min, QDate* max) {
    self->setDateRange(*min, *max);
}

void QCalendarWidget_SetCurrentPage(QCalendarWidget* self, int year, int month) {
    self->setCurrentPage(static_cast<int>(year), static_cast<int>(month));
}

void QCalendarWidget_SetGridVisible(QCalendarWidget* self, bool show) {
    self->setGridVisible(show);
}

void QCalendarWidget_SetNavigationBarVisible(QCalendarWidget* self, bool visible) {
    self->setNavigationBarVisible(visible);
}

void QCalendarWidget_ShowNextMonth(QCalendarWidget* self) {
    self->showNextMonth();
}

void QCalendarWidget_ShowPreviousMonth(QCalendarWidget* self) {
    self->showPreviousMonth();
}

void QCalendarWidget_ShowNextYear(QCalendarWidget* self) {
    self->showNextYear();
}

void QCalendarWidget_ShowPreviousYear(QCalendarWidget* self) {
    self->showPreviousYear();
}

void QCalendarWidget_ShowSelectedDate(QCalendarWidget* self) {
    self->showSelectedDate();
}

void QCalendarWidget_ShowToday(QCalendarWidget* self) {
    self->showToday();
}

void QCalendarWidget_SelectionChanged(QCalendarWidget* self) {
    self->selectionChanged();
}

void QCalendarWidget_Connect_SelectionChanged(QCalendarWidget* self, intptr_t slot) {
    void (*slotFunc)(QCalendarWidget*) = reinterpret_cast<void (*)(QCalendarWidget*)>(slot);
    QCalendarWidget::connect(self, &QCalendarWidget::selectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QCalendarWidget_Clicked(QCalendarWidget* self, QDate* date) {
    self->clicked(*date);
}

void QCalendarWidget_Connect_Clicked(QCalendarWidget* self, intptr_t slot) {
    void (*slotFunc)(QCalendarWidget*, QDate*) = reinterpret_cast<void (*)(QCalendarWidget*, QDate*)>(slot);
    QCalendarWidget::connect(self, &QCalendarWidget::clicked, [self, slotFunc](QDate date) {
        QDate* sigval1 = new QDate(date);
        slotFunc(self, sigval1);
    });
}

void QCalendarWidget_Activated(QCalendarWidget* self, QDate* date) {
    self->activated(*date);
}

void QCalendarWidget_Connect_Activated(QCalendarWidget* self, intptr_t slot) {
    void (*slotFunc)(QCalendarWidget*, QDate*) = reinterpret_cast<void (*)(QCalendarWidget*, QDate*)>(slot);
    QCalendarWidget::connect(self, &QCalendarWidget::activated, [self, slotFunc](QDate date) {
        QDate* sigval1 = new QDate(date);
        slotFunc(self, sigval1);
    });
}

void QCalendarWidget_CurrentPageChanged(QCalendarWidget* self, int year, int month) {
    self->currentPageChanged(static_cast<int>(year), static_cast<int>(month));
}

void QCalendarWidget_Connect_CurrentPageChanged(QCalendarWidget* self, intptr_t slot) {
    void (*slotFunc)(QCalendarWidget*, int, int) = reinterpret_cast<void (*)(QCalendarWidget*, int, int)>(slot);
    QCalendarWidget::connect(self, &QCalendarWidget::currentPageChanged, [self, slotFunc](int year, int month) {
        int sigval1 = year;
        int sigval2 = month;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QCalendarWidget_Tr2(const char* s, const char* c) {
    QString _ret = QCalendarWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QCalendarWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QCalendarWidget::tr(s, c, static_cast<int>(n));
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
QSize* QCalendarWidget_SizeHint(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return new QSize(vqcalendarwidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QCalendarWidget_QBaseSizeHint(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_SizeHint_IsBase(true);
        return new QSize(vqcalendarwidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnSizeHint(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_SizeHint_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QCalendarWidget_MinimumSizeHint(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return new QSize(vqcalendarwidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QCalendarWidget_QBaseMinimumSizeHint(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqcalendarwidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMinimumSizeHint(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCalendarWidget_Event(QCalendarWidget* self, QEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        return vqcalendarwidget->event(event);
    } else {
        return vqcalendarwidget->event(event);
    }
}

// Base class handler implementation
bool QCalendarWidget_QBaseEvent(QCalendarWidget* self, QEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_Event_IsBase(true);
        return vqcalendarwidget->event(event);
    } else {
        return vqcalendarwidget->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_Event_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCalendarWidget_EventFilter(QCalendarWidget* self, QObject* watched, QEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        return vqcalendarwidget->eventFilter(watched, event);
    } else {
        return vqcalendarwidget->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QCalendarWidget_QBaseEventFilter(QCalendarWidget* self, QObject* watched, QEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_EventFilter_IsBase(true);
        return vqcalendarwidget->eventFilter(watched, event);
    } else {
        return vqcalendarwidget->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnEventFilter(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_EventFilter_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_MousePressEvent(QCalendarWidget* self, QMouseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->mousePressEvent(event);
    } else {
        vqcalendarwidget->mousePressEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseMousePressEvent(QCalendarWidget* self, QMouseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_MousePressEvent_IsBase(true);
        vqcalendarwidget->mousePressEvent(event);
    } else {
        vqcalendarwidget->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMousePressEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_ResizeEvent(QCalendarWidget* self, QResizeEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->resizeEvent(event);
    } else {
        vqcalendarwidget->resizeEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseResizeEvent(QCalendarWidget* self, QResizeEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_ResizeEvent_IsBase(true);
        vqcalendarwidget->resizeEvent(event);
    } else {
        vqcalendarwidget->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnResizeEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_KeyPressEvent(QCalendarWidget* self, QKeyEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->keyPressEvent(event);
    } else {
        vqcalendarwidget->keyPressEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseKeyPressEvent(QCalendarWidget* self, QKeyEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_KeyPressEvent_IsBase(true);
        vqcalendarwidget->keyPressEvent(event);
    } else {
        vqcalendarwidget->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnKeyPressEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_PaintCell(const QCalendarWidget* self, QPainter* painter, QRect* rect, QDate* date) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->paintCell(painter, *rect, *date);
    } else {
        vqcalendarwidget->paintCell(painter, *rect, *date);
    }
}

// Base class handler implementation
void QCalendarWidget_QBasePaintCell(const QCalendarWidget* self, QPainter* painter, QRect* rect, QDate* date) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_PaintCell_IsBase(true);
        vqcalendarwidget->paintCell(painter, *rect, *date);
    } else {
        vqcalendarwidget->paintCell(painter, *rect, *date);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnPaintCell(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_PaintCell_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_PaintCell_Callback>(slot));
    }
}

// Derived class handler implementation
int QCalendarWidget_DevType(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->devType();
    } else {
        return vqcalendarwidget->devType();
    }
}

// Base class handler implementation
int QCalendarWidget_QBaseDevType(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_DevType_IsBase(true);
        return vqcalendarwidget->devType();
    } else {
        return vqcalendarwidget->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnDevType(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_DevType_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_SetVisible(QCalendarWidget* self, bool visible) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setVisible(visible);
    } else {
        vqcalendarwidget->setVisible(visible);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseSetVisible(QCalendarWidget* self, bool visible) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_SetVisible_IsBase(true);
        vqcalendarwidget->setVisible(visible);
    } else {
        vqcalendarwidget->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnSetVisible(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_SetVisible_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QCalendarWidget_HeightForWidth(const QCalendarWidget* self, int param1) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return vqcalendarwidget->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QCalendarWidget_QBaseHeightForWidth(const QCalendarWidget* self, int param1) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_HeightForWidth_IsBase(true);
        return vqcalendarwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return vqcalendarwidget->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnHeightForWidth(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCalendarWidget_HasHeightForWidth(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->hasHeightForWidth();
    } else {
        return vqcalendarwidget->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QCalendarWidget_QBaseHasHeightForWidth(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_HasHeightForWidth_IsBase(true);
        return vqcalendarwidget->hasHeightForWidth();
    } else {
        return vqcalendarwidget->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnHasHeightForWidth(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QCalendarWidget_PaintEngine(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->paintEngine();
    } else {
        return vqcalendarwidget->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QCalendarWidget_QBasePaintEngine(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_PaintEngine_IsBase(true);
        return vqcalendarwidget->paintEngine();
    } else {
        return vqcalendarwidget->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnPaintEngine(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_PaintEngine_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_MouseReleaseEvent(QCalendarWidget* self, QMouseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->mouseReleaseEvent(event);
    } else {
        vqcalendarwidget->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseMouseReleaseEvent(QCalendarWidget* self, QMouseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_MouseReleaseEvent_IsBase(true);
        vqcalendarwidget->mouseReleaseEvent(event);
    } else {
        vqcalendarwidget->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMouseReleaseEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_MouseDoubleClickEvent(QCalendarWidget* self, QMouseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->mouseDoubleClickEvent(event);
    } else {
        vqcalendarwidget->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseMouseDoubleClickEvent(QCalendarWidget* self, QMouseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_MouseDoubleClickEvent_IsBase(true);
        vqcalendarwidget->mouseDoubleClickEvent(event);
    } else {
        vqcalendarwidget->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMouseDoubleClickEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_MouseMoveEvent(QCalendarWidget* self, QMouseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->mouseMoveEvent(event);
    } else {
        vqcalendarwidget->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseMouseMoveEvent(QCalendarWidget* self, QMouseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_MouseMoveEvent_IsBase(true);
        vqcalendarwidget->mouseMoveEvent(event);
    } else {
        vqcalendarwidget->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMouseMoveEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_WheelEvent(QCalendarWidget* self, QWheelEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->wheelEvent(event);
    } else {
        vqcalendarwidget->wheelEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseWheelEvent(QCalendarWidget* self, QWheelEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_WheelEvent_IsBase(true);
        vqcalendarwidget->wheelEvent(event);
    } else {
        vqcalendarwidget->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnWheelEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_WheelEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_KeyReleaseEvent(QCalendarWidget* self, QKeyEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->keyReleaseEvent(event);
    } else {
        vqcalendarwidget->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseKeyReleaseEvent(QCalendarWidget* self, QKeyEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_KeyReleaseEvent_IsBase(true);
        vqcalendarwidget->keyReleaseEvent(event);
    } else {
        vqcalendarwidget->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnKeyReleaseEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_FocusInEvent(QCalendarWidget* self, QFocusEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->focusInEvent(event);
    } else {
        vqcalendarwidget->focusInEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseFocusInEvent(QCalendarWidget* self, QFocusEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_FocusInEvent_IsBase(true);
        vqcalendarwidget->focusInEvent(event);
    } else {
        vqcalendarwidget->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnFocusInEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_FocusOutEvent(QCalendarWidget* self, QFocusEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->focusOutEvent(event);
    } else {
        vqcalendarwidget->focusOutEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseFocusOutEvent(QCalendarWidget* self, QFocusEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_FocusOutEvent_IsBase(true);
        vqcalendarwidget->focusOutEvent(event);
    } else {
        vqcalendarwidget->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnFocusOutEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_EnterEvent(QCalendarWidget* self, QEnterEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->enterEvent(event);
    } else {
        vqcalendarwidget->enterEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseEnterEvent(QCalendarWidget* self, QEnterEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_EnterEvent_IsBase(true);
        vqcalendarwidget->enterEvent(event);
    } else {
        vqcalendarwidget->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnEnterEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_EnterEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_LeaveEvent(QCalendarWidget* self, QEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->leaveEvent(event);
    } else {
        vqcalendarwidget->leaveEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseLeaveEvent(QCalendarWidget* self, QEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_LeaveEvent_IsBase(true);
        vqcalendarwidget->leaveEvent(event);
    } else {
        vqcalendarwidget->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnLeaveEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_PaintEvent(QCalendarWidget* self, QPaintEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->paintEvent(event);
    } else {
        vqcalendarwidget->paintEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBasePaintEvent(QCalendarWidget* self, QPaintEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_PaintEvent_IsBase(true);
        vqcalendarwidget->paintEvent(event);
    } else {
        vqcalendarwidget->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnPaintEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_PaintEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_MoveEvent(QCalendarWidget* self, QMoveEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->moveEvent(event);
    } else {
        vqcalendarwidget->moveEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseMoveEvent(QCalendarWidget* self, QMoveEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_MoveEvent_IsBase(true);
        vqcalendarwidget->moveEvent(event);
    } else {
        vqcalendarwidget->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMoveEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_MoveEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_CloseEvent(QCalendarWidget* self, QCloseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->closeEvent(event);
    } else {
        vqcalendarwidget->closeEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseCloseEvent(QCalendarWidget* self, QCloseEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_CloseEvent_IsBase(true);
        vqcalendarwidget->closeEvent(event);
    } else {
        vqcalendarwidget->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnCloseEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_CloseEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_ContextMenuEvent(QCalendarWidget* self, QContextMenuEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->contextMenuEvent(event);
    } else {
        vqcalendarwidget->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseContextMenuEvent(QCalendarWidget* self, QContextMenuEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_ContextMenuEvent_IsBase(true);
        vqcalendarwidget->contextMenuEvent(event);
    } else {
        vqcalendarwidget->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnContextMenuEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_TabletEvent(QCalendarWidget* self, QTabletEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->tabletEvent(event);
    } else {
        vqcalendarwidget->tabletEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseTabletEvent(QCalendarWidget* self, QTabletEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_TabletEvent_IsBase(true);
        vqcalendarwidget->tabletEvent(event);
    } else {
        vqcalendarwidget->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnTabletEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_TabletEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_ActionEvent(QCalendarWidget* self, QActionEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->actionEvent(event);
    } else {
        vqcalendarwidget->actionEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseActionEvent(QCalendarWidget* self, QActionEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_ActionEvent_IsBase(true);
        vqcalendarwidget->actionEvent(event);
    } else {
        vqcalendarwidget->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnActionEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_ActionEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_DragEnterEvent(QCalendarWidget* self, QDragEnterEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->dragEnterEvent(event);
    } else {
        vqcalendarwidget->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseDragEnterEvent(QCalendarWidget* self, QDragEnterEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_DragEnterEvent_IsBase(true);
        vqcalendarwidget->dragEnterEvent(event);
    } else {
        vqcalendarwidget->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnDragEnterEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_DragMoveEvent(QCalendarWidget* self, QDragMoveEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->dragMoveEvent(event);
    } else {
        vqcalendarwidget->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseDragMoveEvent(QCalendarWidget* self, QDragMoveEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_DragMoveEvent_IsBase(true);
        vqcalendarwidget->dragMoveEvent(event);
    } else {
        vqcalendarwidget->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnDragMoveEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_DragLeaveEvent(QCalendarWidget* self, QDragLeaveEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->dragLeaveEvent(event);
    } else {
        vqcalendarwidget->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseDragLeaveEvent(QCalendarWidget* self, QDragLeaveEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_DragLeaveEvent_IsBase(true);
        vqcalendarwidget->dragLeaveEvent(event);
    } else {
        vqcalendarwidget->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnDragLeaveEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_DropEvent(QCalendarWidget* self, QDropEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->dropEvent(event);
    } else {
        vqcalendarwidget->dropEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseDropEvent(QCalendarWidget* self, QDropEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_DropEvent_IsBase(true);
        vqcalendarwidget->dropEvent(event);
    } else {
        vqcalendarwidget->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnDropEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_DropEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_ShowEvent(QCalendarWidget* self, QShowEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->showEvent(event);
    } else {
        vqcalendarwidget->showEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseShowEvent(QCalendarWidget* self, QShowEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_ShowEvent_IsBase(true);
        vqcalendarwidget->showEvent(event);
    } else {
        vqcalendarwidget->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnShowEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_ShowEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_HideEvent(QCalendarWidget* self, QHideEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->hideEvent(event);
    } else {
        vqcalendarwidget->hideEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseHideEvent(QCalendarWidget* self, QHideEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_HideEvent_IsBase(true);
        vqcalendarwidget->hideEvent(event);
    } else {
        vqcalendarwidget->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnHideEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_HideEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCalendarWidget_NativeEvent(QCalendarWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        return vqcalendarwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqcalendarwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QCalendarWidget_QBaseNativeEvent(QCalendarWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_NativeEvent_IsBase(true);
        return vqcalendarwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqcalendarwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnNativeEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_NativeEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_ChangeEvent(QCalendarWidget* self, QEvent* param1) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->changeEvent(param1);
    } else {
        vqcalendarwidget->changeEvent(param1);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseChangeEvent(QCalendarWidget* self, QEvent* param1) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_ChangeEvent_IsBase(true);
        vqcalendarwidget->changeEvent(param1);
    } else {
        vqcalendarwidget->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnChangeEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QCalendarWidget_Metric(const QCalendarWidget* self, int param1) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqcalendarwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QCalendarWidget_QBaseMetric(const QCalendarWidget* self, int param1) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_Metric_IsBase(true);
        return vqcalendarwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqcalendarwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnMetric(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_Metric_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_InitPainter(const QCalendarWidget* self, QPainter* painter) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->initPainter(painter);
    } else {
        vqcalendarwidget->initPainter(painter);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseInitPainter(const QCalendarWidget* self, QPainter* painter) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_InitPainter_IsBase(true);
        vqcalendarwidget->initPainter(painter);
    } else {
        vqcalendarwidget->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnInitPainter(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_InitPainter_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QCalendarWidget_Redirected(const QCalendarWidget* self, QPoint* offset) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->redirected(offset);
    } else {
        return vqcalendarwidget->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QCalendarWidget_QBaseRedirected(const QCalendarWidget* self, QPoint* offset) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_Redirected_IsBase(true);
        return vqcalendarwidget->redirected(offset);
    } else {
        return vqcalendarwidget->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnRedirected(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_Redirected_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QCalendarWidget_SharedPainter(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->sharedPainter();
    } else {
        return vqcalendarwidget->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QCalendarWidget_QBaseSharedPainter(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_SharedPainter_IsBase(true);
        return vqcalendarwidget->sharedPainter();
    } else {
        return vqcalendarwidget->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnSharedPainter(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_SharedPainter_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_InputMethodEvent(QCalendarWidget* self, QInputMethodEvent* param1) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->inputMethodEvent(param1);
    } else {
        vqcalendarwidget->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseInputMethodEvent(QCalendarWidget* self, QInputMethodEvent* param1) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_InputMethodEvent_IsBase(true);
        vqcalendarwidget->inputMethodEvent(param1);
    } else {
        vqcalendarwidget->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnInputMethodEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QCalendarWidget_InputMethodQuery(const QCalendarWidget* self, int param1) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return new QVariant(vqcalendarwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QCalendarWidget_QBaseInputMethodQuery(const QCalendarWidget* self, int param1) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqcalendarwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnInputMethodQuery(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCalendarWidget_FocusNextPrevChild(QCalendarWidget* self, bool next) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        return vqcalendarwidget->focusNextPrevChild(next);
    } else {
        return vqcalendarwidget->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QCalendarWidget_QBaseFocusNextPrevChild(QCalendarWidget* self, bool next) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_FocusNextPrevChild_IsBase(true);
        return vqcalendarwidget->focusNextPrevChild(next);
    } else {
        return vqcalendarwidget->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnFocusNextPrevChild(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_TimerEvent(QCalendarWidget* self, QTimerEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->timerEvent(event);
    } else {
        vqcalendarwidget->timerEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseTimerEvent(QCalendarWidget* self, QTimerEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_TimerEvent_IsBase(true);
        vqcalendarwidget->timerEvent(event);
    } else {
        vqcalendarwidget->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnTimerEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_TimerEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_ChildEvent(QCalendarWidget* self, QChildEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->childEvent(event);
    } else {
        vqcalendarwidget->childEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseChildEvent(QCalendarWidget* self, QChildEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_ChildEvent_IsBase(true);
        vqcalendarwidget->childEvent(event);
    } else {
        vqcalendarwidget->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnChildEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_ChildEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_CustomEvent(QCalendarWidget* self, QEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->customEvent(event);
    } else {
        vqcalendarwidget->customEvent(event);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseCustomEvent(QCalendarWidget* self, QEvent* event) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_CustomEvent_IsBase(true);
        vqcalendarwidget->customEvent(event);
    } else {
        vqcalendarwidget->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnCustomEvent(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_CustomEvent_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_ConnectNotify(QCalendarWidget* self, QMetaMethod* signal) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->connectNotify(*signal);
    } else {
        vqcalendarwidget->connectNotify(*signal);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseConnectNotify(QCalendarWidget* self, QMetaMethod* signal) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_ConnectNotify_IsBase(true);
        vqcalendarwidget->connectNotify(*signal);
    } else {
        vqcalendarwidget->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnConnectNotify(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_DisconnectNotify(QCalendarWidget* self, QMetaMethod* signal) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->disconnectNotify(*signal);
    } else {
        vqcalendarwidget->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseDisconnectNotify(QCalendarWidget* self, QMetaMethod* signal) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_DisconnectNotify_IsBase(true);
        vqcalendarwidget->disconnectNotify(*signal);
    } else {
        vqcalendarwidget->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnDisconnectNotify(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_UpdateCell(QCalendarWidget* self, QDate* date) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->updateCell(*date);
    } else {
        vqcalendarwidget->updateCell(*date);
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseUpdateCell(QCalendarWidget* self, QDate* date) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_UpdateCell_IsBase(true);
        vqcalendarwidget->updateCell(*date);
    } else {
        vqcalendarwidget->updateCell(*date);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnUpdateCell(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_UpdateCell_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_UpdateCell_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_UpdateCells(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->updateCells();
    } else {
        vqcalendarwidget->updateCells();
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseUpdateCells(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_UpdateCells_IsBase(true);
        vqcalendarwidget->updateCells();
    } else {
        vqcalendarwidget->updateCells();
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnUpdateCells(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_UpdateCells_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_UpdateCells_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_UpdateMicroFocus(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->updateMicroFocus();
    } else {
        vqcalendarwidget->updateMicroFocus();
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseUpdateMicroFocus(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_UpdateMicroFocus_IsBase(true);
        vqcalendarwidget->updateMicroFocus();
    } else {
        vqcalendarwidget->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnUpdateMicroFocus(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_Create(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->create();
    } else {
        vqcalendarwidget->create();
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseCreate(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_Create_IsBase(true);
        vqcalendarwidget->create();
    } else {
        vqcalendarwidget->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnCreate(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_Create_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QCalendarWidget_Destroy(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->destroy();
    } else {
        vqcalendarwidget->destroy();
    }
}

// Base class handler implementation
void QCalendarWidget_QBaseDestroy(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_Destroy_IsBase(true);
        vqcalendarwidget->destroy();
    } else {
        vqcalendarwidget->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnDestroy(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_Destroy_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCalendarWidget_FocusNextChild(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        return vqcalendarwidget->focusNextChild();
    } else {
        return vqcalendarwidget->focusNextChild();
    }
}

// Base class handler implementation
bool QCalendarWidget_QBaseFocusNextChild(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_FocusNextChild_IsBase(true);
        return vqcalendarwidget->focusNextChild();
    } else {
        return vqcalendarwidget->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnFocusNextChild(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCalendarWidget_FocusPreviousChild(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        return vqcalendarwidget->focusPreviousChild();
    } else {
        return vqcalendarwidget->focusPreviousChild();
    }
}

// Base class handler implementation
bool QCalendarWidget_QBaseFocusPreviousChild(QCalendarWidget* self) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_FocusPreviousChild_IsBase(true);
        return vqcalendarwidget->focusPreviousChild();
    } else {
        return vqcalendarwidget->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnFocusPreviousChild(QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = dynamic_cast<VirtualQCalendarWidget*>(self)) {
        vqcalendarwidget->setQCalendarWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QCalendarWidget_Sender(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->sender();
    } else {
        return vqcalendarwidget->sender();
    }
}

// Base class handler implementation
QObject* QCalendarWidget_QBaseSender(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_Sender_IsBase(true);
        return vqcalendarwidget->sender();
    } else {
        return vqcalendarwidget->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnSender(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_Sender_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QCalendarWidget_SenderSignalIndex(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->senderSignalIndex();
    } else {
        return vqcalendarwidget->senderSignalIndex();
    }
}

// Base class handler implementation
int QCalendarWidget_QBaseSenderSignalIndex(const QCalendarWidget* self) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_SenderSignalIndex_IsBase(true);
        return vqcalendarwidget->senderSignalIndex();
    } else {
        return vqcalendarwidget->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnSenderSignalIndex(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QCalendarWidget_Receivers(const QCalendarWidget* self, const char* signal) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->receivers(signal);
    } else {
        return vqcalendarwidget->receivers(signal);
    }
}

// Base class handler implementation
int QCalendarWidget_QBaseReceivers(const QCalendarWidget* self, const char* signal) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_Receivers_IsBase(true);
        return vqcalendarwidget->receivers(signal);
    } else {
        return vqcalendarwidget->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnReceivers(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_Receivers_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCalendarWidget_IsSignalConnected(const QCalendarWidget* self, QMetaMethod* signal) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        return vqcalendarwidget->isSignalConnected(*signal);
    } else {
        return vqcalendarwidget->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QCalendarWidget_QBaseIsSignalConnected(const QCalendarWidget* self, QMetaMethod* signal) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_IsSignalConnected_IsBase(true);
        return vqcalendarwidget->isSignalConnected(*signal);
    } else {
        return vqcalendarwidget->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCalendarWidget_OnIsSignalConnected(const QCalendarWidget* self, intptr_t slot) {
    if (auto* vqcalendarwidget = const_cast<VirtualQCalendarWidget*>(dynamic_cast<const VirtualQCalendarWidget*>(self))) {
        vqcalendarwidget->setQCalendarWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQCalendarWidget::QCalendarWidget_IsSignalConnected_Callback>(slot));
    }
}

void QCalendarWidget_Delete(QCalendarWidget* self) {
    delete self;
}
