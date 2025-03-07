#include <QAbstractSpinBox>
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
#include <QDateEdit>
#include <QDateTime>
#include <QDateTimeEdit>
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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionSpinBox>
#include <QTabletEvent>
#include <QThread>
#include <QTime>
#include <QTimeEdit>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qdatetimeedit.h>
#include "libqdatetimeedit.hpp"
#include "libqdatetimeedit.hxx"

QDateTimeEdit* QDateTimeEdit_new(QWidget* parent) {
    return new VirtualQDateTimeEdit(parent);
}

QDateTimeEdit* QDateTimeEdit_new2() {
    return new VirtualQDateTimeEdit();
}

QDateTimeEdit* QDateTimeEdit_new3(QDateTime* dt) {
    return new VirtualQDateTimeEdit(*dt);
}

QDateTimeEdit* QDateTimeEdit_new4(QDate* d) {
    return new VirtualQDateTimeEdit(*d);
}

QDateTimeEdit* QDateTimeEdit_new5(QTime* t) {
    return new VirtualQDateTimeEdit(*t);
}

QDateTimeEdit* QDateTimeEdit_new6(QDateTime* dt, QWidget* parent) {
    return new VirtualQDateTimeEdit(*dt, parent);
}

QDateTimeEdit* QDateTimeEdit_new7(QDate* d, QWidget* parent) {
    return new VirtualQDateTimeEdit(*d, parent);
}

QDateTimeEdit* QDateTimeEdit_new8(QTime* t, QWidget* parent) {
    return new VirtualQDateTimeEdit(*t, parent);
}

