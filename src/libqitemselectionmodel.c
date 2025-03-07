#include "libqabstractitemmodel.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqitemselectionmodel.h"

/// https://doc.qt.io/qt-6/qitemselectionrange.html

/// q_itemselectionrange_new constructs a new QItemSelectionRange object.
///
///
QItemSelectionRange* q_itemselectionrange_new() {
    return QItemSelectionRange_new();
}

/// q_itemselectionrange_new2 constructs a new QItemSelectionRange object.
///
/// ``` QModelIndex* topL, QModelIndex* bottomR ```
QItemSelectionRange* q_itemselectionrange_new2(void* topL, void* bottomR) {
    return QItemSelectionRange_new2((QModelIndex*)topL, (QModelIndex*)bottomR);
}

/// q_itemselectionrange_new3 constructs a new QItemSelectionRange object.
///
/// ``` QModelIndex* index ```
QItemSelectionRange* q_itemselectionrange_new3(void* index) {
    return QItemSelectionRange_new3((QModelIndex*)index);
}

/// q_itemselectionrange_new4 constructs a new QItemSelectionRange object.
///
/// ``` QItemSelectionRange* param1 ```
QItemSelectionRange* q_itemselectionrange_new4(void* param1) {
    return QItemSelectionRange_new4((QItemSelectionRange*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#swap)
///
/// ``` QItemSelectionRange* self, QItemSelectionRange* other ```
void q_itemselectionrange_swap(void* self, void* other) {
    QItemSelectionRange_Swap((QItemSelectionRange*)self, (QItemSelectionRange*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#top)
///
/// ``` QItemSelectionRange* self ```
int32_t q_itemselectionrange_top(void* self) {
    return QItemSelectionRange_Top((QItemSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#left)
///
/// ``` QItemSelectionRange* self ```
int32_t q_itemselectionrange_left(void* self) {
    return QItemSelectionRange_Left((QItemSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#bottom)
///
/// ``` QItemSelectionRange* self ```
int32_t q_itemselectionrange_bottom(void* self) {
    return QItemSelectionRange_Bottom((QItemSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#right)
///
/// ``` QItemSelectionRange* self ```
int32_t q_itemselectionrange_right(void* self) {
    return QItemSelectionRange_Right((QItemSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#width)
///
/// ``` QItemSelectionRange* self ```
int32_t q_itemselectionrange_width(void* self) {
    return QItemSelectionRange_Width((QItemSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#height)
///
/// ``` QItemSelectionRange* self ```
int32_t q_itemselectionrange_height(void* self) {
    return QItemSelectionRange_Height((QItemSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#topLeft)
///
/// ``` QItemSelectionRange* self ```
QPersistentModelIndex* q_itemselectionrange_top_left(void* self) {
    return QItemSelectionRange_TopLeft((QItemSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#bottomRight)
///
/// ``` QItemSelectionRange* self ```
QPersistentModelIndex* q_itemselectionrange_bottom_right(void* self) {
    return QItemSelectionRange_BottomRight((QItemSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#parent)
///
/// ``` QItemSelectionRange* self ```
QModelIndex* q_itemselectionrange_parent(void* self) {
    return QItemSelectionRange_Parent((QItemSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#model)
///
/// ``` QItemSelectionRange* self ```
QAbstractItemModel* q_itemselectionrange_model(void* self) {
    return QItemSelectionRange_Model((QItemSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#contains)
///
/// ``` QItemSelectionRange* self, QModelIndex* index ```
bool q_itemselectionrange_contains(void* self, void* index) {
    return QItemSelectionRange_Contains((QItemSelectionRange*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#contains)
///
/// ``` QItemSelectionRange* self, int row, int column, QModelIndex* parentIndex ```
bool q_itemselectionrange_contains2(void* self, int row, int column, void* parentIndex) {
    return QItemSelectionRange_Contains2((QItemSelectionRange*)self, row, column, (QModelIndex*)parentIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#intersects)
///
/// ``` QItemSelectionRange* self, QItemSelectionRange* other ```
bool q_itemselectionrange_intersects(void* self, void* other) {
    return QItemSelectionRange_Intersects((QItemSelectionRange*)self, (QItemSelectionRange*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#intersected)
///
/// ``` QItemSelectionRange* self, QItemSelectionRange* other ```
QItemSelectionRange* q_itemselectionrange_intersected(void* self, void* other) {
    return QItemSelectionRange_Intersected((QItemSelectionRange*)self, (QItemSelectionRange*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#operator==)
///
/// ``` QItemSelectionRange* self, QItemSelectionRange* other ```
bool q_itemselectionrange_operator_equal(void* self, void* other) {
    return QItemSelectionRange_OperatorEqual((QItemSelectionRange*)self, (QItemSelectionRange*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#operator!=)
///
/// ``` QItemSelectionRange* self, QItemSelectionRange* other ```
bool q_itemselectionrange_operator_not_equal(void* self, void* other) {
    return QItemSelectionRange_OperatorNotEqual((QItemSelectionRange*)self, (QItemSelectionRange*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#isValid)
///
/// ``` QItemSelectionRange* self ```
bool q_itemselectionrange_is_valid(void* self) {
    return QItemSelectionRange_IsValid((QItemSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#isEmpty)
///
/// ``` QItemSelectionRange* self ```
bool q_itemselectionrange_is_empty(void* self) {
    return QItemSelectionRange_IsEmpty((QItemSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#indexes)
///
/// ``` QItemSelectionRange* self ```
libqt_list /* of QModelIndex* */ q_itemselectionrange_indexes(void* self) {
    libqt_list _arr = QItemSelectionRange_Indexes((QItemSelectionRange*)self);
    return _arr;
}

/// Delete this object from C++ memory.
///
/// ``` QItemSelectionRange* self ```
void q_itemselectionrange_delete(void* self) {
    QItemSelectionRange_Delete((QItemSelectionRange*)(self));
}

/// https://doc.qt.io/qt-6/qitemselectionmodel.html

/// q_itemselectionmodel_new constructs a new QItemSelectionModel object.
///
///
QItemSelectionModel* q_itemselectionmodel_new() {
    return QItemSelectionModel_new();
}

/// q_itemselectionmodel_new2 constructs a new QItemSelectionModel object.
///
/// ``` QAbstractItemModel* model, QObject* parent ```
QItemSelectionModel* q_itemselectionmodel_new2(void* model, void* parent) {
    return QItemSelectionModel_new2((QAbstractItemModel*)model, (QObject*)parent);
}

/// q_itemselectionmodel_new3 constructs a new QItemSelectionModel object.
///
/// ``` QAbstractItemModel* model ```
QItemSelectionModel* q_itemselectionmodel_new3(void* model) {
    return QItemSelectionModel_new3((QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QItemSelectionModel* self ```
QMetaObject* q_itemselectionmodel_meta_object(void* self) {
    return QItemSelectionModel_MetaObject((QItemSelectionModel*)self);
}

/// ``` QItemSelectionModel* self, const char* param1 ```
void* q_itemselectionmodel_metacast(void* self, const char* param1) {
    return QItemSelectionModel_Metacast((QItemSelectionModel*)self, param1);
}

/// ``` QItemSelectionModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_itemselectionmodel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QItemSelectionModel_Metacall((QItemSelectionModel*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QItemSelectionModel* self, int32_t (*slot)(QItemSelectionModel*, enum QMetaObject__Call, int, void*) ```
void q_itemselectionmodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QItemSelectionModel_OnMetacall((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemSelectionModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_itemselectionmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QItemSelectionModel_QBaseMetacall((QItemSelectionModel*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_itemselectionmodel_tr(const char* s) {
    libqt_string _str = QItemSelectionModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentIndex)
///
/// ``` QItemSelectionModel* self ```
QModelIndex* q_itemselectionmodel_current_index(void* self) {
    return QItemSelectionModel_CurrentIndex((QItemSelectionModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isSelected)
///
/// ``` QItemSelectionModel* self, QModelIndex* index ```
bool q_itemselectionmodel_is_selected(void* self, void* index) {
    return QItemSelectionModel_IsSelected((QItemSelectionModel*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
///
/// ``` QItemSelectionModel* self, int row ```
bool q_itemselectionmodel_is_row_selected(void* self, int row) {
    return QItemSelectionModel_IsRowSelected((QItemSelectionModel*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
///
/// ``` QItemSelectionModel* self, int column ```
bool q_itemselectionmodel_is_column_selected(void* self, int column) {
    return QItemSelectionModel_IsColumnSelected((QItemSelectionModel*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
///
/// ``` QItemSelectionModel* self, int row ```
bool q_itemselectionmodel_row_intersects_selection(void* self, int row) {
    return QItemSelectionModel_RowIntersectsSelection((QItemSelectionModel*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
///
/// ``` QItemSelectionModel* self, int column ```
bool q_itemselectionmodel_column_intersects_selection(void* self, int column) {
    return QItemSelectionModel_ColumnIntersectsSelection((QItemSelectionModel*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#hasSelection)
///
/// ``` QItemSelectionModel* self ```
bool q_itemselectionmodel_has_selection(void* self) {
    return QItemSelectionModel_HasSelection((QItemSelectionModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedIndexes)
///
/// ``` QItemSelectionModel* self ```
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_indexes(void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedIndexes((QItemSelectionModel*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
///
/// ``` QItemSelectionModel* self ```
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_rows(void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedRows((QItemSelectionModel*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
///
/// ``` QItemSelectionModel* self ```
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_columns(void* self) {
    libqt_list _arr = QItemSelectionModel_SelectedColumns((QItemSelectionModel*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selection)
///
/// ``` QItemSelectionModel* self ```
QItemSelection* q_itemselectionmodel_selection(void* self) {
    return QItemSelectionModel_Selection((QItemSelectionModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
///
/// ``` QItemSelectionModel* self ```
QAbstractItemModel* q_itemselectionmodel_model(void* self) {
    return QItemSelectionModel_Model((QItemSelectionModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
///
/// ``` QItemSelectionModel* self ```
QAbstractItemModel* q_itemselectionmodel_model2(void* self) {
    return QItemSelectionModel_Model2((QItemSelectionModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#setModel)
///
/// ``` QItemSelectionModel* self, QAbstractItemModel* model ```
void q_itemselectionmodel_set_model(void* self, void* model) {
    QItemSelectionModel_SetModel((QItemSelectionModel*)self, (QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
///
/// ``` QItemSelectionModel* self, QModelIndex* index, int command ```
void q_itemselectionmodel_set_current_index(void* self, void* index, int64_t command) {
    QItemSelectionModel_SetCurrentIndex((QItemSelectionModel*)self, (QModelIndex*)index, command);
}

/// Allows for overriding the related default method
///
/// ``` QItemSelectionModel* self, void (*slot)(QItemSelectionModel*, QModelIndex*, int) ```
void q_itemselectionmodel_on_set_current_index(void* self, void (*slot)(void*, void*, int64_t)) {
    QItemSelectionModel_OnSetCurrentIndex((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemSelectionModel* self, QModelIndex* index, int command ```
void q_itemselectionmodel_qbase_set_current_index(void* self, void* index, int64_t command) {
    QItemSelectionModel_QBaseSetCurrentIndex((QItemSelectionModel*)self, (QModelIndex*)index, command);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
///
/// ``` QItemSelectionModel* self, QModelIndex* index, int command ```
void q_itemselectionmodel_select(void* self, void* index, int64_t command) {
    QItemSelectionModel_Select((QItemSelectionModel*)self, (QModelIndex*)index, command);
}

/// Allows for overriding the related default method
///
/// ``` QItemSelectionModel* self, void (*slot)(QItemSelectionModel*, QModelIndex*, int) ```
void q_itemselectionmodel_on_select(void* self, void (*slot)(void*, void*, int64_t)) {
    QItemSelectionModel_OnSelect((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemSelectionModel* self, QModelIndex* index, int command ```
void q_itemselectionmodel_qbase_select(void* self, void* index, int64_t command) {
    QItemSelectionModel_QBaseSelect((QItemSelectionModel*)self, (QModelIndex*)index, command);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
///
/// ``` QItemSelectionModel* self, QItemSelection* selection, int command ```
void q_itemselectionmodel_select2(void* self, void* selection, int64_t command) {
    QItemSelectionModel_Select2((QItemSelectionModel*)self, (QItemSelection*)selection, command);
}

/// Allows for overriding the related default method
///
/// ``` QItemSelectionModel* self, void (*slot)(QItemSelectionModel*, QItemSelection*, int) ```
void q_itemselectionmodel_on_select2(void* self, void (*slot)(void*, void*, int64_t)) {
    QItemSelectionModel_OnSelect2((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemSelectionModel* self, QItemSelection* selection, int command ```
void q_itemselectionmodel_qbase_select2(void* self, void* selection, int64_t command) {
    QItemSelectionModel_QBaseSelect2((QItemSelectionModel*)self, (QItemSelection*)selection, command);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
///
/// ``` QItemSelectionModel* self ```
void q_itemselectionmodel_clear(void* self) {
    QItemSelectionModel_Clear((QItemSelectionModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QItemSelectionModel* self, void (*slot)() ```
void q_itemselectionmodel_on_clear(void* self, void (*slot)()) {
    QItemSelectionModel_OnClear((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemSelectionModel* self ```
void q_itemselectionmodel_qbase_clear(void* self) {
    QItemSelectionModel_QBaseClear((QItemSelectionModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
///
/// ``` QItemSelectionModel* self ```
void q_itemselectionmodel_reset(void* self) {
    QItemSelectionModel_Reset((QItemSelectionModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QItemSelectionModel* self, void (*slot)() ```
void q_itemselectionmodel_on_reset(void* self, void (*slot)()) {
    QItemSelectionModel_OnReset((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemSelectionModel* self ```
void q_itemselectionmodel_qbase_reset(void* self) {
    QItemSelectionModel_QBaseReset((QItemSelectionModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearSelection)
///
/// ``` QItemSelectionModel* self ```
void q_itemselectionmodel_clear_selection(void* self) {
    QItemSelectionModel_ClearSelection((QItemSelectionModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
///
/// ``` QItemSelectionModel* self ```
void q_itemselectionmodel_clear_current_index(void* self) {
    QItemSelectionModel_ClearCurrentIndex((QItemSelectionModel*)self);
}

/// Allows for overriding the related default method
///
/// ``` QItemSelectionModel* self, void (*slot)() ```
void q_itemselectionmodel_on_clear_current_index(void* self, void (*slot)()) {
    QItemSelectionModel_OnClearCurrentIndex((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemSelectionModel* self ```
void q_itemselectionmodel_qbase_clear_current_index(void* self) {
    QItemSelectionModel_QBaseClearCurrentIndex((QItemSelectionModel*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
///
/// ``` QItemSelectionModel* self, QItemSelection* selected, QItemSelection* deselected ```
void q_itemselectionmodel_selection_changed(void* self, void* selected, void* deselected) {
    QItemSelectionModel_SelectionChanged((QItemSelectionModel*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// ``` QItemSelectionModel* self, void (*slot)(QItemSelectionModel*, QItemSelection*, QItemSelection*) ```
void q_itemselectionmodel_on_selection_changed(void* self, void (*slot)(void*, void*, void*)) {
    QItemSelectionModel_Connect_SelectionChanged((QItemSelectionModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
///
/// ``` QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous ```
void q_itemselectionmodel_current_changed(void* self, void* current, void* previous) {
    QItemSelectionModel_CurrentChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// ``` QItemSelectionModel* self, void (*slot)(QItemSelectionModel*, QModelIndex*, QModelIndex*) ```
void q_itemselectionmodel_on_current_changed(void* self, void (*slot)(void*, void*, void*)) {
    QItemSelectionModel_Connect_CurrentChanged((QItemSelectionModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
///
/// ``` QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous ```
void q_itemselectionmodel_current_row_changed(void* self, void* current, void* previous) {
    QItemSelectionModel_CurrentRowChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// ``` QItemSelectionModel* self, void (*slot)(QItemSelectionModel*, QModelIndex*, QModelIndex*) ```
void q_itemselectionmodel_on_current_row_changed(void* self, void (*slot)(void*, void*, void*)) {
    QItemSelectionModel_Connect_CurrentRowChanged((QItemSelectionModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
///
/// ``` QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous ```
void q_itemselectionmodel_current_column_changed(void* self, void* current, void* previous) {
    QItemSelectionModel_CurrentColumnChanged((QItemSelectionModel*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// ``` QItemSelectionModel* self, void (*slot)(QItemSelectionModel*, QModelIndex*, QModelIndex*) ```
void q_itemselectionmodel_on_current_column_changed(void* self, void (*slot)(void*, void*, void*)) {
    QItemSelectionModel_Connect_CurrentColumnChanged((QItemSelectionModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
///
/// ``` QItemSelectionModel* self, QAbstractItemModel* model ```
void q_itemselectionmodel_model_changed(void* self, void* model) {
    QItemSelectionModel_ModelChanged((QItemSelectionModel*)self, (QAbstractItemModel*)model);
}

/// ``` QItemSelectionModel* self, void (*slot)(QItemSelectionModel*, QAbstractItemModel*) ```
void q_itemselectionmodel_on_model_changed(void* self, void (*slot)(void*, void*)) {
    QItemSelectionModel_Connect_ModelChanged((QItemSelectionModel*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
///
/// ``` QItemSelectionModel* self, QItemSelection* newSelection, QItemSelection* oldSelection ```
void q_itemselectionmodel_emit_selection_changed(void* self, void* newSelection, void* oldSelection) {
    QItemSelectionModel_EmitSelectionChanged((QItemSelectionModel*)self, (QItemSelection*)newSelection, (QItemSelection*)oldSelection);
}

/// Allows for overriding the related default method
///
/// ``` QItemSelectionModel* self, void (*slot)(QItemSelectionModel*, QItemSelection*, QItemSelection*) ```
void q_itemselectionmodel_on_emit_selection_changed(void* self, void (*slot)(void*, void*, void*)) {
    QItemSelectionModel_OnEmitSelectionChanged((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemSelectionModel* self, QItemSelection* newSelection, QItemSelection* oldSelection ```
void q_itemselectionmodel_qbase_emit_selection_changed(void* self, void* newSelection, void* oldSelection) {
    QItemSelectionModel_QBaseEmitSelectionChanged((QItemSelectionModel*)self, (QItemSelection*)newSelection, (QItemSelection*)oldSelection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_itemselectionmodel_tr2(const char* s, const char* c) {
    libqt_string _str = QItemSelectionModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_itemselectionmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QItemSelectionModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
///
/// ``` QItemSelectionModel* self, int row, QModelIndex* parent ```
bool q_itemselectionmodel_is_row_selected2(void* self, int row, void* parent) {
    return QItemSelectionModel_IsRowSelected2((QItemSelectionModel*)self, row, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
///
/// ``` QItemSelectionModel* self, int column, QModelIndex* parent ```
bool q_itemselectionmodel_is_column_selected2(void* self, int column, void* parent) {
    return QItemSelectionModel_IsColumnSelected2((QItemSelectionModel*)self, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
///
/// ``` QItemSelectionModel* self, int row, QModelIndex* parent ```
bool q_itemselectionmodel_row_intersects_selection2(void* self, int row, void* parent) {
    return QItemSelectionModel_RowIntersectsSelection2((QItemSelectionModel*)self, row, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
///
/// ``` QItemSelectionModel* self, int column, QModelIndex* parent ```
bool q_itemselectionmodel_column_intersects_selection2(void* self, int column, void* parent) {
    return QItemSelectionModel_ColumnIntersectsSelection2((QItemSelectionModel*)self, column, (QModelIndex*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
///
/// ``` QItemSelectionModel* self, int column ```
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_rows1(void* self, int column) {
    libqt_list _arr = QItemSelectionModel_SelectedRows1((QItemSelectionModel*)self, column);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
///
/// ``` QItemSelectionModel* self, int row ```
libqt_list /* of QModelIndex* */ q_itemselectionmodel_selected_columns1(void* self, int row) {
    libqt_list _arr = QItemSelectionModel_SelectedColumns1((QItemSelectionModel*)self, row);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QItemSelectionModel* self ```
const char* q_itemselectionmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QItemSelectionModel* self, const char* name ```
void q_itemselectionmodel_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QItemSelectionModel* self ```
bool q_itemselectionmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QItemSelectionModel* self ```
bool q_itemselectionmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QItemSelectionModel* self ```
bool q_itemselectionmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QItemSelectionModel* self ```
bool q_itemselectionmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QItemSelectionModel* self, bool b ```
bool q_itemselectionmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QItemSelectionModel* self ```
QThread* q_itemselectionmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QItemSelectionModel* self, QThread* thread ```
void q_itemselectionmodel_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QItemSelectionModel* self, int interval ```
int32_t q_itemselectionmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QItemSelectionModel* self, int id ```
void q_itemselectionmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QItemSelectionModel* self ```
libqt_list /* of QObject* */ q_itemselectionmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QItemSelectionModel* self, QObject* parent ```
void q_itemselectionmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QItemSelectionModel* self, QObject* filterObj ```
void q_itemselectionmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QItemSelectionModel* self, QObject* obj ```
void q_itemselectionmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_itemselectionmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QItemSelectionModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_itemselectionmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_itemselectionmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_itemselectionmodel_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QItemSelectionModel* self ```
void q_itemselectionmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QItemSelectionModel* self ```
void q_itemselectionmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QItemSelectionModel* self, const char* name, QVariant* value ```
bool q_itemselectionmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QItemSelectionModel* self, const char* name ```
QVariant* q_itemselectionmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QItemSelectionModel* self ```
const char** q_itemselectionmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QItemSelectionModel* self ```
QBindingStorage* q_itemselectionmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QItemSelectionModel* self ```
QBindingStorage* q_itemselectionmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QItemSelectionModel* self ```
void q_itemselectionmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QItemSelectionModel* self, void (*slot)(QObject*) ```
void q_itemselectionmodel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QItemSelectionModel* self ```
QObject* q_itemselectionmodel_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QItemSelectionModel* self, const char* classname ```
bool q_itemselectionmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QItemSelectionModel* self ```
void q_itemselectionmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QItemSelectionModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_itemselectionmodel_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_itemselectionmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QItemSelectionModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_itemselectionmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QItemSelectionModel* self, QObject* param1 ```
void q_itemselectionmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QItemSelectionModel* self, void (*slot)(QObject*, QObject*) ```
void q_itemselectionmodel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemSelectionModel* self, QEvent* event ```
bool q_itemselectionmodel_event(void* self, void* event) {
    return QItemSelectionModel_Event((QItemSelectionModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemSelectionModel* self, QEvent* event ```
bool q_itemselectionmodel_qbase_event(void* self, void* event) {
    return QItemSelectionModel_QBaseEvent((QItemSelectionModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemSelectionModel* self, bool (*slot)(QItemSelectionModel*, QEvent*) ```
void q_itemselectionmodel_on_event(void* self, bool (*slot)(void*, void*)) {
    QItemSelectionModel_OnEvent((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemSelectionModel* self, QObject* watched, QEvent* event ```
bool q_itemselectionmodel_event_filter(void* self, void* watched, void* event) {
    return QItemSelectionModel_EventFilter((QItemSelectionModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemSelectionModel* self, QObject* watched, QEvent* event ```
bool q_itemselectionmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return QItemSelectionModel_QBaseEventFilter((QItemSelectionModel*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemSelectionModel* self, bool (*slot)(QItemSelectionModel*, QObject*, QEvent*) ```
void q_itemselectionmodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QItemSelectionModel_OnEventFilter((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemSelectionModel* self, QTimerEvent* event ```
void q_itemselectionmodel_timer_event(void* self, void* event) {
    QItemSelectionModel_TimerEvent((QItemSelectionModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemSelectionModel* self, QTimerEvent* event ```
void q_itemselectionmodel_qbase_timer_event(void* self, void* event) {
    QItemSelectionModel_QBaseTimerEvent((QItemSelectionModel*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemSelectionModel* self, void (*slot)(QItemSelectionModel*, QTimerEvent*) ```
void q_itemselectionmodel_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QItemSelectionModel_OnTimerEvent((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemSelectionModel* self, QChildEvent* event ```
void q_itemselectionmodel_child_event(void* self, void* event) {
    QItemSelectionModel_ChildEvent((QItemSelectionModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemSelectionModel* self, QChildEvent* event ```
void q_itemselectionmodel_qbase_child_event(void* self, void* event) {
    QItemSelectionModel_QBaseChildEvent((QItemSelectionModel*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemSelectionModel* self, void (*slot)(QItemSelectionModel*, QChildEvent*) ```
void q_itemselectionmodel_on_child_event(void* self, void (*slot)(void*, void*)) {
    QItemSelectionModel_OnChildEvent((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemSelectionModel* self, QEvent* event ```
void q_itemselectionmodel_custom_event(void* self, void* event) {
    QItemSelectionModel_CustomEvent((QItemSelectionModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemSelectionModel* self, QEvent* event ```
void q_itemselectionmodel_qbase_custom_event(void* self, void* event) {
    QItemSelectionModel_QBaseCustomEvent((QItemSelectionModel*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemSelectionModel* self, void (*slot)(QItemSelectionModel*, QEvent*) ```
void q_itemselectionmodel_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QItemSelectionModel_OnCustomEvent((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemSelectionModel* self, QMetaMethod* signal ```
void q_itemselectionmodel_connect_notify(void* self, void* signal) {
    QItemSelectionModel_ConnectNotify((QItemSelectionModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemSelectionModel* self, QMetaMethod* signal ```
void q_itemselectionmodel_qbase_connect_notify(void* self, void* signal) {
    QItemSelectionModel_QBaseConnectNotify((QItemSelectionModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemSelectionModel* self, void (*slot)(QItemSelectionModel*, QMetaMethod*) ```
void q_itemselectionmodel_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QItemSelectionModel_OnConnectNotify((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemSelectionModel* self, QMetaMethod* signal ```
void q_itemselectionmodel_disconnect_notify(void* self, void* signal) {
    QItemSelectionModel_DisconnectNotify((QItemSelectionModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemSelectionModel* self, QMetaMethod* signal ```
void q_itemselectionmodel_qbase_disconnect_notify(void* self, void* signal) {
    QItemSelectionModel_QBaseDisconnectNotify((QItemSelectionModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemSelectionModel* self, void (*slot)(QItemSelectionModel*, QMetaMethod*) ```
void q_itemselectionmodel_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QItemSelectionModel_OnDisconnectNotify((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemSelectionModel* self ```
QObject* q_itemselectionmodel_sender(void* self) {
    return QItemSelectionModel_Sender((QItemSelectionModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemSelectionModel* self ```
QObject* q_itemselectionmodel_qbase_sender(void* self) {
    return QItemSelectionModel_QBaseSender((QItemSelectionModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemSelectionModel* self, QObject* (*slot)() ```
void q_itemselectionmodel_on_sender(void* self, QObject* (*slot)()) {
    QItemSelectionModel_OnSender((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemSelectionModel* self ```
int32_t q_itemselectionmodel_sender_signal_index(void* self) {
    return QItemSelectionModel_SenderSignalIndex((QItemSelectionModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemSelectionModel* self ```
int32_t q_itemselectionmodel_qbase_sender_signal_index(void* self) {
    return QItemSelectionModel_QBaseSenderSignalIndex((QItemSelectionModel*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemSelectionModel* self, int32_t (*slot)() ```
void q_itemselectionmodel_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QItemSelectionModel_OnSenderSignalIndex((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemSelectionModel* self, const char* signal ```
int32_t q_itemselectionmodel_receivers(void* self, const char* signal) {
    return QItemSelectionModel_Receivers((QItemSelectionModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemSelectionModel* self, const char* signal ```
int32_t q_itemselectionmodel_qbase_receivers(void* self, const char* signal) {
    return QItemSelectionModel_QBaseReceivers((QItemSelectionModel*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemSelectionModel* self, int32_t (*slot)(QItemSelectionModel*, const char*) ```
void q_itemselectionmodel_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QItemSelectionModel_OnReceivers((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemSelectionModel* self, QMetaMethod* signal ```
bool q_itemselectionmodel_is_signal_connected(void* self, void* signal) {
    return QItemSelectionModel_IsSignalConnected((QItemSelectionModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemSelectionModel* self, QMetaMethod* signal ```
bool q_itemselectionmodel_qbase_is_signal_connected(void* self, void* signal) {
    return QItemSelectionModel_QBaseIsSignalConnected((QItemSelectionModel*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemSelectionModel* self, bool (*slot)(QItemSelectionModel*, QMetaMethod*) ```
void q_itemselectionmodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QItemSelectionModel_OnIsSignalConnected((QItemSelectionModel*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QItemSelectionModel* self ```
void q_itemselectionmodel_delete(void* self) {
    QItemSelectionModel_Delete((QItemSelectionModel*)(self));
} // Also inherits unprojectable QList<QItemSelectionRange>

/// https://doc.qt.io/qt-6/qitemselection.html

/// q_itemselection_new constructs a new QItemSelection object.
///
/// ``` QModelIndex* topLeft, QModelIndex* bottomRight ```
QItemSelection* q_itemselection_new(void* topLeft, void* bottomRight) {
    return QItemSelection_new((QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

/// q_itemselection_new2 constructs a new QItemSelection object.
///
///
QItemSelection* q_itemselection_new2() {
    return QItemSelection_new2();
}

/// q_itemselection_new3 constructs a new QItemSelection object.
///
/// ``` QItemSelection* param1 ```
QItemSelection* q_itemselection_new3(void* param1) {
    return QItemSelection_new3((QItemSelection*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselection.html#select)
///
/// ``` QItemSelection* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_itemselection_select(void* self, void* topLeft, void* bottomRight) {
    QItemSelection_Select((QItemSelection*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselection.html#contains)
///
/// ``` QItemSelection* self, QModelIndex* index ```
bool q_itemselection_contains(void* self, void* index) {
    return QItemSelection_Contains((QItemSelection*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselection.html#indexes)
///
/// ``` QItemSelection* self ```
libqt_list /* of QModelIndex* */ q_itemselection_indexes(void* self) {
    libqt_list _arr = QItemSelection_Indexes((QItemSelection*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselection.html#merge)
///
/// ``` QItemSelection* self, QItemSelection* other, int command ```
void q_itemselection_merge(void* self, void* other, int64_t command) {
    QItemSelection_Merge((QItemSelection*)self, (QItemSelection*)other, command);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemselection.html#split)
///
/// ``` QItemSelectionRange* range, QItemSelectionRange* other, QItemSelection* result ```
void q_itemselection_split(void* range, void* other, void* result) {
    QItemSelection_Split((QItemSelectionRange*)range, (QItemSelectionRange*)other, (QItemSelection*)result);
}

/// Delete this object from C++ memory.
///
/// ``` QItemSelection* self ```
void q_itemselection_delete(void* self) {
    QItemSelection_Delete((QItemSelection*)(self));
}