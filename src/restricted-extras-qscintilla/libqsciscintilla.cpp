#include <QAbstractScrollArea>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
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
#include <QIODevice>
#include <QIcon>
#include <QImage>
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
#include <QScrollBar>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qsciscintilla.h>
#include "libqsciscintilla.hpp"
#include "libqsciscintilla.hxx"

QsciScintilla* QsciScintilla_new(QWidget* parent) {
    return new VirtualQsciScintilla(parent);
}

QsciScintilla* QsciScintilla_new2() {
    return new VirtualQsciScintilla();
}

QMetaObject* QsciScintilla_MetaObject(const QsciScintilla* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciScintilla_Metacast(QsciScintilla* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciScintilla_Metacall(QsciScintilla* self, int param1, int param2, void** param3) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciScintilla_OnMetacall(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Metacall_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciScintilla_QBaseMetacall(QsciScintilla* self, int param1, int param2, void** param3) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Metacall_IsBase(true);
        return vqsciscintilla->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciScintilla_Tr(const char* s) {
    QString _ret = QsciScintilla::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QsciScintilla_Annotate(QsciScintilla* self, int line, libqt_string text, int style) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->annotate(static_cast<int>(line), text_QString, static_cast<int>(style));
}

void QsciScintilla_Annotate2(QsciScintilla* self, int line, libqt_string text, QsciStyle* style) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->annotate(static_cast<int>(line), text_QString, *style);
}

void QsciScintilla_Annotate3(QsciScintilla* self, int line, QsciStyledText* text) {
    self->annotate(static_cast<int>(line), *text);
}

libqt_string QsciScintilla_Annotation(const QsciScintilla* self, int line) {
    QString _ret = self->annotation(static_cast<int>(line));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QsciScintilla_AnnotationDisplay(const QsciScintilla* self) {
    return static_cast<int>(self->annotationDisplay());
}

void QsciScintilla_ClearAnnotations(QsciScintilla* self) {
    self->clearAnnotations();
}

bool QsciScintilla_AutoCompletionCaseSensitivity(const QsciScintilla* self) {
    return self->autoCompletionCaseSensitivity();
}

bool QsciScintilla_AutoCompletionFillupsEnabled(const QsciScintilla* self) {
    return self->autoCompletionFillupsEnabled();
}

bool QsciScintilla_AutoCompletionReplaceWord(const QsciScintilla* self) {
    return self->autoCompletionReplaceWord();
}

bool QsciScintilla_AutoCompletionShowSingle(const QsciScintilla* self) {
    return self->autoCompletionShowSingle();
}

int QsciScintilla_AutoCompletionSource(const QsciScintilla* self) {
    return static_cast<int>(self->autoCompletionSource());
}

int QsciScintilla_AutoCompletionThreshold(const QsciScintilla* self) {
    return self->autoCompletionThreshold();
}

int QsciScintilla_AutoCompletionUseSingle(const QsciScintilla* self) {
    return static_cast<int>(self->autoCompletionUseSingle());
}

bool QsciScintilla_AutoIndent(const QsciScintilla* self) {
    return self->autoIndent();
}

bool QsciScintilla_BackspaceUnindents(const QsciScintilla* self) {
    return self->backspaceUnindents();
}

void QsciScintilla_BeginUndoAction(QsciScintilla* self) {
    self->beginUndoAction();
}

int QsciScintilla_BraceMatching(const QsciScintilla* self) {
    return static_cast<int>(self->braceMatching());
}

libqt_string QsciScintilla_Bytes(const QsciScintilla* self, int start, int end) {
    QByteArray _qb = self->bytes(static_cast<int>(start), static_cast<int>(end));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QsciScintilla_CallTipsPosition(const QsciScintilla* self) {
    return static_cast<int>(self->callTipsPosition());
}

int QsciScintilla_CallTipsStyle(const QsciScintilla* self) {
    return static_cast<int>(self->callTipsStyle());
}

int QsciScintilla_CallTipsVisible(const QsciScintilla* self) {
    return self->callTipsVisible();
}

void QsciScintilla_CancelFind(QsciScintilla* self) {
    self->cancelFind();
}

void QsciScintilla_CancelList(QsciScintilla* self) {
    self->cancelList();
}

bool QsciScintilla_CaseSensitive(const QsciScintilla* self) {
    return self->caseSensitive();
}

void QsciScintilla_ClearFolds(QsciScintilla* self) {
    self->clearFolds();
}

void QsciScintilla_ClearIndicatorRange(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber) {
    self->clearIndicatorRange(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo), static_cast<int>(indicatorNumber));
}

void QsciScintilla_ClearRegisteredImages(QsciScintilla* self) {
    self->clearRegisteredImages();
}

QColor* QsciScintilla_Color(const QsciScintilla* self) {
    return new QColor(self->color());
}

libqt_list /* of int */ QsciScintilla_ContractedFolds(const QsciScintilla* self) {
    QList<int> _ret = self->contractedFolds();
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

void QsciScintilla_ConvertEols(QsciScintilla* self, int mode) {
    self->convertEols(static_cast<QsciScintilla::EolMode>(mode));
}

QMenu* QsciScintilla_CreateStandardContextMenu(QsciScintilla* self) {
    return self->createStandardContextMenu();
}

QsciDocument* QsciScintilla_Document(const QsciScintilla* self) {
    return new QsciDocument(self->document());
}

void QsciScintilla_EndUndoAction(QsciScintilla* self) {
    self->endUndoAction();
}

QColor* QsciScintilla_EdgeColor(const QsciScintilla* self) {
    return new QColor(self->edgeColor());
}

int QsciScintilla_EdgeColumn(const QsciScintilla* self) {
    return self->edgeColumn();
}

int QsciScintilla_EdgeMode(const QsciScintilla* self) {
    return static_cast<int>(self->edgeMode());
}

void QsciScintilla_SetFont(QsciScintilla* self, QFont* f) {
    self->setFont(*f);
}

int QsciScintilla_EolMode(const QsciScintilla* self) {
    return static_cast<int>(self->eolMode());
}

bool QsciScintilla_EolVisibility(const QsciScintilla* self) {
    return self->eolVisibility();
}

int QsciScintilla_ExtraAscent(const QsciScintilla* self) {
    return self->extraAscent();
}

int QsciScintilla_ExtraDescent(const QsciScintilla* self) {
    return self->extraDescent();
}

void QsciScintilla_FillIndicatorRange(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber) {
    self->fillIndicatorRange(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo), static_cast<int>(indicatorNumber));
}

bool QsciScintilla_FindMatchingBrace(QsciScintilla* self, long* brace, long* other, int mode) {
    return self->findMatchingBrace(static_cast<long&>(*brace), static_cast<long&>(*other), static_cast<QsciScintilla::BraceMatch>(mode));
}

int QsciScintilla_FirstVisibleLine(const QsciScintilla* self) {
    return self->firstVisibleLine();
}

int QsciScintilla_Folding(const QsciScintilla* self) {
    return static_cast<int>(self->folding());
}

void QsciScintilla_GetCursorPosition(const QsciScintilla* self, int* line, int* index) {
    self->getCursorPosition(static_cast<int*>(line), static_cast<int*>(index));
}

void QsciScintilla_GetSelection(const QsciScintilla* self, int* lineFrom, int* indexFrom, int* lineTo, int* indexTo) {
    self->getSelection(static_cast<int*>(lineFrom), static_cast<int*>(indexFrom), static_cast<int*>(lineTo), static_cast<int*>(indexTo));
}

bool QsciScintilla_HasSelectedText(const QsciScintilla* self) {
    return self->hasSelectedText();
}

int QsciScintilla_Indentation(const QsciScintilla* self, int line) {
    return self->indentation(static_cast<int>(line));
}

bool QsciScintilla_IndentationGuides(const QsciScintilla* self) {
    return self->indentationGuides();
}

bool QsciScintilla_IndentationsUseTabs(const QsciScintilla* self) {
    return self->indentationsUseTabs();
}

int QsciScintilla_IndentationWidth(const QsciScintilla* self) {
    return self->indentationWidth();
}

int QsciScintilla_IndicatorDefine(QsciScintilla* self, int style) {
    return self->indicatorDefine(static_cast<QsciScintilla::IndicatorStyle>(style));
}

bool QsciScintilla_IndicatorDrawUnder(const QsciScintilla* self, int indicatorNumber) {
    return self->indicatorDrawUnder(static_cast<int>(indicatorNumber));
}

bool QsciScintilla_IsCallTipActive(const QsciScintilla* self) {
    return self->isCallTipActive();
}

bool QsciScintilla_IsListActive(const QsciScintilla* self) {
    return self->isListActive();
}

bool QsciScintilla_IsModified(const QsciScintilla* self) {
    return self->isModified();
}

bool QsciScintilla_IsReadOnly(const QsciScintilla* self) {
    return self->isReadOnly();
}

bool QsciScintilla_IsRedoAvailable(const QsciScintilla* self) {
    return self->isRedoAvailable();
}

bool QsciScintilla_IsUndoAvailable(const QsciScintilla* self) {
    return self->isUndoAvailable();
}

bool QsciScintilla_IsUtf8(const QsciScintilla* self) {
    return self->isUtf8();
}

bool QsciScintilla_IsWordCharacter(const QsciScintilla* self, char ch) {
    return self->isWordCharacter(static_cast<char>(ch));
}

int QsciScintilla_LineAt(const QsciScintilla* self, QPoint* point) {
    return self->lineAt(*point);
}

void QsciScintilla_LineIndexFromPosition(const QsciScintilla* self, int position, int* line, int* index) {
    self->lineIndexFromPosition(static_cast<int>(position), static_cast<int*>(line), static_cast<int*>(index));
}

int QsciScintilla_LineLength(const QsciScintilla* self, int line) {
    return self->lineLength(static_cast<int>(line));
}

int QsciScintilla_Lines(const QsciScintilla* self) {
    return self->lines();
}

int QsciScintilla_Length(const QsciScintilla* self) {
    return self->length();
}

QsciLexer* QsciScintilla_Lexer(const QsciScintilla* self) {
    return self->lexer();
}

QColor* QsciScintilla_MarginBackgroundColor(const QsciScintilla* self, int margin) {
    return new QColor(self->marginBackgroundColor(static_cast<int>(margin)));
}

bool QsciScintilla_MarginLineNumbers(const QsciScintilla* self, int margin) {
    return self->marginLineNumbers(static_cast<int>(margin));
}

int QsciScintilla_MarginMarkerMask(const QsciScintilla* self, int margin) {
    return self->marginMarkerMask(static_cast<int>(margin));
}

int QsciScintilla_MarginOptions(const QsciScintilla* self) {
    return self->marginOptions();
}

bool QsciScintilla_MarginSensitivity(const QsciScintilla* self, int margin) {
    return self->marginSensitivity(static_cast<int>(margin));
}

int QsciScintilla_MarginType(const QsciScintilla* self, int margin) {
    return static_cast<int>(self->marginType(static_cast<int>(margin)));
}

int QsciScintilla_MarginWidth(const QsciScintilla* self, int margin) {
    return self->marginWidth(static_cast<int>(margin));
}

int QsciScintilla_Margins(const QsciScintilla* self) {
    return self->margins();
}

int QsciScintilla_MarkerDefine(QsciScintilla* self, int sym) {
    return self->markerDefine(static_cast<QsciScintilla::MarkerSymbol>(sym));
}

int QsciScintilla_MarkerDefineWithCh(QsciScintilla* self, char ch) {
    return self->markerDefine(static_cast<char>(ch));
}

int QsciScintilla_MarkerDefineWithPm(QsciScintilla* self, QPixmap* pm) {
    return self->markerDefine(*pm);
}

int QsciScintilla_MarkerDefineWithIm(QsciScintilla* self, QImage* im) {
    return self->markerDefine(*im);
}

int QsciScintilla_MarkerAdd(QsciScintilla* self, int linenr, int markerNumber) {
    return self->markerAdd(static_cast<int>(linenr), static_cast<int>(markerNumber));
}

unsigned int QsciScintilla_MarkersAtLine(const QsciScintilla* self, int linenr) {
    return self->markersAtLine(static_cast<int>(linenr));
}

void QsciScintilla_MarkerDelete(QsciScintilla* self, int linenr) {
    self->markerDelete(static_cast<int>(linenr));
}

void QsciScintilla_MarkerDeleteAll(QsciScintilla* self) {
    self->markerDeleteAll();
}

void QsciScintilla_MarkerDeleteHandle(QsciScintilla* self, int mhandle) {
    self->markerDeleteHandle(static_cast<int>(mhandle));
}

int QsciScintilla_MarkerLine(const QsciScintilla* self, int mhandle) {
    return self->markerLine(static_cast<int>(mhandle));
}

int QsciScintilla_MarkerFindNext(const QsciScintilla* self, int linenr, unsigned int mask) {
    return self->markerFindNext(static_cast<int>(linenr), static_cast<unsigned int>(mask));
}

int QsciScintilla_MarkerFindPrevious(const QsciScintilla* self, int linenr, unsigned int mask) {
    return self->markerFindPrevious(static_cast<int>(linenr), static_cast<unsigned int>(mask));
}

bool QsciScintilla_OverwriteMode(const QsciScintilla* self) {
    return self->overwriteMode();
}

QColor* QsciScintilla_Paper(const QsciScintilla* self) {
    return new QColor(self->paper());
}

int QsciScintilla_PositionFromLineIndex(const QsciScintilla* self, int line, int index) {
    return self->positionFromLineIndex(static_cast<int>(line), static_cast<int>(index));
}

bool QsciScintilla_Read(QsciScintilla* self, QIODevice* io) {
    return self->read(io);
}

void QsciScintilla_RegisterImage(QsciScintilla* self, int id, QPixmap* pm) {
    self->registerImage(static_cast<int>(id), *pm);
}

void QsciScintilla_RegisterImage2(QsciScintilla* self, int id, QImage* im) {
    self->registerImage(static_cast<int>(id), *im);
}

void QsciScintilla_ResetFoldMarginColors(QsciScintilla* self) {
    self->resetFoldMarginColors();
}

void QsciScintilla_ResetHotspotBackgroundColor(QsciScintilla* self) {
    self->resetHotspotBackgroundColor();
}

void QsciScintilla_ResetHotspotForegroundColor(QsciScintilla* self) {
    self->resetHotspotForegroundColor();
}

int QsciScintilla_ScrollWidth(const QsciScintilla* self) {
    return self->scrollWidth();
}

bool QsciScintilla_ScrollWidthTracking(const QsciScintilla* self) {
    return self->scrollWidthTracking();
}

void QsciScintilla_SetFoldMarginColors(QsciScintilla* self, QColor* fore, QColor* back) {
    self->setFoldMarginColors(*fore, *back);
}

void QsciScintilla_SetAnnotationDisplay(QsciScintilla* self, int display) {
    self->setAnnotationDisplay(static_cast<QsciScintilla::AnnotationDisplay>(display));
}

void QsciScintilla_SetAutoCompletionFillupsEnabled(QsciScintilla* self, bool enabled) {
    self->setAutoCompletionFillupsEnabled(enabled);
}

void QsciScintilla_SetAutoCompletionFillups(QsciScintilla* self, const char* fillups) {
    self->setAutoCompletionFillups(fillups);
}

void QsciScintilla_SetAutoCompletionWordSeparators(QsciScintilla* self, libqt_list /* of libqt_string */ separators) {
    QStringList separators_QList;
    separators_QList.reserve(separators.len);
    libqt_string* separators_arr = static_cast<libqt_string*>(separators.data.ptr);
    for (size_t i = 0; i < separators.len; ++i) {
        QString separators_arr_i_QString = QString::fromUtf8(separators_arr[i].data, separators_arr[i].len);
        separators_QList.push_back(separators_arr_i_QString);
    }
    self->setAutoCompletionWordSeparators(separators_QList);
}

void QsciScintilla_SetCallTipsBackgroundColor(QsciScintilla* self, QColor* col) {
    self->setCallTipsBackgroundColor(*col);
}

void QsciScintilla_SetCallTipsForegroundColor(QsciScintilla* self, QColor* col) {
    self->setCallTipsForegroundColor(*col);
}

void QsciScintilla_SetCallTipsHighlightColor(QsciScintilla* self, QColor* col) {
    self->setCallTipsHighlightColor(*col);
}

void QsciScintilla_SetCallTipsPosition(QsciScintilla* self, int position) {
    self->setCallTipsPosition(static_cast<QsciScintilla::CallTipsPosition>(position));
}

void QsciScintilla_SetCallTipsStyle(QsciScintilla* self, int style) {
    self->setCallTipsStyle(static_cast<QsciScintilla::CallTipsStyle>(style));
}

void QsciScintilla_SetCallTipsVisible(QsciScintilla* self, int nr) {
    self->setCallTipsVisible(static_cast<int>(nr));
}

void QsciScintilla_SetContractedFolds(QsciScintilla* self, libqt_list /* of int */ folds) {
    QList<int> folds_QList;
    folds_QList.reserve(folds.len);
    int* folds_arr = static_cast<int*>(folds.data.ints);
    for (size_t i = 0; i < folds.len; ++i) {
        folds_QList.push_back(static_cast<int>(folds_arr[i]));
    }
    self->setContractedFolds(folds_QList);
}

void QsciScintilla_SetDocument(QsciScintilla* self, QsciDocument* document) {
    self->setDocument(*document);
}

void QsciScintilla_AddEdgeColumn(QsciScintilla* self, int colnr, QColor* col) {
    self->addEdgeColumn(static_cast<int>(colnr), *col);
}

void QsciScintilla_ClearEdgeColumns(QsciScintilla* self) {
    self->clearEdgeColumns();
}

void QsciScintilla_SetEdgeColor(QsciScintilla* self, QColor* col) {
    self->setEdgeColor(*col);
}

void QsciScintilla_SetEdgeColumn(QsciScintilla* self, int colnr) {
    self->setEdgeColumn(static_cast<int>(colnr));
}

void QsciScintilla_SetEdgeMode(QsciScintilla* self, int mode) {
    self->setEdgeMode(static_cast<QsciScintilla::EdgeMode>(mode));
}

void QsciScintilla_SetFirstVisibleLine(QsciScintilla* self, int linenr) {
    self->setFirstVisibleLine(static_cast<int>(linenr));
}

void QsciScintilla_SetIndicatorDrawUnder(QsciScintilla* self, bool under) {
    self->setIndicatorDrawUnder(under);
}

void QsciScintilla_SetIndicatorForegroundColor(QsciScintilla* self, QColor* col) {
    self->setIndicatorForegroundColor(*col);
}

void QsciScintilla_SetIndicatorHoverForegroundColor(QsciScintilla* self, QColor* col) {
    self->setIndicatorHoverForegroundColor(*col);
}

void QsciScintilla_SetIndicatorHoverStyle(QsciScintilla* self, int style) {
    self->setIndicatorHoverStyle(static_cast<QsciScintilla::IndicatorStyle>(style));
}

void QsciScintilla_SetIndicatorOutlineColor(QsciScintilla* self, QColor* col) {
    self->setIndicatorOutlineColor(*col);
}

void QsciScintilla_SetMarginBackgroundColor(QsciScintilla* self, int margin, QColor* col) {
    self->setMarginBackgroundColor(static_cast<int>(margin), *col);
}

void QsciScintilla_SetMarginOptions(QsciScintilla* self, int options) {
    self->setMarginOptions(static_cast<int>(options));
}

void QsciScintilla_SetMarginText(QsciScintilla* self, int line, libqt_string text, int style) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setMarginText(static_cast<int>(line), text_QString, static_cast<int>(style));
}

void QsciScintilla_SetMarginText2(QsciScintilla* self, int line, libqt_string text, QsciStyle* style) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setMarginText(static_cast<int>(line), text_QString, *style);
}

void QsciScintilla_SetMarginText3(QsciScintilla* self, int line, QsciStyledText* text) {
    self->setMarginText(static_cast<int>(line), *text);
}

void QsciScintilla_SetMarginType(QsciScintilla* self, int margin, int typeVal) {
    self->setMarginType(static_cast<int>(margin), static_cast<QsciScintilla::MarginType>(typeVal));
}

void QsciScintilla_ClearMarginText(QsciScintilla* self) {
    self->clearMarginText();
}

void QsciScintilla_SetMargins(QsciScintilla* self, int margins) {
    self->setMargins(static_cast<int>(margins));
}

void QsciScintilla_SetMarkerBackgroundColor(QsciScintilla* self, QColor* col) {
    self->setMarkerBackgroundColor(*col);
}

void QsciScintilla_SetMarkerForegroundColor(QsciScintilla* self, QColor* col) {
    self->setMarkerForegroundColor(*col);
}

void QsciScintilla_SetMatchedBraceBackgroundColor(QsciScintilla* self, QColor* col) {
    self->setMatchedBraceBackgroundColor(*col);
}

void QsciScintilla_SetMatchedBraceForegroundColor(QsciScintilla* self, QColor* col) {
    self->setMatchedBraceForegroundColor(*col);
}

void QsciScintilla_SetMatchedBraceIndicator(QsciScintilla* self, int indicatorNumber) {
    self->setMatchedBraceIndicator(static_cast<int>(indicatorNumber));
}

void QsciScintilla_ResetMatchedBraceIndicator(QsciScintilla* self) {
    self->resetMatchedBraceIndicator();
}

void QsciScintilla_SetScrollWidth(QsciScintilla* self, int pixelWidth) {
    self->setScrollWidth(static_cast<int>(pixelWidth));
}

void QsciScintilla_SetScrollWidthTracking(QsciScintilla* self, bool enabled) {
    self->setScrollWidthTracking(enabled);
}

void QsciScintilla_SetTabDrawMode(QsciScintilla* self, int mode) {
    self->setTabDrawMode(static_cast<QsciScintilla::TabDrawMode>(mode));
}

void QsciScintilla_SetUnmatchedBraceBackgroundColor(QsciScintilla* self, QColor* col) {
    self->setUnmatchedBraceBackgroundColor(*col);
}

void QsciScintilla_SetUnmatchedBraceForegroundColor(QsciScintilla* self, QColor* col) {
    self->setUnmatchedBraceForegroundColor(*col);
}

void QsciScintilla_SetUnmatchedBraceIndicator(QsciScintilla* self, int indicatorNumber) {
    self->setUnmatchedBraceIndicator(static_cast<int>(indicatorNumber));
}

void QsciScintilla_ResetUnmatchedBraceIndicator(QsciScintilla* self) {
    self->resetUnmatchedBraceIndicator();
}

void QsciScintilla_SetWrapVisualFlags(QsciScintilla* self, int endFlag) {
    self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag));
}

