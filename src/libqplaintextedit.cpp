#include <QAbstractScrollArea>
#include <QAbstractTextDocumentLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext
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
#include <QFrame>
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
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPlainTextDocumentLayout>
#include <QPlainTextEdit>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QRegularExpression>
#include <QResizeEvent>
#include <QScreen>
#include <QScrollBar>
#include <QShowEvent>
#include <QSize>
#include <QSizeF>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextBlock>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection
#include <QTextFormat>
#include <QTextFrame>
#include <QTextInlineObject>
#include <QTextObjectInterface>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qplaintextedit.h>
#include "libqplaintextedit.hpp"
#include "libqplaintextedit.hxx"

QPlainTextEdit* QPlainTextEdit_new(QWidget* parent) {
    return new VirtualQPlainTextEdit(parent);
}

QPlainTextEdit* QPlainTextEdit_new2() {
    return new VirtualQPlainTextEdit();
}

QPlainTextEdit* QPlainTextEdit_new3(libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPlainTextEdit(text_QString);
}

QPlainTextEdit* QPlainTextEdit_new4(libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPlainTextEdit(text_QString, parent);
}

QMetaObject* QPlainTextEdit_MetaObject(const QPlainTextEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlainTextEdit_Metacast(QPlainTextEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlainTextEdit_Metacall(QPlainTextEdit* self, int param1, int param2, void** param3) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPlainTextEdit_OnMetacall(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_Metacall_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPlainTextEdit_QBaseMetacall(QPlainTextEdit* self, int param1, int param2, void** param3) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_Metacall_IsBase(true);
        return vqplaintextedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPlainTextEdit_Tr(const char* s) {
    QString _ret = QPlainTextEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPlainTextEdit_SetDocument(QPlainTextEdit* self, QTextDocument* document) {
    self->setDocument(document);
}

QTextDocument* QPlainTextEdit_Document(const QPlainTextEdit* self) {
    return self->document();
}

void QPlainTextEdit_SetPlaceholderText(QPlainTextEdit* self, libqt_string placeholderText) {
    QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
    self->setPlaceholderText(placeholderText_QString);
}

libqt_string QPlainTextEdit_PlaceholderText(const QPlainTextEdit* self) {
    QString _ret = self->placeholderText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPlainTextEdit_SetTextCursor(QPlainTextEdit* self, QTextCursor* cursor) {
    self->setTextCursor(*cursor);
}

QTextCursor* QPlainTextEdit_TextCursor(const QPlainTextEdit* self) {
    return new QTextCursor(self->textCursor());
}

bool QPlainTextEdit_IsReadOnly(const QPlainTextEdit* self) {
    return self->isReadOnly();
}

void QPlainTextEdit_SetReadOnly(QPlainTextEdit* self, bool ro) {
    self->setReadOnly(ro);
}

void QPlainTextEdit_SetTextInteractionFlags(QPlainTextEdit* self, int flags) {
    self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QPlainTextEdit_TextInteractionFlags(const QPlainTextEdit* self) {
    return static_cast<int>(self->textInteractionFlags());
}

void QPlainTextEdit_MergeCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* modifier) {
    self->mergeCurrentCharFormat(*modifier);
}

void QPlainTextEdit_SetCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* format) {
    self->setCurrentCharFormat(*format);
}

QTextCharFormat* QPlainTextEdit_CurrentCharFormat(const QPlainTextEdit* self) {
    return new QTextCharFormat(self->currentCharFormat());
}

bool QPlainTextEdit_TabChangesFocus(const QPlainTextEdit* self) {
    return self->tabChangesFocus();
}

void QPlainTextEdit_SetTabChangesFocus(QPlainTextEdit* self, bool b) {
    self->setTabChangesFocus(b);
}

void QPlainTextEdit_SetDocumentTitle(QPlainTextEdit* self, libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setDocumentTitle(title_QString);
}

libqt_string QPlainTextEdit_DocumentTitle(const QPlainTextEdit* self) {
    QString _ret = self->documentTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QPlainTextEdit_IsUndoRedoEnabled(const QPlainTextEdit* self) {
    return self->isUndoRedoEnabled();
}

void QPlainTextEdit_SetUndoRedoEnabled(QPlainTextEdit* self, bool enable) {
    self->setUndoRedoEnabled(enable);
}

void QPlainTextEdit_SetMaximumBlockCount(QPlainTextEdit* self, int maximum) {
    self->setMaximumBlockCount(static_cast<int>(maximum));
}

int QPlainTextEdit_MaximumBlockCount(const QPlainTextEdit* self) {
    return self->maximumBlockCount();
}

int QPlainTextEdit_LineWrapMode(const QPlainTextEdit* self) {
    return static_cast<int>(self->lineWrapMode());
}

void QPlainTextEdit_SetLineWrapMode(QPlainTextEdit* self, int mode) {
    self->setLineWrapMode(static_cast<QPlainTextEdit::LineWrapMode>(mode));
}

int QPlainTextEdit_WordWrapMode(const QPlainTextEdit* self) {
    return static_cast<int>(self->wordWrapMode());
}

void QPlainTextEdit_SetWordWrapMode(QPlainTextEdit* self, int policy) {
    self->setWordWrapMode(static_cast<QTextOption::WrapMode>(policy));
}

void QPlainTextEdit_SetBackgroundVisible(QPlainTextEdit* self, bool visible) {
    self->setBackgroundVisible(visible);
}

bool QPlainTextEdit_BackgroundVisible(const QPlainTextEdit* self) {
    return self->backgroundVisible();
}

void QPlainTextEdit_SetCenterOnScroll(QPlainTextEdit* self, bool enabled) {
    self->setCenterOnScroll(enabled);
}

bool QPlainTextEdit_CenterOnScroll(const QPlainTextEdit* self) {
    return self->centerOnScroll();
}

bool QPlainTextEdit_Find(QPlainTextEdit* self, libqt_string exp) {
    QString exp_QString = QString::fromUtf8(exp.data, exp.len);
    return self->find(exp_QString);
}

bool QPlainTextEdit_FindWithExp(QPlainTextEdit* self, QRegularExpression* exp) {
    return self->find(*exp);
}

libqt_string QPlainTextEdit_ToPlainText(const QPlainTextEdit* self) {
    QString _ret = self->toPlainText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPlainTextEdit_EnsureCursorVisible(QPlainTextEdit* self) {
    self->ensureCursorVisible();
}

QMenu* QPlainTextEdit_CreateStandardContextMenu(QPlainTextEdit* self) {
    return self->createStandardContextMenu();
}

QMenu* QPlainTextEdit_CreateStandardContextMenuWithPosition(QPlainTextEdit* self, QPoint* position) {
    return self->createStandardContextMenu(*position);
}

QTextCursor* QPlainTextEdit_CursorForPosition(const QPlainTextEdit* self, QPoint* pos) {
    return new QTextCursor(self->cursorForPosition(*pos));
}

QRect* QPlainTextEdit_CursorRect(const QPlainTextEdit* self, QTextCursor* cursor) {
    return new QRect(self->cursorRect(*cursor));
}

QRect* QPlainTextEdit_CursorRect2(const QPlainTextEdit* self) {
    return new QRect(self->cursorRect());
}

libqt_string QPlainTextEdit_AnchorAt(const QPlainTextEdit* self, QPoint* pos) {
    QString _ret = self->anchorAt(*pos);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QPlainTextEdit_OverwriteMode(const QPlainTextEdit* self) {
    return self->overwriteMode();
}

void QPlainTextEdit_SetOverwriteMode(QPlainTextEdit* self, bool overwrite) {
    self->setOverwriteMode(overwrite);
}

double QPlainTextEdit_TabStopDistance(const QPlainTextEdit* self) {
    return static_cast<double>(self->tabStopDistance());
}

void QPlainTextEdit_SetTabStopDistance(QPlainTextEdit* self, double distance) {
    self->setTabStopDistance(static_cast<qreal>(distance));
}

int QPlainTextEdit_CursorWidth(const QPlainTextEdit* self) {
    return self->cursorWidth();
}

void QPlainTextEdit_SetCursorWidth(QPlainTextEdit* self, int width) {
    self->setCursorWidth(static_cast<int>(width));
}

void QPlainTextEdit_SetExtraSelections(QPlainTextEdit* self, libqt_list /* of QTextEdit__ExtraSelection* */ selections) {
    QList<QTextEdit::ExtraSelection> selections_QList;
    selections_QList.reserve(selections.len);
    QTextEdit__ExtraSelection** selections_arr = static_cast<QTextEdit__ExtraSelection**>(selections.data.ptr);
    for (size_t i = 0; i < selections.len; ++i) {
        selections_QList.push_back(*(selections_arr[i]));
    }
    self->setExtraSelections(selections_QList);
}

libqt_list /* of QTextEdit__ExtraSelection* */ QPlainTextEdit_ExtraSelections(const QPlainTextEdit* self) {
    QList<QTextEdit::ExtraSelection> _ret = self->extraSelections();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTextEdit__ExtraSelection** _arr = static_cast<QTextEdit__ExtraSelection**>(malloc(sizeof(QTextEdit__ExtraSelection*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QTextEdit::ExtraSelection(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QPlainTextEdit_MoveCursor(QPlainTextEdit* self, int operation) {
    self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation));
}

bool QPlainTextEdit_CanPaste(const QPlainTextEdit* self) {
    return self->canPaste();
}

void QPlainTextEdit_Print(const QPlainTextEdit* self, QPagedPaintDevice* printer) {
    self->print(printer);
}

int QPlainTextEdit_BlockCount(const QPlainTextEdit* self) {
    return self->blockCount();
}

QVariant* QPlainTextEdit_InputMethodQuery2(const QPlainTextEdit* self, int query, QVariant* argument) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QPlainTextEdit_SetPlainText(QPlainTextEdit* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setPlainText(text_QString);
}

void QPlainTextEdit_Cut(QPlainTextEdit* self) {
    self->cut();
}

void QPlainTextEdit_Copy(QPlainTextEdit* self) {
    self->copy();
}

void QPlainTextEdit_Paste(QPlainTextEdit* self) {
    self->paste();
}

void QPlainTextEdit_Undo(QPlainTextEdit* self) {
    self->undo();
}

void QPlainTextEdit_Redo(QPlainTextEdit* self) {
    self->redo();
}

void QPlainTextEdit_Clear(QPlainTextEdit* self) {
    self->clear();
}

void QPlainTextEdit_SelectAll(QPlainTextEdit* self) {
    self->selectAll();
}

void QPlainTextEdit_InsertPlainText(QPlainTextEdit* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertPlainText(text_QString);
}

void QPlainTextEdit_AppendPlainText(QPlainTextEdit* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->appendPlainText(text_QString);
}

void QPlainTextEdit_AppendHtml(QPlainTextEdit* self, libqt_string html) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    self->appendHtml(html_QString);
}

void QPlainTextEdit_CenterCursor(QPlainTextEdit* self) {
    self->centerCursor();
}

void QPlainTextEdit_ZoomIn(QPlainTextEdit* self) {
    self->zoomIn();
}

void QPlainTextEdit_ZoomOut(QPlainTextEdit* self) {
    self->zoomOut();
}

void QPlainTextEdit_TextChanged(QPlainTextEdit* self) {
    self->textChanged();
}

void QPlainTextEdit_Connect_TextChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*) = reinterpret_cast<void (*)(QPlainTextEdit*)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::textChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPlainTextEdit_UndoAvailable(QPlainTextEdit* self, bool b) {
    self->undoAvailable(b);
}

void QPlainTextEdit_Connect_UndoAvailable(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::undoAvailable, [self, slotFunc](bool b) {
        bool sigval1 = b;
        slotFunc(self, sigval1);
    });
}

void QPlainTextEdit_RedoAvailable(QPlainTextEdit* self, bool b) {
    self->redoAvailable(b);
}

void QPlainTextEdit_Connect_RedoAvailable(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::redoAvailable, [self, slotFunc](bool b) {
        bool sigval1 = b;
        slotFunc(self, sigval1);
    });
}

void QPlainTextEdit_CopyAvailable(QPlainTextEdit* self, bool b) {
    self->copyAvailable(b);
}

void QPlainTextEdit_Connect_CopyAvailable(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::copyAvailable, [self, slotFunc](bool b) {
        bool sigval1 = b;
        slotFunc(self, sigval1);
    });
}

void QPlainTextEdit_SelectionChanged(QPlainTextEdit* self) {
    self->selectionChanged();
}

void QPlainTextEdit_Connect_SelectionChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*) = reinterpret_cast<void (*)(QPlainTextEdit*)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::selectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPlainTextEdit_CursorPositionChanged(QPlainTextEdit* self) {
    self->cursorPositionChanged();
}

void QPlainTextEdit_Connect_CursorPositionChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*) = reinterpret_cast<void (*)(QPlainTextEdit*)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::cursorPositionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPlainTextEdit_UpdateRequest(QPlainTextEdit* self, QRect* rect, int dy) {
    self->updateRequest(*rect, static_cast<int>(dy));
}

void QPlainTextEdit_Connect_UpdateRequest(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, QRect*, int) = reinterpret_cast<void (*)(QPlainTextEdit*, QRect*, int)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::updateRequest, [self, slotFunc](const QRect& rect, int dy) {
        const QRect& rect_ret = rect;
        // Cast returned reference into pointer
        QRect* sigval1 = const_cast<QRect*>(&rect_ret);
        int sigval2 = dy;
        slotFunc(self, sigval1, sigval2);
    });
}

void QPlainTextEdit_BlockCountChanged(QPlainTextEdit* self, int newBlockCount) {
    self->blockCountChanged(static_cast<int>(newBlockCount));
}

void QPlainTextEdit_Connect_BlockCountChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, int) = reinterpret_cast<void (*)(QPlainTextEdit*, int)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::blockCountChanged, [self, slotFunc](int newBlockCount) {
        int sigval1 = newBlockCount;
        slotFunc(self, sigval1);
    });
}