QMetaObject* QDateTimeEdit_MetaObject(const QDateTimeEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDateTimeEdit_Metacast(QDateTimeEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDateTimeEdit_Metacall(QDateTimeEdit* self, int param1, int param2, void** param3) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeEdit_OnMetacall(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_Metacall_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDateTimeEdit_QBaseMetacall(QDateTimeEdit* self, int param1, int param2, void** param3) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_Metacall_IsBase(true);
        return vqdatetimeedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDateTimeEdit_Tr(const char* s) {
    QString _ret = QDateTimeEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QDateTime* QDateTimeEdit_DateTime(const QDateTimeEdit* self) {
    return new QDateTime(self->dateTime());
}

QDate* QDateTimeEdit_Date(const QDateTimeEdit* self) {
    return new QDate(self->date());
}

QTime* QDateTimeEdit_Time(const QDateTimeEdit* self) {
    return new QTime(self->time());
}

QCalendar* QDateTimeEdit_Calendar(const QDateTimeEdit* self) {
    return new QCalendar(self->calendar());
}

void QDateTimeEdit_SetCalendar(QDateTimeEdit* self, QCalendar* calendar) {
    self->setCalendar(*calendar);
}

QDateTime* QDateTimeEdit_MinimumDateTime(const QDateTimeEdit* self) {
    return new QDateTime(self->minimumDateTime());
}

void QDateTimeEdit_ClearMinimumDateTime(QDateTimeEdit* self) {
    self->clearMinimumDateTime();
}

void QDateTimeEdit_SetMinimumDateTime(QDateTimeEdit* self, QDateTime* dt) {
    self->setMinimumDateTime(*dt);
}

QDateTime* QDateTimeEdit_MaximumDateTime(const QDateTimeEdit* self) {
    return new QDateTime(self->maximumDateTime());
}

void QDateTimeEdit_ClearMaximumDateTime(QDateTimeEdit* self) {
    self->clearMaximumDateTime();
}

void QDateTimeEdit_SetMaximumDateTime(QDateTimeEdit* self, QDateTime* dt) {
    self->setMaximumDateTime(*dt);
}

void QDateTimeEdit_SetDateTimeRange(QDateTimeEdit* self, QDateTime* min, QDateTime* max) {
    self->setDateTimeRange(*min, *max);
}

QDate* QDateTimeEdit_MinimumDate(const QDateTimeEdit* self) {
    return new QDate(self->minimumDate());
}

void QDateTimeEdit_SetMinimumDate(QDateTimeEdit* self, QDate* min) {
    self->setMinimumDate(*min);
}

void QDateTimeEdit_ClearMinimumDate(QDateTimeEdit* self) {
    self->clearMinimumDate();
}

QDate* QDateTimeEdit_MaximumDate(const QDateTimeEdit* self) {
    return new QDate(self->maximumDate());
}

void QDateTimeEdit_SetMaximumDate(QDateTimeEdit* self, QDate* max) {
    self->setMaximumDate(*max);
}

void QDateTimeEdit_ClearMaximumDate(QDateTimeEdit* self) {
    self->clearMaximumDate();
}

void QDateTimeEdit_SetDateRange(QDateTimeEdit* self, QDate* min, QDate* max) {
    self->setDateRange(*min, *max);
}

QTime* QDateTimeEdit_MinimumTime(const QDateTimeEdit* self) {
    return new QTime(self->minimumTime());
}

void QDateTimeEdit_SetMinimumTime(QDateTimeEdit* self, QTime* min) {
    self->setMinimumTime(*min);
}

void QDateTimeEdit_ClearMinimumTime(QDateTimeEdit* self) {
    self->clearMinimumTime();
}

QTime* QDateTimeEdit_MaximumTime(const QDateTimeEdit* self) {
    return new QTime(self->maximumTime());
}

void QDateTimeEdit_SetMaximumTime(QDateTimeEdit* self, QTime* max) {
    self->setMaximumTime(*max);
}

void QDateTimeEdit_ClearMaximumTime(QDateTimeEdit* self) {
    self->clearMaximumTime();
}

void QDateTimeEdit_SetTimeRange(QDateTimeEdit* self, QTime* min, QTime* max) {
    self->setTimeRange(*min, *max);
}

int QDateTimeEdit_DisplayedSections(const QDateTimeEdit* self) {
    return static_cast<int>(self->displayedSections());
}

int QDateTimeEdit_CurrentSection(const QDateTimeEdit* self) {
    return static_cast<int>(self->currentSection());
}

int QDateTimeEdit_SectionAt(const QDateTimeEdit* self, int index) {
    return static_cast<int>(self->sectionAt(static_cast<int>(index)));
}

void QDateTimeEdit_SetCurrentSection(QDateTimeEdit* self, int section) {
    self->setCurrentSection(static_cast<QDateTimeEdit::Section>(section));
}

int QDateTimeEdit_CurrentSectionIndex(const QDateTimeEdit* self) {
    return self->currentSectionIndex();
}

void QDateTimeEdit_SetCurrentSectionIndex(QDateTimeEdit* self, int index) {
    self->setCurrentSectionIndex(static_cast<int>(index));
}

QCalendarWidget* QDateTimeEdit_CalendarWidget(const QDateTimeEdit* self) {
    return self->calendarWidget();
}

void QDateTimeEdit_SetCalendarWidget(QDateTimeEdit* self, QCalendarWidget* calendarWidget) {
    self->setCalendarWidget(calendarWidget);
}

int QDateTimeEdit_SectionCount(const QDateTimeEdit* self) {
    return self->sectionCount();
}

void QDateTimeEdit_SetSelectedSection(QDateTimeEdit* self, int section) {
    self->setSelectedSection(static_cast<QDateTimeEdit::Section>(section));
}

libqt_string QDateTimeEdit_SectionText(const QDateTimeEdit* self, int section) {
    QString _ret = self->sectionText(static_cast<QDateTimeEdit::Section>(section));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDateTimeEdit_DisplayFormat(const QDateTimeEdit* self) {
    QString _ret = self->displayFormat();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QDateTimeEdit_SetDisplayFormat(QDateTimeEdit* self, libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->setDisplayFormat(format_QString);
}

bool QDateTimeEdit_CalendarPopup(const QDateTimeEdit* self) {
    return self->calendarPopup();
}

void QDateTimeEdit_SetCalendarPopup(QDateTimeEdit* self, bool enable) {
    self->setCalendarPopup(enable);
}

int QDateTimeEdit_TimeSpec(const QDateTimeEdit* self) {
    return static_cast<int>(self->timeSpec());
}

void QDateTimeEdit_SetTimeSpec(QDateTimeEdit* self, int spec) {
    self->setTimeSpec(static_cast<Qt::TimeSpec>(spec));
}

void QDateTimeEdit_DateTimeChanged(QDateTimeEdit* self, QDateTime* dateTime) {
    self->dateTimeChanged(*dateTime);
}

void QDateTimeEdit_Connect_DateTimeChanged(QDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeEdit*, QDateTime*) = reinterpret_cast<void (*)(QDateTimeEdit*, QDateTime*)>(slot);
    QDateTimeEdit::connect(self, &QDateTimeEdit::dateTimeChanged, [self, slotFunc](const QDateTime& dateTime) {
        const QDateTime& dateTime_ret = dateTime;
        // Cast returned reference into pointer
        QDateTime* sigval1 = const_cast<QDateTime*>(&dateTime_ret);
        slotFunc(self, sigval1);
    });
}

void QDateTimeEdit_TimeChanged(QDateTimeEdit* self, QTime* time) {
    self->timeChanged(*time);
}

void QDateTimeEdit_Connect_TimeChanged(QDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeEdit*, QTime*) = reinterpret_cast<void (*)(QDateTimeEdit*, QTime*)>(slot);
    QDateTimeEdit::connect(self, &QDateTimeEdit::timeChanged, [self, slotFunc](QTime time) {
        QTime* sigval1 = new QTime(time);
        slotFunc(self, sigval1);
    });
}

void QDateTimeEdit_DateChanged(QDateTimeEdit* self, QDate* date) {
    self->dateChanged(*date);
}

void QDateTimeEdit_Connect_DateChanged(QDateTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeEdit*, QDate*) = reinterpret_cast<void (*)(QDateTimeEdit*, QDate*)>(slot);
    QDateTimeEdit::connect(self, &QDateTimeEdit::dateChanged, [self, slotFunc](QDate date) {
        QDate* sigval1 = new QDate(date);
        slotFunc(self, sigval1);
    });
}

void QDateTimeEdit_SetDateTime(QDateTimeEdit* self, QDateTime* dateTime) {
    self->setDateTime(*dateTime);
}

void QDateTimeEdit_SetDate(QDateTimeEdit* self, QDate* date) {
    self->setDate(*date);
}

void QDateTimeEdit_SetTime(QDateTimeEdit* self, QTime* time) {
    self->setTime(*time);
}

libqt_string QDateTimeEdit_Tr2(const char* s, const char* c) {
    QString _ret = QDateTimeEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDateTimeEdit_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDateTimeEdit::tr(s, c, static_cast<int>(n));
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
QSize* QDateTimeEdit_SizeHint(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return new QSize(vqdatetimeedit->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QDateTimeEdit_QBaseSizeHint(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_SizeHint_IsBase(true);
        return new QSize(vqdatetimeedit->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSizeHint(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_SizeHint_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_Clear(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->clear();
    } else {
        vqdatetimeedit->clear();
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseClear(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_Clear_IsBase(true);
        vqdatetimeedit->clear();
    } else {
        vqdatetimeedit->clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnClear(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_Clear_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_StepBy(QDateTimeEdit* self, int steps) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->stepBy(static_cast<int>(steps));
    } else {
        vqdatetimeedit->stepBy(static_cast<int>(steps));
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseStepBy(QDateTimeEdit* self, int steps) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_StepBy_IsBase(true);
        vqdatetimeedit->stepBy(static_cast<int>(steps));
    } else {
        vqdatetimeedit->stepBy(static_cast<int>(steps));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnStepBy(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_StepBy_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_StepBy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeEdit_Event(QDateTimeEdit* self, QEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        return vqdatetimeedit->event(event);
    } else {
        return vqdatetimeedit->event(event);
    }
}

// Base class handler implementation
bool QDateTimeEdit_QBaseEvent(QDateTimeEdit* self, QEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_Event_IsBase(true);
        return vqdatetimeedit->event(event);
    } else {
        return vqdatetimeedit->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_Event_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_KeyPressEvent(QDateTimeEdit* self, QKeyEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->keyPressEvent(event);
    } else {
        vqdatetimeedit->keyPressEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseKeyPressEvent(QDateTimeEdit* self, QKeyEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_KeyPressEvent_IsBase(true);
        vqdatetimeedit->keyPressEvent(event);
    } else {
        vqdatetimeedit->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnKeyPressEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_WheelEvent(QDateTimeEdit* self, QWheelEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->wheelEvent(event);
    } else {
        vqdatetimeedit->wheelEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseWheelEvent(QDateTimeEdit* self, QWheelEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_WheelEvent_IsBase(true);
        vqdatetimeedit->wheelEvent(event);
    } else {
        vqdatetimeedit->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnWheelEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_WheelEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_FocusInEvent(QDateTimeEdit* self, QFocusEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->focusInEvent(event);
    } else {
        vqdatetimeedit->focusInEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseFocusInEvent(QDateTimeEdit* self, QFocusEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_FocusInEvent_IsBase(true);
        vqdatetimeedit->focusInEvent(event);
    } else {
        vqdatetimeedit->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFocusInEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeEdit_FocusNextPrevChild(QDateTimeEdit* self, bool next) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        return vqdatetimeedit->focusNextPrevChild(next);
    } else {
        return vqdatetimeedit->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDateTimeEdit_QBaseFocusNextPrevChild(QDateTimeEdit* self, bool next) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_FocusNextPrevChild_IsBase(true);
        return vqdatetimeedit->focusNextPrevChild(next);
    } else {
        return vqdatetimeedit->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFocusNextPrevChild(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateTimeEdit_Validate(const QDateTimeEdit* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return static_cast<int>(vqdatetimeedit->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(vqdatetimeedit->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Base class handler implementation
int QDateTimeEdit_QBaseValidate(const QDateTimeEdit* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_Validate_IsBase(true);
        return static_cast<int>(vqdatetimeedit->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(vqdatetimeedit->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnValidate(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_Validate_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_Fixup(const QDateTimeEdit* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->fixup(input_QString);
    } else {
        vqdatetimeedit->fixup(input_QString);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseFixup(const QDateTimeEdit* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_Fixup_IsBase(true);
        vqdatetimeedit->fixup(input_QString);
    } else {
        vqdatetimeedit->fixup(input_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFixup(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_Fixup_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
QDateTime* QDateTimeEdit_DateTimeFromText(const QDateTimeEdit* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return new QDateTime(vqdatetimeedit->dateTimeFromText(text_QString));
    }
    return {};
}

// Base class handler implementation
QDateTime* QDateTimeEdit_QBaseDateTimeFromText(const QDateTimeEdit* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_DateTimeFromText_IsBase(true);
        return new QDateTime(vqdatetimeedit->dateTimeFromText(text_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDateTimeFromText(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_DateTimeFromText_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DateTimeFromText_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QDateTimeEdit_TextFromDateTime(const QDateTimeEdit* self, QDateTime* dt) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        QString _ret = vqdatetimeedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqdatetimeedit->textFromDateTime(*dt);
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
libqt_string QDateTimeEdit_QBaseTextFromDateTime(const QDateTimeEdit* self, QDateTime* dt) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_TextFromDateTime_IsBase(true);
        QString _ret = vqdatetimeedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqdatetimeedit->textFromDateTime(*dt);
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
void QDateTimeEdit_OnTextFromDateTime(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_TextFromDateTime_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_TextFromDateTime_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateTimeEdit_StepEnabled(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return static_cast<int>(vqdatetimeedit->stepEnabled());
    } else {
        return static_cast<int>(vqdatetimeedit->stepEnabled());
    }
}

// Base class handler implementation
int QDateTimeEdit_QBaseStepEnabled(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_StepEnabled_IsBase(true);
        return static_cast<int>(vqdatetimeedit->stepEnabled());
    } else {
        return static_cast<int>(vqdatetimeedit->stepEnabled());
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnStepEnabled(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_StepEnabled_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_StepEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_MousePressEvent(QDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->mousePressEvent(event);
    } else {
        vqdatetimeedit->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseMousePressEvent(QDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_MousePressEvent_IsBase(true);
        vqdatetimeedit->mousePressEvent(event);
    } else {
        vqdatetimeedit->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMousePressEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_PaintEvent(QDateTimeEdit* self, QPaintEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->paintEvent(event);
    } else {
        vqdatetimeedit->paintEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBasePaintEvent(QDateTimeEdit* self, QPaintEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_PaintEvent_IsBase(true);
        vqdatetimeedit->paintEvent(event);
    } else {
        vqdatetimeedit->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnPaintEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_PaintEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_InitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->initStyleOption(option);
    } else {
        vqdatetimeedit->initStyleOption(option);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseInitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_InitStyleOption_IsBase(true);
        vqdatetimeedit->initStyleOption(option);
    } else {
        vqdatetimeedit->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnInitStyleOption(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_InitStyleOption_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDateTimeEdit_MinimumSizeHint(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return new QSize(vqdatetimeedit->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDateTimeEdit_QBaseMinimumSizeHint(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vqdatetimeedit->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMinimumSizeHint(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDateTimeEdit_InputMethodQuery(const QDateTimeEdit* self, int param1) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return new QVariant(vqdatetimeedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDateTimeEdit_QBaseInputMethodQuery(const QDateTimeEdit* self, int param1) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vqdatetimeedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnInputMethodQuery(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_ResizeEvent(QDateTimeEdit* self, QResizeEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->resizeEvent(event);
    } else {
        vqdatetimeedit->resizeEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseResizeEvent(QDateTimeEdit* self, QResizeEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_ResizeEvent_IsBase(true);
        vqdatetimeedit->resizeEvent(event);
    } else {
        vqdatetimeedit->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnResizeEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_ResizeEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_KeyReleaseEvent(QDateTimeEdit* self, QKeyEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->keyReleaseEvent(event);
    } else {
        vqdatetimeedit->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseKeyReleaseEvent(QDateTimeEdit* self, QKeyEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_KeyReleaseEvent_IsBase(true);
        vqdatetimeedit->keyReleaseEvent(event);
    } else {
        vqdatetimeedit->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnKeyReleaseEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_FocusOutEvent(QDateTimeEdit* self, QFocusEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->focusOutEvent(event);
    } else {
        vqdatetimeedit->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseFocusOutEvent(QDateTimeEdit* self, QFocusEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_FocusOutEvent_IsBase(true);
        vqdatetimeedit->focusOutEvent(event);
    } else {
        vqdatetimeedit->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFocusOutEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_ContextMenuEvent(QDateTimeEdit* self, QContextMenuEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->contextMenuEvent(event);
    } else {
        vqdatetimeedit->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseContextMenuEvent(QDateTimeEdit* self, QContextMenuEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_ContextMenuEvent_IsBase(true);
        vqdatetimeedit->contextMenuEvent(event);
    } else {
        vqdatetimeedit->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnContextMenuEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_ChangeEvent(QDateTimeEdit* self, QEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->changeEvent(event);
    } else {
        vqdatetimeedit->changeEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseChangeEvent(QDateTimeEdit* self, QEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_ChangeEvent_IsBase(true);
        vqdatetimeedit->changeEvent(event);
    } else {
        vqdatetimeedit->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnChangeEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_CloseEvent(QDateTimeEdit* self, QCloseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->closeEvent(event);
    } else {
        vqdatetimeedit->closeEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseCloseEvent(QDateTimeEdit* self, QCloseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_CloseEvent_IsBase(true);
        vqdatetimeedit->closeEvent(event);
    } else {
        vqdatetimeedit->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnCloseEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_CloseEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_HideEvent(QDateTimeEdit* self, QHideEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->hideEvent(event);
    } else {
        vqdatetimeedit->hideEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseHideEvent(QDateTimeEdit* self, QHideEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_HideEvent_IsBase(true);
        vqdatetimeedit->hideEvent(event);
    } else {
        vqdatetimeedit->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnHideEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_HideEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_MouseReleaseEvent(QDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->mouseReleaseEvent(event);
    } else {
        vqdatetimeedit->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseMouseReleaseEvent(QDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_MouseReleaseEvent_IsBase(true);
        vqdatetimeedit->mouseReleaseEvent(event);
    } else {
        vqdatetimeedit->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMouseReleaseEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_MouseMoveEvent(QDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->mouseMoveEvent(event);
    } else {
        vqdatetimeedit->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseMouseMoveEvent(QDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_MouseMoveEvent_IsBase(true);
        vqdatetimeedit->mouseMoveEvent(event);
    } else {
        vqdatetimeedit->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMouseMoveEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_TimerEvent(QDateTimeEdit* self, QTimerEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->timerEvent(event);
    } else {
        vqdatetimeedit->timerEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseTimerEvent(QDateTimeEdit* self, QTimerEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_TimerEvent_IsBase(true);
        vqdatetimeedit->timerEvent(event);
    } else {
        vqdatetimeedit->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnTimerEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_TimerEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_ShowEvent(QDateTimeEdit* self, QShowEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->showEvent(event);
    } else {
        vqdatetimeedit->showEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseShowEvent(QDateTimeEdit* self, QShowEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_ShowEvent_IsBase(true);
        vqdatetimeedit->showEvent(event);
    } else {
        vqdatetimeedit->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnShowEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_ShowEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateTimeEdit_DevType(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->devType();
    } else {
        return vqdatetimeedit->devType();
    }
}

// Base class handler implementation
int QDateTimeEdit_QBaseDevType(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_DevType_IsBase(true);
        return vqdatetimeedit->devType();
    } else {
        return vqdatetimeedit->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDevType(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_DevType_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_SetVisible(QDateTimeEdit* self, bool visible) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setVisible(visible);
    } else {
        vqdatetimeedit->setVisible(visible);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseSetVisible(QDateTimeEdit* self, bool visible) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_SetVisible_IsBase(true);
        vqdatetimeedit->setVisible(visible);
    } else {
        vqdatetimeedit->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSetVisible(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_SetVisible_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateTimeEdit_HeightForWidth(const QDateTimeEdit* self, int param1) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->heightForWidth(static_cast<int>(param1));
    } else {
        return vqdatetimeedit->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDateTimeEdit_QBaseHeightForWidth(const QDateTimeEdit* self, int param1) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_HeightForWidth_IsBase(true);
        return vqdatetimeedit->heightForWidth(static_cast<int>(param1));
    } else {
        return vqdatetimeedit->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnHeightForWidth(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_HeightForWidth_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeEdit_HasHeightForWidth(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->hasHeightForWidth();
    } else {
        return vqdatetimeedit->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDateTimeEdit_QBaseHasHeightForWidth(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_HasHeightForWidth_IsBase(true);
        return vqdatetimeedit->hasHeightForWidth();
    } else {
        return vqdatetimeedit->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnHasHeightForWidth(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDateTimeEdit_PaintEngine(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->paintEngine();
    } else {
        return vqdatetimeedit->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDateTimeEdit_QBasePaintEngine(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_PaintEngine_IsBase(true);
        return vqdatetimeedit->paintEngine();
    } else {
        return vqdatetimeedit->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnPaintEngine(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_PaintEngine_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_MouseDoubleClickEvent(QDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->mouseDoubleClickEvent(event);
    } else {
        vqdatetimeedit->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseMouseDoubleClickEvent(QDateTimeEdit* self, QMouseEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_MouseDoubleClickEvent_IsBase(true);
        vqdatetimeedit->mouseDoubleClickEvent(event);
    } else {
        vqdatetimeedit->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMouseDoubleClickEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_EnterEvent(QDateTimeEdit* self, QEnterEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->enterEvent(event);
    } else {
        vqdatetimeedit->enterEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseEnterEvent(QDateTimeEdit* self, QEnterEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_EnterEvent_IsBase(true);
        vqdatetimeedit->enterEvent(event);
    } else {
        vqdatetimeedit->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnEnterEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_EnterEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_LeaveEvent(QDateTimeEdit* self, QEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->leaveEvent(event);
    } else {
        vqdatetimeedit->leaveEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseLeaveEvent(QDateTimeEdit* self, QEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_LeaveEvent_IsBase(true);
        vqdatetimeedit->leaveEvent(event);
    } else {
        vqdatetimeedit->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnLeaveEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_LeaveEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_MoveEvent(QDateTimeEdit* self, QMoveEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->moveEvent(event);
    } else {
        vqdatetimeedit->moveEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseMoveEvent(QDateTimeEdit* self, QMoveEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_MoveEvent_IsBase(true);
        vqdatetimeedit->moveEvent(event);
    } else {
        vqdatetimeedit->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMoveEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_MoveEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_TabletEvent(QDateTimeEdit* self, QTabletEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->tabletEvent(event);
    } else {
        vqdatetimeedit->tabletEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseTabletEvent(QDateTimeEdit* self, QTabletEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_TabletEvent_IsBase(true);
        vqdatetimeedit->tabletEvent(event);
    } else {
        vqdatetimeedit->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnTabletEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_TabletEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_ActionEvent(QDateTimeEdit* self, QActionEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->actionEvent(event);
    } else {
        vqdatetimeedit->actionEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseActionEvent(QDateTimeEdit* self, QActionEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_ActionEvent_IsBase(true);
        vqdatetimeedit->actionEvent(event);
    } else {
        vqdatetimeedit->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnActionEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_ActionEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_DragEnterEvent(QDateTimeEdit* self, QDragEnterEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->dragEnterEvent(event);
    } else {
        vqdatetimeedit->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseDragEnterEvent(QDateTimeEdit* self, QDragEnterEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_DragEnterEvent_IsBase(true);
        vqdatetimeedit->dragEnterEvent(event);
    } else {
        vqdatetimeedit->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDragEnterEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_DragMoveEvent(QDateTimeEdit* self, QDragMoveEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->dragMoveEvent(event);
    } else {
        vqdatetimeedit->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseDragMoveEvent(QDateTimeEdit* self, QDragMoveEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_DragMoveEvent_IsBase(true);
        vqdatetimeedit->dragMoveEvent(event);
    } else {
        vqdatetimeedit->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDragMoveEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_DragLeaveEvent(QDateTimeEdit* self, QDragLeaveEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->dragLeaveEvent(event);
    } else {
        vqdatetimeedit->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseDragLeaveEvent(QDateTimeEdit* self, QDragLeaveEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_DragLeaveEvent_IsBase(true);
        vqdatetimeedit->dragLeaveEvent(event);
    } else {
        vqdatetimeedit->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDragLeaveEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_DropEvent(QDateTimeEdit* self, QDropEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->dropEvent(event);
    } else {
        vqdatetimeedit->dropEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseDropEvent(QDateTimeEdit* self, QDropEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_DropEvent_IsBase(true);
        vqdatetimeedit->dropEvent(event);
    } else {
        vqdatetimeedit->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDropEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_DropEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeEdit_NativeEvent(QDateTimeEdit* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        return vqdatetimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqdatetimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDateTimeEdit_QBaseNativeEvent(QDateTimeEdit* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_NativeEvent_IsBase(true);
        return vqdatetimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqdatetimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnNativeEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_NativeEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateTimeEdit_Metric(const QDateTimeEdit* self, int param1) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqdatetimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDateTimeEdit_QBaseMetric(const QDateTimeEdit* self, int param1) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_Metric_IsBase(true);
        return vqdatetimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqdatetimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnMetric(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_Metric_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_InitPainter(const QDateTimeEdit* self, QPainter* painter) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->initPainter(painter);
    } else {
        vqdatetimeedit->initPainter(painter);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseInitPainter(const QDateTimeEdit* self, QPainter* painter) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_InitPainter_IsBase(true);
        vqdatetimeedit->initPainter(painter);
    } else {
        vqdatetimeedit->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnInitPainter(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_InitPainter_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDateTimeEdit_Redirected(const QDateTimeEdit* self, QPoint* offset) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->redirected(offset);
    } else {
        return vqdatetimeedit->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDateTimeEdit_QBaseRedirected(const QDateTimeEdit* self, QPoint* offset) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_Redirected_IsBase(true);
        return vqdatetimeedit->redirected(offset);
    } else {
        return vqdatetimeedit->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnRedirected(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_Redirected_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDateTimeEdit_SharedPainter(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->sharedPainter();
    } else {
        return vqdatetimeedit->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDateTimeEdit_QBaseSharedPainter(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_SharedPainter_IsBase(true);
        return vqdatetimeedit->sharedPainter();
    } else {
        return vqdatetimeedit->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSharedPainter(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_SharedPainter_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_InputMethodEvent(QDateTimeEdit* self, QInputMethodEvent* param1) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->inputMethodEvent(param1);
    } else {
        vqdatetimeedit->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseInputMethodEvent(QDateTimeEdit* self, QInputMethodEvent* param1) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_InputMethodEvent_IsBase(true);
        vqdatetimeedit->inputMethodEvent(param1);
    } else {
        vqdatetimeedit->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnInputMethodEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeEdit_EventFilter(QDateTimeEdit* self, QObject* watched, QEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        return vqdatetimeedit->eventFilter(watched, event);
    } else {
        return vqdatetimeedit->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDateTimeEdit_QBaseEventFilter(QDateTimeEdit* self, QObject* watched, QEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_EventFilter_IsBase(true);
        return vqdatetimeedit->eventFilter(watched, event);
    } else {
        return vqdatetimeedit->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnEventFilter(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_EventFilter_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_ChildEvent(QDateTimeEdit* self, QChildEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->childEvent(event);
    } else {
        vqdatetimeedit->childEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseChildEvent(QDateTimeEdit* self, QChildEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_ChildEvent_IsBase(true);
        vqdatetimeedit->childEvent(event);
    } else {
        vqdatetimeedit->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnChildEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_ChildEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_CustomEvent(QDateTimeEdit* self, QEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->customEvent(event);
    } else {
        vqdatetimeedit->customEvent(event);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseCustomEvent(QDateTimeEdit* self, QEvent* event) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_CustomEvent_IsBase(true);
        vqdatetimeedit->customEvent(event);
    } else {
        vqdatetimeedit->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnCustomEvent(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_CustomEvent_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_ConnectNotify(QDateTimeEdit* self, QMetaMethod* signal) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->connectNotify(*signal);
    } else {
        vqdatetimeedit->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseConnectNotify(QDateTimeEdit* self, QMetaMethod* signal) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_ConnectNotify_IsBase(true);
        vqdatetimeedit->connectNotify(*signal);
    } else {
        vqdatetimeedit->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnConnectNotify(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_ConnectNotify_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_DisconnectNotify(QDateTimeEdit* self, QMetaMethod* signal) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->disconnectNotify(*signal);
    } else {
        vqdatetimeedit->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseDisconnectNotify(QDateTimeEdit* self, QMetaMethod* signal) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_DisconnectNotify_IsBase(true);
        vqdatetimeedit->disconnectNotify(*signal);
    } else {
        vqdatetimeedit->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDisconnectNotify(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QLineEdit* QDateTimeEdit_LineEdit(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->lineEdit();
    } else {
        return vqdatetimeedit->lineEdit();
    }
}

// Base class handler implementation
QLineEdit* QDateTimeEdit_QBaseLineEdit(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_LineEdit_IsBase(true);
        return vqdatetimeedit->lineEdit();
    } else {
        return vqdatetimeedit->lineEdit();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnLineEdit(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_LineEdit_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_LineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_SetLineEdit(QDateTimeEdit* self, QLineEdit* edit) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setLineEdit(edit);
    } else {
        vqdatetimeedit->setLineEdit(edit);
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseSetLineEdit(QDateTimeEdit* self, QLineEdit* edit) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_SetLineEdit_IsBase(true);
        vqdatetimeedit->setLineEdit(edit);
    } else {
        vqdatetimeedit->setLineEdit(edit);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSetLineEdit(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_SetLineEdit_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_UpdateMicroFocus(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->updateMicroFocus();
    } else {
        vqdatetimeedit->updateMicroFocus();
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseUpdateMicroFocus(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_UpdateMicroFocus_IsBase(true);
        vqdatetimeedit->updateMicroFocus();
    } else {
        vqdatetimeedit->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnUpdateMicroFocus(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_Create(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->create();
    } else {
        vqdatetimeedit->create();
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseCreate(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_Create_IsBase(true);
        vqdatetimeedit->create();
    } else {
        vqdatetimeedit->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnCreate(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_Create_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeEdit_Destroy(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->destroy();
    } else {
        vqdatetimeedit->destroy();
    }
}

// Base class handler implementation
void QDateTimeEdit_QBaseDestroy(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_Destroy_IsBase(true);
        vqdatetimeedit->destroy();
    } else {
        vqdatetimeedit->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnDestroy(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_Destroy_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeEdit_FocusNextChild(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        return vqdatetimeedit->focusNextChild();
    } else {
        return vqdatetimeedit->focusNextChild();
    }
}

// Base class handler implementation
bool QDateTimeEdit_QBaseFocusNextChild(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_FocusNextChild_IsBase(true);
        return vqdatetimeedit->focusNextChild();
    } else {
        return vqdatetimeedit->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFocusNextChild(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_FocusNextChild_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeEdit_FocusPreviousChild(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        return vqdatetimeedit->focusPreviousChild();
    } else {
        return vqdatetimeedit->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDateTimeEdit_QBaseFocusPreviousChild(QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_FocusPreviousChild_IsBase(true);
        return vqdatetimeedit->focusPreviousChild();
    } else {
        return vqdatetimeedit->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnFocusPreviousChild(QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = dynamic_cast<VirtualQDateTimeEdit*>(self)) {
        vqdatetimeedit->setQDateTimeEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDateTimeEdit_Sender(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->sender();
    } else {
        return vqdatetimeedit->sender();
    }
}

// Base class handler implementation
QObject* QDateTimeEdit_QBaseSender(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_Sender_IsBase(true);
        return vqdatetimeedit->sender();
    } else {
        return vqdatetimeedit->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSender(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_Sender_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateTimeEdit_SenderSignalIndex(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->senderSignalIndex();
    } else {
        return vqdatetimeedit->senderSignalIndex();
    }
}

// Base class handler implementation
int QDateTimeEdit_QBaseSenderSignalIndex(const QDateTimeEdit* self) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_SenderSignalIndex_IsBase(true);
        return vqdatetimeedit->senderSignalIndex();
    } else {
        return vqdatetimeedit->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnSenderSignalIndex(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateTimeEdit_Receivers(const QDateTimeEdit* self, const char* signal) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->receivers(signal);
    } else {
        return vqdatetimeedit->receivers(signal);
    }
}

// Base class handler implementation
int QDateTimeEdit_QBaseReceivers(const QDateTimeEdit* self, const char* signal) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_Receivers_IsBase(true);
        return vqdatetimeedit->receivers(signal);
    } else {
        return vqdatetimeedit->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnReceivers(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_Receivers_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeEdit_IsSignalConnected(const QDateTimeEdit* self, QMetaMethod* signal) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        return vqdatetimeedit->isSignalConnected(*signal);
    } else {
        return vqdatetimeedit->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDateTimeEdit_QBaseIsSignalConnected(const QDateTimeEdit* self, QMetaMethod* signal) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_IsSignalConnected_IsBase(true);
        return vqdatetimeedit->isSignalConnected(*signal);
    } else {
        return vqdatetimeedit->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeEdit_OnIsSignalConnected(const QDateTimeEdit* self, intptr_t slot) {
    if (auto* vqdatetimeedit = const_cast<VirtualQDateTimeEdit*>(dynamic_cast<const VirtualQDateTimeEdit*>(self))) {
        vqdatetimeedit->setQDateTimeEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualQDateTimeEdit::QDateTimeEdit_IsSignalConnected_Callback>(slot));
    }
}

void QDateTimeEdit_Delete(QDateTimeEdit* self) {
    delete self;
}

QTimeEdit* QTimeEdit_new(QWidget* parent) {
    return new VirtualQTimeEdit(parent);
}

QTimeEdit* QTimeEdit_new2() {
    return new VirtualQTimeEdit();
}

QTimeEdit* QTimeEdit_new3(QTime* time) {
    return new VirtualQTimeEdit(*time);
}

QTimeEdit* QTimeEdit_new4(QTime* time, QWidget* parent) {
    return new VirtualQTimeEdit(*time, parent);
}

QMetaObject* QTimeEdit_MetaObject(const QTimeEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTimeEdit_Metacast(QTimeEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTimeEdit_Metacall(QTimeEdit* self, int param1, int param2, void** param3) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTimeEdit_OnMetacall(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_Metacall_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTimeEdit_QBaseMetacall(QTimeEdit* self, int param1, int param2, void** param3) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_Metacall_IsBase(true);
        return vqtimeedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTimeEdit_Tr(const char* s) {
    QString _ret = QTimeEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTimeEdit_UserTimeChanged(QTimeEdit* self, QTime* time) {
    self->userTimeChanged(*time);
}

void QTimeEdit_Connect_UserTimeChanged(QTimeEdit* self, intptr_t slot) {
    void (*slotFunc)(QTimeEdit*, QTime*) = reinterpret_cast<void (*)(QTimeEdit*, QTime*)>(slot);
    QTimeEdit::connect(self, &QTimeEdit::userTimeChanged, [self, slotFunc](QTime time) {
        QTime* sigval1 = new QTime(time);
        slotFunc(self, sigval1);
    });
}

libqt_string QTimeEdit_Tr2(const char* s, const char* c) {
    QString _ret = QTimeEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTimeEdit_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTimeEdit::tr(s, c, static_cast<int>(n));
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
QSize* QTimeEdit_SizeHint(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return new QSize(vqtimeedit->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QTimeEdit_QBaseSizeHint(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_SizeHint_IsBase(true);
        return new QSize(vqtimeedit->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSizeHint(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_SizeHint_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_Clear(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->clear();
    } else {
        vqtimeedit->clear();
    }
}

// Base class handler implementation
void QTimeEdit_QBaseClear(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_Clear_IsBase(true);
        vqtimeedit->clear();
    } else {
        vqtimeedit->clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnClear(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_Clear_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_StepBy(QTimeEdit* self, int steps) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->stepBy(static_cast<int>(steps));
    } else {
        vqtimeedit->stepBy(static_cast<int>(steps));
    }
}

// Base class handler implementation
void QTimeEdit_QBaseStepBy(QTimeEdit* self, int steps) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_StepBy_IsBase(true);
        vqtimeedit->stepBy(static_cast<int>(steps));
    } else {
        vqtimeedit->stepBy(static_cast<int>(steps));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnStepBy(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_StepBy_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_StepBy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_Event(QTimeEdit* self, QEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        return vqtimeedit->event(event);
    } else {
        return vqtimeedit->event(event);
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseEvent(QTimeEdit* self, QEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_Event_IsBase(true);
        return vqtimeedit->event(event);
    } else {
        return vqtimeedit->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_Event_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_KeyPressEvent(QTimeEdit* self, QKeyEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->keyPressEvent(event);
    } else {
        vqtimeedit->keyPressEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseKeyPressEvent(QTimeEdit* self, QKeyEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_KeyPressEvent_IsBase(true);
        vqtimeedit->keyPressEvent(event);
    } else {
        vqtimeedit->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnKeyPressEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_WheelEvent(QTimeEdit* self, QWheelEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->wheelEvent(event);
    } else {
        vqtimeedit->wheelEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseWheelEvent(QTimeEdit* self, QWheelEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_WheelEvent_IsBase(true);
        vqtimeedit->wheelEvent(event);
    } else {
        vqtimeedit->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnWheelEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_WheelEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_FocusInEvent(QTimeEdit* self, QFocusEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->focusInEvent(event);
    } else {
        vqtimeedit->focusInEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseFocusInEvent(QTimeEdit* self, QFocusEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_FocusInEvent_IsBase(true);
        vqtimeedit->focusInEvent(event);
    } else {
        vqtimeedit->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFocusInEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_FocusNextPrevChild(QTimeEdit* self, bool next) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        return vqtimeedit->focusNextPrevChild(next);
    } else {
        return vqtimeedit->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseFocusNextPrevChild(QTimeEdit* self, bool next) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_FocusNextPrevChild_IsBase(true);
        return vqtimeedit->focusNextPrevChild(next);
    } else {
        return vqtimeedit->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFocusNextPrevChild(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeEdit_Validate(const QTimeEdit* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return static_cast<int>(vqtimeedit->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(vqtimeedit->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Base class handler implementation
int QTimeEdit_QBaseValidate(const QTimeEdit* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_Validate_IsBase(true);
        return static_cast<int>(vqtimeedit->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(vqtimeedit->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnValidate(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_Validate_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_Fixup(const QTimeEdit* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->fixup(input_QString);
    } else {
        vqtimeedit->fixup(input_QString);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseFixup(const QTimeEdit* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_Fixup_IsBase(true);
        vqtimeedit->fixup(input_QString);
    } else {
        vqtimeedit->fixup(input_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFixup(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_Fixup_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
QDateTime* QTimeEdit_DateTimeFromText(const QTimeEdit* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return new QDateTime(vqtimeedit->dateTimeFromText(text_QString));
    }
    return {};
}

// Base class handler implementation
QDateTime* QTimeEdit_QBaseDateTimeFromText(const QTimeEdit* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_DateTimeFromText_IsBase(true);
        return new QDateTime(vqtimeedit->dateTimeFromText(text_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDateTimeFromText(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_DateTimeFromText_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DateTimeFromText_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QTimeEdit_TextFromDateTime(const QTimeEdit* self, QDateTime* dt) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        QString _ret = vqtimeedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqtimeedit->textFromDateTime(*dt);
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
libqt_string QTimeEdit_QBaseTextFromDateTime(const QTimeEdit* self, QDateTime* dt) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_TextFromDateTime_IsBase(true);
        QString _ret = vqtimeedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqtimeedit->textFromDateTime(*dt);
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
void QTimeEdit_OnTextFromDateTime(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_TextFromDateTime_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_TextFromDateTime_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeEdit_StepEnabled(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return static_cast<int>(vqtimeedit->stepEnabled());
    } else {
        return static_cast<int>(vqtimeedit->stepEnabled());
    }
}

// Base class handler implementation
int QTimeEdit_QBaseStepEnabled(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_StepEnabled_IsBase(true);
        return static_cast<int>(vqtimeedit->stepEnabled());
    } else {
        return static_cast<int>(vqtimeedit->stepEnabled());
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnStepEnabled(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_StepEnabled_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_StepEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_MousePressEvent(QTimeEdit* self, QMouseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->mousePressEvent(event);
    } else {
        vqtimeedit->mousePressEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseMousePressEvent(QTimeEdit* self, QMouseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_MousePressEvent_IsBase(true);
        vqtimeedit->mousePressEvent(event);
    } else {
        vqtimeedit->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMousePressEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_PaintEvent(QTimeEdit* self, QPaintEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->paintEvent(event);
    } else {
        vqtimeedit->paintEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBasePaintEvent(QTimeEdit* self, QPaintEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_PaintEvent_IsBase(true);
        vqtimeedit->paintEvent(event);
    } else {
        vqtimeedit->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnPaintEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_PaintEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_InitStyleOption(const QTimeEdit* self, QStyleOptionSpinBox* option) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->initStyleOption(option);
    } else {
        vqtimeedit->initStyleOption(option);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseInitStyleOption(const QTimeEdit* self, QStyleOptionSpinBox* option) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_InitStyleOption_IsBase(true);
        vqtimeedit->initStyleOption(option);
    } else {
        vqtimeedit->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnInitStyleOption(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_InitStyleOption_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTimeEdit_MinimumSizeHint(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return new QSize(vqtimeedit->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QTimeEdit_QBaseMinimumSizeHint(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vqtimeedit->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMinimumSizeHint(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTimeEdit_InputMethodQuery(const QTimeEdit* self, int param1) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return new QVariant(vqtimeedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QTimeEdit_QBaseInputMethodQuery(const QTimeEdit* self, int param1) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vqtimeedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnInputMethodQuery(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_ResizeEvent(QTimeEdit* self, QResizeEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->resizeEvent(event);
    } else {
        vqtimeedit->resizeEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseResizeEvent(QTimeEdit* self, QResizeEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_ResizeEvent_IsBase(true);
        vqtimeedit->resizeEvent(event);
    } else {
        vqtimeedit->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnResizeEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_ResizeEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_KeyReleaseEvent(QTimeEdit* self, QKeyEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->keyReleaseEvent(event);
    } else {
        vqtimeedit->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseKeyReleaseEvent(QTimeEdit* self, QKeyEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_KeyReleaseEvent_IsBase(true);
        vqtimeedit->keyReleaseEvent(event);
    } else {
        vqtimeedit->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnKeyReleaseEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_FocusOutEvent(QTimeEdit* self, QFocusEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->focusOutEvent(event);
    } else {
        vqtimeedit->focusOutEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseFocusOutEvent(QTimeEdit* self, QFocusEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_FocusOutEvent_IsBase(true);
        vqtimeedit->focusOutEvent(event);
    } else {
        vqtimeedit->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFocusOutEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_ContextMenuEvent(QTimeEdit* self, QContextMenuEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->contextMenuEvent(event);
    } else {
        vqtimeedit->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseContextMenuEvent(QTimeEdit* self, QContextMenuEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_ContextMenuEvent_IsBase(true);
        vqtimeedit->contextMenuEvent(event);
    } else {
        vqtimeedit->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnContextMenuEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_ChangeEvent(QTimeEdit* self, QEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->changeEvent(event);
    } else {
        vqtimeedit->changeEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseChangeEvent(QTimeEdit* self, QEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_ChangeEvent_IsBase(true);
        vqtimeedit->changeEvent(event);
    } else {
        vqtimeedit->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnChangeEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_CloseEvent(QTimeEdit* self, QCloseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->closeEvent(event);
    } else {
        vqtimeedit->closeEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseCloseEvent(QTimeEdit* self, QCloseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_CloseEvent_IsBase(true);
        vqtimeedit->closeEvent(event);
    } else {
        vqtimeedit->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnCloseEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_CloseEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_HideEvent(QTimeEdit* self, QHideEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->hideEvent(event);
    } else {
        vqtimeedit->hideEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseHideEvent(QTimeEdit* self, QHideEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_HideEvent_IsBase(true);
        vqtimeedit->hideEvent(event);
    } else {
        vqtimeedit->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnHideEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_HideEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_MouseReleaseEvent(QTimeEdit* self, QMouseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->mouseReleaseEvent(event);
    } else {
        vqtimeedit->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseMouseReleaseEvent(QTimeEdit* self, QMouseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_MouseReleaseEvent_IsBase(true);
        vqtimeedit->mouseReleaseEvent(event);
    } else {
        vqtimeedit->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMouseReleaseEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_MouseMoveEvent(QTimeEdit* self, QMouseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->mouseMoveEvent(event);
    } else {
        vqtimeedit->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseMouseMoveEvent(QTimeEdit* self, QMouseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_MouseMoveEvent_IsBase(true);
        vqtimeedit->mouseMoveEvent(event);
    } else {
        vqtimeedit->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMouseMoveEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_TimerEvent(QTimeEdit* self, QTimerEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->timerEvent(event);
    } else {
        vqtimeedit->timerEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseTimerEvent(QTimeEdit* self, QTimerEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_TimerEvent_IsBase(true);
        vqtimeedit->timerEvent(event);
    } else {
        vqtimeedit->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnTimerEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_TimerEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_ShowEvent(QTimeEdit* self, QShowEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->showEvent(event);
    } else {
        vqtimeedit->showEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseShowEvent(QTimeEdit* self, QShowEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_ShowEvent_IsBase(true);
        vqtimeedit->showEvent(event);
    } else {
        vqtimeedit->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnShowEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_ShowEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeEdit_DevType(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->devType();
    } else {
        return vqtimeedit->devType();
    }
}

// Base class handler implementation
int QTimeEdit_QBaseDevType(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_DevType_IsBase(true);
        return vqtimeedit->devType();
    } else {
        return vqtimeedit->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDevType(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_DevType_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_SetVisible(QTimeEdit* self, bool visible) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setVisible(visible);
    } else {
        vqtimeedit->setVisible(visible);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseSetVisible(QTimeEdit* self, bool visible) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_SetVisible_IsBase(true);
        vqtimeedit->setVisible(visible);
    } else {
        vqtimeedit->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSetVisible(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_SetVisible_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeEdit_HeightForWidth(const QTimeEdit* self, int param1) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtimeedit->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QTimeEdit_QBaseHeightForWidth(const QTimeEdit* self, int param1) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_HeightForWidth_IsBase(true);
        return vqtimeedit->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtimeedit->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnHeightForWidth(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_HeightForWidth_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_HasHeightForWidth(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->hasHeightForWidth();
    } else {
        return vqtimeedit->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseHasHeightForWidth(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_HasHeightForWidth_IsBase(true);
        return vqtimeedit->hasHeightForWidth();
    } else {
        return vqtimeedit->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnHasHeightForWidth(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTimeEdit_PaintEngine(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->paintEngine();
    } else {
        return vqtimeedit->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTimeEdit_QBasePaintEngine(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_PaintEngine_IsBase(true);
        return vqtimeedit->paintEngine();
    } else {
        return vqtimeedit->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnPaintEngine(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_PaintEngine_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_MouseDoubleClickEvent(QTimeEdit* self, QMouseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->mouseDoubleClickEvent(event);
    } else {
        vqtimeedit->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseMouseDoubleClickEvent(QTimeEdit* self, QMouseEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_MouseDoubleClickEvent_IsBase(true);
        vqtimeedit->mouseDoubleClickEvent(event);
    } else {
        vqtimeedit->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMouseDoubleClickEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_EnterEvent(QTimeEdit* self, QEnterEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->enterEvent(event);
    } else {
        vqtimeedit->enterEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseEnterEvent(QTimeEdit* self, QEnterEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_EnterEvent_IsBase(true);
        vqtimeedit->enterEvent(event);
    } else {
        vqtimeedit->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnEnterEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_EnterEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_LeaveEvent(QTimeEdit* self, QEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->leaveEvent(event);
    } else {
        vqtimeedit->leaveEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseLeaveEvent(QTimeEdit* self, QEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_LeaveEvent_IsBase(true);
        vqtimeedit->leaveEvent(event);
    } else {
        vqtimeedit->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnLeaveEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_LeaveEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_MoveEvent(QTimeEdit* self, QMoveEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->moveEvent(event);
    } else {
        vqtimeedit->moveEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseMoveEvent(QTimeEdit* self, QMoveEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_MoveEvent_IsBase(true);
        vqtimeedit->moveEvent(event);
    } else {
        vqtimeedit->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMoveEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_MoveEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_TabletEvent(QTimeEdit* self, QTabletEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->tabletEvent(event);
    } else {
        vqtimeedit->tabletEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseTabletEvent(QTimeEdit* self, QTabletEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_TabletEvent_IsBase(true);
        vqtimeedit->tabletEvent(event);
    } else {
        vqtimeedit->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnTabletEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_TabletEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_ActionEvent(QTimeEdit* self, QActionEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->actionEvent(event);
    } else {
        vqtimeedit->actionEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseActionEvent(QTimeEdit* self, QActionEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_ActionEvent_IsBase(true);
        vqtimeedit->actionEvent(event);
    } else {
        vqtimeedit->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnActionEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_ActionEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_DragEnterEvent(QTimeEdit* self, QDragEnterEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->dragEnterEvent(event);
    } else {
        vqtimeedit->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseDragEnterEvent(QTimeEdit* self, QDragEnterEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_DragEnterEvent_IsBase(true);
        vqtimeedit->dragEnterEvent(event);
    } else {
        vqtimeedit->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDragEnterEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_DragMoveEvent(QTimeEdit* self, QDragMoveEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->dragMoveEvent(event);
    } else {
        vqtimeedit->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseDragMoveEvent(QTimeEdit* self, QDragMoveEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_DragMoveEvent_IsBase(true);
        vqtimeedit->dragMoveEvent(event);
    } else {
        vqtimeedit->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDragMoveEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_DragLeaveEvent(QTimeEdit* self, QDragLeaveEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->dragLeaveEvent(event);
    } else {
        vqtimeedit->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseDragLeaveEvent(QTimeEdit* self, QDragLeaveEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_DragLeaveEvent_IsBase(true);
        vqtimeedit->dragLeaveEvent(event);
    } else {
        vqtimeedit->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDragLeaveEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_DropEvent(QTimeEdit* self, QDropEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->dropEvent(event);
    } else {
        vqtimeedit->dropEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseDropEvent(QTimeEdit* self, QDropEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_DropEvent_IsBase(true);
        vqtimeedit->dropEvent(event);
    } else {
        vqtimeedit->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDropEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_DropEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_NativeEvent(QTimeEdit* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        return vqtimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseNativeEvent(QTimeEdit* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_NativeEvent_IsBase(true);
        return vqtimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtimeedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnNativeEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_NativeEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeEdit_Metric(const QTimeEdit* self, int param1) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTimeEdit_QBaseMetric(const QTimeEdit* self, int param1) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_Metric_IsBase(true);
        return vqtimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtimeedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnMetric(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_Metric_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_InitPainter(const QTimeEdit* self, QPainter* painter) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->initPainter(painter);
    } else {
        vqtimeedit->initPainter(painter);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseInitPainter(const QTimeEdit* self, QPainter* painter) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_InitPainter_IsBase(true);
        vqtimeedit->initPainter(painter);
    } else {
        vqtimeedit->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnInitPainter(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_InitPainter_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTimeEdit_Redirected(const QTimeEdit* self, QPoint* offset) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->redirected(offset);
    } else {
        return vqtimeedit->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTimeEdit_QBaseRedirected(const QTimeEdit* self, QPoint* offset) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_Redirected_IsBase(true);
        return vqtimeedit->redirected(offset);
    } else {
        return vqtimeedit->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnRedirected(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_Redirected_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTimeEdit_SharedPainter(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->sharedPainter();
    } else {
        return vqtimeedit->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTimeEdit_QBaseSharedPainter(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_SharedPainter_IsBase(true);
        return vqtimeedit->sharedPainter();
    } else {
        return vqtimeedit->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSharedPainter(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_SharedPainter_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_InputMethodEvent(QTimeEdit* self, QInputMethodEvent* param1) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->inputMethodEvent(param1);
    } else {
        vqtimeedit->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseInputMethodEvent(QTimeEdit* self, QInputMethodEvent* param1) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_InputMethodEvent_IsBase(true);
        vqtimeedit->inputMethodEvent(param1);
    } else {
        vqtimeedit->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnInputMethodEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_EventFilter(QTimeEdit* self, QObject* watched, QEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        return vqtimeedit->eventFilter(watched, event);
    } else {
        return vqtimeedit->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseEventFilter(QTimeEdit* self, QObject* watched, QEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_EventFilter_IsBase(true);
        return vqtimeedit->eventFilter(watched, event);
    } else {
        return vqtimeedit->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnEventFilter(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_EventFilter_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_ChildEvent(QTimeEdit* self, QChildEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->childEvent(event);
    } else {
        vqtimeedit->childEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseChildEvent(QTimeEdit* self, QChildEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_ChildEvent_IsBase(true);
        vqtimeedit->childEvent(event);
    } else {
        vqtimeedit->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnChildEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_ChildEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_CustomEvent(QTimeEdit* self, QEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->customEvent(event);
    } else {
        vqtimeedit->customEvent(event);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseCustomEvent(QTimeEdit* self, QEvent* event) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_CustomEvent_IsBase(true);
        vqtimeedit->customEvent(event);
    } else {
        vqtimeedit->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnCustomEvent(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_CustomEvent_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_ConnectNotify(QTimeEdit* self, QMetaMethod* signal) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->connectNotify(*signal);
    } else {
        vqtimeedit->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseConnectNotify(QTimeEdit* self, QMetaMethod* signal) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_ConnectNotify_IsBase(true);
        vqtimeedit->connectNotify(*signal);
    } else {
        vqtimeedit->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnConnectNotify(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_ConnectNotify_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_DisconnectNotify(QTimeEdit* self, QMetaMethod* signal) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->disconnectNotify(*signal);
    } else {
        vqtimeedit->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseDisconnectNotify(QTimeEdit* self, QMetaMethod* signal) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_DisconnectNotify_IsBase(true);
        vqtimeedit->disconnectNotify(*signal);
    } else {
        vqtimeedit->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDisconnectNotify(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QLineEdit* QTimeEdit_LineEdit(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->lineEdit();
    } else {
        return vqtimeedit->lineEdit();
    }
}

// Base class handler implementation
QLineEdit* QTimeEdit_QBaseLineEdit(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_LineEdit_IsBase(true);
        return vqtimeedit->lineEdit();
    } else {
        return vqtimeedit->lineEdit();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnLineEdit(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_LineEdit_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_LineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_SetLineEdit(QTimeEdit* self, QLineEdit* edit) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setLineEdit(edit);
    } else {
        vqtimeedit->setLineEdit(edit);
    }
}

// Base class handler implementation
void QTimeEdit_QBaseSetLineEdit(QTimeEdit* self, QLineEdit* edit) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_SetLineEdit_IsBase(true);
        vqtimeedit->setLineEdit(edit);
    } else {
        vqtimeedit->setLineEdit(edit);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSetLineEdit(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_SetLineEdit_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_UpdateMicroFocus(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->updateMicroFocus();
    } else {
        vqtimeedit->updateMicroFocus();
    }
}

// Base class handler implementation
void QTimeEdit_QBaseUpdateMicroFocus(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_UpdateMicroFocus_IsBase(true);
        vqtimeedit->updateMicroFocus();
    } else {
        vqtimeedit->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnUpdateMicroFocus(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_Create(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->create();
    } else {
        vqtimeedit->create();
    }
}

// Base class handler implementation
void QTimeEdit_QBaseCreate(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_Create_IsBase(true);
        vqtimeedit->create();
    } else {
        vqtimeedit->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnCreate(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_Create_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimeEdit_Destroy(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->destroy();
    } else {
        vqtimeedit->destroy();
    }
}

// Base class handler implementation
void QTimeEdit_QBaseDestroy(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_Destroy_IsBase(true);
        vqtimeedit->destroy();
    } else {
        vqtimeedit->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnDestroy(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_Destroy_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_FocusNextChild(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        return vqtimeedit->focusNextChild();
    } else {
        return vqtimeedit->focusNextChild();
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseFocusNextChild(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_FocusNextChild_IsBase(true);
        return vqtimeedit->focusNextChild();
    } else {
        return vqtimeedit->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFocusNextChild(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_FocusNextChild_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_FocusPreviousChild(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        return vqtimeedit->focusPreviousChild();
    } else {
        return vqtimeedit->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseFocusPreviousChild(QTimeEdit* self) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_FocusPreviousChild_IsBase(true);
        return vqtimeedit->focusPreviousChild();
    } else {
        return vqtimeedit->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnFocusPreviousChild(QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = dynamic_cast<VirtualQTimeEdit*>(self)) {
        vqtimeedit->setQTimeEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTimeEdit_Sender(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->sender();
    } else {
        return vqtimeedit->sender();
    }
}

// Base class handler implementation
QObject* QTimeEdit_QBaseSender(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_Sender_IsBase(true);
        return vqtimeedit->sender();
    } else {
        return vqtimeedit->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSender(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_Sender_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeEdit_SenderSignalIndex(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->senderSignalIndex();
    } else {
        return vqtimeedit->senderSignalIndex();
    }
}

// Base class handler implementation
int QTimeEdit_QBaseSenderSignalIndex(const QTimeEdit* self) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_SenderSignalIndex_IsBase(true);
        return vqtimeedit->senderSignalIndex();
    } else {
        return vqtimeedit->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnSenderSignalIndex(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTimeEdit_Receivers(const QTimeEdit* self, const char* signal) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->receivers(signal);
    } else {
        return vqtimeedit->receivers(signal);
    }
}

// Base class handler implementation
int QTimeEdit_QBaseReceivers(const QTimeEdit* self, const char* signal) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_Receivers_IsBase(true);
        return vqtimeedit->receivers(signal);
    } else {
        return vqtimeedit->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnReceivers(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_Receivers_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTimeEdit_IsSignalConnected(const QTimeEdit* self, QMetaMethod* signal) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        return vqtimeedit->isSignalConnected(*signal);
    } else {
        return vqtimeedit->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTimeEdit_QBaseIsSignalConnected(const QTimeEdit* self, QMetaMethod* signal) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_IsSignalConnected_IsBase(true);
        return vqtimeedit->isSignalConnected(*signal);
    } else {
        return vqtimeedit->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimeEdit_OnIsSignalConnected(const QTimeEdit* self, intptr_t slot) {
    if (auto* vqtimeedit = const_cast<VirtualQTimeEdit*>(dynamic_cast<const VirtualQTimeEdit*>(self))) {
        vqtimeedit->setQTimeEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualQTimeEdit::QTimeEdit_IsSignalConnected_Callback>(slot));
    }
}

void QTimeEdit_Delete(QTimeEdit* self) {
    delete self;
}

QDateEdit* QDateEdit_new(QWidget* parent) {
    return new VirtualQDateEdit(parent);
}

QDateEdit* QDateEdit_new2() {
    return new VirtualQDateEdit();
}

QDateEdit* QDateEdit_new3(QDate* date) {
    return new VirtualQDateEdit(*date);
}

QDateEdit* QDateEdit_new4(QDate* date, QWidget* parent) {
    return new VirtualQDateEdit(*date, parent);
}

QMetaObject* QDateEdit_MetaObject(const QDateEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDateEdit_Metacast(QDateEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDateEdit_Metacall(QDateEdit* self, int param1, int param2, void** param3) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateEdit_OnMetacall(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_Metacall_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDateEdit_QBaseMetacall(QDateEdit* self, int param1, int param2, void** param3) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_Metacall_IsBase(true);
        return vqdateedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDateEdit_Tr(const char* s) {
    QString _ret = QDateEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QDateEdit_UserDateChanged(QDateEdit* self, QDate* date) {
    self->userDateChanged(*date);
}

void QDateEdit_Connect_UserDateChanged(QDateEdit* self, intptr_t slot) {
    void (*slotFunc)(QDateEdit*, QDate*) = reinterpret_cast<void (*)(QDateEdit*, QDate*)>(slot);
    QDateEdit::connect(self, &QDateEdit::userDateChanged, [self, slotFunc](QDate date) {
        QDate* sigval1 = new QDate(date);
        slotFunc(self, sigval1);
    });
}

libqt_string QDateEdit_Tr2(const char* s, const char* c) {
    QString _ret = QDateEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDateEdit_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDateEdit::tr(s, c, static_cast<int>(n));
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
QSize* QDateEdit_SizeHint(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return new QSize(vqdateedit->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QDateEdit_QBaseSizeHint(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_SizeHint_IsBase(true);
        return new QSize(vqdateedit->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSizeHint(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_SizeHint_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_Clear(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->clear();
    } else {
        vqdateedit->clear();
    }
}

// Base class handler implementation
void QDateEdit_QBaseClear(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_Clear_IsBase(true);
        vqdateedit->clear();
    } else {
        vqdateedit->clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnClear(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_Clear_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_StepBy(QDateEdit* self, int steps) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->stepBy(static_cast<int>(steps));
    } else {
        vqdateedit->stepBy(static_cast<int>(steps));
    }
}

// Base class handler implementation
void QDateEdit_QBaseStepBy(QDateEdit* self, int steps) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_StepBy_IsBase(true);
        vqdateedit->stepBy(static_cast<int>(steps));
    } else {
        vqdateedit->stepBy(static_cast<int>(steps));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnStepBy(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_StepBy_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_StepBy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_Event(QDateEdit* self, QEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        return vqdateedit->event(event);
    } else {
        return vqdateedit->event(event);
    }
}

// Base class handler implementation
bool QDateEdit_QBaseEvent(QDateEdit* self, QEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_Event_IsBase(true);
        return vqdateedit->event(event);
    } else {
        return vqdateedit->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_Event_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_KeyPressEvent(QDateEdit* self, QKeyEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->keyPressEvent(event);
    } else {
        vqdateedit->keyPressEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseKeyPressEvent(QDateEdit* self, QKeyEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_KeyPressEvent_IsBase(true);
        vqdateedit->keyPressEvent(event);
    } else {
        vqdateedit->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnKeyPressEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_WheelEvent(QDateEdit* self, QWheelEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->wheelEvent(event);
    } else {
        vqdateedit->wheelEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseWheelEvent(QDateEdit* self, QWheelEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_WheelEvent_IsBase(true);
        vqdateedit->wheelEvent(event);
    } else {
        vqdateedit->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnWheelEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_WheelEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_FocusInEvent(QDateEdit* self, QFocusEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->focusInEvent(event);
    } else {
        vqdateedit->focusInEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseFocusInEvent(QDateEdit* self, QFocusEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_FocusInEvent_IsBase(true);
        vqdateedit->focusInEvent(event);
    } else {
        vqdateedit->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFocusInEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_FocusNextPrevChild(QDateEdit* self, bool next) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        return vqdateedit->focusNextPrevChild(next);
    } else {
        return vqdateedit->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDateEdit_QBaseFocusNextPrevChild(QDateEdit* self, bool next) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_FocusNextPrevChild_IsBase(true);
        return vqdateedit->focusNextPrevChild(next);
    } else {
        return vqdateedit->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFocusNextPrevChild(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateEdit_Validate(const QDateEdit* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return static_cast<int>(vqdateedit->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(vqdateedit->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Base class handler implementation
int QDateEdit_QBaseValidate(const QDateEdit* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_Validate_IsBase(true);
        return static_cast<int>(vqdateedit->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(vqdateedit->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnValidate(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_Validate_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_Fixup(const QDateEdit* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->fixup(input_QString);
    } else {
        vqdateedit->fixup(input_QString);
    }
}

// Base class handler implementation
void QDateEdit_QBaseFixup(const QDateEdit* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_Fixup_IsBase(true);
        vqdateedit->fixup(input_QString);
    } else {
        vqdateedit->fixup(input_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFixup(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_Fixup_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
QDateTime* QDateEdit_DateTimeFromText(const QDateEdit* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return new QDateTime(vqdateedit->dateTimeFromText(text_QString));
    }
    return {};
}

// Base class handler implementation
QDateTime* QDateEdit_QBaseDateTimeFromText(const QDateEdit* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_DateTimeFromText_IsBase(true);
        return new QDateTime(vqdateedit->dateTimeFromText(text_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDateTimeFromText(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_DateTimeFromText_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_DateTimeFromText_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QDateEdit_TextFromDateTime(const QDateEdit* self, QDateTime* dt) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        QString _ret = vqdateedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqdateedit->textFromDateTime(*dt);
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
libqt_string QDateEdit_QBaseTextFromDateTime(const QDateEdit* self, QDateTime* dt) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_TextFromDateTime_IsBase(true);
        QString _ret = vqdateedit->textFromDateTime(*dt);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqdateedit->textFromDateTime(*dt);
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
void QDateEdit_OnTextFromDateTime(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_TextFromDateTime_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_TextFromDateTime_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateEdit_StepEnabled(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return static_cast<int>(vqdateedit->stepEnabled());
    } else {
        return static_cast<int>(vqdateedit->stepEnabled());
    }
}

// Base class handler implementation
int QDateEdit_QBaseStepEnabled(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_StepEnabled_IsBase(true);
        return static_cast<int>(vqdateedit->stepEnabled());
    } else {
        return static_cast<int>(vqdateedit->stepEnabled());
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnStepEnabled(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_StepEnabled_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_StepEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_MousePressEvent(QDateEdit* self, QMouseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->mousePressEvent(event);
    } else {
        vqdateedit->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseMousePressEvent(QDateEdit* self, QMouseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_MousePressEvent_IsBase(true);
        vqdateedit->mousePressEvent(event);
    } else {
        vqdateedit->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMousePressEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_PaintEvent(QDateEdit* self, QPaintEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->paintEvent(event);
    } else {
        vqdateedit->paintEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBasePaintEvent(QDateEdit* self, QPaintEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_PaintEvent_IsBase(true);
        vqdateedit->paintEvent(event);
    } else {
        vqdateedit->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnPaintEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_PaintEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_InitStyleOption(const QDateEdit* self, QStyleOptionSpinBox* option) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->initStyleOption(option);
    } else {
        vqdateedit->initStyleOption(option);
    }
}

// Base class handler implementation
void QDateEdit_QBaseInitStyleOption(const QDateEdit* self, QStyleOptionSpinBox* option) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_InitStyleOption_IsBase(true);
        vqdateedit->initStyleOption(option);
    } else {
        vqdateedit->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnInitStyleOption(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_InitStyleOption_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDateEdit_MinimumSizeHint(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return new QSize(vqdateedit->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDateEdit_QBaseMinimumSizeHint(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vqdateedit->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMinimumSizeHint(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDateEdit_InputMethodQuery(const QDateEdit* self, int param1) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return new QVariant(vqdateedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDateEdit_QBaseInputMethodQuery(const QDateEdit* self, int param1) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vqdateedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnInputMethodQuery(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_ResizeEvent(QDateEdit* self, QResizeEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->resizeEvent(event);
    } else {
        vqdateedit->resizeEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseResizeEvent(QDateEdit* self, QResizeEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_ResizeEvent_IsBase(true);
        vqdateedit->resizeEvent(event);
    } else {
        vqdateedit->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnResizeEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_ResizeEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_KeyReleaseEvent(QDateEdit* self, QKeyEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->keyReleaseEvent(event);
    } else {
        vqdateedit->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseKeyReleaseEvent(QDateEdit* self, QKeyEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_KeyReleaseEvent_IsBase(true);
        vqdateedit->keyReleaseEvent(event);
    } else {
        vqdateedit->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnKeyReleaseEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_FocusOutEvent(QDateEdit* self, QFocusEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->focusOutEvent(event);
    } else {
        vqdateedit->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseFocusOutEvent(QDateEdit* self, QFocusEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_FocusOutEvent_IsBase(true);
        vqdateedit->focusOutEvent(event);
    } else {
        vqdateedit->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFocusOutEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_ContextMenuEvent(QDateEdit* self, QContextMenuEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->contextMenuEvent(event);
    } else {
        vqdateedit->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseContextMenuEvent(QDateEdit* self, QContextMenuEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_ContextMenuEvent_IsBase(true);
        vqdateedit->contextMenuEvent(event);
    } else {
        vqdateedit->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnContextMenuEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_ChangeEvent(QDateEdit* self, QEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->changeEvent(event);
    } else {
        vqdateedit->changeEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseChangeEvent(QDateEdit* self, QEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_ChangeEvent_IsBase(true);
        vqdateedit->changeEvent(event);
    } else {
        vqdateedit->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnChangeEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_CloseEvent(QDateEdit* self, QCloseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->closeEvent(event);
    } else {
        vqdateedit->closeEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseCloseEvent(QDateEdit* self, QCloseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_CloseEvent_IsBase(true);
        vqdateedit->closeEvent(event);
    } else {
        vqdateedit->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnCloseEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_CloseEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_HideEvent(QDateEdit* self, QHideEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->hideEvent(event);
    } else {
        vqdateedit->hideEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseHideEvent(QDateEdit* self, QHideEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_HideEvent_IsBase(true);
        vqdateedit->hideEvent(event);
    } else {
        vqdateedit->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnHideEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_HideEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_MouseReleaseEvent(QDateEdit* self, QMouseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->mouseReleaseEvent(event);
    } else {
        vqdateedit->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseMouseReleaseEvent(QDateEdit* self, QMouseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_MouseReleaseEvent_IsBase(true);
        vqdateedit->mouseReleaseEvent(event);
    } else {
        vqdateedit->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMouseReleaseEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_MouseMoveEvent(QDateEdit* self, QMouseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->mouseMoveEvent(event);
    } else {
        vqdateedit->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseMouseMoveEvent(QDateEdit* self, QMouseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_MouseMoveEvent_IsBase(true);
        vqdateedit->mouseMoveEvent(event);
    } else {
        vqdateedit->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMouseMoveEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_TimerEvent(QDateEdit* self, QTimerEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->timerEvent(event);
    } else {
        vqdateedit->timerEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseTimerEvent(QDateEdit* self, QTimerEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_TimerEvent_IsBase(true);
        vqdateedit->timerEvent(event);
    } else {
        vqdateedit->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnTimerEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_TimerEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_ShowEvent(QDateEdit* self, QShowEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->showEvent(event);
    } else {
        vqdateedit->showEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseShowEvent(QDateEdit* self, QShowEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_ShowEvent_IsBase(true);
        vqdateedit->showEvent(event);
    } else {
        vqdateedit->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnShowEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_ShowEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateEdit_DevType(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->devType();
    } else {
        return vqdateedit->devType();
    }
}

// Base class handler implementation
int QDateEdit_QBaseDevType(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_DevType_IsBase(true);
        return vqdateedit->devType();
    } else {
        return vqdateedit->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDevType(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_DevType_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_SetVisible(QDateEdit* self, bool visible) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setVisible(visible);
    } else {
        vqdateedit->setVisible(visible);
    }
}

// Base class handler implementation
void QDateEdit_QBaseSetVisible(QDateEdit* self, bool visible) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_SetVisible_IsBase(true);
        vqdateedit->setVisible(visible);
    } else {
        vqdateedit->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSetVisible(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_SetVisible_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateEdit_HeightForWidth(const QDateEdit* self, int param1) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->heightForWidth(static_cast<int>(param1));
    } else {
        return vqdateedit->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDateEdit_QBaseHeightForWidth(const QDateEdit* self, int param1) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_HeightForWidth_IsBase(true);
        return vqdateedit->heightForWidth(static_cast<int>(param1));
    } else {
        return vqdateedit->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnHeightForWidth(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_HeightForWidth_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_HasHeightForWidth(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->hasHeightForWidth();
    } else {
        return vqdateedit->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDateEdit_QBaseHasHeightForWidth(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_HasHeightForWidth_IsBase(true);
        return vqdateedit->hasHeightForWidth();
    } else {
        return vqdateedit->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnHasHeightForWidth(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDateEdit_PaintEngine(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->paintEngine();
    } else {
        return vqdateedit->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDateEdit_QBasePaintEngine(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_PaintEngine_IsBase(true);
        return vqdateedit->paintEngine();
    } else {
        return vqdateedit->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnPaintEngine(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_PaintEngine_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_MouseDoubleClickEvent(QDateEdit* self, QMouseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->mouseDoubleClickEvent(event);
    } else {
        vqdateedit->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseMouseDoubleClickEvent(QDateEdit* self, QMouseEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_MouseDoubleClickEvent_IsBase(true);
        vqdateedit->mouseDoubleClickEvent(event);
    } else {
        vqdateedit->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMouseDoubleClickEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_EnterEvent(QDateEdit* self, QEnterEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->enterEvent(event);
    } else {
        vqdateedit->enterEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseEnterEvent(QDateEdit* self, QEnterEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_EnterEvent_IsBase(true);
        vqdateedit->enterEvent(event);
    } else {
        vqdateedit->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnEnterEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_EnterEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_LeaveEvent(QDateEdit* self, QEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->leaveEvent(event);
    } else {
        vqdateedit->leaveEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseLeaveEvent(QDateEdit* self, QEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_LeaveEvent_IsBase(true);
        vqdateedit->leaveEvent(event);
    } else {
        vqdateedit->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnLeaveEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_LeaveEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_MoveEvent(QDateEdit* self, QMoveEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->moveEvent(event);
    } else {
        vqdateedit->moveEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseMoveEvent(QDateEdit* self, QMoveEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_MoveEvent_IsBase(true);
        vqdateedit->moveEvent(event);
    } else {
        vqdateedit->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMoveEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_MoveEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_TabletEvent(QDateEdit* self, QTabletEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->tabletEvent(event);
    } else {
        vqdateedit->tabletEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseTabletEvent(QDateEdit* self, QTabletEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_TabletEvent_IsBase(true);
        vqdateedit->tabletEvent(event);
    } else {
        vqdateedit->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnTabletEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_TabletEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_ActionEvent(QDateEdit* self, QActionEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->actionEvent(event);
    } else {
        vqdateedit->actionEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseActionEvent(QDateEdit* self, QActionEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_ActionEvent_IsBase(true);
        vqdateedit->actionEvent(event);
    } else {
        vqdateedit->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnActionEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_ActionEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_DragEnterEvent(QDateEdit* self, QDragEnterEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->dragEnterEvent(event);
    } else {
        vqdateedit->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseDragEnterEvent(QDateEdit* self, QDragEnterEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_DragEnterEvent_IsBase(true);
        vqdateedit->dragEnterEvent(event);
    } else {
        vqdateedit->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDragEnterEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_DragMoveEvent(QDateEdit* self, QDragMoveEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->dragMoveEvent(event);
    } else {
        vqdateedit->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseDragMoveEvent(QDateEdit* self, QDragMoveEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_DragMoveEvent_IsBase(true);
        vqdateedit->dragMoveEvent(event);
    } else {
        vqdateedit->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDragMoveEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_DragLeaveEvent(QDateEdit* self, QDragLeaveEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->dragLeaveEvent(event);
    } else {
        vqdateedit->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseDragLeaveEvent(QDateEdit* self, QDragLeaveEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_DragLeaveEvent_IsBase(true);
        vqdateedit->dragLeaveEvent(event);
    } else {
        vqdateedit->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDragLeaveEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_DropEvent(QDateEdit* self, QDropEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->dropEvent(event);
    } else {
        vqdateedit->dropEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseDropEvent(QDateEdit* self, QDropEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_DropEvent_IsBase(true);
        vqdateedit->dropEvent(event);
    } else {
        vqdateedit->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDropEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_DropEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_NativeEvent(QDateEdit* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        return vqdateedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqdateedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDateEdit_QBaseNativeEvent(QDateEdit* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_NativeEvent_IsBase(true);
        return vqdateedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqdateedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnNativeEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_NativeEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateEdit_Metric(const QDateEdit* self, int param1) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqdateedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDateEdit_QBaseMetric(const QDateEdit* self, int param1) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_Metric_IsBase(true);
        return vqdateedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqdateedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnMetric(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_Metric_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_InitPainter(const QDateEdit* self, QPainter* painter) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->initPainter(painter);
    } else {
        vqdateedit->initPainter(painter);
    }
}

// Base class handler implementation
void QDateEdit_QBaseInitPainter(const QDateEdit* self, QPainter* painter) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_InitPainter_IsBase(true);
        vqdateedit->initPainter(painter);
    } else {
        vqdateedit->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnInitPainter(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_InitPainter_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDateEdit_Redirected(const QDateEdit* self, QPoint* offset) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->redirected(offset);
    } else {
        return vqdateedit->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDateEdit_QBaseRedirected(const QDateEdit* self, QPoint* offset) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_Redirected_IsBase(true);
        return vqdateedit->redirected(offset);
    } else {
        return vqdateedit->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnRedirected(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_Redirected_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDateEdit_SharedPainter(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->sharedPainter();
    } else {
        return vqdateedit->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDateEdit_QBaseSharedPainter(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_SharedPainter_IsBase(true);
        return vqdateedit->sharedPainter();
    } else {
        return vqdateedit->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSharedPainter(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_SharedPainter_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_InputMethodEvent(QDateEdit* self, QInputMethodEvent* param1) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->inputMethodEvent(param1);
    } else {
        vqdateedit->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDateEdit_QBaseInputMethodEvent(QDateEdit* self, QInputMethodEvent* param1) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_InputMethodEvent_IsBase(true);
        vqdateedit->inputMethodEvent(param1);
    } else {
        vqdateedit->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnInputMethodEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_EventFilter(QDateEdit* self, QObject* watched, QEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        return vqdateedit->eventFilter(watched, event);
    } else {
        return vqdateedit->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDateEdit_QBaseEventFilter(QDateEdit* self, QObject* watched, QEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_EventFilter_IsBase(true);
        return vqdateedit->eventFilter(watched, event);
    } else {
        return vqdateedit->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnEventFilter(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_EventFilter_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_ChildEvent(QDateEdit* self, QChildEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->childEvent(event);
    } else {
        vqdateedit->childEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseChildEvent(QDateEdit* self, QChildEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_ChildEvent_IsBase(true);
        vqdateedit->childEvent(event);
    } else {
        vqdateedit->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnChildEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_ChildEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_CustomEvent(QDateEdit* self, QEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->customEvent(event);
    } else {
        vqdateedit->customEvent(event);
    }
}

// Base class handler implementation
void QDateEdit_QBaseCustomEvent(QDateEdit* self, QEvent* event) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_CustomEvent_IsBase(true);
        vqdateedit->customEvent(event);
    } else {
        vqdateedit->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnCustomEvent(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_CustomEvent_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_ConnectNotify(QDateEdit* self, QMetaMethod* signal) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->connectNotify(*signal);
    } else {
        vqdateedit->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDateEdit_QBaseConnectNotify(QDateEdit* self, QMetaMethod* signal) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_ConnectNotify_IsBase(true);
        vqdateedit->connectNotify(*signal);
    } else {
        vqdateedit->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnConnectNotify(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_ConnectNotify_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_DisconnectNotify(QDateEdit* self, QMetaMethod* signal) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->disconnectNotify(*signal);
    } else {
        vqdateedit->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDateEdit_QBaseDisconnectNotify(QDateEdit* self, QMetaMethod* signal) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_DisconnectNotify_IsBase(true);
        vqdateedit->disconnectNotify(*signal);
    } else {
        vqdateedit->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDisconnectNotify(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QLineEdit* QDateEdit_LineEdit(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->lineEdit();
    } else {
        return vqdateedit->lineEdit();
    }
}

// Base class handler implementation
QLineEdit* QDateEdit_QBaseLineEdit(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_LineEdit_IsBase(true);
        return vqdateedit->lineEdit();
    } else {
        return vqdateedit->lineEdit();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnLineEdit(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_LineEdit_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_LineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_SetLineEdit(QDateEdit* self, QLineEdit* edit) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setLineEdit(edit);
    } else {
        vqdateedit->setLineEdit(edit);
    }
}

// Base class handler implementation
void QDateEdit_QBaseSetLineEdit(QDateEdit* self, QLineEdit* edit) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_SetLineEdit_IsBase(true);
        vqdateedit->setLineEdit(edit);
    } else {
        vqdateedit->setLineEdit(edit);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSetLineEdit(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_SetLineEdit_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_UpdateMicroFocus(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->updateMicroFocus();
    } else {
        vqdateedit->updateMicroFocus();
    }
}

// Base class handler implementation
void QDateEdit_QBaseUpdateMicroFocus(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_UpdateMicroFocus_IsBase(true);
        vqdateedit->updateMicroFocus();
    } else {
        vqdateedit->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnUpdateMicroFocus(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_Create(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->create();
    } else {
        vqdateedit->create();
    }
}

// Base class handler implementation
void QDateEdit_QBaseCreate(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_Create_IsBase(true);
        vqdateedit->create();
    } else {
        vqdateedit->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnCreate(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_Create_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateEdit_Destroy(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->destroy();
    } else {
        vqdateedit->destroy();
    }
}

// Base class handler implementation
void QDateEdit_QBaseDestroy(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_Destroy_IsBase(true);
        vqdateedit->destroy();
    } else {
        vqdateedit->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnDestroy(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_Destroy_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_FocusNextChild(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        return vqdateedit->focusNextChild();
    } else {
        return vqdateedit->focusNextChild();
    }
}

// Base class handler implementation
bool QDateEdit_QBaseFocusNextChild(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_FocusNextChild_IsBase(true);
        return vqdateedit->focusNextChild();
    } else {
        return vqdateedit->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFocusNextChild(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_FocusNextChild_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_FocusPreviousChild(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        return vqdateedit->focusPreviousChild();
    } else {
        return vqdateedit->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDateEdit_QBaseFocusPreviousChild(QDateEdit* self) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_FocusPreviousChild_IsBase(true);
        return vqdateedit->focusPreviousChild();
    } else {
        return vqdateedit->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnFocusPreviousChild(QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = dynamic_cast<VirtualQDateEdit*>(self)) {
        vqdateedit->setQDateEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDateEdit_Sender(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->sender();
    } else {
        return vqdateedit->sender();
    }
}

// Base class handler implementation
QObject* QDateEdit_QBaseSender(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_Sender_IsBase(true);
        return vqdateedit->sender();
    } else {
        return vqdateedit->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSender(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_Sender_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateEdit_SenderSignalIndex(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->senderSignalIndex();
    } else {
        return vqdateedit->senderSignalIndex();
    }
}

// Base class handler implementation
int QDateEdit_QBaseSenderSignalIndex(const QDateEdit* self) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_SenderSignalIndex_IsBase(true);
        return vqdateedit->senderSignalIndex();
    } else {
        return vqdateedit->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnSenderSignalIndex(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateEdit_Receivers(const QDateEdit* self, const char* signal) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->receivers(signal);
    } else {
        return vqdateedit->receivers(signal);
    }
}

// Base class handler implementation
int QDateEdit_QBaseReceivers(const QDateEdit* self, const char* signal) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_Receivers_IsBase(true);
        return vqdateedit->receivers(signal);
    } else {
        return vqdateedit->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnReceivers(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_Receivers_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateEdit_IsSignalConnected(const QDateEdit* self, QMetaMethod* signal) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        return vqdateedit->isSignalConnected(*signal);
    } else {
        return vqdateedit->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDateEdit_QBaseIsSignalConnected(const QDateEdit* self, QMetaMethod* signal) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_IsSignalConnected_IsBase(true);
        return vqdateedit->isSignalConnected(*signal);
    } else {
        return vqdateedit->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateEdit_OnIsSignalConnected(const QDateEdit* self, intptr_t slot) {
    if (auto* vqdateedit = const_cast<VirtualQDateEdit*>(dynamic_cast<const VirtualQDateEdit*>(self))) {
        vqdateedit->setQDateEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualQDateEdit::QDateEdit_IsSignalConnected_Callback>(slot));
    }
}

void QDateEdit_Delete(QDateEdit* self) {
    delete self;
}