libqt_string QsciScintilla_SelectedText(const QsciScintilla* self) {
    QString _ret = self->selectedText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QsciScintilla_SelectionToEol(const QsciScintilla* self) {
    return self->selectionToEol();
}

void QsciScintilla_SetHotspotBackgroundColor(QsciScintilla* self, QColor* col) {
    self->setHotspotBackgroundColor(*col);
}

void QsciScintilla_SetHotspotForegroundColor(QsciScintilla* self, QColor* col) {
    self->setHotspotForegroundColor(*col);
}

void QsciScintilla_SetHotspotUnderline(QsciScintilla* self, bool enable) {
    self->setHotspotUnderline(enable);
}

void QsciScintilla_SetHotspotWrap(QsciScintilla* self, bool enable) {
    self->setHotspotWrap(enable);
}

void QsciScintilla_SetSelectionToEol(QsciScintilla* self, bool filled) {
    self->setSelectionToEol(filled);
}

void QsciScintilla_SetExtraAscent(QsciScintilla* self, int extra) {
    self->setExtraAscent(static_cast<int>(extra));
}

void QsciScintilla_SetExtraDescent(QsciScintilla* self, int extra) {
    self->setExtraDescent(static_cast<int>(extra));
}

void QsciScintilla_SetOverwriteMode(QsciScintilla* self, bool overwrite) {
    self->setOverwriteMode(overwrite);
}

void QsciScintilla_SetWhitespaceBackgroundColor(QsciScintilla* self, QColor* col) {
    self->setWhitespaceBackgroundColor(*col);
}

void QsciScintilla_SetWhitespaceForegroundColor(QsciScintilla* self, QColor* col) {
    self->setWhitespaceForegroundColor(*col);
}

void QsciScintilla_SetWhitespaceSize(QsciScintilla* self, int size) {
    self->setWhitespaceSize(static_cast<int>(size));
}

void QsciScintilla_SetWrapIndentMode(QsciScintilla* self, int mode) {
    self->setWrapIndentMode(static_cast<QsciScintilla::WrapIndentMode>(mode));
}

void QsciScintilla_ShowUserList(QsciScintilla* self, int id, libqt_list /* of libqt_string */ list) {
    QStringList list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data.ptr);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    self->showUserList(static_cast<int>(id), list_QList);
}

