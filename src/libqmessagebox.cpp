#include <QAbstractButton>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QByteArray>
#include <QCheckBox>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDialog>
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
#include <QMessageBox>
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
#include <QPushButton>
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
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qmessagebox.h>
#include "libqmessagebox.hpp"
#include "libqmessagebox.hxx"

QMessageBox* QMessageBox_new(QWidget* parent) {
    return new VirtualQMessageBox(parent);
}

QMessageBox* QMessageBox_new2() {
    return new VirtualQMessageBox();
}

QMessageBox* QMessageBox_new3(int icon, libqt_string title, libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString);
}

QMessageBox* QMessageBox_new4(libqt_string title, libqt_string text, int icon, int button0, int button1, int button2) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

QMessageBox* QMessageBox_new5(int icon, libqt_string title, libqt_string text, int buttons) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
}

QMessageBox* QMessageBox_new6(int icon, libqt_string title, libqt_string text, int buttons, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), parent);
}

QMessageBox* QMessageBox_new7(int icon, libqt_string title, libqt_string text, int buttons, QWidget* parent, int flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), parent, static_cast<Qt::WindowFlags>(flags));
}

QMessageBox* QMessageBox_new8(libqt_string title, libqt_string text, int icon, int button0, int button1, int button2, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2), parent);
}

QMessageBox* QMessageBox_new9(libqt_string title, libqt_string text, int icon, int button0, int button1, int button2, QWidget* parent, int f) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2), parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QMessageBox_MetaObject(const QMessageBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMessageBox_Metacast(QMessageBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMessageBox_Metacall(QMessageBox* self, int param1, int param2, void** param3) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMessageBox_OnMetacall(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Metacall_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QMessageBox_QBaseMetacall(QMessageBox* self, int param1, int param2, void** param3) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Metacall_IsBase(true);
        return vqmessagebox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QMessageBox_Tr(const char* s) {
    QString _ret = QMessageBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QMessageBox_AddButton(QMessageBox* self, QAbstractButton* button, int role) {
    self->addButton(button, static_cast<QMessageBox::ButtonRole>(role));
}

QPushButton* QMessageBox_AddButton2(QMessageBox* self, libqt_string text, int role) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addButton(text_QString, static_cast<QMessageBox::ButtonRole>(role));
}

QPushButton* QMessageBox_AddButtonWithButton(QMessageBox* self, int button) {
    return self->addButton(static_cast<QMessageBox::StandardButton>(button));
}

void QMessageBox_RemoveButton(QMessageBox* self, QAbstractButton* button) {
    self->removeButton(button);
}

libqt_list /* of QAbstractButton* */ QMessageBox_Buttons(const QMessageBox* self) {
    QList<QAbstractButton*> _ret = self->buttons();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractButton** _arr = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

int QMessageBox_ButtonRole(const QMessageBox* self, QAbstractButton* button) {
    return static_cast<int>(self->buttonRole(button));
}

void QMessageBox_SetStandardButtons(QMessageBox* self, int buttons) {
    self->setStandardButtons(static_cast<QMessageBox::StandardButtons>(buttons));
}

int QMessageBox_StandardButtons(const QMessageBox* self) {
    return static_cast<int>(self->standardButtons());
}

int QMessageBox_StandardButton(const QMessageBox* self, QAbstractButton* button) {
    return static_cast<int>(self->standardButton(button));
}

QAbstractButton* QMessageBox_Button(const QMessageBox* self, int which) {
    return self->button(static_cast<QMessageBox::StandardButton>(which));
}

QPushButton* QMessageBox_DefaultButton(const QMessageBox* self) {
    return self->defaultButton();
}

void QMessageBox_SetDefaultButton(QMessageBox* self, QPushButton* button) {
    self->setDefaultButton(button);
}

void QMessageBox_SetDefaultButtonWithButton(QMessageBox* self, int button) {
    self->setDefaultButton(static_cast<QMessageBox::StandardButton>(button));
}

QAbstractButton* QMessageBox_EscapeButton(const QMessageBox* self) {
    return self->escapeButton();
}

void QMessageBox_SetEscapeButton(QMessageBox* self, QAbstractButton* button) {
    self->setEscapeButton(button);
}

void QMessageBox_SetEscapeButtonWithButton(QMessageBox* self, int button) {
    self->setEscapeButton(static_cast<QMessageBox::StandardButton>(button));
}

QAbstractButton* QMessageBox_ClickedButton(const QMessageBox* self) {
    return self->clickedButton();
}

libqt_string QMessageBox_Text(const QMessageBox* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QMessageBox_SetText(QMessageBox* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

int QMessageBox_Icon(const QMessageBox* self) {
    return static_cast<int>(self->icon());
}

void QMessageBox_SetIcon(QMessageBox* self, int icon) {
    self->setIcon(static_cast<QMessageBox::Icon>(icon));
}

QPixmap* QMessageBox_IconPixmap(const QMessageBox* self) {
    return new QPixmap(self->iconPixmap());
}

void QMessageBox_SetIconPixmap(QMessageBox* self, QPixmap* pixmap) {
    self->setIconPixmap(*pixmap);
}

int QMessageBox_TextFormat(const QMessageBox* self) {
    return static_cast<int>(self->textFormat());
}

void QMessageBox_SetTextFormat(QMessageBox* self, int format) {
    self->setTextFormat(static_cast<Qt::TextFormat>(format));
}

void QMessageBox_SetTextInteractionFlags(QMessageBox* self, int flags) {
    self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QMessageBox_TextInteractionFlags(const QMessageBox* self) {
    return static_cast<int>(self->textInteractionFlags());
}

void QMessageBox_SetCheckBox(QMessageBox* self, QCheckBox* cb) {
    self->setCheckBox(cb);
}

QCheckBox* QMessageBox_CheckBox(const QMessageBox* self) {
    return self->checkBox();
}

int QMessageBox_Information(QWidget* parent, libqt_string title, libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::information(parent, title_QString, text_QString));
}

int QMessageBox_Information2(QWidget* parent, libqt_string title, libqt_string text, int button0) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0)));
}

int QMessageBox_Question(QWidget* parent, libqt_string title, libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::question(parent, title_QString, text_QString));
}

int QMessageBox_Question2(QWidget* parent, libqt_string title, libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

int QMessageBox_Warning(QWidget* parent, libqt_string title, libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::warning(parent, title_QString, text_QString));
}

int QMessageBox_Warning2(QWidget* parent, libqt_string title, libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

int QMessageBox_Critical(QWidget* parent, libqt_string title, libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::critical(parent, title_QString, text_QString));
}

int QMessageBox_Critical2(QWidget* parent, libqt_string title, libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

void QMessageBox_About(QWidget* parent, libqt_string title, libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QMessageBox::about(parent, title_QString, text_QString);
}

void QMessageBox_AboutQt(QWidget* parent) {
    QMessageBox::aboutQt(parent);
}

int QMessageBox_Information3(QWidget* parent, libqt_string title, libqt_string text, int button0) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0));
}