void QPlainTextEdit_ModificationChanged(QPlainTextEdit* self, bool param1) {
    self->modificationChanged(param1);
}

void QPlainTextEdit_Connect_ModificationChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::modificationChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

libqt_string QPlainTextEdit_Tr2(const char* s, const char* c) {
    QString _ret = QPlainTextEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPlainTextEdit_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPlainTextEdit::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QPlainTextEdit_Find2(QPlainTextEdit* self, libqt_string exp, int options) {
    QString exp_QString = QString::fromUtf8(exp.data, exp.len);
    return self->find(exp_QString, static_cast<QTextDocument::FindFlags>(options));
}

bool QPlainTextEdit_Find22(QPlainTextEdit* self, QRegularExpression* exp, int options) {
    return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

void QPlainTextEdit_MoveCursor2(QPlainTextEdit* self, int operation, int mode) {
    self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation), static_cast<QTextCursor::MoveMode>(mode));
}

void QPlainTextEdit_ZoomIn1(QPlainTextEdit* self, int range) {
    self->zoomIn(static_cast<int>(range));
}

void QPlainTextEdit_ZoomOut1(QPlainTextEdit* self, int range) {
    self->zoomOut(static_cast<int>(range));
}

// Derived class handler implementation
QVariant* QPlainTextEdit_LoadResource(QPlainTextEdit* self, int typeVal, QUrl* name) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return new QVariant(vqplaintextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Base class handler implementation
QVariant* QPlainTextEdit_QBaseLoadResource(QPlainTextEdit* self, int typeVal, QUrl* name) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_LoadResource_IsBase(true);
        return new QVariant(vqplaintextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnLoadResource(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_LoadResource_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPlainTextEdit_InputMethodQuery(const QPlainTextEdit* self, int property) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return new QVariant(vqplaintextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Base class handler implementation
QVariant* QPlainTextEdit_QBaseInputMethodQuery(const QPlainTextEdit* self, int property) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vqplaintextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInputMethodQuery(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_Event(QPlainTextEdit* self, QEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return vqplaintextedit->event(e);
    } else {
        return vqplaintextedit->event(e);
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseEvent(QPlainTextEdit* self, QEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_Event_IsBase(true);
        return vqplaintextedit->event(e);
    } else {
        return vqplaintextedit->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_Event_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_TimerEvent(QPlainTextEdit* self, QTimerEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->timerEvent(e);
    } else {
        vqplaintextedit->timerEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseTimerEvent(QPlainTextEdit* self, QTimerEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_TimerEvent_IsBase(true);
        vqplaintextedit->timerEvent(e);
    } else {
        vqplaintextedit->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnTimerEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_TimerEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_KeyPressEvent(QPlainTextEdit* self, QKeyEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->keyPressEvent(e);
    } else {
        vqplaintextedit->keyPressEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseKeyPressEvent(QPlainTextEdit* self, QKeyEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_KeyPressEvent_IsBase(true);
        vqplaintextedit->keyPressEvent(e);
    } else {
        vqplaintextedit->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnKeyPressEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_KeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->keyReleaseEvent(e);
    } else {
        vqplaintextedit->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseKeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_KeyReleaseEvent_IsBase(true);
        vqplaintextedit->keyReleaseEvent(e);
    } else {
        vqplaintextedit->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnKeyReleaseEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ResizeEvent(QPlainTextEdit* self, QResizeEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->resizeEvent(e);
    } else {
        vqplaintextedit->resizeEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseResizeEvent(QPlainTextEdit* self, QResizeEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ResizeEvent_IsBase(true);
        vqplaintextedit->resizeEvent(e);
    } else {
        vqplaintextedit->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnResizeEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ResizeEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_PaintEvent(QPlainTextEdit* self, QPaintEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->paintEvent(e);
    } else {
        vqplaintextedit->paintEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBasePaintEvent(QPlainTextEdit* self, QPaintEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_PaintEvent_IsBase(true);
        vqplaintextedit->paintEvent(e);
    } else {
        vqplaintextedit->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnPaintEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_PaintEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_MousePressEvent(QPlainTextEdit* self, QMouseEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->mousePressEvent(e);
    } else {
        vqplaintextedit->mousePressEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseMousePressEvent(QPlainTextEdit* self, QMouseEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_MousePressEvent_IsBase(true);
        vqplaintextedit->mousePressEvent(e);
    } else {
        vqplaintextedit->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMousePressEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_MouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->mouseMoveEvent(e);
    } else {
        vqplaintextedit->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseMouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_MouseMoveEvent_IsBase(true);
        vqplaintextedit->mouseMoveEvent(e);
    } else {
        vqplaintextedit->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMouseMoveEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_MouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->mouseReleaseEvent(e);
    } else {
        vqplaintextedit->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseMouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_MouseReleaseEvent_IsBase(true);
        vqplaintextedit->mouseReleaseEvent(e);
    } else {
        vqplaintextedit->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMouseReleaseEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_MouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->mouseDoubleClickEvent(e);
    } else {
        vqplaintextedit->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseMouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_MouseDoubleClickEvent_IsBase(true);
        vqplaintextedit->mouseDoubleClickEvent(e);
    } else {
        vqplaintextedit->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMouseDoubleClickEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_FocusNextPrevChild(QPlainTextEdit* self, bool next) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return vqplaintextedit->focusNextPrevChild(next);
    } else {
        return vqplaintextedit->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseFocusNextPrevChild(QPlainTextEdit* self, bool next) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_FocusNextPrevChild_IsBase(true);
        return vqplaintextedit->focusNextPrevChild(next);
    } else {
        return vqplaintextedit->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusNextPrevChild(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->contextMenuEvent(e);
    } else {
        vqplaintextedit->contextMenuEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ContextMenuEvent_IsBase(true);
        vqplaintextedit->contextMenuEvent(e);
    } else {
        vqplaintextedit->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnContextMenuEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_DragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->dragEnterEvent(e);
    } else {
        vqplaintextedit->dragEnterEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_DragEnterEvent_IsBase(true);
        vqplaintextedit->dragEnterEvent(e);
    } else {
        vqplaintextedit->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDragEnterEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_DragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->dragLeaveEvent(e);
    } else {
        vqplaintextedit->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_DragLeaveEvent_IsBase(true);
        vqplaintextedit->dragLeaveEvent(e);
    } else {
        vqplaintextedit->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDragLeaveEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_DragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->dragMoveEvent(e);
    } else {
        vqplaintextedit->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_DragMoveEvent_IsBase(true);
        vqplaintextedit->dragMoveEvent(e);
    } else {
        vqplaintextedit->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDragMoveEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_DropEvent(QPlainTextEdit* self, QDropEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->dropEvent(e);
    } else {
        vqplaintextedit->dropEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDropEvent(QPlainTextEdit* self, QDropEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_DropEvent_IsBase(true);
        vqplaintextedit->dropEvent(e);
    } else {
        vqplaintextedit->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDropEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_DropEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_FocusInEvent(QPlainTextEdit* self, QFocusEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->focusInEvent(e);
    } else {
        vqplaintextedit->focusInEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseFocusInEvent(QPlainTextEdit* self, QFocusEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_FocusInEvent_IsBase(true);
        vqplaintextedit->focusInEvent(e);
    } else {
        vqplaintextedit->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusInEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_FocusOutEvent(QPlainTextEdit* self, QFocusEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->focusOutEvent(e);
    } else {
        vqplaintextedit->focusOutEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseFocusOutEvent(QPlainTextEdit* self, QFocusEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_FocusOutEvent_IsBase(true);
        vqplaintextedit->focusOutEvent(e);
    } else {
        vqplaintextedit->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusOutEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ShowEvent(QPlainTextEdit* self, QShowEvent* param1) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->showEvent(param1);
    } else {
        vqplaintextedit->showEvent(param1);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseShowEvent(QPlainTextEdit* self, QShowEvent* param1) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ShowEvent_IsBase(true);
        vqplaintextedit->showEvent(param1);
    } else {
        vqplaintextedit->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnShowEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ShowEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ChangeEvent(QPlainTextEdit* self, QEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->changeEvent(e);
    } else {
        vqplaintextedit->changeEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseChangeEvent(QPlainTextEdit* self, QEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ChangeEvent_IsBase(true);
        vqplaintextedit->changeEvent(e);
    } else {
        vqplaintextedit->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnChangeEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_WheelEvent(QPlainTextEdit* self, QWheelEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->wheelEvent(e);
    } else {
        vqplaintextedit->wheelEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseWheelEvent(QPlainTextEdit* self, QWheelEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_WheelEvent_IsBase(true);
        vqplaintextedit->wheelEvent(e);
    } else {
        vqplaintextedit->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnWheelEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_WheelEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QPlainTextEdit_CreateMimeDataFromSelection(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->createMimeDataFromSelection();
    } else {
        return vqplaintextedit->createMimeDataFromSelection();
    }
}

// Base class handler implementation
QMimeData* QPlainTextEdit_QBaseCreateMimeDataFromSelection(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_CreateMimeDataFromSelection_IsBase(true);
        return vqplaintextedit->createMimeDataFromSelection();
    } else {
        return vqplaintextedit->createMimeDataFromSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCreateMimeDataFromSelection(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_CreateMimeDataFromSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_CanInsertFromMimeData(const QPlainTextEdit* self, QMimeData* source) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->canInsertFromMimeData(source);
    } else {
        return vqplaintextedit->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseCanInsertFromMimeData(const QPlainTextEdit* self, QMimeData* source) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_CanInsertFromMimeData_IsBase(true);
        return vqplaintextedit->canInsertFromMimeData(source);
    } else {
        return vqplaintextedit->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCanInsertFromMimeData(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_InsertFromMimeData(QPlainTextEdit* self, QMimeData* source) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->insertFromMimeData(source);
    } else {
        vqplaintextedit->insertFromMimeData(source);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseInsertFromMimeData(QPlainTextEdit* self, QMimeData* source) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_InsertFromMimeData_IsBase(true);
        vqplaintextedit->insertFromMimeData(source);
    } else {
        vqplaintextedit->insertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInsertFromMimeData(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_InsertFromMimeData_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_InputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->inputMethodEvent(param1);
    } else {
        vqplaintextedit->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseInputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_InputMethodEvent_IsBase(true);
        vqplaintextedit->inputMethodEvent(param1);
    } else {
        vqplaintextedit->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInputMethodEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ScrollContentsBy(QPlainTextEdit* self, int dx, int dy) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqplaintextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseScrollContentsBy(QPlainTextEdit* self, int dx, int dy) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ScrollContentsBy_IsBase(true);
        vqplaintextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqplaintextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnScrollContentsBy(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ScrollContentsBy_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_DoSetTextCursor(QPlainTextEdit* self, QTextCursor* cursor) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->doSetTextCursor(*cursor);
    } else {
        vqplaintextedit->doSetTextCursor(*cursor);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDoSetTextCursor(QPlainTextEdit* self, QTextCursor* cursor) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_DoSetTextCursor_IsBase(true);
        vqplaintextedit->doSetTextCursor(*cursor);
    } else {
        vqplaintextedit->doSetTextCursor(*cursor);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDoSetTextCursor(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_DoSetTextCursor_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DoSetTextCursor_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPlainTextEdit_MinimumSizeHint(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return new QSize(vqplaintextedit->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QPlainTextEdit_QBaseMinimumSizeHint(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vqplaintextedit->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMinimumSizeHint(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPlainTextEdit_SizeHint(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return new QSize(vqplaintextedit->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QPlainTextEdit_QBaseSizeHint(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_SizeHint_IsBase(true);
        return new QSize(vqplaintextedit->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSizeHint(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_SizeHint_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_SetupViewport(QPlainTextEdit* self, QWidget* viewport) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setupViewport(viewport);
    } else {
        vqplaintextedit->setupViewport(viewport);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseSetupViewport(QPlainTextEdit* self, QWidget* viewport) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_SetupViewport_IsBase(true);
        vqplaintextedit->setupViewport(viewport);
    } else {
        vqplaintextedit->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSetupViewport(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_SetupViewport_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_EventFilter(QPlainTextEdit* self, QObject* param1, QEvent* param2) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return vqplaintextedit->eventFilter(param1, param2);
    } else {
        return vqplaintextedit->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseEventFilter(QPlainTextEdit* self, QObject* param1, QEvent* param2) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_EventFilter_IsBase(true);
        return vqplaintextedit->eventFilter(param1, param2);
    } else {
        return vqplaintextedit->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnEventFilter(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_EventFilter_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_ViewportEvent(QPlainTextEdit* self, QEvent* param1) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return vqplaintextedit->viewportEvent(param1);
    } else {
        return vqplaintextedit->viewportEvent(param1);
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseViewportEvent(QPlainTextEdit* self, QEvent* param1) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ViewportEvent_IsBase(true);
        return vqplaintextedit->viewportEvent(param1);
    } else {
        return vqplaintextedit->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnViewportEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ViewportEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPlainTextEdit_ViewportSizeHint(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return new QSize(vqplaintextedit->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QPlainTextEdit_QBaseViewportSizeHint(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_ViewportSizeHint_IsBase(true);
        return new QSize(vqplaintextedit->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnViewportSizeHint(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_ViewportSizeHint_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_InitStyleOption(const QPlainTextEdit* self, QStyleOptionFrame* option) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->initStyleOption(option);
    } else {
        vqplaintextedit->initStyleOption(option);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseInitStyleOption(const QPlainTextEdit* self, QStyleOptionFrame* option) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_InitStyleOption_IsBase(true);
        vqplaintextedit->initStyleOption(option);
    } else {
        vqplaintextedit->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInitStyleOption(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_InitStyleOption_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextEdit_DevType(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->devType();
    } else {
        return vqplaintextedit->devType();
    }
}

// Base class handler implementation
int QPlainTextEdit_QBaseDevType(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_DevType_IsBase(true);
        return vqplaintextedit->devType();
    } else {
        return vqplaintextedit->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDevType(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_DevType_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_SetVisible(QPlainTextEdit* self, bool visible) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setVisible(visible);
    } else {
        vqplaintextedit->setVisible(visible);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseSetVisible(QPlainTextEdit* self, bool visible) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_SetVisible_IsBase(true);
        vqplaintextedit->setVisible(visible);
    } else {
        vqplaintextedit->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSetVisible(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_SetVisible_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextEdit_HeightForWidth(const QPlainTextEdit* self, int param1) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return vqplaintextedit->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QPlainTextEdit_QBaseHeightForWidth(const QPlainTextEdit* self, int param1) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_HeightForWidth_IsBase(true);
        return vqplaintextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return vqplaintextedit->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnHeightForWidth(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_HeightForWidth_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_HasHeightForWidth(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->hasHeightForWidth();
    } else {
        return vqplaintextedit->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseHasHeightForWidth(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_HasHeightForWidth_IsBase(true);
        return vqplaintextedit->hasHeightForWidth();
    } else {
        return vqplaintextedit->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnHasHeightForWidth(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPlainTextEdit_PaintEngine(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->paintEngine();
    } else {
        return vqplaintextedit->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPlainTextEdit_QBasePaintEngine(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_PaintEngine_IsBase(true);
        return vqplaintextedit->paintEngine();
    } else {
        return vqplaintextedit->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnPaintEngine(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_PaintEngine_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_EnterEvent(QPlainTextEdit* self, QEnterEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->enterEvent(event);
    } else {
        vqplaintextedit->enterEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseEnterEvent(QPlainTextEdit* self, QEnterEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_EnterEvent_IsBase(true);
        vqplaintextedit->enterEvent(event);
    } else {
        vqplaintextedit->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnEnterEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_EnterEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_LeaveEvent(QPlainTextEdit* self, QEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->leaveEvent(event);
    } else {
        vqplaintextedit->leaveEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseLeaveEvent(QPlainTextEdit* self, QEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_LeaveEvent_IsBase(true);
        vqplaintextedit->leaveEvent(event);
    } else {
        vqplaintextedit->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnLeaveEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_LeaveEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_MoveEvent(QPlainTextEdit* self, QMoveEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->moveEvent(event);
    } else {
        vqplaintextedit->moveEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseMoveEvent(QPlainTextEdit* self, QMoveEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_MoveEvent_IsBase(true);
        vqplaintextedit->moveEvent(event);
    } else {
        vqplaintextedit->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMoveEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_MoveEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_CloseEvent(QPlainTextEdit* self, QCloseEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->closeEvent(event);
    } else {
        vqplaintextedit->closeEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseCloseEvent(QPlainTextEdit* self, QCloseEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_CloseEvent_IsBase(true);
        vqplaintextedit->closeEvent(event);
    } else {
        vqplaintextedit->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCloseEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_CloseEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_TabletEvent(QPlainTextEdit* self, QTabletEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->tabletEvent(event);
    } else {
        vqplaintextedit->tabletEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseTabletEvent(QPlainTextEdit* self, QTabletEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_TabletEvent_IsBase(true);
        vqplaintextedit->tabletEvent(event);
    } else {
        vqplaintextedit->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnTabletEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_TabletEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ActionEvent(QPlainTextEdit* self, QActionEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->actionEvent(event);
    } else {
        vqplaintextedit->actionEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseActionEvent(QPlainTextEdit* self, QActionEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ActionEvent_IsBase(true);
        vqplaintextedit->actionEvent(event);
    } else {
        vqplaintextedit->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnActionEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ActionEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_HideEvent(QPlainTextEdit* self, QHideEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->hideEvent(event);
    } else {
        vqplaintextedit->hideEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseHideEvent(QPlainTextEdit* self, QHideEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_HideEvent_IsBase(true);
        vqplaintextedit->hideEvent(event);
    } else {
        vqplaintextedit->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnHideEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_HideEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_NativeEvent(QPlainTextEdit* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return vqplaintextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqplaintextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseNativeEvent(QPlainTextEdit* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_NativeEvent_IsBase(true);
        return vqplaintextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqplaintextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnNativeEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_NativeEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextEdit_Metric(const QPlainTextEdit* self, int param1) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqplaintextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QPlainTextEdit_QBaseMetric(const QPlainTextEdit* self, int param1) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_Metric_IsBase(true);
        return vqplaintextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqplaintextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMetric(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_Metric_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_InitPainter(const QPlainTextEdit* self, QPainter* painter) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->initPainter(painter);
    } else {
        vqplaintextedit->initPainter(painter);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseInitPainter(const QPlainTextEdit* self, QPainter* painter) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_InitPainter_IsBase(true);
        vqplaintextedit->initPainter(painter);
    } else {
        vqplaintextedit->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInitPainter(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_InitPainter_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPlainTextEdit_Redirected(const QPlainTextEdit* self, QPoint* offset) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->redirected(offset);
    } else {
        return vqplaintextedit->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPlainTextEdit_QBaseRedirected(const QPlainTextEdit* self, QPoint* offset) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_Redirected_IsBase(true);
        return vqplaintextedit->redirected(offset);
    } else {
        return vqplaintextedit->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnRedirected(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_Redirected_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPlainTextEdit_SharedPainter(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->sharedPainter();
    } else {
        return vqplaintextedit->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPlainTextEdit_QBaseSharedPainter(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_SharedPainter_IsBase(true);
        return vqplaintextedit->sharedPainter();
    } else {
        return vqplaintextedit->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSharedPainter(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_SharedPainter_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ChildEvent(QPlainTextEdit* self, QChildEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->childEvent(event);
    } else {
        vqplaintextedit->childEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseChildEvent(QPlainTextEdit* self, QChildEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ChildEvent_IsBase(true);
        vqplaintextedit->childEvent(event);
    } else {
        vqplaintextedit->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnChildEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ChildEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_CustomEvent(QPlainTextEdit* self, QEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->customEvent(event);
    } else {
        vqplaintextedit->customEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseCustomEvent(QPlainTextEdit* self, QEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_CustomEvent_IsBase(true);
        vqplaintextedit->customEvent(event);
    } else {
        vqplaintextedit->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCustomEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_CustomEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ConnectNotify(QPlainTextEdit* self, QMetaMethod* signal) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->connectNotify(*signal);
    } else {
        vqplaintextedit->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseConnectNotify(QPlainTextEdit* self, QMetaMethod* signal) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ConnectNotify_IsBase(true);
        vqplaintextedit->connectNotify(*signal);
    } else {
        vqplaintextedit->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnConnectNotify(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ConnectNotify_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_DisconnectNotify(QPlainTextEdit* self, QMetaMethod* signal) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->disconnectNotify(*signal);
    } else {
        vqplaintextedit->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDisconnectNotify(QPlainTextEdit* self, QMetaMethod* signal) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_DisconnectNotify_IsBase(true);
        vqplaintextedit->disconnectNotify(*signal);
    } else {
        vqplaintextedit->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDisconnectNotify(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QTextBlock* QPlainTextEdit_FirstVisibleBlock(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return new QTextBlock(vqplaintextedit->firstVisibleBlock());
    }
    return {};
}

// Base class handler implementation
QTextBlock* QPlainTextEdit_QBaseFirstVisibleBlock(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_FirstVisibleBlock_IsBase(true);
        return new QTextBlock(vqplaintextedit->firstVisibleBlock());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFirstVisibleBlock(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_FirstVisibleBlock_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FirstVisibleBlock_Callback>(slot));
    }
}

// Derived class handler implementation
QPointF* QPlainTextEdit_ContentOffset(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return new QPointF(vqplaintextedit->contentOffset());
    }
    return {};
}

// Base class handler implementation
QPointF* QPlainTextEdit_QBaseContentOffset(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_ContentOffset_IsBase(true);
        return new QPointF(vqplaintextedit->contentOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnContentOffset(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_ContentOffset_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ContentOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QPlainTextEdit_BlockBoundingRect(const QPlainTextEdit* self, QTextBlock* block) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return new QRectF(vqplaintextedit->blockBoundingRect(*block));
    }
    return {};
}

// Base class handler implementation
QRectF* QPlainTextEdit_QBaseBlockBoundingRect(const QPlainTextEdit* self, QTextBlock* block) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_BlockBoundingRect_IsBase(true);
        return new QRectF(vqplaintextedit->blockBoundingRect(*block));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnBlockBoundingRect(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_BlockBoundingRect_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_BlockBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QPlainTextEdit_BlockBoundingGeometry(const QPlainTextEdit* self, QTextBlock* block) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return new QRectF(vqplaintextedit->blockBoundingGeometry(*block));
    }
    return {};
}

// Base class handler implementation
QRectF* QPlainTextEdit_QBaseBlockBoundingGeometry(const QPlainTextEdit* self, QTextBlock* block) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_BlockBoundingGeometry_IsBase(true);
        return new QRectF(vqplaintextedit->blockBoundingGeometry(*block));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnBlockBoundingGeometry(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_BlockBoundingGeometry_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_BlockBoundingGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_GetPaintContext(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return new QAbstractTextDocumentLayout::PaintContext(vqplaintextedit->getPaintContext());
    }
    return {};
}

// Base class handler implementation
QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_QBaseGetPaintContext(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_GetPaintContext_IsBase(true);
        return new QAbstractTextDocumentLayout::PaintContext(vqplaintextedit->getPaintContext());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnGetPaintContext(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_GetPaintContext_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_GetPaintContext_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ZoomInF(QPlainTextEdit* self, float range) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->zoomInF(static_cast<float>(range));
    } else {
        vqplaintextedit->zoomInF(static_cast<float>(range));
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseZoomInF(QPlainTextEdit* self, float range) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ZoomInF_IsBase(true);
        vqplaintextedit->zoomInF(static_cast<float>(range));
    } else {
        vqplaintextedit->zoomInF(static_cast<float>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnZoomInF(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_ZoomInF_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ZoomInF_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_SetViewportMargins(QPlainTextEdit* self, int left, int top, int right, int bottom) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqplaintextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseSetViewportMargins(QPlainTextEdit* self, int left, int top, int right, int bottom) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_SetViewportMargins_IsBase(true);
        vqplaintextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqplaintextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSetViewportMargins(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_SetViewportMargins_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QPlainTextEdit_ViewportMargins(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return new QMargins(vqplaintextedit->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QPlainTextEdit_QBaseViewportMargins(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_ViewportMargins_IsBase(true);
        return new QMargins(vqplaintextedit->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnViewportMargins(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_ViewportMargins_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_DrawFrame(QPlainTextEdit* self, QPainter* param1) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->drawFrame(param1);
    } else {
        vqplaintextedit->drawFrame(param1);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDrawFrame(QPlainTextEdit* self, QPainter* param1) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_DrawFrame_IsBase(true);
        vqplaintextedit->drawFrame(param1);
    } else {
        vqplaintextedit->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDrawFrame(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_DrawFrame_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_UpdateMicroFocus(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->updateMicroFocus();
    } else {
        vqplaintextedit->updateMicroFocus();
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseUpdateMicroFocus(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_UpdateMicroFocus_IsBase(true);
        vqplaintextedit->updateMicroFocus();
    } else {
        vqplaintextedit->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnUpdateMicroFocus(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_Create(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->create();
    } else {
        vqplaintextedit->create();
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseCreate(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_Create_IsBase(true);
        vqplaintextedit->create();
    } else {
        vqplaintextedit->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCreate(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_Create_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_Destroy(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->destroy();
    } else {
        vqplaintextedit->destroy();
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDestroy(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_Destroy_IsBase(true);
        vqplaintextedit->destroy();
    } else {
        vqplaintextedit->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDestroy(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_Destroy_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_FocusNextChild(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return vqplaintextedit->focusNextChild();
    } else {
        return vqplaintextedit->focusNextChild();
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseFocusNextChild(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_FocusNextChild_IsBase(true);
        return vqplaintextedit->focusNextChild();
    } else {
        return vqplaintextedit->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusNextChild(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_FocusNextChild_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_FocusPreviousChild(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return vqplaintextedit->focusPreviousChild();
    } else {
        return vqplaintextedit->focusPreviousChild();
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseFocusPreviousChild(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_FocusPreviousChild_IsBase(true);
        return vqplaintextedit->focusPreviousChild();
    } else {
        return vqplaintextedit->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusPreviousChild(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->setQPlainTextEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPlainTextEdit_Sender(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->sender();
    } else {
        return vqplaintextedit->sender();
    }
}

// Base class handler implementation
QObject* QPlainTextEdit_QBaseSender(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_Sender_IsBase(true);
        return vqplaintextedit->sender();
    } else {
        return vqplaintextedit->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSender(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_Sender_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextEdit_SenderSignalIndex(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->senderSignalIndex();
    } else {
        return vqplaintextedit->senderSignalIndex();
    }
}

// Base class handler implementation
int QPlainTextEdit_QBaseSenderSignalIndex(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_SenderSignalIndex_IsBase(true);
        return vqplaintextedit->senderSignalIndex();
    } else {
        return vqplaintextedit->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSenderSignalIndex(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextEdit_Receivers(const QPlainTextEdit* self, const char* signal) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->receivers(signal);
    } else {
        return vqplaintextedit->receivers(signal);
    }
}

// Base class handler implementation
int QPlainTextEdit_QBaseReceivers(const QPlainTextEdit* self, const char* signal) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_Receivers_IsBase(true);
        return vqplaintextedit->receivers(signal);
    } else {
        return vqplaintextedit->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnReceivers(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_Receivers_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_IsSignalConnected(const QPlainTextEdit* self, QMetaMethod* signal) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->isSignalConnected(*signal);
    } else {
        return vqplaintextedit->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseIsSignalConnected(const QPlainTextEdit* self, QMetaMethod* signal) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_IsSignalConnected_IsBase(true);
        return vqplaintextedit->isSignalConnected(*signal);
    } else {
        return vqplaintextedit->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnIsSignalConnected(const QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->setQPlainTextEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_IsSignalConnected_Callback>(slot));
    }
}

void QPlainTextEdit_Delete(QPlainTextEdit* self) {
    delete self;
}

QPlainTextDocumentLayout* QPlainTextDocumentLayout_new(QTextDocument* document) {
    return new VirtualQPlainTextDocumentLayout(document);
}

QMetaObject* QPlainTextDocumentLayout_MetaObject(const QPlainTextDocumentLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlainTextDocumentLayout_Metacast(QPlainTextDocumentLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlainTextDocumentLayout_Metacall(QPlainTextDocumentLayout* self, int param1, int param2, void** param3) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPlainTextDocumentLayout_OnMetacall(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Metacall_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPlainTextDocumentLayout_QBaseMetacall(QPlainTextDocumentLayout* self, int param1, int param2, void** param3) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Metacall_IsBase(true);
        return vqplaintextdocumentlayout->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPlainTextDocumentLayout_Tr(const char* s) {
    QString _ret = QPlainTextDocumentLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPlainTextDocumentLayout_EnsureBlockLayout(const QPlainTextDocumentLayout* self, QTextBlock* block) {
    self->ensureBlockLayout(*block);
}

void QPlainTextDocumentLayout_SetCursorWidth(QPlainTextDocumentLayout* self, int width) {
    self->setCursorWidth(static_cast<int>(width));
}

int QPlainTextDocumentLayout_CursorWidth(const QPlainTextDocumentLayout* self) {
    return self->cursorWidth();
}

void QPlainTextDocumentLayout_RequestUpdate(QPlainTextDocumentLayout* self) {
    self->requestUpdate();
}

libqt_string QPlainTextDocumentLayout_Tr2(const char* s, const char* c) {
    QString _ret = QPlainTextDocumentLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPlainTextDocumentLayout_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPlainTextDocumentLayout::tr(s, c, static_cast<int>(n));
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
void QPlainTextDocumentLayout_Draw(QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->draw(param1, *param2);
    } else {
        vqplaintextdocumentlayout->draw(param1, *param2);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseDraw(QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Draw_IsBase(true);
        vqplaintextdocumentlayout->draw(param1, *param2);
    } else {
        vqplaintextdocumentlayout->draw(param1, *param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDraw(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Draw_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Draw_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextDocumentLayout_HitTest(const QPlainTextDocumentLayout* self, QPointF* param1, int param2) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        return vqplaintextdocumentlayout->hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
    } else {
        return vqplaintextdocumentlayout->hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
    }
}

// Base class handler implementation
int QPlainTextDocumentLayout_QBaseHitTest(const QPlainTextDocumentLayout* self, QPointF* param1, int param2) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_HitTest_IsBase(true);
        return vqplaintextdocumentlayout->hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
    } else {
        return vqplaintextdocumentlayout->hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnHitTest(const QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_HitTest_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_HitTest_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextDocumentLayout_PageCount(const QPlainTextDocumentLayout* self) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        return vqplaintextdocumentlayout->pageCount();
    } else {
        return vqplaintextdocumentlayout->pageCount();
    }
}

// Base class handler implementation
int QPlainTextDocumentLayout_QBasePageCount(const QPlainTextDocumentLayout* self) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_PageCount_IsBase(true);
        return vqplaintextdocumentlayout->pageCount();
    } else {
        return vqplaintextdocumentlayout->pageCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnPageCount(const QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_PageCount_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_PageCount_Callback>(slot));
    }
}

// Derived class handler implementation
QSizeF* QPlainTextDocumentLayout_DocumentSize(const QPlainTextDocumentLayout* self) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        return new QSizeF(vqplaintextdocumentlayout->documentSize());
    } else {
        return new QSizeF(self->documentSize());
    }
}

// Base class handler implementation
QSizeF* QPlainTextDocumentLayout_QBaseDocumentSize(const QPlainTextDocumentLayout* self) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DocumentSize_IsBase(true);
        return new QSizeF(vqplaintextdocumentlayout->documentSize());
    } else {
        return new QSizeF(self->documentSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDocumentSize(const QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DocumentSize_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_DocumentSize_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QPlainTextDocumentLayout_FrameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        return new QRectF(vqplaintextdocumentlayout->frameBoundingRect(param1));
    } else {
        return new QRectF(self->frameBoundingRect(param1));
    }
}

// Base class handler implementation
QRectF* QPlainTextDocumentLayout_QBaseFrameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_FrameBoundingRect_IsBase(true);
        return new QRectF(vqplaintextdocumentlayout->frameBoundingRect(param1));
    } else {
        return new QRectF(self->frameBoundingRect(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnFrameBoundingRect(const QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_FrameBoundingRect_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_FrameBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QPlainTextDocumentLayout_BlockBoundingRect(const QPlainTextDocumentLayout* self, QTextBlock* block) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        return new QRectF(vqplaintextdocumentlayout->blockBoundingRect(*block));
    } else {
        return new QRectF(self->blockBoundingRect(*block));
    }
}

// Base class handler implementation
QRectF* QPlainTextDocumentLayout_QBaseBlockBoundingRect(const QPlainTextDocumentLayout* self, QTextBlock* block) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_BlockBoundingRect_IsBase(true);
        return new QRectF(vqplaintextdocumentlayout->blockBoundingRect(*block));
    } else {
        return new QRectF(self->blockBoundingRect(*block));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnBlockBoundingRect(const QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_BlockBoundingRect_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_BlockBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_DocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->documentChanged(static_cast<int>(from), static_cast<int>(param2), static_cast<int>(charsAdded));
    } else {
        vqplaintextdocumentlayout->documentChanged(static_cast<int>(from), static_cast<int>(param2), static_cast<int>(charsAdded));
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseDocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DocumentChanged_IsBase(true);
        vqplaintextdocumentlayout->documentChanged(static_cast<int>(from), static_cast<int>(param2), static_cast<int>(charsAdded));
    } else {
        vqplaintextdocumentlayout->documentChanged(static_cast<int>(from), static_cast<int>(param2), static_cast<int>(charsAdded));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDocumentChanged(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DocumentChanged_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_DocumentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_ResizeInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else {
        vqplaintextdocumentlayout->resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseResizeInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_ResizeInlineObject_IsBase(true);
        vqplaintextdocumentlayout->resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else {
        vqplaintextdocumentlayout->resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnResizeInlineObject(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_ResizeInlineObject_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_ResizeInlineObject_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_PositionInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else {
        vqplaintextdocumentlayout->positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBasePositionInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_PositionInlineObject_IsBase(true);
        vqplaintextdocumentlayout->positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else {
        vqplaintextdocumentlayout->positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnPositionInlineObject(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_PositionInlineObject_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_PositionInlineObject_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_DrawInlineObject(QPlainTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    } else {
        vqplaintextdocumentlayout->drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseDrawInlineObject(QPlainTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DrawInlineObject_IsBase(true);
        vqplaintextdocumentlayout->drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    } else {
        vqplaintextdocumentlayout->drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDrawInlineObject(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DrawInlineObject_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_DrawInlineObject_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextDocumentLayout_Event(QPlainTextDocumentLayout* self, QEvent* event) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        return vqplaintextdocumentlayout->event(event);
    } else {
        return vqplaintextdocumentlayout->event(event);
    }
}

// Base class handler implementation
bool QPlainTextDocumentLayout_QBaseEvent(QPlainTextDocumentLayout* self, QEvent* event) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Event_IsBase(true);
        return vqplaintextdocumentlayout->event(event);
    } else {
        return vqplaintextdocumentlayout->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnEvent(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Event_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextDocumentLayout_EventFilter(QPlainTextDocumentLayout* self, QObject* watched, QEvent* event) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        return vqplaintextdocumentlayout->eventFilter(watched, event);
    } else {
        return vqplaintextdocumentlayout->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPlainTextDocumentLayout_QBaseEventFilter(QPlainTextDocumentLayout* self, QObject* watched, QEvent* event) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_EventFilter_IsBase(true);
        return vqplaintextdocumentlayout->eventFilter(watched, event);
    } else {
        return vqplaintextdocumentlayout->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnEventFilter(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_EventFilter_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_TimerEvent(QPlainTextDocumentLayout* self, QTimerEvent* event) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->timerEvent(event);
    } else {
        vqplaintextdocumentlayout->timerEvent(event);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseTimerEvent(QPlainTextDocumentLayout* self, QTimerEvent* event) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_TimerEvent_IsBase(true);
        vqplaintextdocumentlayout->timerEvent(event);
    } else {
        vqplaintextdocumentlayout->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnTimerEvent(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_TimerEvent_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_ChildEvent(QPlainTextDocumentLayout* self, QChildEvent* event) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->childEvent(event);
    } else {
        vqplaintextdocumentlayout->childEvent(event);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseChildEvent(QPlainTextDocumentLayout* self, QChildEvent* event) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_ChildEvent_IsBase(true);
        vqplaintextdocumentlayout->childEvent(event);
    } else {
        vqplaintextdocumentlayout->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnChildEvent(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_ChildEvent_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_CustomEvent(QPlainTextDocumentLayout* self, QEvent* event) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->customEvent(event);
    } else {
        vqplaintextdocumentlayout->customEvent(event);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseCustomEvent(QPlainTextDocumentLayout* self, QEvent* event) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_CustomEvent_IsBase(true);
        vqplaintextdocumentlayout->customEvent(event);
    } else {
        vqplaintextdocumentlayout->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnCustomEvent(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_CustomEvent_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_ConnectNotify(QPlainTextDocumentLayout* self, QMetaMethod* signal) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->connectNotify(*signal);
    } else {
        vqplaintextdocumentlayout->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseConnectNotify(QPlainTextDocumentLayout* self, QMetaMethod* signal) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_ConnectNotify_IsBase(true);
        vqplaintextdocumentlayout->connectNotify(*signal);
    } else {
        vqplaintextdocumentlayout->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnConnectNotify(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_ConnectNotify_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_DisconnectNotify(QPlainTextDocumentLayout* self, QMetaMethod* signal) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->disconnectNotify(*signal);
    } else {
        vqplaintextdocumentlayout->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseDisconnectNotify(QPlainTextDocumentLayout* self, QMetaMethod* signal) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DisconnectNotify_IsBase(true);
        vqplaintextdocumentlayout->disconnectNotify(*signal);
    } else {
        vqplaintextdocumentlayout->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDisconnectNotify(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DisconnectNotify_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextDocumentLayout_FormatIndex(QPlainTextDocumentLayout* self, int pos) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        return vqplaintextdocumentlayout->formatIndex(static_cast<int>(pos));
    } else {
        return vqplaintextdocumentlayout->formatIndex(static_cast<int>(pos));
    }
}

// Base class handler implementation
int QPlainTextDocumentLayout_QBaseFormatIndex(QPlainTextDocumentLayout* self, int pos) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_FormatIndex_IsBase(true);
        return vqplaintextdocumentlayout->formatIndex(static_cast<int>(pos));
    } else {
        return vqplaintextdocumentlayout->formatIndex(static_cast<int>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnFormatIndex(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_FormatIndex_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_FormatIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QTextCharFormat* QPlainTextDocumentLayout_Format(QPlainTextDocumentLayout* self, int pos) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        return new QTextCharFormat(vqplaintextdocumentlayout->format(static_cast<int>(pos)));
    }
    return {};
}

// Base class handler implementation
QTextCharFormat* QPlainTextDocumentLayout_QBaseFormat(QPlainTextDocumentLayout* self, int pos) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Format_IsBase(true);
        return new QTextCharFormat(vqplaintextdocumentlayout->format(static_cast<int>(pos)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnFormat(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Format_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Format_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPlainTextDocumentLayout_Sender(const QPlainTextDocumentLayout* self) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        return vqplaintextdocumentlayout->sender();
    } else {
        return vqplaintextdocumentlayout->sender();
    }
}

// Base class handler implementation
QObject* QPlainTextDocumentLayout_QBaseSender(const QPlainTextDocumentLayout* self) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Sender_IsBase(true);
        return vqplaintextdocumentlayout->sender();
    } else {
        return vqplaintextdocumentlayout->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnSender(const QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Sender_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextDocumentLayout_SenderSignalIndex(const QPlainTextDocumentLayout* self) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        return vqplaintextdocumentlayout->senderSignalIndex();
    } else {
        return vqplaintextdocumentlayout->senderSignalIndex();
    }
}

// Base class handler implementation
int QPlainTextDocumentLayout_QBaseSenderSignalIndex(const QPlainTextDocumentLayout* self) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_SenderSignalIndex_IsBase(true);
        return vqplaintextdocumentlayout->senderSignalIndex();
    } else {
        return vqplaintextdocumentlayout->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnSenderSignalIndex(const QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextDocumentLayout_Receivers(const QPlainTextDocumentLayout* self, const char* signal) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        return vqplaintextdocumentlayout->receivers(signal);
    } else {
        return vqplaintextdocumentlayout->receivers(signal);
    }
}

// Base class handler implementation
int QPlainTextDocumentLayout_QBaseReceivers(const QPlainTextDocumentLayout* self, const char* signal) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Receivers_IsBase(true);
        return vqplaintextdocumentlayout->receivers(signal);
    } else {
        return vqplaintextdocumentlayout->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnReceivers(const QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Receivers_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextDocumentLayout_IsSignalConnected(const QPlainTextDocumentLayout* self, QMetaMethod* signal) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        return vqplaintextdocumentlayout->isSignalConnected(*signal);
    } else {
        return vqplaintextdocumentlayout->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPlainTextDocumentLayout_QBaseIsSignalConnected(const QPlainTextDocumentLayout* self, QMetaMethod* signal) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_IsSignalConnected_IsBase(true);
        return vqplaintextdocumentlayout->isSignalConnected(*signal);
    } else {
        return vqplaintextdocumentlayout->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnIsSignalConnected(const QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_IsSignalConnected_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_IsSignalConnected_Callback>(slot));
    }
}

void QPlainTextDocumentLayout_Delete(QPlainTextDocumentLayout* self) {
    delete self;
}