QsciCommandSet* QsciScintilla_StandardCommands(const QsciScintilla* self) {
    return self->standardCommands();
}

int QsciScintilla_TabDrawMode(const QsciScintilla* self) {
    return static_cast<int>(self->tabDrawMode());
}

bool QsciScintilla_TabIndents(const QsciScintilla* self) {
    return self->tabIndents();
}

int QsciScintilla_TabWidth(const QsciScintilla* self) {
    return self->tabWidth();
}

libqt_string QsciScintilla_Text(const QsciScintilla* self) {
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

libqt_string QsciScintilla_TextWithLine(const QsciScintilla* self, int line) {
    QString _ret = self->text(static_cast<int>(line));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciScintilla_Text2(const QsciScintilla* self, int start, int end) {
    QString _ret = self->text(static_cast<int>(start), static_cast<int>(end));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QsciScintilla_TextHeight(const QsciScintilla* self, int linenr) {
    return self->textHeight(static_cast<int>(linenr));
}

int QsciScintilla_WhitespaceSize(const QsciScintilla* self) {
    return self->whitespaceSize();
}

int QsciScintilla_WhitespaceVisibility(const QsciScintilla* self) {
    return static_cast<int>(self->whitespaceVisibility());
}

libqt_string QsciScintilla_WordAtLineIndex(const QsciScintilla* self, int line, int index) {
    QString _ret = self->wordAtLineIndex(static_cast<int>(line), static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciScintilla_WordAtPoint(const QsciScintilla* self, QPoint* point) {
    QString _ret = self->wordAtPoint(*point);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

const char* QsciScintilla_WordCharacters(const QsciScintilla* self) {
    return (const char*)self->wordCharacters();
}

int QsciScintilla_WrapMode(const QsciScintilla* self) {
    return static_cast<int>(self->wrapMode());
}

int QsciScintilla_WrapIndentMode(const QsciScintilla* self) {
    return static_cast<int>(self->wrapIndentMode());
}

bool QsciScintilla_Write(const QsciScintilla* self, QIODevice* io) {
    return self->write(io);
}

void QsciScintilla_CursorPositionChanged(QsciScintilla* self, int line, int index) {
    self->cursorPositionChanged(static_cast<int>(line), static_cast<int>(index));
}

void QsciScintilla_Connect_CursorPositionChanged(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, int) = reinterpret_cast<void (*)(QsciScintilla*, int, int)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::cursorPositionChanged, [self, slotFunc](int line, int index) {
        int sigval1 = line;
        int sigval2 = index;
        slotFunc(self, sigval1, sigval2);
    });
}

void QsciScintilla_CopyAvailable(QsciScintilla* self, bool yes) {
    self->copyAvailable(yes);
}

void QsciScintilla_Connect_CopyAvailable(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, bool) = reinterpret_cast<void (*)(QsciScintilla*, bool)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::copyAvailable, [self, slotFunc](bool yes) {
        bool sigval1 = yes;
        slotFunc(self, sigval1);
    });
}

void QsciScintilla_IndicatorClicked(QsciScintilla* self, int line, int index, int state) {
    self->indicatorClicked(static_cast<int>(line), static_cast<int>(index), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_Connect_IndicatorClicked(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, int, int) = reinterpret_cast<void (*)(QsciScintilla*, int, int, int)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::indicatorClicked, [self, slotFunc](int line, int index, Qt::KeyboardModifiers state) {
        int sigval1 = line;
        int sigval2 = index;
        int sigval3 = static_cast<int>(state);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QsciScintilla_IndicatorReleased(QsciScintilla* self, int line, int index, int state) {
    self->indicatorReleased(static_cast<int>(line), static_cast<int>(index), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_Connect_IndicatorReleased(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, int, int) = reinterpret_cast<void (*)(QsciScintilla*, int, int, int)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::indicatorReleased, [self, slotFunc](int line, int index, Qt::KeyboardModifiers state) {
        int sigval1 = line;
        int sigval2 = index;
        int sigval3 = static_cast<int>(state);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QsciScintilla_LinesChanged(QsciScintilla* self) {
    self->linesChanged();
}

void QsciScintilla_Connect_LinesChanged(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*) = reinterpret_cast<void (*)(QsciScintilla*)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::linesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QsciScintilla_MarginClicked(QsciScintilla* self, int margin, int line, int state) {
    self->marginClicked(static_cast<int>(margin), static_cast<int>(line), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_Connect_MarginClicked(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, int, int) = reinterpret_cast<void (*)(QsciScintilla*, int, int, int)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::marginClicked, [self, slotFunc](int margin, int line, Qt::KeyboardModifiers state) {
        int sigval1 = margin;
        int sigval2 = line;
        int sigval3 = static_cast<int>(state);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QsciScintilla_MarginRightClicked(QsciScintilla* self, int margin, int line, int state) {
    self->marginRightClicked(static_cast<int>(margin), static_cast<int>(line), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_Connect_MarginRightClicked(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, int, int) = reinterpret_cast<void (*)(QsciScintilla*, int, int, int)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::marginRightClicked, [self, slotFunc](int margin, int line, Qt::KeyboardModifiers state) {
        int sigval1 = margin;
        int sigval2 = line;
        int sigval3 = static_cast<int>(state);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QsciScintilla_ModificationAttempted(QsciScintilla* self) {
    self->modificationAttempted();
}

void QsciScintilla_Connect_ModificationAttempted(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*) = reinterpret_cast<void (*)(QsciScintilla*)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::modificationAttempted, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QsciScintilla_ModificationChanged(QsciScintilla* self, bool m) {
    self->modificationChanged(m);
}

void QsciScintilla_Connect_ModificationChanged(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, bool) = reinterpret_cast<void (*)(QsciScintilla*, bool)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::modificationChanged, [self, slotFunc](bool m) {
        bool sigval1 = m;
        slotFunc(self, sigval1);
    });
}

void QsciScintilla_SelectionChanged(QsciScintilla* self) {
    self->selectionChanged();
}

void QsciScintilla_Connect_SelectionChanged(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*) = reinterpret_cast<void (*)(QsciScintilla*)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::selectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QsciScintilla_TextChanged(QsciScintilla* self) {
    self->textChanged();
}

void QsciScintilla_Connect_TextChanged(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*) = reinterpret_cast<void (*)(QsciScintilla*)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::textChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QsciScintilla_UserListActivated(QsciScintilla* self, int id, libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    self->userListActivated(static_cast<int>(id), stringVal_QString);
}

void QsciScintilla_Connect_UserListActivated(QsciScintilla* self, intptr_t slot) {
    void (*slotFunc)(QsciScintilla*, int, libqt_string) = reinterpret_cast<void (*)(QsciScintilla*, int, libqt_string)>(slot);
    QsciScintilla::connect(self, &QsciScintilla::userListActivated, [self, slotFunc](int id, const QString& stringVal) {
        int sigval1 = id;
        const QString stringVal_ret = stringVal;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray stringVal_b = stringVal_ret.toUtf8();
        libqt_string stringVal_str;
        stringVal_str.len = stringVal_b.length();
        stringVal_str.data = static_cast<char*>(malloc((stringVal_str.len + 1) * sizeof(char)));
        memcpy(stringVal_str.data, stringVal_b.data(), stringVal_str.len);
        stringVal_str.data[stringVal_str.len] = '\0';
        libqt_string sigval2 = stringVal_str;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QsciScintilla_Tr2(const char* s, const char* c) {
    QString _ret = QsciScintilla::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciScintilla_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciScintilla::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QsciScintilla_ClearAnnotations1(QsciScintilla* self, int line) {
    self->clearAnnotations(static_cast<int>(line));
}

int QsciScintilla_IndicatorDefine2(QsciScintilla* self, int style, int indicatorNumber) {
    return self->indicatorDefine(static_cast<QsciScintilla::IndicatorStyle>(style), static_cast<int>(indicatorNumber));
}

int QsciScintilla_MarkerDefine2(QsciScintilla* self, int sym, int markerNumber) {
    return self->markerDefine(static_cast<QsciScintilla::MarkerSymbol>(sym), static_cast<int>(markerNumber));
}

int QsciScintilla_MarkerDefine22(QsciScintilla* self, char ch, int markerNumber) {
    return self->markerDefine(static_cast<char>(ch), static_cast<int>(markerNumber));
}

int QsciScintilla_MarkerDefine23(QsciScintilla* self, QPixmap* pm, int markerNumber) {
    return self->markerDefine(*pm, static_cast<int>(markerNumber));
}

int QsciScintilla_MarkerDefine24(QsciScintilla* self, QImage* im, int markerNumber) {
    return self->markerDefine(*im, static_cast<int>(markerNumber));
}

void QsciScintilla_MarkerDelete2(QsciScintilla* self, int linenr, int markerNumber) {
    self->markerDelete(static_cast<int>(linenr), static_cast<int>(markerNumber));
}

void QsciScintilla_MarkerDeleteAll1(QsciScintilla* self, int markerNumber) {
    self->markerDeleteAll(static_cast<int>(markerNumber));
}

void QsciScintilla_SetIndicatorDrawUnder2(QsciScintilla* self, bool under, int indicatorNumber) {
    self->setIndicatorDrawUnder(under, static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorForegroundColor2(QsciScintilla* self, QColor* col, int indicatorNumber) {
    self->setIndicatorForegroundColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorHoverForegroundColor2(QsciScintilla* self, QColor* col, int indicatorNumber) {
    self->setIndicatorHoverForegroundColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorHoverStyle2(QsciScintilla* self, int style, int indicatorNumber) {
    self->setIndicatorHoverStyle(static_cast<QsciScintilla::IndicatorStyle>(style), static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorOutlineColor2(QsciScintilla* self, QColor* col, int indicatorNumber) {
    self->setIndicatorOutlineColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_ClearMarginText1(QsciScintilla* self, int line) {
    self->clearMarginText(static_cast<int>(line));
}

void QsciScintilla_SetMarkerBackgroundColor2(QsciScintilla* self, QColor* col, int markerNumber) {
    self->setMarkerBackgroundColor(*col, static_cast<int>(markerNumber));
}

void QsciScintilla_SetMarkerForegroundColor2(QsciScintilla* self, QColor* col, int markerNumber) {
    self->setMarkerForegroundColor(*col, static_cast<int>(markerNumber));
}

void QsciScintilla_SetWrapVisualFlags2(QsciScintilla* self, int endFlag, int startFlag) {
    self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag), static_cast<QsciScintilla::WrapVisualFlag>(startFlag));
}

void QsciScintilla_SetWrapVisualFlags3(QsciScintilla* self, int endFlag, int startFlag, int indent) {
    self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag), static_cast<QsciScintilla::WrapVisualFlag>(startFlag), static_cast<int>(indent));
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciScintilla_ApiContext(QsciScintilla* self, int pos, int* context_start, int* last_word_start) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        QStringList _ret = vqsciscintilla->apiContext(static_cast<int>(pos), static_cast<int&>(*context_start), static_cast<int&>(*last_word_start));
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
        QStringList _ret = vqsciscintilla->apiContext(static_cast<int>(pos), static_cast<int&>(*context_start), static_cast<int&>(*last_word_start));
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
libqt_list /* of libqt_string */ QsciScintilla_QBaseApiContext(QsciScintilla* self, int pos, int* context_start, int* last_word_start) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ApiContext_IsBase(true);
        QStringList _ret = vqsciscintilla->apiContext(static_cast<int>(pos), static_cast<int&>(*context_start), static_cast<int&>(*last_word_start));
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
        QStringList _ret = vqsciscintilla->apiContext(static_cast<int>(pos), static_cast<int&>(*context_start), static_cast<int&>(*last_word_start));
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
void QsciScintilla_OnApiContext(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ApiContext_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ApiContext_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_FindFirst(QsciScintilla* self, libqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) {
    QString expr_QString = QString::fromUtf8(expr.data, expr.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);
    } else {
        return vqsciscintilla->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseFindFirst(QsciScintilla* self, libqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) {
    QString expr_QString = QString::fromUtf8(expr.data, expr.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FindFirst_IsBase(true);
        return vqsciscintilla->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);
    } else {
        return vqsciscintilla->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFindFirst(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FindFirst_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FindFirst_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_FindFirstInSelection(QsciScintilla* self, libqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) {
    QString expr_QString = QString::fromUtf8(expr.data, expr.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);
    } else {
        return vqsciscintilla->findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseFindFirstInSelection(QsciScintilla* self, libqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) {
    QString expr_QString = QString::fromUtf8(expr.data, expr.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FindFirstInSelection_IsBase(true);
        return vqsciscintilla->findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);
    } else {
        return vqsciscintilla->findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFindFirstInSelection(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FindFirstInSelection_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FindFirstInSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_FindNext(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->findNext();
    } else {
        return vqsciscintilla->findNext();
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseFindNext(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FindNext_IsBase(true);
        return vqsciscintilla->findNext();
    } else {
        return vqsciscintilla->findNext();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFindNext(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FindNext_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FindNext_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Recolor(QsciScintilla* self, int start, int end) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->recolor(static_cast<int>(start), static_cast<int>(end));
    } else {
        vqsciscintilla->recolor(static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseRecolor(QsciScintilla* self, int start, int end) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Recolor_IsBase(true);
        vqsciscintilla->recolor(static_cast<int>(start), static_cast<int>(end));
    } else {
        vqsciscintilla->recolor(static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnRecolor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Recolor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Recolor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Replace(QsciScintilla* self, libqt_string replaceStr) {
    QString replaceStr_QString = QString::fromUtf8(replaceStr.data, replaceStr.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->replace(replaceStr_QString);
    } else {
        vqsciscintilla->replace(replaceStr_QString);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseReplace(QsciScintilla* self, libqt_string replaceStr) {
    QString replaceStr_QString = QString::fromUtf8(replaceStr.data, replaceStr.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Replace_IsBase(true);
        vqsciscintilla->replace(replaceStr_QString);
    } else {
        vqsciscintilla->replace(replaceStr_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnReplace(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Replace_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Replace_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Append(QsciScintilla* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->append(text_QString);
    } else {
        vqsciscintilla->append(text_QString);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseAppend(QsciScintilla* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Append_IsBase(true);
        vqsciscintilla->append(text_QString);
    } else {
        vqsciscintilla->append(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnAppend(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Append_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Append_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_AutoCompleteFromAll(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->autoCompleteFromAll();
    } else {
        vqsciscintilla->autoCompleteFromAll();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseAutoCompleteFromAll(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_AutoCompleteFromAll_IsBase(true);
        vqsciscintilla->autoCompleteFromAll();
    } else {
        vqsciscintilla->autoCompleteFromAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnAutoCompleteFromAll(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_AutoCompleteFromAll_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_AutoCompleteFromAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_AutoCompleteFromAPIs(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->autoCompleteFromAPIs();
    } else {
        vqsciscintilla->autoCompleteFromAPIs();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseAutoCompleteFromAPIs(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_AutoCompleteFromAPIs_IsBase(true);
        vqsciscintilla->autoCompleteFromAPIs();
    } else {
        vqsciscintilla->autoCompleteFromAPIs();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnAutoCompleteFromAPIs(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_AutoCompleteFromAPIs_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_AutoCompleteFromAPIs_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_AutoCompleteFromDocument(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->autoCompleteFromDocument();
    } else {
        vqsciscintilla->autoCompleteFromDocument();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseAutoCompleteFromDocument(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_AutoCompleteFromDocument_IsBase(true);
        vqsciscintilla->autoCompleteFromDocument();
    } else {
        vqsciscintilla->autoCompleteFromDocument();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnAutoCompleteFromDocument(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_AutoCompleteFromDocument_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_AutoCompleteFromDocument_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_CallTip(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->callTip();
    } else {
        vqsciscintilla->callTip();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseCallTip(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_CallTip_IsBase(true);
        vqsciscintilla->callTip();
    } else {
        vqsciscintilla->callTip();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCallTip(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_CallTip_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_CallTip_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Clear(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->clear();
    } else {
        vqsciscintilla->clear();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseClear(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Clear_IsBase(true);
        vqsciscintilla->clear();
    } else {
        vqsciscintilla->clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnClear(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Clear_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Copy(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->copy();
    } else {
        vqsciscintilla->copy();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseCopy(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Copy_IsBase(true);
        vqsciscintilla->copy();
    } else {
        vqsciscintilla->copy();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCopy(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Copy_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Copy_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Cut(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->cut();
    } else {
        vqsciscintilla->cut();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseCut(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Cut_IsBase(true);
        vqsciscintilla->cut();
    } else {
        vqsciscintilla->cut();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCut(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Cut_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Cut_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_EnsureCursorVisible(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->ensureCursorVisible();
    } else {
        vqsciscintilla->ensureCursorVisible();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseEnsureCursorVisible(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_EnsureCursorVisible_IsBase(true);
        vqsciscintilla->ensureCursorVisible();
    } else {
        vqsciscintilla->ensureCursorVisible();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEnsureCursorVisible(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_EnsureCursorVisible_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_EnsureCursorVisible_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_EnsureLineVisible(QsciScintilla* self, int line) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->ensureLineVisible(static_cast<int>(line));
    } else {
        vqsciscintilla->ensureLineVisible(static_cast<int>(line));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseEnsureLineVisible(QsciScintilla* self, int line) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_EnsureLineVisible_IsBase(true);
        vqsciscintilla->ensureLineVisible(static_cast<int>(line));
    } else {
        vqsciscintilla->ensureLineVisible(static_cast<int>(line));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEnsureLineVisible(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_EnsureLineVisible_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_EnsureLineVisible_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_FoldAll(QsciScintilla* self, bool children) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->foldAll(children);
    } else {
        vqsciscintilla->foldAll(children);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseFoldAll(QsciScintilla* self, bool children) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FoldAll_IsBase(true);
        vqsciscintilla->foldAll(children);
    } else {
        vqsciscintilla->foldAll(children);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFoldAll(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FoldAll_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FoldAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_FoldLine(QsciScintilla* self, int line) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->foldLine(static_cast<int>(line));
    } else {
        vqsciscintilla->foldLine(static_cast<int>(line));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseFoldLine(QsciScintilla* self, int line) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FoldLine_IsBase(true);
        vqsciscintilla->foldLine(static_cast<int>(line));
    } else {
        vqsciscintilla->foldLine(static_cast<int>(line));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFoldLine(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FoldLine_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FoldLine_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Indent(QsciScintilla* self, int line) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->indent(static_cast<int>(line));
    } else {
        vqsciscintilla->indent(static_cast<int>(line));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseIndent(QsciScintilla* self, int line) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Indent_IsBase(true);
        vqsciscintilla->indent(static_cast<int>(line));
    } else {
        vqsciscintilla->indent(static_cast<int>(line));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnIndent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Indent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Indent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Insert(QsciScintilla* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->insert(text_QString);
    } else {
        vqsciscintilla->insert(text_QString);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseInsert(QsciScintilla* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Insert_IsBase(true);
        vqsciscintilla->insert(text_QString);
    } else {
        vqsciscintilla->insert(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInsert(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Insert_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Insert_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_InsertAt(QsciScintilla* self, libqt_string text, int line, int index) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));
    } else {
        vqsciscintilla->insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseInsertAt(QsciScintilla* self, libqt_string text, int line, int index) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_InsertAt_IsBase(true);
        vqsciscintilla->insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));
    } else {
        vqsciscintilla->insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInsertAt(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_InsertAt_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_InsertAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_MoveToMatchingBrace(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->moveToMatchingBrace();
    } else {
        vqsciscintilla->moveToMatchingBrace();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseMoveToMatchingBrace(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_MoveToMatchingBrace_IsBase(true);
        vqsciscintilla->moveToMatchingBrace();
    } else {
        vqsciscintilla->moveToMatchingBrace();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMoveToMatchingBrace(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_MoveToMatchingBrace_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MoveToMatchingBrace_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Paste(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->paste();
    } else {
        vqsciscintilla->paste();
    }
}

// Base class handler implementation
void QsciScintilla_QBasePaste(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Paste_IsBase(true);
        vqsciscintilla->paste();
    } else {
        vqsciscintilla->paste();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnPaste(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Paste_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Paste_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Redo(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->redo();
    } else {
        vqsciscintilla->redo();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseRedo(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Redo_IsBase(true);
        vqsciscintilla->redo();
    } else {
        vqsciscintilla->redo();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnRedo(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Redo_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Redo_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_RemoveSelectedText(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->removeSelectedText();
    } else {
        vqsciscintilla->removeSelectedText();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseRemoveSelectedText(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_RemoveSelectedText_IsBase(true);
        vqsciscintilla->removeSelectedText();
    } else {
        vqsciscintilla->removeSelectedText();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnRemoveSelectedText(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_RemoveSelectedText_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_RemoveSelectedText_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ReplaceSelectedText(QsciScintilla* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->replaceSelectedText(text_QString);
    } else {
        vqsciscintilla->replaceSelectedText(text_QString);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseReplaceSelectedText(QsciScintilla* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ReplaceSelectedText_IsBase(true);
        vqsciscintilla->replaceSelectedText(text_QString);
    } else {
        vqsciscintilla->replaceSelectedText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnReplaceSelectedText(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ReplaceSelectedText_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ReplaceSelectedText_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ResetSelectionBackgroundColor(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->resetSelectionBackgroundColor();
    } else {
        vqsciscintilla->resetSelectionBackgroundColor();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseResetSelectionBackgroundColor(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ResetSelectionBackgroundColor_IsBase(true);
        vqsciscintilla->resetSelectionBackgroundColor();
    } else {
        vqsciscintilla->resetSelectionBackgroundColor();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnResetSelectionBackgroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ResetSelectionBackgroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ResetSelectionBackgroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ResetSelectionForegroundColor(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->resetSelectionForegroundColor();
    } else {
        vqsciscintilla->resetSelectionForegroundColor();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseResetSelectionForegroundColor(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ResetSelectionForegroundColor_IsBase(true);
        vqsciscintilla->resetSelectionForegroundColor();
    } else {
        vqsciscintilla->resetSelectionForegroundColor();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnResetSelectionForegroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ResetSelectionForegroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ResetSelectionForegroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SelectAll(QsciScintilla* self, bool selectVal) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->selectAll(selectVal);
    } else {
        vqsciscintilla->selectAll(selectVal);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSelectAll(QsciScintilla* self, bool selectVal) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SelectAll_IsBase(true);
        vqsciscintilla->selectAll(selectVal);
    } else {
        vqsciscintilla->selectAll(selectVal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSelectAll(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SelectAll_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SelectToMatchingBrace(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->selectToMatchingBrace();
    } else {
        vqsciscintilla->selectToMatchingBrace();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSelectToMatchingBrace(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SelectToMatchingBrace_IsBase(true);
        vqsciscintilla->selectToMatchingBrace();
    } else {
        vqsciscintilla->selectToMatchingBrace();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSelectToMatchingBrace(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SelectToMatchingBrace_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SelectToMatchingBrace_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetAutoCompletionCaseSensitivity(QsciScintilla* self, bool cs) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setAutoCompletionCaseSensitivity(cs);
    } else {
        vqsciscintilla->setAutoCompletionCaseSensitivity(cs);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetAutoCompletionCaseSensitivity(QsciScintilla* self, bool cs) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionCaseSensitivity_IsBase(true);
        vqsciscintilla->setAutoCompletionCaseSensitivity(cs);
    } else {
        vqsciscintilla->setAutoCompletionCaseSensitivity(cs);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionCaseSensitivity(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionCaseSensitivity_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionCaseSensitivity_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetAutoCompletionReplaceWord(QsciScintilla* self, bool replace) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setAutoCompletionReplaceWord(replace);
    } else {
        vqsciscintilla->setAutoCompletionReplaceWord(replace);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetAutoCompletionReplaceWord(QsciScintilla* self, bool replace) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionReplaceWord_IsBase(true);
        vqsciscintilla->setAutoCompletionReplaceWord(replace);
    } else {
        vqsciscintilla->setAutoCompletionReplaceWord(replace);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionReplaceWord(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionReplaceWord_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionReplaceWord_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetAutoCompletionShowSingle(QsciScintilla* self, bool single) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setAutoCompletionShowSingle(single);
    } else {
        vqsciscintilla->setAutoCompletionShowSingle(single);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetAutoCompletionShowSingle(QsciScintilla* self, bool single) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionShowSingle_IsBase(true);
        vqsciscintilla->setAutoCompletionShowSingle(single);
    } else {
        vqsciscintilla->setAutoCompletionShowSingle(single);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionShowSingle(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionShowSingle_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionShowSingle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetAutoCompletionSource(QsciScintilla* self, int source) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setAutoCompletionSource(static_cast<QsciScintilla::AutoCompletionSource>(source));
    } else {
        vqsciscintilla->setAutoCompletionSource(static_cast<QsciScintilla::AutoCompletionSource>(source));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetAutoCompletionSource(QsciScintilla* self, int source) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionSource_IsBase(true);
        vqsciscintilla->setAutoCompletionSource(static_cast<QsciScintilla::AutoCompletionSource>(source));
    } else {
        vqsciscintilla->setAutoCompletionSource(static_cast<QsciScintilla::AutoCompletionSource>(source));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionSource(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionSource_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionSource_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetAutoCompletionThreshold(QsciScintilla* self, int thresh) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setAutoCompletionThreshold(static_cast<int>(thresh));
    } else {
        vqsciscintilla->setAutoCompletionThreshold(static_cast<int>(thresh));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetAutoCompletionThreshold(QsciScintilla* self, int thresh) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionThreshold_IsBase(true);
        vqsciscintilla->setAutoCompletionThreshold(static_cast<int>(thresh));
    } else {
        vqsciscintilla->setAutoCompletionThreshold(static_cast<int>(thresh));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionThreshold(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionThreshold_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionThreshold_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetAutoCompletionUseSingle(QsciScintilla* self, int single) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setAutoCompletionUseSingle(static_cast<QsciScintilla::AutoCompletionUseSingle>(single));
    } else {
        vqsciscintilla->setAutoCompletionUseSingle(static_cast<QsciScintilla::AutoCompletionUseSingle>(single));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetAutoCompletionUseSingle(QsciScintilla* self, int single) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionUseSingle_IsBase(true);
        vqsciscintilla->setAutoCompletionUseSingle(static_cast<QsciScintilla::AutoCompletionUseSingle>(single));
    } else {
        vqsciscintilla->setAutoCompletionUseSingle(static_cast<QsciScintilla::AutoCompletionUseSingle>(single));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoCompletionUseSingle(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetAutoCompletionUseSingle_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoCompletionUseSingle_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetAutoIndent(QsciScintilla* self, bool autoindent) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setAutoIndent(autoindent);
    } else {
        vqsciscintilla->setAutoIndent(autoindent);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetAutoIndent(QsciScintilla* self, bool autoindent) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetAutoIndent_IsBase(true);
        vqsciscintilla->setAutoIndent(autoindent);
    } else {
        vqsciscintilla->setAutoIndent(autoindent);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetAutoIndent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetAutoIndent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetAutoIndent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetBraceMatching(QsciScintilla* self, int bm) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setBraceMatching(static_cast<QsciScintilla::BraceMatch>(bm));
    } else {
        vqsciscintilla->setBraceMatching(static_cast<QsciScintilla::BraceMatch>(bm));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetBraceMatching(QsciScintilla* self, int bm) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetBraceMatching_IsBase(true);
        vqsciscintilla->setBraceMatching(static_cast<QsciScintilla::BraceMatch>(bm));
    } else {
        vqsciscintilla->setBraceMatching(static_cast<QsciScintilla::BraceMatch>(bm));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetBraceMatching(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetBraceMatching_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetBraceMatching_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetBackspaceUnindents(QsciScintilla* self, bool unindent) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setBackspaceUnindents(unindent);
    } else {
        vqsciscintilla->setBackspaceUnindents(unindent);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetBackspaceUnindents(QsciScintilla* self, bool unindent) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetBackspaceUnindents_IsBase(true);
        vqsciscintilla->setBackspaceUnindents(unindent);
    } else {
        vqsciscintilla->setBackspaceUnindents(unindent);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetBackspaceUnindents(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetBackspaceUnindents_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetBackspaceUnindents_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetCaretForegroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setCaretForegroundColor(*col);
    } else {
        vqsciscintilla->setCaretForegroundColor(*col);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetCaretForegroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetCaretForegroundColor_IsBase(true);
        vqsciscintilla->setCaretForegroundColor(*col);
    } else {
        vqsciscintilla->setCaretForegroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretForegroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetCaretForegroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretForegroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetCaretLineBackgroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setCaretLineBackgroundColor(*col);
    } else {
        vqsciscintilla->setCaretLineBackgroundColor(*col);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetCaretLineBackgroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetCaretLineBackgroundColor_IsBase(true);
        vqsciscintilla->setCaretLineBackgroundColor(*col);
    } else {
        vqsciscintilla->setCaretLineBackgroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretLineBackgroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetCaretLineBackgroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretLineBackgroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetCaretLineFrameWidth(QsciScintilla* self, int width) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setCaretLineFrameWidth(static_cast<int>(width));
    } else {
        vqsciscintilla->setCaretLineFrameWidth(static_cast<int>(width));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetCaretLineFrameWidth(QsciScintilla* self, int width) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetCaretLineFrameWidth_IsBase(true);
        vqsciscintilla->setCaretLineFrameWidth(static_cast<int>(width));
    } else {
        vqsciscintilla->setCaretLineFrameWidth(static_cast<int>(width));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretLineFrameWidth(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetCaretLineFrameWidth_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretLineFrameWidth_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetCaretLineVisible(QsciScintilla* self, bool enable) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setCaretLineVisible(enable);
    } else {
        vqsciscintilla->setCaretLineVisible(enable);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetCaretLineVisible(QsciScintilla* self, bool enable) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetCaretLineVisible_IsBase(true);
        vqsciscintilla->setCaretLineVisible(enable);
    } else {
        vqsciscintilla->setCaretLineVisible(enable);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretLineVisible(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetCaretLineVisible_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretLineVisible_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetCaretWidth(QsciScintilla* self, int width) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setCaretWidth(static_cast<int>(width));
    } else {
        vqsciscintilla->setCaretWidth(static_cast<int>(width));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetCaretWidth(QsciScintilla* self, int width) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetCaretWidth_IsBase(true);
        vqsciscintilla->setCaretWidth(static_cast<int>(width));
    } else {
        vqsciscintilla->setCaretWidth(static_cast<int>(width));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCaretWidth(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetCaretWidth_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCaretWidth_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetColor(QsciScintilla* self, QColor* c) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setColor(*c);
    } else {
        vqsciscintilla->setColor(*c);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetColor(QsciScintilla* self, QColor* c) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetColor_IsBase(true);
        vqsciscintilla->setColor(*c);
    } else {
        vqsciscintilla->setColor(*c);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetCursorPosition(QsciScintilla* self, int line, int index) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setCursorPosition(static_cast<int>(line), static_cast<int>(index));
    } else {
        vqsciscintilla->setCursorPosition(static_cast<int>(line), static_cast<int>(index));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetCursorPosition(QsciScintilla* self, int line, int index) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetCursorPosition_IsBase(true);
        vqsciscintilla->setCursorPosition(static_cast<int>(line), static_cast<int>(index));
    } else {
        vqsciscintilla->setCursorPosition(static_cast<int>(line), static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetCursorPosition(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetCursorPosition_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetCursorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetEolMode(QsciScintilla* self, int mode) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setEolMode(static_cast<QsciScintilla::EolMode>(mode));
    } else {
        vqsciscintilla->setEolMode(static_cast<QsciScintilla::EolMode>(mode));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetEolMode(QsciScintilla* self, int mode) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetEolMode_IsBase(true);
        vqsciscintilla->setEolMode(static_cast<QsciScintilla::EolMode>(mode));
    } else {
        vqsciscintilla->setEolMode(static_cast<QsciScintilla::EolMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetEolMode(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetEolMode_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetEolMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetEolVisibility(QsciScintilla* self, bool visible) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setEolVisibility(visible);
    } else {
        vqsciscintilla->setEolVisibility(visible);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetEolVisibility(QsciScintilla* self, bool visible) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetEolVisibility_IsBase(true);
        vqsciscintilla->setEolVisibility(visible);
    } else {
        vqsciscintilla->setEolVisibility(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetEolVisibility(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetEolVisibility_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetEolVisibility_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetFolding(QsciScintilla* self, int fold, int margin) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setFolding(static_cast<QsciScintilla::FoldStyle>(fold), static_cast<int>(margin));
    } else {
        vqsciscintilla->setFolding(static_cast<QsciScintilla::FoldStyle>(fold), static_cast<int>(margin));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetFolding(QsciScintilla* self, int fold, int margin) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetFolding_IsBase(true);
        vqsciscintilla->setFolding(static_cast<QsciScintilla::FoldStyle>(fold), static_cast<int>(margin));
    } else {
        vqsciscintilla->setFolding(static_cast<QsciScintilla::FoldStyle>(fold), static_cast<int>(margin));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetFolding(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetFolding_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetFolding_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetIndentation(QsciScintilla* self, int line, int indentation) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setIndentation(static_cast<int>(line), static_cast<int>(indentation));
    } else {
        vqsciscintilla->setIndentation(static_cast<int>(line), static_cast<int>(indentation));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetIndentation(QsciScintilla* self, int line, int indentation) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetIndentation_IsBase(true);
        vqsciscintilla->setIndentation(static_cast<int>(line), static_cast<int>(indentation));
    } else {
        vqsciscintilla->setIndentation(static_cast<int>(line), static_cast<int>(indentation));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentation(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetIndentation_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentation_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetIndentationGuides(QsciScintilla* self, bool enable) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setIndentationGuides(enable);
    } else {
        vqsciscintilla->setIndentationGuides(enable);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetIndentationGuides(QsciScintilla* self, bool enable) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetIndentationGuides_IsBase(true);
        vqsciscintilla->setIndentationGuides(enable);
    } else {
        vqsciscintilla->setIndentationGuides(enable);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationGuides(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetIndentationGuides_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationGuides_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetIndentationGuidesBackgroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setIndentationGuidesBackgroundColor(*col);
    } else {
        vqsciscintilla->setIndentationGuidesBackgroundColor(*col);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetIndentationGuidesBackgroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetIndentationGuidesBackgroundColor_IsBase(true);
        vqsciscintilla->setIndentationGuidesBackgroundColor(*col);
    } else {
        vqsciscintilla->setIndentationGuidesBackgroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationGuidesBackgroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetIndentationGuidesBackgroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationGuidesBackgroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetIndentationGuidesForegroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setIndentationGuidesForegroundColor(*col);
    } else {
        vqsciscintilla->setIndentationGuidesForegroundColor(*col);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetIndentationGuidesForegroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetIndentationGuidesForegroundColor_IsBase(true);
        vqsciscintilla->setIndentationGuidesForegroundColor(*col);
    } else {
        vqsciscintilla->setIndentationGuidesForegroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationGuidesForegroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetIndentationGuidesForegroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationGuidesForegroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetIndentationsUseTabs(QsciScintilla* self, bool tabs) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setIndentationsUseTabs(tabs);
    } else {
        vqsciscintilla->setIndentationsUseTabs(tabs);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetIndentationsUseTabs(QsciScintilla* self, bool tabs) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetIndentationsUseTabs_IsBase(true);
        vqsciscintilla->setIndentationsUseTabs(tabs);
    } else {
        vqsciscintilla->setIndentationsUseTabs(tabs);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationsUseTabs(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetIndentationsUseTabs_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationsUseTabs_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetIndentationWidth(QsciScintilla* self, int width) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setIndentationWidth(static_cast<int>(width));
    } else {
        vqsciscintilla->setIndentationWidth(static_cast<int>(width));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetIndentationWidth(QsciScintilla* self, int width) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetIndentationWidth_IsBase(true);
        vqsciscintilla->setIndentationWidth(static_cast<int>(width));
    } else {
        vqsciscintilla->setIndentationWidth(static_cast<int>(width));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetIndentationWidth(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetIndentationWidth_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetIndentationWidth_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetLexer(QsciScintilla* self, QsciLexer* lexer) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setLexer(lexer);
    } else {
        vqsciscintilla->setLexer(lexer);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetLexer(QsciScintilla* self, QsciLexer* lexer) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetLexer_IsBase(true);
        vqsciscintilla->setLexer(lexer);
    } else {
        vqsciscintilla->setLexer(lexer);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetLexer(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetLexer_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetLexer_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetMarginsBackgroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setMarginsBackgroundColor(*col);
    } else {
        vqsciscintilla->setMarginsBackgroundColor(*col);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginsBackgroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginsBackgroundColor_IsBase(true);
        vqsciscintilla->setMarginsBackgroundColor(*col);
    } else {
        vqsciscintilla->setMarginsBackgroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginsBackgroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginsBackgroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginsBackgroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetMarginsFont(QsciScintilla* self, QFont* f) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setMarginsFont(*f);
    } else {
        vqsciscintilla->setMarginsFont(*f);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginsFont(QsciScintilla* self, QFont* f) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginsFont_IsBase(true);
        vqsciscintilla->setMarginsFont(*f);
    } else {
        vqsciscintilla->setMarginsFont(*f);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginsFont(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginsFont_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginsFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetMarginsForegroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setMarginsForegroundColor(*col);
    } else {
        vqsciscintilla->setMarginsForegroundColor(*col);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginsForegroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginsForegroundColor_IsBase(true);
        vqsciscintilla->setMarginsForegroundColor(*col);
    } else {
        vqsciscintilla->setMarginsForegroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginsForegroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginsForegroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginsForegroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetMarginLineNumbers(QsciScintilla* self, int margin, bool lnrs) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setMarginLineNumbers(static_cast<int>(margin), lnrs);
    } else {
        vqsciscintilla->setMarginLineNumbers(static_cast<int>(margin), lnrs);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginLineNumbers(QsciScintilla* self, int margin, bool lnrs) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginLineNumbers_IsBase(true);
        vqsciscintilla->setMarginLineNumbers(static_cast<int>(margin), lnrs);
    } else {
        vqsciscintilla->setMarginLineNumbers(static_cast<int>(margin), lnrs);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginLineNumbers(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginLineNumbers_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginLineNumbers_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetMarginMarkerMask(QsciScintilla* self, int margin, int mask) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));
    } else {
        vqsciscintilla->setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginMarkerMask(QsciScintilla* self, int margin, int mask) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginMarkerMask_IsBase(true);
        vqsciscintilla->setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));
    } else {
        vqsciscintilla->setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginMarkerMask(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginMarkerMask_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginMarkerMask_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetMarginSensitivity(QsciScintilla* self, int margin, bool sens) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setMarginSensitivity(static_cast<int>(margin), sens);
    } else {
        vqsciscintilla->setMarginSensitivity(static_cast<int>(margin), sens);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginSensitivity(QsciScintilla* self, int margin, bool sens) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginSensitivity_IsBase(true);
        vqsciscintilla->setMarginSensitivity(static_cast<int>(margin), sens);
    } else {
        vqsciscintilla->setMarginSensitivity(static_cast<int>(margin), sens);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginSensitivity(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginSensitivity_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginSensitivity_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetMarginWidth(QsciScintilla* self, int margin, int width) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setMarginWidth(static_cast<int>(margin), static_cast<int>(width));
    } else {
        vqsciscintilla->setMarginWidth(static_cast<int>(margin), static_cast<int>(width));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginWidth(QsciScintilla* self, int margin, int width) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginWidth_IsBase(true);
        vqsciscintilla->setMarginWidth(static_cast<int>(margin), static_cast<int>(width));
    } else {
        vqsciscintilla->setMarginWidth(static_cast<int>(margin), static_cast<int>(width));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginWidth(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginWidth_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginWidth_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetMarginWidth2(QsciScintilla* self, int margin, libqt_string s) {
    QString s_QString = QString::fromUtf8(s.data, s.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setMarginWidth(static_cast<int>(margin), s_QString);
    } else {
        vqsciscintilla->setMarginWidth(static_cast<int>(margin), s_QString);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetMarginWidth2(QsciScintilla* self, int margin, libqt_string s) {
    QString s_QString = QString::fromUtf8(s.data, s.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginWidth2_IsBase(true);
        vqsciscintilla->setMarginWidth(static_cast<int>(margin), s_QString);
    } else {
        vqsciscintilla->setMarginWidth(static_cast<int>(margin), s_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetMarginWidth2(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetMarginWidth2_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetMarginWidth2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetModified(QsciScintilla* self, bool m) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setModified(m);
    } else {
        vqsciscintilla->setModified(m);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetModified(QsciScintilla* self, bool m) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetModified_IsBase(true);
        vqsciscintilla->setModified(m);
    } else {
        vqsciscintilla->setModified(m);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetModified(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetModified_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetModified_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetPaper(QsciScintilla* self, QColor* c) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setPaper(*c);
    } else {
        vqsciscintilla->setPaper(*c);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetPaper(QsciScintilla* self, QColor* c) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetPaper_IsBase(true);
        vqsciscintilla->setPaper(*c);
    } else {
        vqsciscintilla->setPaper(*c);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetPaper(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetPaper_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetPaper_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetReadOnly(QsciScintilla* self, bool ro) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setReadOnly(ro);
    } else {
        vqsciscintilla->setReadOnly(ro);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetReadOnly(QsciScintilla* self, bool ro) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetReadOnly_IsBase(true);
        vqsciscintilla->setReadOnly(ro);
    } else {
        vqsciscintilla->setReadOnly(ro);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetReadOnly(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetReadOnly_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetReadOnly_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetSelection(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));
    } else {
        vqsciscintilla->setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetSelection(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetSelection_IsBase(true);
        vqsciscintilla->setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));
    } else {
        vqsciscintilla->setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetSelection(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetSelection_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetSelectionBackgroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setSelectionBackgroundColor(*col);
    } else {
        vqsciscintilla->setSelectionBackgroundColor(*col);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetSelectionBackgroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetSelectionBackgroundColor_IsBase(true);
        vqsciscintilla->setSelectionBackgroundColor(*col);
    } else {
        vqsciscintilla->setSelectionBackgroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetSelectionBackgroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetSelectionBackgroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetSelectionBackgroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetSelectionForegroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setSelectionForegroundColor(*col);
    } else {
        vqsciscintilla->setSelectionForegroundColor(*col);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetSelectionForegroundColor(QsciScintilla* self, QColor* col) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetSelectionForegroundColor_IsBase(true);
        vqsciscintilla->setSelectionForegroundColor(*col);
    } else {
        vqsciscintilla->setSelectionForegroundColor(*col);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetSelectionForegroundColor(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetSelectionForegroundColor_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetSelectionForegroundColor_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetTabIndents(QsciScintilla* self, bool indent) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setTabIndents(indent);
    } else {
        vqsciscintilla->setTabIndents(indent);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetTabIndents(QsciScintilla* self, bool indent) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetTabIndents_IsBase(true);
        vqsciscintilla->setTabIndents(indent);
    } else {
        vqsciscintilla->setTabIndents(indent);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetTabIndents(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetTabIndents_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetTabIndents_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetTabWidth(QsciScintilla* self, int width) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setTabWidth(static_cast<int>(width));
    } else {
        vqsciscintilla->setTabWidth(static_cast<int>(width));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetTabWidth(QsciScintilla* self, int width) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetTabWidth_IsBase(true);
        vqsciscintilla->setTabWidth(static_cast<int>(width));
    } else {
        vqsciscintilla->setTabWidth(static_cast<int>(width));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetTabWidth(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetTabWidth_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetTabWidth_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetText(QsciScintilla* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setText(text_QString);
    } else {
        vqsciscintilla->setText(text_QString);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetText(QsciScintilla* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetText_IsBase(true);
        vqsciscintilla->setText(text_QString);
    } else {
        vqsciscintilla->setText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetText(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetText_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetText_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetUtf8(QsciScintilla* self, bool cp) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setUtf8(cp);
    } else {
        vqsciscintilla->setUtf8(cp);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetUtf8(QsciScintilla* self, bool cp) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetUtf8_IsBase(true);
        vqsciscintilla->setUtf8(cp);
    } else {
        vqsciscintilla->setUtf8(cp);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetUtf8(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetUtf8_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetUtf8_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetWhitespaceVisibility(QsciScintilla* self, int mode) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setWhitespaceVisibility(static_cast<QsciScintilla::WhitespaceVisibility>(mode));
    } else {
        vqsciscintilla->setWhitespaceVisibility(static_cast<QsciScintilla::WhitespaceVisibility>(mode));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetWhitespaceVisibility(QsciScintilla* self, int mode) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetWhitespaceVisibility_IsBase(true);
        vqsciscintilla->setWhitespaceVisibility(static_cast<QsciScintilla::WhitespaceVisibility>(mode));
    } else {
        vqsciscintilla->setWhitespaceVisibility(static_cast<QsciScintilla::WhitespaceVisibility>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetWhitespaceVisibility(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetWhitespaceVisibility_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetWhitespaceVisibility_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetWrapMode(QsciScintilla* self, int mode) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setWrapMode(static_cast<QsciScintilla::WrapMode>(mode));
    } else {
        vqsciscintilla->setWrapMode(static_cast<QsciScintilla::WrapMode>(mode));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetWrapMode(QsciScintilla* self, int mode) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetWrapMode_IsBase(true);
        vqsciscintilla->setWrapMode(static_cast<QsciScintilla::WrapMode>(mode));
    } else {
        vqsciscintilla->setWrapMode(static_cast<QsciScintilla::WrapMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetWrapMode(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetWrapMode_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetWrapMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Undo(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->undo();
    } else {
        vqsciscintilla->undo();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseUndo(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Undo_IsBase(true);
        vqsciscintilla->undo();
    } else {
        vqsciscintilla->undo();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnUndo(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Undo_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Undo_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Unindent(QsciScintilla* self, int line) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->unindent(static_cast<int>(line));
    } else {
        vqsciscintilla->unindent(static_cast<int>(line));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseUnindent(QsciScintilla* self, int line) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Unindent_IsBase(true);
        vqsciscintilla->unindent(static_cast<int>(line));
    } else {
        vqsciscintilla->unindent(static_cast<int>(line));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnUnindent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Unindent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Unindent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ZoomIn(QsciScintilla* self, int range) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->zoomIn(static_cast<int>(range));
    } else {
        vqsciscintilla->zoomIn(static_cast<int>(range));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseZoomIn(QsciScintilla* self, int range) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ZoomIn_IsBase(true);
        vqsciscintilla->zoomIn(static_cast<int>(range));
    } else {
        vqsciscintilla->zoomIn(static_cast<int>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomIn(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ZoomIn_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomIn_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ZoomIn2(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->zoomIn();
    } else {
        vqsciscintilla->zoomIn();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseZoomIn2(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ZoomIn2_IsBase(true);
        vqsciscintilla->zoomIn();
    } else {
        vqsciscintilla->zoomIn();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomIn2(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ZoomIn2_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomIn2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ZoomOut(QsciScintilla* self, int range) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->zoomOut(static_cast<int>(range));
    } else {
        vqsciscintilla->zoomOut(static_cast<int>(range));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseZoomOut(QsciScintilla* self, int range) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ZoomOut_IsBase(true);
        vqsciscintilla->zoomOut(static_cast<int>(range));
    } else {
        vqsciscintilla->zoomOut(static_cast<int>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomOut(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ZoomOut_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomOut_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ZoomOut2(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->zoomOut();
    } else {
        vqsciscintilla->zoomOut();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseZoomOut2(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ZoomOut2_IsBase(true);
        vqsciscintilla->zoomOut();
    } else {
        vqsciscintilla->zoomOut();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomOut2(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ZoomOut2_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomOut2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ZoomTo(QsciScintilla* self, int size) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->zoomTo(static_cast<int>(size));
    } else {
        vqsciscintilla->zoomTo(static_cast<int>(size));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseZoomTo(QsciScintilla* self, int size) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ZoomTo_IsBase(true);
        vqsciscintilla->zoomTo(static_cast<int>(size));
    } else {
        vqsciscintilla->zoomTo(static_cast<int>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnZoomTo(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ZoomTo_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ZoomTo_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_Event(QsciScintilla* self, QEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->event(e);
    } else {
        return vqsciscintilla->event(e);
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseEvent(QsciScintilla* self, QEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Event_IsBase(true);
        return vqsciscintilla->event(e);
    } else {
        return vqsciscintilla->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Event_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ChangeEvent(QsciScintilla* self, QEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->changeEvent(e);
    } else {
        vqsciscintilla->changeEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseChangeEvent(QsciScintilla* self, QEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ChangeEvent_IsBase(true);
        vqsciscintilla->changeEvent(e);
    } else {
        vqsciscintilla->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnChangeEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ChangeEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ContextMenuEvent(QsciScintilla* self, QContextMenuEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->contextMenuEvent(e);
    } else {
        vqsciscintilla->contextMenuEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseContextMenuEvent(QsciScintilla* self, QContextMenuEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ContextMenuEvent_IsBase(true);
        vqsciscintilla->contextMenuEvent(e);
    } else {
        vqsciscintilla->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnContextMenuEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ContextMenuEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_WheelEvent(QsciScintilla* self, QWheelEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->wheelEvent(e);
    } else {
        vqsciscintilla->wheelEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseWheelEvent(QsciScintilla* self, QWheelEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_WheelEvent_IsBase(true);
        vqsciscintilla->wheelEvent(e);
    } else {
        vqsciscintilla->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnWheelEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_WheelEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_CanInsertFromMimeData(const QsciScintilla* self, QMimeData* source) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->canInsertFromMimeData(source);
    } else {
        return vqsciscintilla->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseCanInsertFromMimeData(const QsciScintilla* self, QMimeData* source) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_CanInsertFromMimeData_IsBase(true);
        return vqsciscintilla->canInsertFromMimeData(source);
    } else {
        return vqsciscintilla->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCanInsertFromMimeData(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciScintilla_FromMimeData(const QsciScintilla* self, QMimeData* source, bool* rectangular) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        QByteArray _qb = vqsciscintilla->fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _qb.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = vqsciscintilla->fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _qb.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciScintilla_QBaseFromMimeData(const QsciScintilla* self, QMimeData* source, bool* rectangular) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_FromMimeData_IsBase(true);
        QByteArray _qb = vqsciscintilla->fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _qb.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = vqsciscintilla->fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _qb.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFromMimeData(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_FromMimeData_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QsciScintilla_ToMimeData(const QsciScintilla* self, libqt_string text, bool rectangular) {
    QByteArray text_QByteArray(text.data, text.len);
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->toMimeData(text_QByteArray, rectangular);
    } else {
        return vqsciscintilla->toMimeData(text_QByteArray, rectangular);
    }
}

// Base class handler implementation
QMimeData* QsciScintilla_QBaseToMimeData(const QsciScintilla* self, libqt_string text, bool rectangular) {
    QByteArray text_QByteArray(text.data, text.len);
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_ToMimeData_IsBase(true);
        return vqsciscintilla->toMimeData(text_QByteArray, rectangular);
    } else {
        return vqsciscintilla->toMimeData(text_QByteArray, rectangular);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnToMimeData(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_ToMimeData_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ToMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_DragEnterEvent(QsciScintilla* self, QDragEnterEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->dragEnterEvent(e);
    } else {
        vqsciscintilla->dragEnterEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseDragEnterEvent(QsciScintilla* self, QDragEnterEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_DragEnterEvent_IsBase(true);
        vqsciscintilla->dragEnterEvent(e);
    } else {
        vqsciscintilla->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDragEnterEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_DragEnterEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_DragLeaveEvent(QsciScintilla* self, QDragLeaveEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->dragLeaveEvent(e);
    } else {
        vqsciscintilla->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseDragLeaveEvent(QsciScintilla* self, QDragLeaveEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_DragLeaveEvent_IsBase(true);
        vqsciscintilla->dragLeaveEvent(e);
    } else {
        vqsciscintilla->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDragLeaveEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_DragLeaveEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_DragMoveEvent(QsciScintilla* self, QDragMoveEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->dragMoveEvent(e);
    } else {
        vqsciscintilla->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseDragMoveEvent(QsciScintilla* self, QDragMoveEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_DragMoveEvent_IsBase(true);
        vqsciscintilla->dragMoveEvent(e);
    } else {
        vqsciscintilla->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDragMoveEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_DragMoveEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_DropEvent(QsciScintilla* self, QDropEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->dropEvent(e);
    } else {
        vqsciscintilla->dropEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseDropEvent(QsciScintilla* self, QDropEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_DropEvent_IsBase(true);
        vqsciscintilla->dropEvent(e);
    } else {
        vqsciscintilla->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDropEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_DropEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_FocusInEvent(QsciScintilla* self, QFocusEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->focusInEvent(e);
    } else {
        vqsciscintilla->focusInEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseFocusInEvent(QsciScintilla* self, QFocusEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FocusInEvent_IsBase(true);
        vqsciscintilla->focusInEvent(e);
    } else {
        vqsciscintilla->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFocusInEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FocusInEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_FocusOutEvent(QsciScintilla* self, QFocusEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->focusOutEvent(e);
    } else {
        vqsciscintilla->focusOutEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseFocusOutEvent(QsciScintilla* self, QFocusEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FocusOutEvent_IsBase(true);
        vqsciscintilla->focusOutEvent(e);
    } else {
        vqsciscintilla->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFocusOutEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FocusOutEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_FocusNextPrevChild(QsciScintilla* self, bool next) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->focusNextPrevChild(next);
    } else {
        return vqsciscintilla->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseFocusNextPrevChild(QsciScintilla* self, bool next) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FocusNextPrevChild_IsBase(true);
        return vqsciscintilla->focusNextPrevChild(next);
    } else {
        return vqsciscintilla->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFocusNextPrevChild(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_KeyPressEvent(QsciScintilla* self, QKeyEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->keyPressEvent(e);
    } else {
        vqsciscintilla->keyPressEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseKeyPressEvent(QsciScintilla* self, QKeyEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_KeyPressEvent_IsBase(true);
        vqsciscintilla->keyPressEvent(e);
    } else {
        vqsciscintilla->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnKeyPressEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_KeyPressEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_InputMethodEvent(QsciScintilla* self, QInputMethodEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->inputMethodEvent(event);
    } else {
        vqsciscintilla->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseInputMethodEvent(QsciScintilla* self, QInputMethodEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_InputMethodEvent_IsBase(true);
        vqsciscintilla->inputMethodEvent(event);
    } else {
        vqsciscintilla->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInputMethodEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_InputMethodEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_MouseDoubleClickEvent(QsciScintilla* self, QMouseEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->mouseDoubleClickEvent(e);
    } else {
        vqsciscintilla->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseMouseDoubleClickEvent(QsciScintilla* self, QMouseEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_MouseDoubleClickEvent_IsBase(true);
        vqsciscintilla->mouseDoubleClickEvent(e);
    } else {
        vqsciscintilla->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMouseDoubleClickEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_MouseMoveEvent(QsciScintilla* self, QMouseEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->mouseMoveEvent(e);
    } else {
        vqsciscintilla->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseMouseMoveEvent(QsciScintilla* self, QMouseEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_MouseMoveEvent_IsBase(true);
        vqsciscintilla->mouseMoveEvent(e);
    } else {
        vqsciscintilla->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMouseMoveEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_MouseMoveEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_MousePressEvent(QsciScintilla* self, QMouseEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->mousePressEvent(e);
    } else {
        vqsciscintilla->mousePressEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseMousePressEvent(QsciScintilla* self, QMouseEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_MousePressEvent_IsBase(true);
        vqsciscintilla->mousePressEvent(e);
    } else {
        vqsciscintilla->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMousePressEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_MousePressEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_MouseReleaseEvent(QsciScintilla* self, QMouseEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->mouseReleaseEvent(e);
    } else {
        vqsciscintilla->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseMouseReleaseEvent(QsciScintilla* self, QMouseEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_MouseReleaseEvent_IsBase(true);
        vqsciscintilla->mouseReleaseEvent(e);
    } else {
        vqsciscintilla->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMouseReleaseEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_PaintEvent(QsciScintilla* self, QPaintEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->paintEvent(e);
    } else {
        vqsciscintilla->paintEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBasePaintEvent(QsciScintilla* self, QPaintEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_PaintEvent_IsBase(true);
        vqsciscintilla->paintEvent(e);
    } else {
        vqsciscintilla->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnPaintEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_PaintEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ResizeEvent(QsciScintilla* self, QResizeEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->resizeEvent(e);
    } else {
        vqsciscintilla->resizeEvent(e);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseResizeEvent(QsciScintilla* self, QResizeEvent* e) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ResizeEvent_IsBase(true);
        vqsciscintilla->resizeEvent(e);
    } else {
        vqsciscintilla->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnResizeEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ResizeEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ScrollContentsBy(QsciScintilla* self, int dx, int dy) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqsciscintilla->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseScrollContentsBy(QsciScintilla* self, int dx, int dy) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ScrollContentsBy_IsBase(true);
        vqsciscintilla->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqsciscintilla->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnScrollContentsBy(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ScrollContentsBy_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QsciScintilla_MinimumSizeHint(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return new QSize(vqsciscintilla->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QsciScintilla_QBaseMinimumSizeHint(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_MinimumSizeHint_IsBase(true);
        return new QSize(vqsciscintilla->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMinimumSizeHint(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_MinimumSizeHint_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QsciScintilla_SizeHint(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return new QSize(vqsciscintilla->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QsciScintilla_QBaseSizeHint(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_SizeHint_IsBase(true);
        return new QSize(vqsciscintilla->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSizeHint(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_SizeHint_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetupViewport(QsciScintilla* self, QWidget* viewport) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setupViewport(viewport);
    } else {
        vqsciscintilla->setupViewport(viewport);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetupViewport(QsciScintilla* self, QWidget* viewport) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetupViewport_IsBase(true);
        vqsciscintilla->setupViewport(viewport);
    } else {
        vqsciscintilla->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetupViewport(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetupViewport_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_EventFilter(QsciScintilla* self, QObject* param1, QEvent* param2) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->eventFilter(param1, param2);
    } else {
        return vqsciscintilla->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseEventFilter(QsciScintilla* self, QObject* param1, QEvent* param2) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_EventFilter_IsBase(true);
        return vqsciscintilla->eventFilter(param1, param2);
    } else {
        return vqsciscintilla->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEventFilter(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_EventFilter_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_ViewportEvent(QsciScintilla* self, QEvent* param1) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->viewportEvent(param1);
    } else {
        return vqsciscintilla->viewportEvent(param1);
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseViewportEvent(QsciScintilla* self, QEvent* param1) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ViewportEvent_IsBase(true);
        return vqsciscintilla->viewportEvent(param1);
    } else {
        return vqsciscintilla->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnViewportEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ViewportEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QsciScintilla_ViewportSizeHint(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return new QSize(vqsciscintilla->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QsciScintilla_QBaseViewportSizeHint(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_ViewportSizeHint_IsBase(true);
        return new QSize(vqsciscintilla->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnViewportSizeHint(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_ViewportSizeHint_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_InitStyleOption(const QsciScintilla* self, QStyleOptionFrame* option) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->initStyleOption(option);
    } else {
        vqsciscintilla->initStyleOption(option);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseInitStyleOption(const QsciScintilla* self, QStyleOptionFrame* option) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_InitStyleOption_IsBase(true);
        vqsciscintilla->initStyleOption(option);
    } else {
        vqsciscintilla->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInitStyleOption(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_InitStyleOption_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintilla_DevType(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->devType();
    } else {
        return vqsciscintilla->devType();
    }
}

// Base class handler implementation
int QsciScintilla_QBaseDevType(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_DevType_IsBase(true);
        return vqsciscintilla->devType();
    } else {
        return vqsciscintilla->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDevType(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_DevType_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetVisible(QsciScintilla* self, bool visible) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setVisible(visible);
    } else {
        vqsciscintilla->setVisible(visible);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetVisible(QsciScintilla* self, bool visible) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetVisible_IsBase(true);
        vqsciscintilla->setVisible(visible);
    } else {
        vqsciscintilla->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetVisible(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetVisible_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintilla_HeightForWidth(const QsciScintilla* self, int param1) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->heightForWidth(static_cast<int>(param1));
    } else {
        return vqsciscintilla->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QsciScintilla_QBaseHeightForWidth(const QsciScintilla* self, int param1) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_HeightForWidth_IsBase(true);
        return vqsciscintilla->heightForWidth(static_cast<int>(param1));
    } else {
        return vqsciscintilla->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnHeightForWidth(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_HeightForWidth_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_HasHeightForWidth(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->hasHeightForWidth();
    } else {
        return vqsciscintilla->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseHasHeightForWidth(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_HasHeightForWidth_IsBase(true);
        return vqsciscintilla->hasHeightForWidth();
    } else {
        return vqsciscintilla->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnHasHeightForWidth(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_HasHeightForWidth_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QsciScintilla_PaintEngine(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->paintEngine();
    } else {
        return vqsciscintilla->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QsciScintilla_QBasePaintEngine(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_PaintEngine_IsBase(true);
        return vqsciscintilla->paintEngine();
    } else {
        return vqsciscintilla->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnPaintEngine(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_PaintEngine_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_KeyReleaseEvent(QsciScintilla* self, QKeyEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->keyReleaseEvent(event);
    } else {
        vqsciscintilla->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseKeyReleaseEvent(QsciScintilla* self, QKeyEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_KeyReleaseEvent_IsBase(true);
        vqsciscintilla->keyReleaseEvent(event);
    } else {
        vqsciscintilla->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnKeyReleaseEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_EnterEvent(QsciScintilla* self, QEnterEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->enterEvent(event);
    } else {
        vqsciscintilla->enterEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseEnterEvent(QsciScintilla* self, QEnterEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_EnterEvent_IsBase(true);
        vqsciscintilla->enterEvent(event);
    } else {
        vqsciscintilla->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnEnterEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_EnterEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_LeaveEvent(QsciScintilla* self, QEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->leaveEvent(event);
    } else {
        vqsciscintilla->leaveEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseLeaveEvent(QsciScintilla* self, QEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_LeaveEvent_IsBase(true);
        vqsciscintilla->leaveEvent(event);
    } else {
        vqsciscintilla->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnLeaveEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_LeaveEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_MoveEvent(QsciScintilla* self, QMoveEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->moveEvent(event);
    } else {
        vqsciscintilla->moveEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseMoveEvent(QsciScintilla* self, QMoveEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_MoveEvent_IsBase(true);
        vqsciscintilla->moveEvent(event);
    } else {
        vqsciscintilla->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMoveEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_MoveEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_CloseEvent(QsciScintilla* self, QCloseEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->closeEvent(event);
    } else {
        vqsciscintilla->closeEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseCloseEvent(QsciScintilla* self, QCloseEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_CloseEvent_IsBase(true);
        vqsciscintilla->closeEvent(event);
    } else {
        vqsciscintilla->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCloseEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_CloseEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_TabletEvent(QsciScintilla* self, QTabletEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->tabletEvent(event);
    } else {
        vqsciscintilla->tabletEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseTabletEvent(QsciScintilla* self, QTabletEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_TabletEvent_IsBase(true);
        vqsciscintilla->tabletEvent(event);
    } else {
        vqsciscintilla->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnTabletEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_TabletEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ActionEvent(QsciScintilla* self, QActionEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->actionEvent(event);
    } else {
        vqsciscintilla->actionEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseActionEvent(QsciScintilla* self, QActionEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ActionEvent_IsBase(true);
        vqsciscintilla->actionEvent(event);
    } else {
        vqsciscintilla->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnActionEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ActionEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ShowEvent(QsciScintilla* self, QShowEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->showEvent(event);
    } else {
        vqsciscintilla->showEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseShowEvent(QsciScintilla* self, QShowEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ShowEvent_IsBase(true);
        vqsciscintilla->showEvent(event);
    } else {
        vqsciscintilla->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnShowEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ShowEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_HideEvent(QsciScintilla* self, QHideEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->hideEvent(event);
    } else {
        vqsciscintilla->hideEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseHideEvent(QsciScintilla* self, QHideEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_HideEvent_IsBase(true);
        vqsciscintilla->hideEvent(event);
    } else {
        vqsciscintilla->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnHideEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_HideEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_NativeEvent(QsciScintilla* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqsciscintilla->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseNativeEvent(QsciScintilla* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_NativeEvent_IsBase(true);
        return vqsciscintilla->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqsciscintilla->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnNativeEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_NativeEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintilla_Metric(const QsciScintilla* self, int param1) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqsciscintilla->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QsciScintilla_QBaseMetric(const QsciScintilla* self, int param1) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_Metric_IsBase(true);
        return vqsciscintilla->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqsciscintilla->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnMetric(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_Metric_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_InitPainter(const QsciScintilla* self, QPainter* painter) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->initPainter(painter);
    } else {
        vqsciscintilla->initPainter(painter);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseInitPainter(const QsciScintilla* self, QPainter* painter) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_InitPainter_IsBase(true);
        vqsciscintilla->initPainter(painter);
    } else {
        vqsciscintilla->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnInitPainter(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_InitPainter_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QsciScintilla_Redirected(const QsciScintilla* self, QPoint* offset) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->redirected(offset);
    } else {
        return vqsciscintilla->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QsciScintilla_QBaseRedirected(const QsciScintilla* self, QPoint* offset) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_Redirected_IsBase(true);
        return vqsciscintilla->redirected(offset);
    } else {
        return vqsciscintilla->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnRedirected(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_Redirected_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QsciScintilla_SharedPainter(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->sharedPainter();
    } else {
        return vqsciscintilla->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QsciScintilla_QBaseSharedPainter(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_SharedPainter_IsBase(true);
        return vqsciscintilla->sharedPainter();
    } else {
        return vqsciscintilla->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSharedPainter(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_SharedPainter_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_TimerEvent(QsciScintilla* self, QTimerEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->timerEvent(event);
    } else {
        vqsciscintilla->timerEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseTimerEvent(QsciScintilla* self, QTimerEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_TimerEvent_IsBase(true);
        vqsciscintilla->timerEvent(event);
    } else {
        vqsciscintilla->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnTimerEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_TimerEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ChildEvent(QsciScintilla* self, QChildEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->childEvent(event);
    } else {
        vqsciscintilla->childEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseChildEvent(QsciScintilla* self, QChildEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ChildEvent_IsBase(true);
        vqsciscintilla->childEvent(event);
    } else {
        vqsciscintilla->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnChildEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ChildEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_CustomEvent(QsciScintilla* self, QEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->customEvent(event);
    } else {
        vqsciscintilla->customEvent(event);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseCustomEvent(QsciScintilla* self, QEvent* event) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_CustomEvent_IsBase(true);
        vqsciscintilla->customEvent(event);
    } else {
        vqsciscintilla->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCustomEvent(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_CustomEvent_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_ConnectNotify(QsciScintilla* self, QMetaMethod* signal) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->connectNotify(*signal);
    } else {
        vqsciscintilla->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseConnectNotify(QsciScintilla* self, QMetaMethod* signal) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ConnectNotify_IsBase(true);
        vqsciscintilla->connectNotify(*signal);
    } else {
        vqsciscintilla->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnConnectNotify(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_ConnectNotify_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_DisconnectNotify(QsciScintilla* self, QMetaMethod* signal) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->disconnectNotify(*signal);
    } else {
        vqsciscintilla->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseDisconnectNotify(QsciScintilla* self, QMetaMethod* signal) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_DisconnectNotify_IsBase(true);
        vqsciscintilla->disconnectNotify(*signal);
    } else {
        vqsciscintilla->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDisconnectNotify(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetScrollBars(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setScrollBars();
    } else {
        vqsciscintilla->setScrollBars();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetScrollBars(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetScrollBars_IsBase(true);
        vqsciscintilla->setScrollBars();
    } else {
        vqsciscintilla->setScrollBars();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetScrollBars(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetScrollBars_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetScrollBars_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_ContextMenuNeeded(const QsciScintilla* self, int x, int y) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));
    } else {
        return vqsciscintilla->contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseContextMenuNeeded(const QsciScintilla* self, int x, int y) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_ContextMenuNeeded_IsBase(true);
        return vqsciscintilla->contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));
    } else {
        return vqsciscintilla->contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnContextMenuNeeded(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_ContextMenuNeeded_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ContextMenuNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_SetViewportMargins(QsciScintilla* self, int left, int top, int right, int bottom) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqsciscintilla->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QsciScintilla_QBaseSetViewportMargins(QsciScintilla* self, int left, int top, int right, int bottom) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetViewportMargins_IsBase(true);
        vqsciscintilla->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqsciscintilla->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSetViewportMargins(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_SetViewportMargins_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QsciScintilla_ViewportMargins(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return new QMargins(vqsciscintilla->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QsciScintilla_QBaseViewportMargins(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_ViewportMargins_IsBase(true);
        return new QMargins(vqsciscintilla->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnViewportMargins(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_ViewportMargins_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_DrawFrame(QsciScintilla* self, QPainter* param1) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->drawFrame(param1);
    } else {
        vqsciscintilla->drawFrame(param1);
    }
}

// Base class handler implementation
void QsciScintilla_QBaseDrawFrame(QsciScintilla* self, QPainter* param1) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_DrawFrame_IsBase(true);
        vqsciscintilla->drawFrame(param1);
    } else {
        vqsciscintilla->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDrawFrame(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_DrawFrame_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_UpdateMicroFocus(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->updateMicroFocus();
    } else {
        vqsciscintilla->updateMicroFocus();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseUpdateMicroFocus(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_UpdateMicroFocus_IsBase(true);
        vqsciscintilla->updateMicroFocus();
    } else {
        vqsciscintilla->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnUpdateMicroFocus(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Create(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->create();
    } else {
        vqsciscintilla->create();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseCreate(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Create_IsBase(true);
        vqsciscintilla->create();
    } else {
        vqsciscintilla->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnCreate(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Create_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintilla_Destroy(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->destroy();
    } else {
        vqsciscintilla->destroy();
    }
}

// Base class handler implementation
void QsciScintilla_QBaseDestroy(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Destroy_IsBase(true);
        vqsciscintilla->destroy();
    } else {
        vqsciscintilla->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnDestroy(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_Destroy_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_FocusNextChild(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->focusNextChild();
    } else {
        return vqsciscintilla->focusNextChild();
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseFocusNextChild(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FocusNextChild_IsBase(true);
        return vqsciscintilla->focusNextChild();
    } else {
        return vqsciscintilla->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFocusNextChild(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FocusNextChild_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_FocusPreviousChild(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        return vqsciscintilla->focusPreviousChild();
    } else {
        return vqsciscintilla->focusPreviousChild();
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseFocusPreviousChild(QsciScintilla* self) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FocusPreviousChild_IsBase(true);
        return vqsciscintilla->focusPreviousChild();
    } else {
        return vqsciscintilla->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnFocusPreviousChild(QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = dynamic_cast<VirtualQsciScintilla*>(self)) {
        vqsciscintilla->setQsciScintilla_FocusPreviousChild_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciScintilla_Sender(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->sender();
    } else {
        return vqsciscintilla->sender();
    }
}

// Base class handler implementation
QObject* QsciScintilla_QBaseSender(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_Sender_IsBase(true);
        return vqsciscintilla->sender();
    } else {
        return vqsciscintilla->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSender(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_Sender_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintilla_SenderSignalIndex(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->senderSignalIndex();
    } else {
        return vqsciscintilla->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciScintilla_QBaseSenderSignalIndex(const QsciScintilla* self) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_SenderSignalIndex_IsBase(true);
        return vqsciscintilla->senderSignalIndex();
    } else {
        return vqsciscintilla->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnSenderSignalIndex(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintilla_Receivers(const QsciScintilla* self, const char* signal) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->receivers(signal);
    } else {
        return vqsciscintilla->receivers(signal);
    }
}

// Base class handler implementation
int QsciScintilla_QBaseReceivers(const QsciScintilla* self, const char* signal) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_Receivers_IsBase(true);
        return vqsciscintilla->receivers(signal);
    } else {
        return vqsciscintilla->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnReceivers(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_Receivers_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintilla_IsSignalConnected(const QsciScintilla* self, QMetaMethod* signal) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        return vqsciscintilla->isSignalConnected(*signal);
    } else {
        return vqsciscintilla->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciScintilla_QBaseIsSignalConnected(const QsciScintilla* self, QMetaMethod* signal) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_IsSignalConnected_IsBase(true);
        return vqsciscintilla->isSignalConnected(*signal);
    } else {
        return vqsciscintilla->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintilla_OnIsSignalConnected(const QsciScintilla* self, intptr_t slot) {
    if (auto* vqsciscintilla = const_cast<VirtualQsciScintilla*>(dynamic_cast<const VirtualQsciScintilla*>(self))) {
        vqsciscintilla->setQsciScintilla_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciScintilla::QsciScintilla_IsSignalConnected_Callback>(slot));
    }
}

void QsciScintilla_Delete(QsciScintilla* self) {
    delete self;
}