int QMessageBox_Information4(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Question3(QWidget* parent, libqt_string title, libqt_string text, int button0) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0));
}

int QMessageBox_Question4(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Warning3(QWidget* parent, libqt_string title, libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Warning4(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Critical3(QWidget* parent, libqt_string title, libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Critical4(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString);
}

libqt_string QMessageBox_ButtonText(const QMessageBox* self, int button) {
    QString _ret = self->buttonText(static_cast<int>(button));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QMessageBox_SetButtonText(QMessageBox* self, int button, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setButtonText(static_cast<int>(button), text_QString);
}

libqt_string QMessageBox_InformativeText(const QMessageBox* self) {
    QString _ret = self->informativeText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QMessageBox_SetInformativeText(QMessageBox* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setInformativeText(text_QString);
}

libqt_string QMessageBox_DetailedText(const QMessageBox* self) {
    QString _ret = self->detailedText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QMessageBox_SetDetailedText(QMessageBox* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setDetailedText(text_QString);
}

void QMessageBox_SetWindowTitle(QMessageBox* self, libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setWindowTitle(title_QString);
}

void QMessageBox_SetWindowModality(QMessageBox* self, int windowModality) {
    self->setWindowModality(static_cast<Qt::WindowModality>(windowModality));
}

QPixmap* QMessageBox_StandardIcon(int icon) {
    return new QPixmap(QMessageBox::standardIcon(static_cast<QMessageBox::Icon>(icon)));
}

void QMessageBox_ButtonClicked(QMessageBox* self, QAbstractButton* button) {
    self->buttonClicked(button);
}

void QMessageBox_Connect_ButtonClicked(QMessageBox* self, intptr_t slot) {
    void (*slotFunc)(QMessageBox*, QAbstractButton*) = reinterpret_cast<void (*)(QMessageBox*, QAbstractButton*)>(slot);
    QMessageBox::connect(self, &QMessageBox::buttonClicked, [self, slotFunc](QAbstractButton* button) {
        QAbstractButton* sigval1 = button;
        slotFunc(self, sigval1);
    });
}

libqt_string QMessageBox_Tr2(const char* s, const char* c) {
    QString _ret = QMessageBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QMessageBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = QMessageBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QMessageBox_Information42(QWidget* parent, libqt_string title, libqt_string text, int buttons) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons)));
}

int QMessageBox_Information5(QWidget* parent, libqt_string title, libqt_string text, int buttons, int defaultButton) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton)));
}

int QMessageBox_Information52(QWidget* parent, libqt_string title, libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1)));
}

int QMessageBox_Question42(QWidget* parent, libqt_string title, libqt_string text, int buttons) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons)));
}

int QMessageBox_Question5(QWidget* parent, libqt_string title, libqt_string text, int buttons, int defaultButton) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton)));
}

int QMessageBox_Warning42(QWidget* parent, libqt_string title, libqt_string text, int buttons) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons)));
}

int QMessageBox_Warning5(QWidget* parent, libqt_string title, libqt_string text, int buttons, int defaultButton) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton)));
}

int QMessageBox_Critical42(QWidget* parent, libqt_string title, libqt_string text, int buttons) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons)));
}

int QMessageBox_Critical5(QWidget* parent, libqt_string title, libqt_string text, int buttons, int defaultButton) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton)));
}

void QMessageBox_AboutQt2(QWidget* parent, libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QMessageBox::aboutQt(parent, title_QString);
}

int QMessageBox_Information53(QWidget* parent, libqt_string title, libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Information6(QWidget* parent, libqt_string title, libqt_string text, int button0, int button1, int button2) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Information54(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Information62(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text, libqt_string button2Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Information7(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text, libqt_string button2Text, int defaultButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Information8(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text, libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

int QMessageBox_Question52(QWidget* parent, libqt_string title, libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Question6(QWidget* parent, libqt_string title, libqt_string text, int button0, int button1, int button2) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Question53(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Question62(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text, libqt_string button2Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Question7(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text, libqt_string button2Text, int defaultButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Question8(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text, libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

int QMessageBox_Warning6(QWidget* parent, libqt_string title, libqt_string text, int button0, int button1, int button2) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Warning52(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Warning62(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text, libqt_string button2Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Warning7(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text, libqt_string button2Text, int defaultButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Warning8(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text, libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

int QMessageBox_Critical6(QWidget* parent, libqt_string title, libqt_string text, int button0, int button1, int button2) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Critical52(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Critical62(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text, libqt_string button2Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Critical7(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text, libqt_string button2Text, int defaultButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Critical8(QWidget* parent, libqt_string title, libqt_string text, libqt_string button0Text, libqt_string button1Text, libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

// Derived class handler implementation
bool QMessageBox_Event(QMessageBox* self, QEvent* e) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        return vqmessagebox->event(e);
    } else {
        return vqmessagebox->event(e);
    }
}

// Base class handler implementation
bool QMessageBox_QBaseEvent(QMessageBox* self, QEvent* e) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Event_IsBase(true);
        return vqmessagebox->event(e);
    } else {
        return vqmessagebox->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Event_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_ResizeEvent(QMessageBox* self, QResizeEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->resizeEvent(event);
    } else {
        vqmessagebox->resizeEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseResizeEvent(QMessageBox* self, QResizeEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_ResizeEvent_IsBase(true);
        vqmessagebox->resizeEvent(event);
    } else {
        vqmessagebox->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnResizeEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_ResizeEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_ShowEvent(QMessageBox* self, QShowEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->showEvent(event);
    } else {
        vqmessagebox->showEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseShowEvent(QMessageBox* self, QShowEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_ShowEvent_IsBase(true);
        vqmessagebox->showEvent(event);
    } else {
        vqmessagebox->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnShowEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_ShowEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_CloseEvent(QMessageBox* self, QCloseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->closeEvent(event);
    } else {
        vqmessagebox->closeEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseCloseEvent(QMessageBox* self, QCloseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_CloseEvent_IsBase(true);
        vqmessagebox->closeEvent(event);
    } else {
        vqmessagebox->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnCloseEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_CloseEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_KeyPressEvent(QMessageBox* self, QKeyEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->keyPressEvent(event);
    } else {
        vqmessagebox->keyPressEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseKeyPressEvent(QMessageBox* self, QKeyEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_KeyPressEvent_IsBase(true);
        vqmessagebox->keyPressEvent(event);
    } else {
        vqmessagebox->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnKeyPressEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_ChangeEvent(QMessageBox* self, QEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->changeEvent(event);
    } else {
        vqmessagebox->changeEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseChangeEvent(QMessageBox* self, QEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_ChangeEvent_IsBase(true);
        vqmessagebox->changeEvent(event);
    } else {
        vqmessagebox->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnChangeEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_ChangeEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_SetVisible(QMessageBox* self, bool visible) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setVisible(visible);
    } else {
        vqmessagebox->setVisible(visible);
    }
}

// Base class handler implementation
void QMessageBox_QBaseSetVisible(QMessageBox* self, bool visible) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_SetVisible_IsBase(true);
        vqmessagebox->setVisible(visible);
    } else {
        vqmessagebox->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnSetVisible(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_SetVisible_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QMessageBox_SizeHint(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return new QSize(vqmessagebox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QMessageBox_QBaseSizeHint(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_SizeHint_IsBase(true);
        return new QSize(vqmessagebox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnSizeHint(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_SizeHint_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QMessageBox_MinimumSizeHint(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return new QSize(vqmessagebox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QMessageBox_QBaseMinimumSizeHint(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_MinimumSizeHint_IsBase(true);
        return new QSize(vqmessagebox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMinimumSizeHint(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_Open(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->open();
    } else {
        vqmessagebox->open();
    }
}

// Base class handler implementation
void QMessageBox_QBaseOpen(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Open_IsBase(true);
        vqmessagebox->open();
    } else {
        vqmessagebox->open();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnOpen(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Open_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int QMessageBox_Exec(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        return vqmessagebox->exec();
    } else {
        return vqmessagebox->exec();
    }
}

// Base class handler implementation
int QMessageBox_QBaseExec(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Exec_IsBase(true);
        return vqmessagebox->exec();
    } else {
        return vqmessagebox->exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnExec(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Exec_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_Done(QMessageBox* self, int param1) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->done(static_cast<int>(param1));
    } else {
        vqmessagebox->done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void QMessageBox_QBaseDone(QMessageBox* self, int param1) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Done_IsBase(true);
        vqmessagebox->done(static_cast<int>(param1));
    } else {
        vqmessagebox->done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDone(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Done_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_Accept(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->accept();
    } else {
        vqmessagebox->accept();
    }
}

// Base class handler implementation
void QMessageBox_QBaseAccept(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Accept_IsBase(true);
        vqmessagebox->accept();
    } else {
        vqmessagebox->accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnAccept(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Accept_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_Reject(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->reject();
    } else {
        vqmessagebox->reject();
    }
}

// Base class handler implementation
void QMessageBox_QBaseReject(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Reject_IsBase(true);
        vqmessagebox->reject();
    } else {
        vqmessagebox->reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnReject(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Reject_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_ContextMenuEvent(QMessageBox* self, QContextMenuEvent* param1) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->contextMenuEvent(param1);
    } else {
        vqmessagebox->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QMessageBox_QBaseContextMenuEvent(QMessageBox* self, QContextMenuEvent* param1) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_ContextMenuEvent_IsBase(true);
        vqmessagebox->contextMenuEvent(param1);
    } else {
        vqmessagebox->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnContextMenuEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMessageBox_EventFilter(QMessageBox* self, QObject* param1, QEvent* param2) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        return vqmessagebox->eventFilter(param1, param2);
    } else {
        return vqmessagebox->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QMessageBox_QBaseEventFilter(QMessageBox* self, QObject* param1, QEvent* param2) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_EventFilter_IsBase(true);
        return vqmessagebox->eventFilter(param1, param2);
    } else {
        return vqmessagebox->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnEventFilter(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_EventFilter_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QMessageBox_DevType(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->devType();
    } else {
        return vqmessagebox->devType();
    }
}

// Base class handler implementation
int QMessageBox_QBaseDevType(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_DevType_IsBase(true);
        return vqmessagebox->devType();
    } else {
        return vqmessagebox->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDevType(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_DevType_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QMessageBox_HeightForWidth(const QMessageBox* self, int param1) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqmessagebox->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QMessageBox_QBaseHeightForWidth(const QMessageBox* self, int param1) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_HeightForWidth_IsBase(true);
        return vqmessagebox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqmessagebox->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnHeightForWidth(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_HeightForWidth_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMessageBox_HasHeightForWidth(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->hasHeightForWidth();
    } else {
        return vqmessagebox->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QMessageBox_QBaseHasHeightForWidth(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_HasHeightForWidth_IsBase(true);
        return vqmessagebox->hasHeightForWidth();
    } else {
        return vqmessagebox->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnHasHeightForWidth(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QMessageBox_PaintEngine(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->paintEngine();
    } else {
        return vqmessagebox->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QMessageBox_QBasePaintEngine(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_PaintEngine_IsBase(true);
        return vqmessagebox->paintEngine();
    } else {
        return vqmessagebox->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnPaintEngine(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_PaintEngine_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_MousePressEvent(QMessageBox* self, QMouseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->mousePressEvent(event);
    } else {
        vqmessagebox->mousePressEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseMousePressEvent(QMessageBox* self, QMouseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_MousePressEvent_IsBase(true);
        vqmessagebox->mousePressEvent(event);
    } else {
        vqmessagebox->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMousePressEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_MousePressEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_MouseReleaseEvent(QMessageBox* self, QMouseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->mouseReleaseEvent(event);
    } else {
        vqmessagebox->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseMouseReleaseEvent(QMessageBox* self, QMouseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_MouseReleaseEvent_IsBase(true);
        vqmessagebox->mouseReleaseEvent(event);
    } else {
        vqmessagebox->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMouseReleaseEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_MouseDoubleClickEvent(QMessageBox* self, QMouseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->mouseDoubleClickEvent(event);
    } else {
        vqmessagebox->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseMouseDoubleClickEvent(QMessageBox* self, QMouseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_MouseDoubleClickEvent_IsBase(true);
        vqmessagebox->mouseDoubleClickEvent(event);
    } else {
        vqmessagebox->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMouseDoubleClickEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_MouseMoveEvent(QMessageBox* self, QMouseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->mouseMoveEvent(event);
    } else {
        vqmessagebox->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseMouseMoveEvent(QMessageBox* self, QMouseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_MouseMoveEvent_IsBase(true);
        vqmessagebox->mouseMoveEvent(event);
    } else {
        vqmessagebox->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMouseMoveEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_WheelEvent(QMessageBox* self, QWheelEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->wheelEvent(event);
    } else {
        vqmessagebox->wheelEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseWheelEvent(QMessageBox* self, QWheelEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_WheelEvent_IsBase(true);
        vqmessagebox->wheelEvent(event);
    } else {
        vqmessagebox->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnWheelEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_WheelEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_KeyReleaseEvent(QMessageBox* self, QKeyEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->keyReleaseEvent(event);
    } else {
        vqmessagebox->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseKeyReleaseEvent(QMessageBox* self, QKeyEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_KeyReleaseEvent_IsBase(true);
        vqmessagebox->keyReleaseEvent(event);
    } else {
        vqmessagebox->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnKeyReleaseEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_FocusInEvent(QMessageBox* self, QFocusEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->focusInEvent(event);
    } else {
        vqmessagebox->focusInEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseFocusInEvent(QMessageBox* self, QFocusEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_FocusInEvent_IsBase(true);
        vqmessagebox->focusInEvent(event);
    } else {
        vqmessagebox->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnFocusInEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_FocusInEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_FocusOutEvent(QMessageBox* self, QFocusEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->focusOutEvent(event);
    } else {
        vqmessagebox->focusOutEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseFocusOutEvent(QMessageBox* self, QFocusEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_FocusOutEvent_IsBase(true);
        vqmessagebox->focusOutEvent(event);
    } else {
        vqmessagebox->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnFocusOutEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_EnterEvent(QMessageBox* self, QEnterEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->enterEvent(event);
    } else {
        vqmessagebox->enterEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseEnterEvent(QMessageBox* self, QEnterEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_EnterEvent_IsBase(true);
        vqmessagebox->enterEvent(event);
    } else {
        vqmessagebox->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnEnterEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_EnterEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_LeaveEvent(QMessageBox* self, QEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->leaveEvent(event);
    } else {
        vqmessagebox->leaveEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseLeaveEvent(QMessageBox* self, QEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_LeaveEvent_IsBase(true);
        vqmessagebox->leaveEvent(event);
    } else {
        vqmessagebox->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnLeaveEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_LeaveEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_PaintEvent(QMessageBox* self, QPaintEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->paintEvent(event);
    } else {
        vqmessagebox->paintEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBasePaintEvent(QMessageBox* self, QPaintEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_PaintEvent_IsBase(true);
        vqmessagebox->paintEvent(event);
    } else {
        vqmessagebox->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnPaintEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_PaintEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_MoveEvent(QMessageBox* self, QMoveEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->moveEvent(event);
    } else {
        vqmessagebox->moveEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseMoveEvent(QMessageBox* self, QMoveEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_MoveEvent_IsBase(true);
        vqmessagebox->moveEvent(event);
    } else {
        vqmessagebox->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMoveEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_MoveEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_TabletEvent(QMessageBox* self, QTabletEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->tabletEvent(event);
    } else {
        vqmessagebox->tabletEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseTabletEvent(QMessageBox* self, QTabletEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_TabletEvent_IsBase(true);
        vqmessagebox->tabletEvent(event);
    } else {
        vqmessagebox->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnTabletEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_TabletEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_ActionEvent(QMessageBox* self, QActionEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->actionEvent(event);
    } else {
        vqmessagebox->actionEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseActionEvent(QMessageBox* self, QActionEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_ActionEvent_IsBase(true);
        vqmessagebox->actionEvent(event);
    } else {
        vqmessagebox->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnActionEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_ActionEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_DragEnterEvent(QMessageBox* self, QDragEnterEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->dragEnterEvent(event);
    } else {
        vqmessagebox->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseDragEnterEvent(QMessageBox* self, QDragEnterEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_DragEnterEvent_IsBase(true);
        vqmessagebox->dragEnterEvent(event);
    } else {
        vqmessagebox->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDragEnterEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_DragEnterEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_DragMoveEvent(QMessageBox* self, QDragMoveEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->dragMoveEvent(event);
    } else {
        vqmessagebox->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseDragMoveEvent(QMessageBox* self, QDragMoveEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_DragMoveEvent_IsBase(true);
        vqmessagebox->dragMoveEvent(event);
    } else {
        vqmessagebox->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDragMoveEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_DragMoveEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_DragLeaveEvent(QMessageBox* self, QDragLeaveEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->dragLeaveEvent(event);
    } else {
        vqmessagebox->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseDragLeaveEvent(QMessageBox* self, QDragLeaveEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_DragLeaveEvent_IsBase(true);
        vqmessagebox->dragLeaveEvent(event);
    } else {
        vqmessagebox->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDragLeaveEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_DropEvent(QMessageBox* self, QDropEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->dropEvent(event);
    } else {
        vqmessagebox->dropEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseDropEvent(QMessageBox* self, QDropEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_DropEvent_IsBase(true);
        vqmessagebox->dropEvent(event);
    } else {
        vqmessagebox->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDropEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_DropEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_HideEvent(QMessageBox* self, QHideEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->hideEvent(event);
    } else {
        vqmessagebox->hideEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseHideEvent(QMessageBox* self, QHideEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_HideEvent_IsBase(true);
        vqmessagebox->hideEvent(event);
    } else {
        vqmessagebox->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnHideEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_HideEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMessageBox_NativeEvent(QMessageBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        return vqmessagebox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqmessagebox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QMessageBox_QBaseNativeEvent(QMessageBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_NativeEvent_IsBase(true);
        return vqmessagebox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqmessagebox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnNativeEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_NativeEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QMessageBox_Metric(const QMessageBox* self, int param1) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqmessagebox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QMessageBox_QBaseMetric(const QMessageBox* self, int param1) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_Metric_IsBase(true);
        return vqmessagebox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqmessagebox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMetric(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_Metric_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_InitPainter(const QMessageBox* self, QPainter* painter) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->initPainter(painter);
    } else {
        vqmessagebox->initPainter(painter);
    }
}

// Base class handler implementation
void QMessageBox_QBaseInitPainter(const QMessageBox* self, QPainter* painter) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_InitPainter_IsBase(true);
        vqmessagebox->initPainter(painter);
    } else {
        vqmessagebox->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnInitPainter(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_InitPainter_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QMessageBox_Redirected(const QMessageBox* self, QPoint* offset) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->redirected(offset);
    } else {
        return vqmessagebox->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QMessageBox_QBaseRedirected(const QMessageBox* self, QPoint* offset) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_Redirected_IsBase(true);
        return vqmessagebox->redirected(offset);
    } else {
        return vqmessagebox->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnRedirected(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_Redirected_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QMessageBox_SharedPainter(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->sharedPainter();
    } else {
        return vqmessagebox->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QMessageBox_QBaseSharedPainter(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_SharedPainter_IsBase(true);
        return vqmessagebox->sharedPainter();
    } else {
        return vqmessagebox->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnSharedPainter(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_SharedPainter_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_InputMethodEvent(QMessageBox* self, QInputMethodEvent* param1) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->inputMethodEvent(param1);
    } else {
        vqmessagebox->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QMessageBox_QBaseInputMethodEvent(QMessageBox* self, QInputMethodEvent* param1) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_InputMethodEvent_IsBase(true);
        vqmessagebox->inputMethodEvent(param1);
    } else {
        vqmessagebox->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnInputMethodEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QMessageBox_InputMethodQuery(const QMessageBox* self, int param1) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return new QVariant(vqmessagebox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QMessageBox_QBaseInputMethodQuery(const QMessageBox* self, int param1) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_InputMethodQuery_IsBase(true);
        return new QVariant(vqmessagebox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnInputMethodQuery(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMessageBox_FocusNextPrevChild(QMessageBox* self, bool next) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        return vqmessagebox->focusNextPrevChild(next);
    } else {
        return vqmessagebox->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QMessageBox_QBaseFocusNextPrevChild(QMessageBox* self, bool next) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_FocusNextPrevChild_IsBase(true);
        return vqmessagebox->focusNextPrevChild(next);
    } else {
        return vqmessagebox->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnFocusNextPrevChild(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_TimerEvent(QMessageBox* self, QTimerEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->timerEvent(event);
    } else {
        vqmessagebox->timerEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseTimerEvent(QMessageBox* self, QTimerEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_TimerEvent_IsBase(true);
        vqmessagebox->timerEvent(event);
    } else {
        vqmessagebox->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnTimerEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_TimerEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_ChildEvent(QMessageBox* self, QChildEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->childEvent(event);
    } else {
        vqmessagebox->childEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseChildEvent(QMessageBox* self, QChildEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_ChildEvent_IsBase(true);
        vqmessagebox->childEvent(event);
    } else {
        vqmessagebox->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnChildEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_ChildEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_CustomEvent(QMessageBox* self, QEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->customEvent(event);
    } else {
        vqmessagebox->customEvent(event);
    }
}

// Base class handler implementation
void QMessageBox_QBaseCustomEvent(QMessageBox* self, QEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_CustomEvent_IsBase(true);
        vqmessagebox->customEvent(event);
    } else {
        vqmessagebox->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnCustomEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_CustomEvent_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_ConnectNotify(QMessageBox* self, QMetaMethod* signal) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->connectNotify(*signal);
    } else {
        vqmessagebox->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMessageBox_QBaseConnectNotify(QMessageBox* self, QMetaMethod* signal) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_ConnectNotify_IsBase(true);
        vqmessagebox->connectNotify(*signal);
    } else {
        vqmessagebox->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnConnectNotify(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_ConnectNotify_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_DisconnectNotify(QMessageBox* self, QMetaMethod* signal) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->disconnectNotify(*signal);
    } else {
        vqmessagebox->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMessageBox_QBaseDisconnectNotify(QMessageBox* self, QMetaMethod* signal) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_DisconnectNotify_IsBase(true);
        vqmessagebox->disconnectNotify(*signal);
    } else {
        vqmessagebox->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDisconnectNotify(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_DisconnectNotify_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_AdjustPosition(QMessageBox* self, QWidget* param1) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->adjustPosition(param1);
    } else {
        vqmessagebox->adjustPosition(param1);
    }
}

// Base class handler implementation
void QMessageBox_QBaseAdjustPosition(QMessageBox* self, QWidget* param1) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_AdjustPosition_IsBase(true);
        vqmessagebox->adjustPosition(param1);
    } else {
        vqmessagebox->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnAdjustPosition(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_AdjustPosition_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_UpdateMicroFocus(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->updateMicroFocus();
    } else {
        vqmessagebox->updateMicroFocus();
    }
}

// Base class handler implementation
void QMessageBox_QBaseUpdateMicroFocus(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_UpdateMicroFocus_IsBase(true);
        vqmessagebox->updateMicroFocus();
    } else {
        vqmessagebox->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnUpdateMicroFocus(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_Create(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->create();
    } else {
        vqmessagebox->create();
    }
}

// Base class handler implementation
void QMessageBox_QBaseCreate(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Create_IsBase(true);
        vqmessagebox->create();
    } else {
        vqmessagebox->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnCreate(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Create_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QMessageBox_Destroy(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->destroy();
    } else {
        vqmessagebox->destroy();
    }
}

// Base class handler implementation
void QMessageBox_QBaseDestroy(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Destroy_IsBase(true);
        vqmessagebox->destroy();
    } else {
        vqmessagebox->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDestroy(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_Destroy_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMessageBox_FocusNextChild(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        return vqmessagebox->focusNextChild();
    } else {
        return vqmessagebox->focusNextChild();
    }
}

// Base class handler implementation
bool QMessageBox_QBaseFocusNextChild(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_FocusNextChild_IsBase(true);
        return vqmessagebox->focusNextChild();
    } else {
        return vqmessagebox->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnFocusNextChild(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_FocusNextChild_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMessageBox_FocusPreviousChild(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        return vqmessagebox->focusPreviousChild();
    } else {
        return vqmessagebox->focusPreviousChild();
    }
}

// Base class handler implementation
bool QMessageBox_QBaseFocusPreviousChild(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_FocusPreviousChild_IsBase(true);
        return vqmessagebox->focusPreviousChild();
    } else {
        return vqmessagebox->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnFocusPreviousChild(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->setQMessageBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMessageBox_Sender(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->sender();
    } else {
        return vqmessagebox->sender();
    }
}

// Base class handler implementation
QObject* QMessageBox_QBaseSender(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_Sender_IsBase(true);
        return vqmessagebox->sender();
    } else {
        return vqmessagebox->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnSender(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_Sender_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMessageBox_SenderSignalIndex(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->senderSignalIndex();
    } else {
        return vqmessagebox->senderSignalIndex();
    }
}

// Base class handler implementation
int QMessageBox_QBaseSenderSignalIndex(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_SenderSignalIndex_IsBase(true);
        return vqmessagebox->senderSignalIndex();
    } else {
        return vqmessagebox->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnSenderSignalIndex(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMessageBox_Receivers(const QMessageBox* self, const char* signal) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->receivers(signal);
    } else {
        return vqmessagebox->receivers(signal);
    }
}

// Base class handler implementation
int QMessageBox_QBaseReceivers(const QMessageBox* self, const char* signal) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_Receivers_IsBase(true);
        return vqmessagebox->receivers(signal);
    } else {
        return vqmessagebox->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnReceivers(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_Receivers_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMessageBox_IsSignalConnected(const QMessageBox* self, QMetaMethod* signal) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->isSignalConnected(*signal);
    } else {
        return vqmessagebox->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMessageBox_QBaseIsSignalConnected(const QMessageBox* self, QMetaMethod* signal) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_IsSignalConnected_IsBase(true);
        return vqmessagebox->isSignalConnected(*signal);
    } else {
        return vqmessagebox->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnIsSignalConnected(const QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->setQMessageBox_IsSignalConnected_Callback(reinterpret_cast<VirtualQMessageBox::QMessageBox_IsSignalConnected_Callback>(slot));
    }
}

void QMessageBox_Delete(QMessageBox* self) {
    delete self;
}
