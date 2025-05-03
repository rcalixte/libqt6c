#pragma once
#ifndef SRCQT6C_LIBQWIZARD_H
#define SRCQT6C_LIBQWIZARD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractbutton.h"
#include "libqaction.h"
#include "libqevent.h"
#include "libqanystringview.h"
#include "libqbackingstore.h"
#include "libqbindingstorage.h"
#include "libqbitmap.h"
#include "libqcursor.h"
#include "libqdialog.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsproxywidget.h"
#include "libqicon.h"
#include "libqkeysequence.h"
#include "libqlayout.h"
#include "libqlocale.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpalette.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqscreen.h"
#include "libqsize.h"
#include "libqsizepolicy.h"
#include <string.h>
#include "libqstyle.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

/// https://doc.qt.io/qt-6/qwizard.html

/// q_wizard_new constructs a new QWizard object.
///
/// ``` QWidget* parent ```
QWizard* q_wizard_new(void* parent);

/// q_wizard_new2 constructs a new QWizard object.
///
///
QWizard* q_wizard_new2();

/// q_wizard_new3 constructs a new QWizard object.
///
/// ``` QWidget* parent, int flags ```
QWizard* q_wizard_new3(void* parent, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWizard* self ```
QMetaObject* q_wizard_meta_object(void* self);

/// ``` QWizard* self, const char* param1 ```
void* q_wizard_metacast(void* self, const char* param1);

/// ``` QWizard* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_wizard_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QWizard* self, int32_t (*slot)(QWizard*, enum QMetaObject__Call, int, void*) ```
void q_wizard_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QWizard* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_wizard_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_wizard_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#addPage)
///
/// ``` QWizard* self, QWizardPage* page ```
int32_t q_wizard_add_page(void* self, void* page);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setPage)
///
/// ``` QWizard* self, int id, QWizardPage* page ```
void q_wizard_set_page(void* self, int id, void* page);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#removePage)
///
/// ``` QWizard* self, int id ```
void q_wizard_remove_page(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#page)
///
/// ``` QWizard* self, int id ```
QWizardPage* q_wizard_page(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#hasVisitedPage)
///
/// ``` QWizard* self, int id ```
bool q_wizard_has_visited_page(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#visitedIds)
///
/// ``` QWizard* self ```
libqt_list /* of int */ q_wizard_visited_ids(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#pageIds)
///
/// ``` QWizard* self ```
libqt_list /* of int */ q_wizard_page_ids(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setStartId)
///
/// ``` QWizard* self, int id ```
void q_wizard_set_start_id(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#startId)
///
/// ``` QWizard* self ```
int32_t q_wizard_start_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#currentPage)
///
/// ``` QWizard* self ```
QWizardPage* q_wizard_current_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#currentId)
///
/// ``` QWizard* self ```
int32_t q_wizard_current_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#validateCurrentPage)
///
/// ``` QWizard* self ```
bool q_wizard_validate_current_page(void* self);

/// Allows for overriding the related default method
///
/// ``` QWizard* self, bool (*slot)() ```
void q_wizard_on_validate_current_page(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QWizard* self ```
bool q_wizard_qbase_validate_current_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#nextId)
///
/// ``` QWizard* self ```
int32_t q_wizard_next_id(void* self);

/// Allows for overriding the related default method
///
/// ``` QWizard* self, int32_t (*slot)() ```
void q_wizard_on_next_id(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QWizard* self ```
int32_t q_wizard_qbase_next_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setField)
///
/// ``` QWizard* self, const char* name, QVariant* value ```
void q_wizard_set_field(void* self, const char* name, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#field)
///
/// ``` QWizard* self, const char* name ```
QVariant* q_wizard_field(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setWizardStyle)
///
/// ``` QWizard* self, enum QWizard__WizardStyle style ```
void q_wizard_set_wizard_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#wizardStyle)
///
/// ``` QWizard* self ```
int64_t q_wizard_wizard_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setOption)
///
/// ``` QWizard* self, enum QWizard__WizardOption option ```
void q_wizard_set_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#testOption)
///
/// ``` QWizard* self, enum QWizard__WizardOption option ```
bool q_wizard_test_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setOptions)
///
/// ``` QWizard* self, int options ```
void q_wizard_set_options(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#options)
///
/// ``` QWizard* self ```
int64_t q_wizard_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setButtonText)
///
/// ``` QWizard* self, enum QWizard__WizardButton which, const char* text ```
void q_wizard_set_button_text(void* self, int64_t which, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#buttonText)
///
/// ``` QWizard* self, enum QWizard__WizardButton which ```
const char* q_wizard_button_text(void* self, int64_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setButtonLayout)
///
/// ``` QWizard* self, int* layout[] ```
void q_wizard_set_button_layout(void* self, int* layout[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setButton)
///
/// ``` QWizard* self, enum QWizard__WizardButton which, QAbstractButton* button ```
void q_wizard_set_button(void* self, int64_t which, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#button)
///
/// ``` QWizard* self, enum QWizard__WizardButton which ```
QAbstractButton* q_wizard_button(void* self, int64_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setTitleFormat)
///
/// ``` QWizard* self, enum Qt__TextFormat format ```
void q_wizard_set_title_format(void* self, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#titleFormat)
///
/// ``` QWizard* self ```
int64_t q_wizard_title_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setSubTitleFormat)
///
/// ``` QWizard* self, enum Qt__TextFormat format ```
void q_wizard_set_sub_title_format(void* self, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#subTitleFormat)
///
/// ``` QWizard* self ```
int64_t q_wizard_sub_title_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setPixmap)
///
/// ``` QWizard* self, enum QWizard__WizardPixmap which, QPixmap* pixmap ```
void q_wizard_set_pixmap(void* self, int64_t which, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#pixmap)
///
/// ``` QWizard* self, enum QWizard__WizardPixmap which ```
QPixmap* q_wizard_pixmap(void* self, int64_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setSideWidget)
///
/// ``` QWizard* self, QWidget* widget ```
void q_wizard_set_side_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#sideWidget)
///
/// ``` QWizard* self ```
QWidget* q_wizard_side_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setDefaultProperty)
///
/// ``` QWizard* self, const char* className, const char* property, const char* changedSignal ```
void q_wizard_set_default_property(void* self, const char* className, const char* property, const char* changedSignal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setVisible)
///
/// ``` QWizard* self, bool visible ```
void q_wizard_set_visible(void* self, bool visible);

/// Allows for overriding the related default method
///
/// ``` QWizard* self, void (*slot)(QWizard*, bool) ```
void q_wizard_on_set_visible(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QWizard* self, bool visible ```
void q_wizard_qbase_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#sizeHint)
///
/// ``` QWizard* self ```
QSize* q_wizard_size_hint(void* self);

/// Allows for overriding the related default method
///
/// ``` QWizard* self, QSize* (*slot)() ```
void q_wizard_on_size_hint(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QWizard* self ```
QSize* q_wizard_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#currentIdChanged)
///
/// ``` QWizard* self, int id ```
void q_wizard_current_id_changed(void* self, int id);

/// ``` QWizard* self, void (*slot)(QWizard*, int) ```
void q_wizard_on_current_id_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#helpRequested)
///
/// ``` QWizard* self ```
void q_wizard_help_requested(void* self);

/// ``` QWizard* self, void (*slot)(QWizard*) ```
void q_wizard_on_help_requested(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#customButtonClicked)
///
/// ``` QWizard* self, int which ```
void q_wizard_custom_button_clicked(void* self, int which);

/// ``` QWizard* self, void (*slot)(QWizard*, int) ```
void q_wizard_on_custom_button_clicked(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#pageAdded)
///
/// ``` QWizard* self, int id ```
void q_wizard_page_added(void* self, int id);

/// ``` QWizard* self, void (*slot)(QWizard*, int) ```
void q_wizard_on_page_added(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#pageRemoved)
///
/// ``` QWizard* self, int id ```
void q_wizard_page_removed(void* self, int id);

/// ``` QWizard* self, void (*slot)(QWizard*, int) ```
void q_wizard_on_page_removed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#back)
///
/// ``` QWizard* self ```
void q_wizard_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#next)
///
/// ``` QWizard* self ```
void q_wizard_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setCurrentId)
///
/// ``` QWizard* self, int id ```
void q_wizard_set_current_id(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#restart)
///
/// ``` QWizard* self ```
void q_wizard_restart(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#event)
///
/// ``` QWizard* self, QEvent* event ```
bool q_wizard_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWizard* self, bool (*slot)(QWizard*, QEvent*) ```
void q_wizard_on_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWizard* self, QEvent* event ```
bool q_wizard_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#resizeEvent)
///
/// ``` QWizard* self, QResizeEvent* event ```
void q_wizard_resize_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QResizeEvent*) ```
void q_wizard_on_resize_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWizard* self, QResizeEvent* event ```
void q_wizard_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#paintEvent)
///
/// ``` QWizard* self, QPaintEvent* event ```
void q_wizard_paint_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QPaintEvent*) ```
void q_wizard_on_paint_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWizard* self, QPaintEvent* event ```
void q_wizard_qbase_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#done)
///
/// ``` QWizard* self, int result ```
void q_wizard_done(void* self, int result);

/// Allows for overriding the related default method
///
/// ``` QWizard* self, void (*slot)(QWizard*, int) ```
void q_wizard_on_done(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QWizard* self, int result ```
void q_wizard_qbase_done(void* self, int result);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#initializePage)
///
/// ``` QWizard* self, int id ```
void q_wizard_initialize_page(void* self, int id);

/// Allows for overriding the related default method
///
/// ``` QWizard* self, void (*slot)(QWizard*, int) ```
void q_wizard_on_initialize_page(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QWizard* self, int id ```
void q_wizard_qbase_initialize_page(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#cleanupPage)
///
/// ``` QWizard* self, int id ```
void q_wizard_cleanup_page(void* self, int id);

/// Allows for overriding the related default method
///
/// ``` QWizard* self, void (*slot)(QWizard*, int) ```
void q_wizard_on_cleanup_page(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QWizard* self, int id ```
void q_wizard_qbase_cleanup_page(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_wizard_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_wizard_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizard.html#setOption)
///
/// ``` QWizard* self, enum QWizard__WizardOption option, bool on ```
void q_wizard_set_option2(void* self, int64_t option, bool on);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QWizard* self ```
int32_t q_wizard_result(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QWizard* self, bool sizeGripEnabled ```
void q_wizard_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QWizard* self ```
bool q_wizard_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QWizard* self, bool modal ```
void q_wizard_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QWizard* self, int r ```
void q_wizard_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QWizard* self, int result ```
void q_wizard_finished(void* self, int result);

/// Inherited from QDialog
///
/// ``` QWizard* self, void (*slot)(QDialog*, int) ```
void q_wizard_on_finished(void* self, void (*slot)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QWizard* self ```
void q_wizard_accepted(void* self);

/// Inherited from QDialog
///
/// ``` QWizard* self, void (*slot)(QDialog*) ```
void q_wizard_on_accepted(void* self, void (*slot)(void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QWizard* self ```
void q_wizard_rejected(void* self);

/// Inherited from QDialog
///
/// ``` QWizard* self, void (*slot)(QDialog*) ```
void q_wizard_on_rejected(void* self, void (*slot)(void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QWizard* self ```
uintptr_t q_wizard_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QWizard* self ```
void q_wizard_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QWizard* self ```
uintptr_t q_wizard_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QWizard* self ```
uintptr_t q_wizard_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QWizard* self ```
QStyle* q_wizard_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QWizard* self, QStyle* style ```
void q_wizard_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QWizard* self ```
bool q_wizard_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QWizard* self ```
bool q_wizard_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QWizard* self ```
bool q_wizard_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QWizard* self ```
int64_t q_wizard_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QWizard* self, enum Qt__WindowModality windowModality ```
void q_wizard_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QWizard* self ```
bool q_wizard_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QWizard* self, QWidget* param1 ```
bool q_wizard_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QWizard* self, bool enabled ```
void q_wizard_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QWizard* self, bool disabled ```
void q_wizard_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QWizard* self, bool windowModified ```
void q_wizard_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QWizard* self ```
QRect* q_wizard_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QWizard* self ```
QRect* q_wizard_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QWizard* self ```
QRect* q_wizard_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QWizard* self ```
int32_t q_wizard_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QWizard* self ```
int32_t q_wizard_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QWizard* self ```
QPoint* q_wizard_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QWizard* self ```
QSize* q_wizard_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QWizard* self ```
QSize* q_wizard_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QWizard* self ```
int32_t q_wizard_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QWizard* self ```
int32_t q_wizard_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QWizard* self ```
QRect* q_wizard_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QWizard* self ```
QRect* q_wizard_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QWizard* self ```
QRegion* q_wizard_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QWizard* self ```
QSize* q_wizard_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QWizard* self ```
QSize* q_wizard_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QWizard* self ```
int32_t q_wizard_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QWizard* self ```
int32_t q_wizard_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QWizard* self ```
int32_t q_wizard_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QWizard* self ```
int32_t q_wizard_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QWizard* self, QSize* minimumSize ```
void q_wizard_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QWizard* self, int minw, int minh ```
void q_wizard_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QWizard* self, QSize* maximumSize ```
void q_wizard_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QWizard* self, int maxw, int maxh ```
void q_wizard_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QWizard* self, int minw ```
void q_wizard_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QWizard* self, int minh ```
void q_wizard_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QWizard* self, int maxw ```
void q_wizard_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QWizard* self, int maxh ```
void q_wizard_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QWizard* self ```
QSize* q_wizard_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QWizard* self, QSize* sizeIncrement ```
void q_wizard_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QWizard* self, int w, int h ```
void q_wizard_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QWizard* self ```
QSize* q_wizard_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QWizard* self, QSize* baseSize ```
void q_wizard_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QWizard* self, int basew, int baseh ```
void q_wizard_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QWizard* self, QSize* fixedSize ```
void q_wizard_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QWizard* self, int w, int h ```
void q_wizard_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QWizard* self, int w ```
void q_wizard_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QWizard* self, int h ```
void q_wizard_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QWizard* self, QPointF* param1 ```
QPointF* q_wizard_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QWizard* self, QPoint* param1 ```
QPoint* q_wizard_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QWizard* self, QPointF* param1 ```
QPointF* q_wizard_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QWizard* self, QPoint* param1 ```
QPoint* q_wizard_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QWizard* self, QPointF* param1 ```
QPointF* q_wizard_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QWizard* self, QPoint* param1 ```
QPoint* q_wizard_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QWizard* self, QPointF* param1 ```
QPointF* q_wizard_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QWizard* self, QPoint* param1 ```
QPoint* q_wizard_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QWizard* self, QWidget* param1, QPointF* param2 ```
QPointF* q_wizard_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QWizard* self, QWidget* param1, QPoint* param2 ```
QPoint* q_wizard_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QWizard* self, QWidget* param1, QPointF* param2 ```
QPointF* q_wizard_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QWizard* self, QWidget* param1, QPoint* param2 ```
QPoint* q_wizard_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QWizard* self ```
QWidget* q_wizard_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QWizard* self ```
QWidget* q_wizard_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QWizard* self ```
QWidget* q_wizard_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QWizard* self ```
QPalette* q_wizard_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QWizard* self, QPalette* palette ```
void q_wizard_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QWizard* self, enum QPalette__ColorRole backgroundRole ```
void q_wizard_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QWizard* self ```
int64_t q_wizard_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QWizard* self, enum QPalette__ColorRole foregroundRole ```
void q_wizard_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QWizard* self ```
int64_t q_wizard_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QWizard* self ```
QFont* q_wizard_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QWizard* self, QFont* font ```
void q_wizard_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QWizard* self ```
QFontMetrics* q_wizard_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QWizard* self ```
QFontInfo* q_wizard_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QWizard* self ```
QCursor* q_wizard_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QWizard* self, QCursor* cursor ```
void q_wizard_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QWizard* self ```
void q_wizard_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QWizard* self, bool enable ```
void q_wizard_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QWizard* self ```
bool q_wizard_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QWizard* self ```
bool q_wizard_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QWizard* self, bool enable ```
void q_wizard_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QWizard* self ```
bool q_wizard_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QWizard* self, QBitmap* mask ```
void q_wizard_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QWizard* self, QRegion* mask ```
void q_wizard_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QWizard* self ```
QRegion* q_wizard_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QWizard* self ```
void q_wizard_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizard* self, QPaintDevice* target ```
void q_wizard_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizard* self, QPainter* painter ```
void q_wizard_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QWizard* self ```
QPixmap* q_wizard_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QWizard* self ```
QGraphicsEffect* q_wizard_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QWizard* self, QGraphicsEffect* effect ```
void q_wizard_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QWizard* self, enum Qt__GestureType typeVal ```
void q_wizard_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QWizard* self, enum Qt__GestureType typeVal ```
void q_wizard_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QWizard* self, const char* windowTitle ```
void q_wizard_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QWizard* self, const char* styleSheet ```
void q_wizard_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QWizard* self ```
const char* q_wizard_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QWizard* self ```
const char* q_wizard_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QWizard* self, QIcon* icon ```
void q_wizard_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QWizard* self ```
QIcon* q_wizard_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QWizard* self, const char* windowIconText ```
void q_wizard_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QWizard* self ```
const char* q_wizard_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QWizard* self, const char* windowRole ```
void q_wizard_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QWizard* self ```
const char* q_wizard_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QWizard* self, const char* filePath ```
void q_wizard_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QWizard* self ```
const char* q_wizard_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QWizard* self, double level ```
void q_wizard_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QWizard* self ```
double q_wizard_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QWizard* self ```
bool q_wizard_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QWizard* self, const char* toolTip ```
void q_wizard_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QWizard* self ```
const char* q_wizard_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QWizard* self, int msec ```
void q_wizard_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QWizard* self ```
int32_t q_wizard_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QWizard* self, const char* statusTip ```
void q_wizard_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QWizard* self ```
const char* q_wizard_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QWizard* self, const char* whatsThis ```
void q_wizard_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QWizard* self ```
const char* q_wizard_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QWizard* self ```
const char* q_wizard_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QWizard* self, const char* name ```
void q_wizard_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QWizard* self ```
const char* q_wizard_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QWizard* self, const char* description ```
void q_wizard_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QWizard* self, enum Qt__LayoutDirection direction ```
void q_wizard_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QWizard* self ```
int64_t q_wizard_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QWizard* self ```
void q_wizard_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QWizard* self, QLocale* locale ```
void q_wizard_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QWizard* self ```
QLocale* q_wizard_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QWizard* self ```
void q_wizard_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QWizard* self ```
bool q_wizard_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QWizard* self ```
bool q_wizard_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QWizard* self ```
void q_wizard_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QWizard* self ```
bool q_wizard_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QWizard* self ```
void q_wizard_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QWizard* self ```
void q_wizard_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QWizard* self, enum Qt__FocusReason reason ```
void q_wizard_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QWizard* self ```
int64_t q_wizard_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QWizard* self, enum Qt__FocusPolicy policy ```
void q_wizard_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QWizard* self ```
bool q_wizard_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_wizard_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QWizard* self, QWidget* focusProxy ```
void q_wizard_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QWizard* self ```
QWidget* q_wizard_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QWizard* self ```
int64_t q_wizard_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QWizard* self, enum Qt__ContextMenuPolicy policy ```
void q_wizard_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QWizard* self ```
void q_wizard_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QWizard* self, QCursor* param1 ```
void q_wizard_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QWizard* self ```
void q_wizard_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QWizard* self ```
void q_wizard_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QWizard* self ```
void q_wizard_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QWizard* self, QKeySequence* key ```
int32_t q_wizard_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QWizard* self, int id ```
void q_wizard_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QWizard* self, int id ```
void q_wizard_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QWizard* self, int id ```
void q_wizard_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_wizard_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_wizard_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QWizard* self ```
bool q_wizard_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QWizard* self, bool enable ```
void q_wizard_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QWizard* self ```
QGraphicsProxyWidget* q_wizard_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWizard* self ```
void q_wizard_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWizard* self ```
void q_wizard_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWizard* self, int x, int y, int w, int h ```
void q_wizard_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWizard* self, QRect* param1 ```
void q_wizard_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWizard* self, QRegion* param1 ```
void q_wizard_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWizard* self, int x, int y, int w, int h ```
void q_wizard_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWizard* self, QRect* param1 ```
void q_wizard_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWizard* self, QRegion* param1 ```
void q_wizard_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QWizard* self, bool hidden ```
void q_wizard_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QWizard* self ```
void q_wizard_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QWizard* self ```
void q_wizard_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QWizard* self ```
void q_wizard_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QWizard* self ```
void q_wizard_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QWizard* self ```
void q_wizard_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QWizard* self ```
void q_wizard_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QWizard* self ```
bool q_wizard_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QWizard* self ```
void q_wizard_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QWizard* self ```
void q_wizard_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QWizard* self, QWidget* param1 ```
void q_wizard_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QWizard* self, int x, int y ```
void q_wizard_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QWizard* self, QPoint* param1 ```
void q_wizard_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QWizard* self, int w, int h ```
void q_wizard_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QWizard* self, QSize* param1 ```
void q_wizard_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QWizard* self, int x, int y, int w, int h ```
void q_wizard_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QWizard* self, QRect* geometry ```
void q_wizard_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QWizard* self ```
char* q_wizard_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QWizard* self, const char* geometry ```
bool q_wizard_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QWizard* self ```
void q_wizard_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QWizard* self ```
bool q_wizard_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QWizard* self, QWidget* param1 ```
bool q_wizard_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QWizard* self ```
bool q_wizard_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QWizard* self ```
bool q_wizard_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QWizard* self ```
bool q_wizard_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QWizard* self ```
bool q_wizard_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QWizard* self ```
int64_t q_wizard_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QWizard* self, int state ```
void q_wizard_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QWizard* self, int state ```
void q_wizard_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QWizard* self ```
QSizePolicy* q_wizard_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QWizard* self, QSizePolicy* sizePolicy ```
void q_wizard_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QWizard* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_wizard_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QWizard* self ```
QRegion* q_wizard_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QWizard* self, int left, int top, int right, int bottom ```
void q_wizard_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QWizard* self, QMargins* margins ```
void q_wizard_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QWizard* self ```
QMargins* q_wizard_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QWizard* self ```
QRect* q_wizard_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QWizard* self ```
QLayout* q_wizard_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QWizard* self, QLayout* layout ```
void q_wizard_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QWizard* self ```
void q_wizard_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QWizard* self, QWidget* parent ```
void q_wizard_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QWizard* self, QWidget* parent, int f ```
void q_wizard_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QWizard* self, int dx, int dy ```
void q_wizard_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QWizard* self, int dx, int dy, QRect* param3 ```
void q_wizard_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QWizard* self ```
QWidget* q_wizard_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QWizard* self ```
QWidget* q_wizard_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QWizard* self ```
QWidget* q_wizard_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QWizard* self ```
bool q_wizard_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QWizard* self, bool on ```
void q_wizard_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWizard* self, QAction* action ```
void q_wizard_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QWizard* self, QAction* actions[] ```
void q_wizard_add_actions(void* self, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QWizard* self, QAction* before, QAction* actions[] ```
void q_wizard_insert_actions(void* self, void* before, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QWizard* self, QAction* before, QAction* action ```
void q_wizard_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QWizard* self, QAction* action ```
void q_wizard_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QWizard* self ```
libqt_list /* of QAction* */ q_wizard_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWizard* self, const char* text ```
QAction* q_wizard_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWizard* self, QIcon* icon, const char* text ```
QAction* q_wizard_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWizard* self, const char* text, QKeySequence* shortcut ```
QAction* q_wizard_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWizard* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_wizard_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QWizard* self ```
QWidget* q_wizard_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QWizard* self, int typeVal ```
void q_wizard_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QWizard* self ```
int64_t q_wizard_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QWizard* self, enum Qt__WindowType param1 ```
void q_wizard_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QWizard* self, int typeVal ```
void q_wizard_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QWizard* self ```
int64_t q_wizard_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_wizard_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QWizard* self, int x, int y ```
QWidget* q_wizard_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QWizard* self, QPoint* p ```
QWidget* q_wizard_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QWizard* self, enum Qt__WidgetAttribute param1 ```
void q_wizard_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QWizard* self, enum Qt__WidgetAttribute param1 ```
bool q_wizard_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QWizard* self ```
void q_wizard_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QWizard* self, QWidget* child ```
bool q_wizard_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QWizard* self ```
bool q_wizard_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QWizard* self, bool enabled ```
void q_wizard_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QWizard* self ```
QBackingStore* q_wizard_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QWizard* self ```
QWindow* q_wizard_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QWizard* self ```
QScreen* q_wizard_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QWizard* self, QScreen* screen ```
void q_wizard_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_wizard_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QWizard* self, const char* title ```
void q_wizard_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// ``` QWizard* self, void (*slot)(QWidget*, const char*) ```
void q_wizard_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QWizard* self, QIcon* icon ```
void q_wizard_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// ``` QWizard* self, void (*slot)(QWidget*, QIcon*) ```
void q_wizard_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QWizard* self, const char* iconText ```
void q_wizard_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// ``` QWizard* self, void (*slot)(QWidget*, const char*) ```
void q_wizard_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QWizard* self, QPoint* pos ```
void q_wizard_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// ``` QWizard* self, void (*slot)(QWidget*, QPoint*) ```
void q_wizard_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QWizard* self ```
int64_t q_wizard_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QWizard* self, int hints ```
void q_wizard_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizard* self, QPaintDevice* target, QPoint* targetOffset ```
void q_wizard_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizard* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_wizard_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizard* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_wizard_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizard* self, QPainter* painter, QPoint* targetOffset ```
void q_wizard_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizard* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_wizard_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizard* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_wizard_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QWizard* self, QRect* rectangle ```
QPixmap* q_wizard_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QWizard* self, enum Qt__GestureType typeVal, int flags ```
void q_wizard_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QWizard* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_wizard_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QWizard* self, int id, bool enable ```
void q_wizard_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QWizard* self, int id, bool enable ```
void q_wizard_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QWizard* self, enum Qt__WindowType param1, bool on ```
void q_wizard_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QWizard* self, enum Qt__WidgetAttribute param1, bool on ```
void q_wizard_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_wizard_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_wizard_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWizard* self ```
const char* q_wizard_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWizard* self, char* name ```
void q_wizard_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWizard* self ```
bool q_wizard_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWizard* self ```
bool q_wizard_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWizard* self ```
bool q_wizard_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWizard* self ```
bool q_wizard_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWizard* self, bool b ```
bool q_wizard_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWizard* self ```
QThread* q_wizard_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWizard* self, QThread* thread ```
void q_wizard_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWizard* self, int interval ```
int32_t q_wizard_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWizard* self, int id ```
void q_wizard_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWizard* self ```
libqt_list /* of QObject* */ q_wizard_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWizard* self, QObject* filterObj ```
void q_wizard_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWizard* self, QObject* obj ```
void q_wizard_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_wizard_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWizard* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_wizard_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_wizard_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_wizard_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWizard* self ```
void q_wizard_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWizard* self ```
void q_wizard_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWizard* self, const char* name, QVariant* value ```
bool q_wizard_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWizard* self, const char* name ```
QVariant* q_wizard_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWizard* self ```
const char** q_wizard_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWizard* self ```
QBindingStorage* q_wizard_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWizard* self ```
QBindingStorage* q_wizard_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWizard* self ```
void q_wizard_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QWizard* self, void (*slot)(QObject*) ```
void q_wizard_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWizard* self ```
QObject* q_wizard_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWizard* self, const char* classname ```
bool q_wizard_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWizard* self ```
void q_wizard_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWizard* self, int interval, enum Qt__TimerType timerType ```
int32_t q_wizard_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_wizard_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWizard* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_wizard_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWizard* self, QObject* param1 ```
void q_wizard_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QWizard* self, void (*slot)(QObject*, QObject*) ```
void q_wizard_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QWizard* self ```
bool q_wizard_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QWizard* self ```
int32_t q_wizard_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QWizard* self ```
int32_t q_wizard_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QWizard* self ```
int32_t q_wizard_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QWizard* self ```
int32_t q_wizard_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QWizard* self ```
int32_t q_wizard_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QWizard* self ```
int32_t q_wizard_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QWizard* self ```
double q_wizard_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QWizard* self ```
double q_wizard_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QWizard* self ```
int32_t q_wizard_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QWizard* self ```
int32_t q_wizard_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_wizard_device_pixel_ratio_f_scale();

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
QSize* q_wizard_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
QSize* q_wizard_qbase_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, QSize* (*slot)() ```
void q_wizard_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
void q_wizard_open(void* self);

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
void q_wizard_qbase_open(void* self);

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)() ```
void q_wizard_on_open(void* self, void (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
int32_t q_wizard_exec(void* self);

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
int32_t q_wizard_qbase_exec(void* self);

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, int32_t (*slot)() ```
void q_wizard_on_exec(void* self, int32_t (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
void q_wizard_accept(void* self);

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
void q_wizard_qbase_accept(void* self);

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)() ```
void q_wizard_on_accept(void* self, void (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
void q_wizard_reject(void* self);

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
void q_wizard_qbase_reject(void* self);

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)() ```
void q_wizard_on_reject(void* self, void (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QKeyEvent* param1 ```
void q_wizard_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QKeyEvent* param1 ```
void q_wizard_qbase_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QKeyEvent*) ```
void q_wizard_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QCloseEvent* param1 ```
void q_wizard_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QCloseEvent* param1 ```
void q_wizard_qbase_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QCloseEvent*) ```
void q_wizard_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QShowEvent* param1 ```
void q_wizard_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QShowEvent* param1 ```
void q_wizard_qbase_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QShowEvent*) ```
void q_wizard_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QContextMenuEvent* param1 ```
void q_wizard_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QContextMenuEvent* param1 ```
void q_wizard_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QContextMenuEvent*) ```
void q_wizard_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QObject* param1, QEvent* param2 ```
bool q_wizard_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QObject* param1, QEvent* param2 ```
bool q_wizard_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, bool (*slot)(QWizard*, QObject*, QEvent*) ```
void q_wizard_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
int32_t q_wizard_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
int32_t q_wizard_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, int32_t (*slot)() ```
void q_wizard_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, int param1 ```
int32_t q_wizard_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, int param1 ```
int32_t q_wizard_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, int32_t (*slot)(QWizard*, int) ```
void q_wizard_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
bool q_wizard_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
bool q_wizard_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, bool (*slot)() ```
void q_wizard_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
QPaintEngine* q_wizard_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
QPaintEngine* q_wizard_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, QPaintEngine* (*slot)() ```
void q_wizard_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QMouseEvent* event ```
void q_wizard_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QMouseEvent* event ```
void q_wizard_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QMouseEvent*) ```
void q_wizard_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QMouseEvent* event ```
void q_wizard_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QMouseEvent* event ```
void q_wizard_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QMouseEvent*) ```
void q_wizard_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QMouseEvent* event ```
void q_wizard_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QMouseEvent* event ```
void q_wizard_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QMouseEvent*) ```
void q_wizard_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QMouseEvent* event ```
void q_wizard_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QMouseEvent* event ```
void q_wizard_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QMouseEvent*) ```
void q_wizard_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QWheelEvent* event ```
void q_wizard_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QWheelEvent* event ```
void q_wizard_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QWheelEvent*) ```
void q_wizard_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QKeyEvent* event ```
void q_wizard_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QKeyEvent* event ```
void q_wizard_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QKeyEvent*) ```
void q_wizard_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QFocusEvent* event ```
void q_wizard_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QFocusEvent* event ```
void q_wizard_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QFocusEvent*) ```
void q_wizard_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QFocusEvent* event ```
void q_wizard_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QFocusEvent* event ```
void q_wizard_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QFocusEvent*) ```
void q_wizard_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QEnterEvent* event ```
void q_wizard_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QEnterEvent* event ```
void q_wizard_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QEnterEvent*) ```
void q_wizard_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QEvent* event ```
void q_wizard_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QEvent* event ```
void q_wizard_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QEvent*) ```
void q_wizard_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QMoveEvent* event ```
void q_wizard_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QMoveEvent* event ```
void q_wizard_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QMoveEvent*) ```
void q_wizard_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QTabletEvent* event ```
void q_wizard_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QTabletEvent* event ```
void q_wizard_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QTabletEvent*) ```
void q_wizard_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QActionEvent* event ```
void q_wizard_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QActionEvent* event ```
void q_wizard_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QActionEvent*) ```
void q_wizard_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QDragEnterEvent* event ```
void q_wizard_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QDragEnterEvent* event ```
void q_wizard_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QDragEnterEvent*) ```
void q_wizard_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QDragMoveEvent* event ```
void q_wizard_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QDragMoveEvent* event ```
void q_wizard_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QDragMoveEvent*) ```
void q_wizard_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QDragLeaveEvent* event ```
void q_wizard_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QDragLeaveEvent* event ```
void q_wizard_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QDragLeaveEvent*) ```
void q_wizard_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QDropEvent* event ```
void q_wizard_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QDropEvent* event ```
void q_wizard_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QDropEvent*) ```
void q_wizard_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QHideEvent* event ```
void q_wizard_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QHideEvent* event ```
void q_wizard_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QHideEvent*) ```
void q_wizard_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, const char* eventType, void* message, intptr_t* result ```
bool q_wizard_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, const char* eventType, void* message, intptr_t* result ```
bool q_wizard_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, bool (*slot)(QWizard*, const char*, void*, intptr_t*) ```
void q_wizard_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QEvent* param1 ```
void q_wizard_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QEvent* param1 ```
void q_wizard_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QEvent*) ```
void q_wizard_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_wizard_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_wizard_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, int32_t (*slot)(QWizard*, enum QPaintDevice__PaintDeviceMetric) ```
void q_wizard_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QPainter* painter ```
void q_wizard_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QPainter* painter ```
void q_wizard_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QPainter*) ```
void q_wizard_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QPoint* offset ```
QPaintDevice* q_wizard_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QPoint* offset ```
QPaintDevice* q_wizard_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, QPaintDevice* (*slot)(QWizard*, QPoint*) ```
void q_wizard_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
QPainter* q_wizard_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
QPainter* q_wizard_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, QPainter* (*slot)() ```
void q_wizard_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QInputMethodEvent* param1 ```
void q_wizard_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QInputMethodEvent* param1 ```
void q_wizard_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QInputMethodEvent*) ```
void q_wizard_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_wizard_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_wizard_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, QVariant* (*slot)(QWizard*, enum Qt__InputMethodQuery) ```
void q_wizard_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, bool next ```
bool q_wizard_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, bool next ```
bool q_wizard_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, bool (*slot)(QWizard*, bool) ```
void q_wizard_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QTimerEvent* event ```
void q_wizard_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QTimerEvent* event ```
void q_wizard_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QTimerEvent*) ```
void q_wizard_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QChildEvent* event ```
void q_wizard_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QChildEvent* event ```
void q_wizard_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QChildEvent*) ```
void q_wizard_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QEvent* event ```
void q_wizard_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QEvent* event ```
void q_wizard_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QEvent*) ```
void q_wizard_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QMetaMethod* signal ```
void q_wizard_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QMetaMethod* signal ```
void q_wizard_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QMetaMethod*) ```
void q_wizard_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QMetaMethod* signal ```
void q_wizard_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QMetaMethod* signal ```
void q_wizard_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QMetaMethod*) ```
void q_wizard_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QWidget* param1 ```
void q_wizard_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QWidget* param1 ```
void q_wizard_qbase_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)(QWizard*, QWidget*) ```
void q_wizard_on_adjust_position(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
void q_wizard_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
void q_wizard_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)() ```
void q_wizard_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
void q_wizard_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
void q_wizard_qbase_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)() ```
void q_wizard_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
void q_wizard_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
void q_wizard_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, void (*slot)() ```
void q_wizard_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
bool q_wizard_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
bool q_wizard_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, bool (*slot)() ```
void q_wizard_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
bool q_wizard_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
bool q_wizard_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, bool (*slot)() ```
void q_wizard_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
QObject* q_wizard_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
QObject* q_wizard_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, QObject* (*slot)() ```
void q_wizard_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self ```
int32_t q_wizard_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self ```
int32_t q_wizard_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, int32_t (*slot)() ```
void q_wizard_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, const char* signal ```
int32_t q_wizard_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, const char* signal ```
int32_t q_wizard_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, int32_t (*slot)(QWizard*, const char*) ```
void q_wizard_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizard* self, QMetaMethod* signal ```
bool q_wizard_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizard* self, QMetaMethod* signal ```
bool q_wizard_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizard* self, bool (*slot)(QWizard*, QMetaMethod*) ```
void q_wizard_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QWizard* self ```
void q_wizard_delete(void* self);

/// https://doc.qt.io/qt-6/qwizardpage.html

/// q_wizardpage_new constructs a new QWizardPage object.
///
/// ``` QWidget* parent ```
QWizardPage* q_wizardpage_new(void* parent);

/// q_wizardpage_new2 constructs a new QWizardPage object.
///
///
QWizardPage* q_wizardpage_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWizardPage* self ```
QMetaObject* q_wizardpage_meta_object(void* self);

/// ``` QWizardPage* self, const char* param1 ```
void* q_wizardpage_metacast(void* self, const char* param1);

/// ``` QWizardPage* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_wizardpage_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QWizardPage* self, int32_t (*slot)(QWizardPage*, enum QMetaObject__Call, int, void*) ```
void q_wizardpage_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QWizardPage* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_wizardpage_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_wizardpage_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#setTitle)
///
/// ``` QWizardPage* self, const char* title ```
void q_wizardpage_set_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#title)
///
/// ``` QWizardPage* self ```
const char* q_wizardpage_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#setSubTitle)
///
/// ``` QWizardPage* self, const char* subTitle ```
void q_wizardpage_set_sub_title(void* self, const char* subTitle);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#subTitle)
///
/// ``` QWizardPage* self ```
const char* q_wizardpage_sub_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#setPixmap)
///
/// ``` QWizardPage* self, enum QWizard__WizardPixmap which, QPixmap* pixmap ```
void q_wizardpage_set_pixmap(void* self, int64_t which, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#pixmap)
///
/// ``` QWizardPage* self, enum QWizard__WizardPixmap which ```
QPixmap* q_wizardpage_pixmap(void* self, int64_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#setFinalPage)
///
/// ``` QWizardPage* self, bool finalPage ```
void q_wizardpage_set_final_page(void* self, bool finalPage);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#isFinalPage)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_final_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#setCommitPage)
///
/// ``` QWizardPage* self, bool commitPage ```
void q_wizardpage_set_commit_page(void* self, bool commitPage);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#isCommitPage)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_commit_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#setButtonText)
///
/// ``` QWizardPage* self, enum QWizard__WizardButton which, const char* text ```
void q_wizardpage_set_button_text(void* self, int64_t which, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#buttonText)
///
/// ``` QWizardPage* self, enum QWizard__WizardButton which ```
const char* q_wizardpage_button_text(void* self, int64_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#initializePage)
///
/// ``` QWizardPage* self ```
void q_wizardpage_initialize_page(void* self);

/// Allows for overriding the related default method
///
/// ``` QWizardPage* self, void (*slot)() ```
void q_wizardpage_on_initialize_page(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QWizardPage* self ```
void q_wizardpage_qbase_initialize_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#cleanupPage)
///
/// ``` QWizardPage* self ```
void q_wizardpage_cleanup_page(void* self);

/// Allows for overriding the related default method
///
/// ``` QWizardPage* self, void (*slot)() ```
void q_wizardpage_on_cleanup_page(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QWizardPage* self ```
void q_wizardpage_qbase_cleanup_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#validatePage)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_validate_page(void* self);

/// Allows for overriding the related default method
///
/// ``` QWizardPage* self, bool (*slot)() ```
void q_wizardpage_on_validate_page(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QWizardPage* self ```
bool q_wizardpage_qbase_validate_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#isComplete)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_complete(void* self);

/// Allows for overriding the related default method
///
/// ``` QWizardPage* self, bool (*slot)() ```
void q_wizardpage_on_is_complete(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QWizardPage* self ```
bool q_wizardpage_qbase_is_complete(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#nextId)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_next_id(void* self);

/// Allows for overriding the related default method
///
/// ``` QWizardPage* self, int32_t (*slot)() ```
void q_wizardpage_on_next_id(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_qbase_next_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#completeChanged)
///
/// ``` QWizardPage* self ```
void q_wizardpage_complete_changed(void* self);

/// ``` QWizardPage* self, void (*slot)(QWizardPage*) ```
void q_wizardpage_on_complete_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#setField)
///
/// ``` QWizardPage* self, const char* name, QVariant* value ```
void q_wizardpage_set_field(void* self, const char* name, void* value);

/// Allows for overriding the related default method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, const char*, QVariant*) ```
void q_wizardpage_on_set_field(void* self, void (*slot)(void*, const char*, void*));

/// Base class method implementation
///
/// ``` QWizardPage* self, const char* name, QVariant* value ```
void q_wizardpage_qbase_set_field(void* self, const char* name, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#field)
///
/// ``` QWizardPage* self, const char* name ```
QVariant* q_wizardpage_field(void* self, const char* name);

/// Allows for overriding the related default method
///
/// ``` QWizardPage* self, QVariant* (*slot)(QWizardPage*, const char*) ```
void q_wizardpage_on_field(void* self, QVariant* (*slot)(void*, const char*));

/// Base class method implementation
///
/// ``` QWizardPage* self, const char* name ```
QVariant* q_wizardpage_qbase_field(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#registerField)
///
/// ``` QWizardPage* self, const char* name, QWidget* widget ```
void q_wizardpage_register_field(void* self, const char* name, void* widget);

/// Allows for overriding the related default method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, const char*, QWidget*) ```
void q_wizardpage_on_register_field(void* self, void (*slot)(void*, const char*, void*));

/// Base class method implementation
///
/// ``` QWizardPage* self, const char* name, QWidget* widget ```
void q_wizardpage_qbase_register_field(void* self, const char* name, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#wizard)
///
/// ``` QWizardPage* self ```
QWizard* q_wizardpage_wizard(void* self);

/// Allows for overriding the related default method
///
/// ``` QWizardPage* self, QWizard* (*slot)() ```
void q_wizardpage_on_wizard(void* self, QWizard* (*slot)());

/// Base class method implementation
///
/// ``` QWizardPage* self ```
QWizard* q_wizardpage_qbase_wizard(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_wizardpage_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_wizardpage_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#registerField)
///
/// ``` QWizardPage* self, const char* name, QWidget* widget, const char* property ```
void q_wizardpage_register_field3(void* self, const char* name, void* widget, const char* property);

/// Allows for overriding the related default method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, const char*, QWidget*, const char*) ```
void q_wizardpage_on_register_field3(void* self, void (*slot)(void*, const char*, void*, const char*));

/// Base class method implementation
///
/// ``` QWizardPage* self, const char* name, QWidget* widget, const char* property ```
void q_wizardpage_qbase_register_field3(void* self, const char* name, void* widget, const char* property);

/// [Qt documentation](https://doc.qt.io/qt-6/qwizardpage.html#registerField)
///
/// ``` QWizardPage* self, const char* name, QWidget* widget, const char* property, const char* changedSignal ```
void q_wizardpage_register_field4(void* self, const char* name, void* widget, const char* property, const char* changedSignal);

/// Allows for overriding the related default method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, const char*, QWidget*, const char*, const char*) ```
void q_wizardpage_on_register_field4(void* self, void (*slot)(void*, const char*, void*, const char*, const char*));

/// Base class method implementation
///
/// ``` QWizardPage* self, const char* name, QWidget* widget, const char* property, const char* changedSignal ```
void q_wizardpage_qbase_register_field4(void* self, const char* name, void* widget, const char* property, const char* changedSignal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QWizardPage* self ```
uintptr_t q_wizardpage_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QWizardPage* self ```
void q_wizardpage_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QWizardPage* self ```
uintptr_t q_wizardpage_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QWizardPage* self ```
uintptr_t q_wizardpage_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QWizardPage* self ```
QStyle* q_wizardpage_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QWizardPage* self, QStyle* style ```
void q_wizardpage_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QWizardPage* self ```
int64_t q_wizardpage_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QWizardPage* self, enum Qt__WindowModality windowModality ```
void q_wizardpage_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QWizardPage* self, QWidget* param1 ```
bool q_wizardpage_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QWizardPage* self, bool enabled ```
void q_wizardpage_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QWizardPage* self, bool disabled ```
void q_wizardpage_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QWizardPage* self, bool windowModified ```
void q_wizardpage_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QWizardPage* self ```
QRect* q_wizardpage_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QWizardPage* self ```
QRect* q_wizardpage_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QWizardPage* self ```
QRect* q_wizardpage_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QWizardPage* self ```
QPoint* q_wizardpage_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QWizardPage* self ```
QSize* q_wizardpage_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QWizardPage* self ```
QSize* q_wizardpage_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QWizardPage* self ```
QRect* q_wizardpage_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QWizardPage* self ```
QRect* q_wizardpage_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QWizardPage* self ```
QRegion* q_wizardpage_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QWizardPage* self ```
QSize* q_wizardpage_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QWizardPage* self ```
QSize* q_wizardpage_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QWizardPage* self, QSize* minimumSize ```
void q_wizardpage_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QWizardPage* self, int minw, int minh ```
void q_wizardpage_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QWizardPage* self, QSize* maximumSize ```
void q_wizardpage_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QWizardPage* self, int maxw, int maxh ```
void q_wizardpage_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QWizardPage* self, int minw ```
void q_wizardpage_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QWizardPage* self, int minh ```
void q_wizardpage_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QWizardPage* self, int maxw ```
void q_wizardpage_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QWizardPage* self, int maxh ```
void q_wizardpage_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QWizardPage* self ```
QSize* q_wizardpage_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QWizardPage* self, QSize* sizeIncrement ```
void q_wizardpage_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QWizardPage* self, int w, int h ```
void q_wizardpage_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QWizardPage* self ```
QSize* q_wizardpage_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QWizardPage* self, QSize* baseSize ```
void q_wizardpage_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QWizardPage* self, int basew, int baseh ```
void q_wizardpage_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QWizardPage* self, QSize* fixedSize ```
void q_wizardpage_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QWizardPage* self, int w, int h ```
void q_wizardpage_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QWizardPage* self, int w ```
void q_wizardpage_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QWizardPage* self, int h ```
void q_wizardpage_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QWizardPage* self, QPointF* param1 ```
QPointF* q_wizardpage_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QWizardPage* self, QPoint* param1 ```
QPoint* q_wizardpage_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QWizardPage* self, QPointF* param1 ```
QPointF* q_wizardpage_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QWizardPage* self, QPoint* param1 ```
QPoint* q_wizardpage_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QWizardPage* self, QPointF* param1 ```
QPointF* q_wizardpage_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QWizardPage* self, QPoint* param1 ```
QPoint* q_wizardpage_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QWizardPage* self, QPointF* param1 ```
QPointF* q_wizardpage_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QWizardPage* self, QPoint* param1 ```
QPoint* q_wizardpage_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QWizardPage* self, QWidget* param1, QPointF* param2 ```
QPointF* q_wizardpage_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QWizardPage* self, QWidget* param1, QPoint* param2 ```
QPoint* q_wizardpage_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QWizardPage* self, QWidget* param1, QPointF* param2 ```
QPointF* q_wizardpage_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QWizardPage* self, QWidget* param1, QPoint* param2 ```
QPoint* q_wizardpage_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QWizardPage* self ```
QWidget* q_wizardpage_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QWizardPage* self ```
QWidget* q_wizardpage_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QWizardPage* self ```
QWidget* q_wizardpage_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QWizardPage* self ```
QPalette* q_wizardpage_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QWizardPage* self, QPalette* palette ```
void q_wizardpage_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QWizardPage* self, enum QPalette__ColorRole backgroundRole ```
void q_wizardpage_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QWizardPage* self ```
int64_t q_wizardpage_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QWizardPage* self, enum QPalette__ColorRole foregroundRole ```
void q_wizardpage_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QWizardPage* self ```
int64_t q_wizardpage_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QWizardPage* self ```
QFont* q_wizardpage_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QWizardPage* self, QFont* font ```
void q_wizardpage_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QWizardPage* self ```
QFontMetrics* q_wizardpage_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QWizardPage* self ```
QFontInfo* q_wizardpage_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QWizardPage* self ```
QCursor* q_wizardpage_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QWizardPage* self, QCursor* cursor ```
void q_wizardpage_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QWizardPage* self ```
void q_wizardpage_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QWizardPage* self, bool enable ```
void q_wizardpage_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QWizardPage* self, bool enable ```
void q_wizardpage_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QWizardPage* self, QBitmap* mask ```
void q_wizardpage_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QWizardPage* self, QRegion* mask ```
void q_wizardpage_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QWizardPage* self ```
QRegion* q_wizardpage_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QWizardPage* self ```
void q_wizardpage_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizardPage* self, QPaintDevice* target ```
void q_wizardpage_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizardPage* self, QPainter* painter ```
void q_wizardpage_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QWizardPage* self ```
QPixmap* q_wizardpage_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QWizardPage* self ```
QGraphicsEffect* q_wizardpage_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QWizardPage* self, QGraphicsEffect* effect ```
void q_wizardpage_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QWizardPage* self, enum Qt__GestureType typeVal ```
void q_wizardpage_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QWizardPage* self, enum Qt__GestureType typeVal ```
void q_wizardpage_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QWizardPage* self, const char* windowTitle ```
void q_wizardpage_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QWizardPage* self, const char* styleSheet ```
void q_wizardpage_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QWizardPage* self ```
const char* q_wizardpage_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QWizardPage* self ```
const char* q_wizardpage_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QWizardPage* self, QIcon* icon ```
void q_wizardpage_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QWizardPage* self ```
QIcon* q_wizardpage_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QWizardPage* self, const char* windowIconText ```
void q_wizardpage_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QWizardPage* self ```
const char* q_wizardpage_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QWizardPage* self, const char* windowRole ```
void q_wizardpage_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QWizardPage* self ```
const char* q_wizardpage_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QWizardPage* self, const char* filePath ```
void q_wizardpage_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QWizardPage* self ```
const char* q_wizardpage_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QWizardPage* self, double level ```
void q_wizardpage_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QWizardPage* self ```
double q_wizardpage_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QWizardPage* self, const char* toolTip ```
void q_wizardpage_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QWizardPage* self ```
const char* q_wizardpage_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QWizardPage* self, int msec ```
void q_wizardpage_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QWizardPage* self, const char* statusTip ```
void q_wizardpage_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QWizardPage* self ```
const char* q_wizardpage_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QWizardPage* self, const char* whatsThis ```
void q_wizardpage_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QWizardPage* self ```
const char* q_wizardpage_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QWizardPage* self ```
const char* q_wizardpage_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QWizardPage* self, const char* name ```
void q_wizardpage_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QWizardPage* self ```
const char* q_wizardpage_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QWizardPage* self, const char* description ```
void q_wizardpage_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QWizardPage* self, enum Qt__LayoutDirection direction ```
void q_wizardpage_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QWizardPage* self ```
int64_t q_wizardpage_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QWizardPage* self ```
void q_wizardpage_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QWizardPage* self, QLocale* locale ```
void q_wizardpage_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QWizardPage* self ```
QLocale* q_wizardpage_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QWizardPage* self ```
void q_wizardpage_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QWizardPage* self ```
void q_wizardpage_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QWizardPage* self ```
void q_wizardpage_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QWizardPage* self ```
void q_wizardpage_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QWizardPage* self, enum Qt__FocusReason reason ```
void q_wizardpage_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QWizardPage* self ```
int64_t q_wizardpage_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QWizardPage* self, enum Qt__FocusPolicy policy ```
void q_wizardpage_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_wizardpage_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QWizardPage* self, QWidget* focusProxy ```
void q_wizardpage_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QWizardPage* self ```
QWidget* q_wizardpage_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QWizardPage* self ```
int64_t q_wizardpage_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QWizardPage* self, enum Qt__ContextMenuPolicy policy ```
void q_wizardpage_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QWizardPage* self ```
void q_wizardpage_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QWizardPage* self, QCursor* param1 ```
void q_wizardpage_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QWizardPage* self ```
void q_wizardpage_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QWizardPage* self ```
void q_wizardpage_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QWizardPage* self ```
void q_wizardpage_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QWizardPage* self, QKeySequence* key ```
int32_t q_wizardpage_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QWizardPage* self, int id ```
void q_wizardpage_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QWizardPage* self, int id ```
void q_wizardpage_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QWizardPage* self, int id ```
void q_wizardpage_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_wizardpage_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_wizardpage_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QWizardPage* self, bool enable ```
void q_wizardpage_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QWizardPage* self ```
QGraphicsProxyWidget* q_wizardpage_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWizardPage* self ```
void q_wizardpage_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWizardPage* self ```
void q_wizardpage_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWizardPage* self, int x, int y, int w, int h ```
void q_wizardpage_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWizardPage* self, QRect* param1 ```
void q_wizardpage_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWizardPage* self, QRegion* param1 ```
void q_wizardpage_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWizardPage* self, int x, int y, int w, int h ```
void q_wizardpage_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWizardPage* self, QRect* param1 ```
void q_wizardpage_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWizardPage* self, QRegion* param1 ```
void q_wizardpage_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QWizardPage* self, bool hidden ```
void q_wizardpage_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QWizardPage* self ```
void q_wizardpage_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QWizardPage* self ```
void q_wizardpage_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QWizardPage* self ```
void q_wizardpage_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QWizardPage* self ```
void q_wizardpage_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QWizardPage* self ```
void q_wizardpage_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QWizardPage* self ```
void q_wizardpage_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QWizardPage* self ```
void q_wizardpage_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QWizardPage* self ```
void q_wizardpage_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QWizardPage* self, QWidget* param1 ```
void q_wizardpage_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QWizardPage* self, int x, int y ```
void q_wizardpage_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QWizardPage* self, QPoint* param1 ```
void q_wizardpage_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QWizardPage* self, int w, int h ```
void q_wizardpage_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QWizardPage* self, QSize* param1 ```
void q_wizardpage_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QWizardPage* self, int x, int y, int w, int h ```
void q_wizardpage_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QWizardPage* self, QRect* geometry ```
void q_wizardpage_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QWizardPage* self ```
char* q_wizardpage_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QWizardPage* self, const char* geometry ```
bool q_wizardpage_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QWizardPage* self ```
void q_wizardpage_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QWizardPage* self, QWidget* param1 ```
bool q_wizardpage_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QWizardPage* self ```
int64_t q_wizardpage_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QWizardPage* self, int state ```
void q_wizardpage_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QWizardPage* self, int state ```
void q_wizardpage_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QWizardPage* self ```
QSizePolicy* q_wizardpage_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QWizardPage* self, QSizePolicy* sizePolicy ```
void q_wizardpage_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QWizardPage* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_wizardpage_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QWizardPage* self ```
QRegion* q_wizardpage_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QWizardPage* self, int left, int top, int right, int bottom ```
void q_wizardpage_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QWizardPage* self, QMargins* margins ```
void q_wizardpage_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QWizardPage* self ```
QMargins* q_wizardpage_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QWizardPage* self ```
QRect* q_wizardpage_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QWizardPage* self ```
QLayout* q_wizardpage_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QWizardPage* self, QLayout* layout ```
void q_wizardpage_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QWizardPage* self ```
void q_wizardpage_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QWizardPage* self, QWidget* parent ```
void q_wizardpage_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QWizardPage* self, QWidget* parent, int f ```
void q_wizardpage_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QWizardPage* self, int dx, int dy ```
void q_wizardpage_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QWizardPage* self, int dx, int dy, QRect* param3 ```
void q_wizardpage_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QWizardPage* self ```
QWidget* q_wizardpage_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QWizardPage* self ```
QWidget* q_wizardpage_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QWizardPage* self ```
QWidget* q_wizardpage_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QWizardPage* self, bool on ```
void q_wizardpage_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWizardPage* self, QAction* action ```
void q_wizardpage_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QWizardPage* self, QAction* actions[] ```
void q_wizardpage_add_actions(void* self, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QWizardPage* self, QAction* before, QAction* actions[] ```
void q_wizardpage_insert_actions(void* self, void* before, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QWizardPage* self, QAction* before, QAction* action ```
void q_wizardpage_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QWizardPage* self, QAction* action ```
void q_wizardpage_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QWizardPage* self ```
libqt_list /* of QAction* */ q_wizardpage_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWizardPage* self, const char* text ```
QAction* q_wizardpage_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWizardPage* self, QIcon* icon, const char* text ```
QAction* q_wizardpage_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWizardPage* self, const char* text, QKeySequence* shortcut ```
QAction* q_wizardpage_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWizardPage* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_wizardpage_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QWizardPage* self ```
QWidget* q_wizardpage_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QWizardPage* self, int typeVal ```
void q_wizardpage_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QWizardPage* self ```
int64_t q_wizardpage_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QWizardPage* self, enum Qt__WindowType param1 ```
void q_wizardpage_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QWizardPage* self, int typeVal ```
void q_wizardpage_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QWizardPage* self ```
int64_t q_wizardpage_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_wizardpage_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QWizardPage* self, int x, int y ```
QWidget* q_wizardpage_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QWizardPage* self, QPoint* p ```
QWidget* q_wizardpage_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QWizardPage* self, enum Qt__WidgetAttribute param1 ```
void q_wizardpage_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QWizardPage* self, enum Qt__WidgetAttribute param1 ```
bool q_wizardpage_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QWizardPage* self ```
void q_wizardpage_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QWizardPage* self, QWidget* child ```
bool q_wizardpage_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QWizardPage* self, bool enabled ```
void q_wizardpage_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QWizardPage* self ```
QBackingStore* q_wizardpage_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QWizardPage* self ```
QWindow* q_wizardpage_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QWizardPage* self ```
QScreen* q_wizardpage_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QWizardPage* self, QScreen* screen ```
void q_wizardpage_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_wizardpage_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QWizardPage* self, const char* title ```
void q_wizardpage_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// ``` QWizardPage* self, void (*slot)(QWidget*, const char*) ```
void q_wizardpage_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QWizardPage* self, QIcon* icon ```
void q_wizardpage_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// ``` QWizardPage* self, void (*slot)(QWidget*, QIcon*) ```
void q_wizardpage_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QWizardPage* self, const char* iconText ```
void q_wizardpage_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// ``` QWizardPage* self, void (*slot)(QWidget*, const char*) ```
void q_wizardpage_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QWizardPage* self, QPoint* pos ```
void q_wizardpage_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// ``` QWizardPage* self, void (*slot)(QWidget*, QPoint*) ```
void q_wizardpage_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QWizardPage* self ```
int64_t q_wizardpage_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QWizardPage* self, int hints ```
void q_wizardpage_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizardPage* self, QPaintDevice* target, QPoint* targetOffset ```
void q_wizardpage_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizardPage* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_wizardpage_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizardPage* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_wizardpage_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizardPage* self, QPainter* painter, QPoint* targetOffset ```
void q_wizardpage_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizardPage* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_wizardpage_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWizardPage* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_wizardpage_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QWizardPage* self, QRect* rectangle ```
QPixmap* q_wizardpage_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QWizardPage* self, enum Qt__GestureType typeVal, int flags ```
void q_wizardpage_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QWizardPage* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_wizardpage_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QWizardPage* self, int id, bool enable ```
void q_wizardpage_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QWizardPage* self, int id, bool enable ```
void q_wizardpage_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QWizardPage* self, enum Qt__WindowType param1, bool on ```
void q_wizardpage_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QWizardPage* self, enum Qt__WidgetAttribute param1, bool on ```
void q_wizardpage_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_wizardpage_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_wizardpage_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWizardPage* self ```
const char* q_wizardpage_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWizardPage* self, char* name ```
void q_wizardpage_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWizardPage* self, bool b ```
bool q_wizardpage_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWizardPage* self ```
QThread* q_wizardpage_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWizardPage* self, QThread* thread ```
void q_wizardpage_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWizardPage* self, int interval ```
int32_t q_wizardpage_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWizardPage* self, int id ```
void q_wizardpage_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWizardPage* self ```
libqt_list /* of QObject* */ q_wizardpage_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWizardPage* self, QObject* filterObj ```
void q_wizardpage_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWizardPage* self, QObject* obj ```
void q_wizardpage_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_wizardpage_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWizardPage* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_wizardpage_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_wizardpage_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_wizardpage_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWizardPage* self ```
void q_wizardpage_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWizardPage* self ```
void q_wizardpage_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWizardPage* self, const char* name, QVariant* value ```
bool q_wizardpage_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWizardPage* self, const char* name ```
QVariant* q_wizardpage_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWizardPage* self ```
const char** q_wizardpage_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWizardPage* self ```
QBindingStorage* q_wizardpage_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWizardPage* self ```
QBindingStorage* q_wizardpage_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWizardPage* self ```
void q_wizardpage_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QWizardPage* self, void (*slot)(QObject*) ```
void q_wizardpage_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWizardPage* self ```
QObject* q_wizardpage_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWizardPage* self, const char* classname ```
bool q_wizardpage_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWizardPage* self ```
void q_wizardpage_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWizardPage* self, int interval, enum Qt__TimerType timerType ```
int32_t q_wizardpage_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_wizardpage_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWizardPage* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_wizardpage_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWizardPage* self, QObject* param1 ```
void q_wizardpage_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QWizardPage* self, void (*slot)(QObject*, QObject*) ```
void q_wizardpage_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QWizardPage* self ```
bool q_wizardpage_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QWizardPage* self ```
double q_wizardpage_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QWizardPage* self ```
double q_wizardpage_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_wizardpage_device_pixel_ratio_f_scale();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, int32_t (*slot)() ```
void q_wizardpage_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, bool visible ```
void q_wizardpage_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, bool visible ```
void q_wizardpage_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, bool) ```
void q_wizardpage_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self ```
QSize* q_wizardpage_size_hint(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self ```
QSize* q_wizardpage_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, QSize* (*slot)() ```
void q_wizardpage_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self ```
QSize* q_wizardpage_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self ```
QSize* q_wizardpage_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, QSize* (*slot)() ```
void q_wizardpage_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, int param1 ```
int32_t q_wizardpage_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, int param1 ```
int32_t q_wizardpage_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, int32_t (*slot)(QWizardPage*, int) ```
void q_wizardpage_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self ```
bool q_wizardpage_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self ```
bool q_wizardpage_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, bool (*slot)() ```
void q_wizardpage_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self ```
QPaintEngine* q_wizardpage_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self ```
QPaintEngine* q_wizardpage_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, QPaintEngine* (*slot)() ```
void q_wizardpage_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QEvent* event ```
bool q_wizardpage_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QEvent* event ```
bool q_wizardpage_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, bool (*slot)(QWizardPage*, QEvent*) ```
void q_wizardpage_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QMouseEvent* event ```
void q_wizardpage_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QMouseEvent* event ```
void q_wizardpage_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QMouseEvent*) ```
void q_wizardpage_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QMouseEvent* event ```
void q_wizardpage_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QMouseEvent* event ```
void q_wizardpage_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QMouseEvent*) ```
void q_wizardpage_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QMouseEvent* event ```
void q_wizardpage_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QMouseEvent* event ```
void q_wizardpage_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QMouseEvent*) ```
void q_wizardpage_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QMouseEvent* event ```
void q_wizardpage_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QMouseEvent* event ```
void q_wizardpage_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QMouseEvent*) ```
void q_wizardpage_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QWheelEvent* event ```
void q_wizardpage_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QWheelEvent* event ```
void q_wizardpage_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QWheelEvent*) ```
void q_wizardpage_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QKeyEvent* event ```
void q_wizardpage_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QKeyEvent* event ```
void q_wizardpage_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QKeyEvent*) ```
void q_wizardpage_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QKeyEvent* event ```
void q_wizardpage_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QKeyEvent* event ```
void q_wizardpage_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QKeyEvent*) ```
void q_wizardpage_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QFocusEvent* event ```
void q_wizardpage_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QFocusEvent* event ```
void q_wizardpage_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QFocusEvent*) ```
void q_wizardpage_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QFocusEvent* event ```
void q_wizardpage_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QFocusEvent* event ```
void q_wizardpage_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QFocusEvent*) ```
void q_wizardpage_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QEnterEvent* event ```
void q_wizardpage_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QEnterEvent* event ```
void q_wizardpage_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QEnterEvent*) ```
void q_wizardpage_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QEvent* event ```
void q_wizardpage_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QEvent* event ```
void q_wizardpage_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QEvent*) ```
void q_wizardpage_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QPaintEvent* event ```
void q_wizardpage_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QPaintEvent* event ```
void q_wizardpage_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QPaintEvent*) ```
void q_wizardpage_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QMoveEvent* event ```
void q_wizardpage_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QMoveEvent* event ```
void q_wizardpage_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QMoveEvent*) ```
void q_wizardpage_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QResizeEvent* event ```
void q_wizardpage_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QResizeEvent* event ```
void q_wizardpage_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QResizeEvent*) ```
void q_wizardpage_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QCloseEvent* event ```
void q_wizardpage_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QCloseEvent* event ```
void q_wizardpage_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QCloseEvent*) ```
void q_wizardpage_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QContextMenuEvent* event ```
void q_wizardpage_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QContextMenuEvent* event ```
void q_wizardpage_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QContextMenuEvent*) ```
void q_wizardpage_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QTabletEvent* event ```
void q_wizardpage_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QTabletEvent* event ```
void q_wizardpage_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QTabletEvent*) ```
void q_wizardpage_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QActionEvent* event ```
void q_wizardpage_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QActionEvent* event ```
void q_wizardpage_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QActionEvent*) ```
void q_wizardpage_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QDragEnterEvent* event ```
void q_wizardpage_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QDragEnterEvent* event ```
void q_wizardpage_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QDragEnterEvent*) ```
void q_wizardpage_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QDragMoveEvent* event ```
void q_wizardpage_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QDragMoveEvent* event ```
void q_wizardpage_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QDragMoveEvent*) ```
void q_wizardpage_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QDragLeaveEvent* event ```
void q_wizardpage_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QDragLeaveEvent* event ```
void q_wizardpage_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QDragLeaveEvent*) ```
void q_wizardpage_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QDropEvent* event ```
void q_wizardpage_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QDropEvent* event ```
void q_wizardpage_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QDropEvent*) ```
void q_wizardpage_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QShowEvent* event ```
void q_wizardpage_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QShowEvent* event ```
void q_wizardpage_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QShowEvent*) ```
void q_wizardpage_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QHideEvent* event ```
void q_wizardpage_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QHideEvent* event ```
void q_wizardpage_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QHideEvent*) ```
void q_wizardpage_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, const char* eventType, void* message, intptr_t* result ```
bool q_wizardpage_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, const char* eventType, void* message, intptr_t* result ```
bool q_wizardpage_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, bool (*slot)(QWizardPage*, const char*, void*, intptr_t*) ```
void q_wizardpage_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QEvent* param1 ```
void q_wizardpage_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QEvent* param1 ```
void q_wizardpage_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QEvent*) ```
void q_wizardpage_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_wizardpage_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_wizardpage_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, int32_t (*slot)(QWizardPage*, enum QPaintDevice__PaintDeviceMetric) ```
void q_wizardpage_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QPainter* painter ```
void q_wizardpage_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QPainter* painter ```
void q_wizardpage_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QPainter*) ```
void q_wizardpage_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QPoint* offset ```
QPaintDevice* q_wizardpage_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QPoint* offset ```
QPaintDevice* q_wizardpage_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, QPaintDevice* (*slot)(QWizardPage*, QPoint*) ```
void q_wizardpage_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self ```
QPainter* q_wizardpage_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self ```
QPainter* q_wizardpage_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, QPainter* (*slot)() ```
void q_wizardpage_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QInputMethodEvent* param1 ```
void q_wizardpage_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QInputMethodEvent* param1 ```
void q_wizardpage_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QInputMethodEvent*) ```
void q_wizardpage_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_wizardpage_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_wizardpage_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, QVariant* (*slot)(QWizardPage*, enum Qt__InputMethodQuery) ```
void q_wizardpage_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, bool next ```
bool q_wizardpage_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, bool next ```
bool q_wizardpage_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, bool (*slot)(QWizardPage*, bool) ```
void q_wizardpage_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QObject* watched, QEvent* event ```
bool q_wizardpage_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QObject* watched, QEvent* event ```
bool q_wizardpage_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, bool (*slot)(QWizardPage*, QObject*, QEvent*) ```
void q_wizardpage_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QTimerEvent* event ```
void q_wizardpage_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QTimerEvent* event ```
void q_wizardpage_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QTimerEvent*) ```
void q_wizardpage_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QChildEvent* event ```
void q_wizardpage_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QChildEvent* event ```
void q_wizardpage_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QChildEvent*) ```
void q_wizardpage_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QEvent* event ```
void q_wizardpage_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QEvent* event ```
void q_wizardpage_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QEvent*) ```
void q_wizardpage_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QMetaMethod* signal ```
void q_wizardpage_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QMetaMethod* signal ```
void q_wizardpage_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QMetaMethod*) ```
void q_wizardpage_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QMetaMethod* signal ```
void q_wizardpage_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QMetaMethod* signal ```
void q_wizardpage_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)(QWizardPage*, QMetaMethod*) ```
void q_wizardpage_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self ```
void q_wizardpage_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self ```
void q_wizardpage_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)() ```
void q_wizardpage_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self ```
void q_wizardpage_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self ```
void q_wizardpage_qbase_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)() ```
void q_wizardpage_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self ```
void q_wizardpage_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self ```
void q_wizardpage_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, void (*slot)() ```
void q_wizardpage_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self ```
bool q_wizardpage_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self ```
bool q_wizardpage_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, bool (*slot)() ```
void q_wizardpage_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self ```
bool q_wizardpage_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self ```
bool q_wizardpage_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, bool (*slot)() ```
void q_wizardpage_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self ```
QObject* q_wizardpage_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self ```
QObject* q_wizardpage_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, QObject* (*slot)() ```
void q_wizardpage_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self ```
int32_t q_wizardpage_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, int32_t (*slot)() ```
void q_wizardpage_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, const char* signal ```
int32_t q_wizardpage_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, const char* signal ```
int32_t q_wizardpage_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, int32_t (*slot)(QWizardPage*, const char*) ```
void q_wizardpage_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWizardPage* self, QMetaMethod* signal ```
bool q_wizardpage_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWizardPage* self, QMetaMethod* signal ```
bool q_wizardpage_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWizardPage* self, bool (*slot)(QWizardPage*, QMetaMethod*) ```
void q_wizardpage_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QWizardPage* self ```
void q_wizardpage_delete(void* self);

/// https://doc.qt.io/qt-6/qwizard.html#types

typedef enum {
    QWIZARD_WIZARDBUTTON_BACKBUTTON = 0,
    QWIZARD_WIZARDBUTTON_NEXTBUTTON = 1,
    QWIZARD_WIZARDBUTTON_COMMITBUTTON = 2,
    QWIZARD_WIZARDBUTTON_FINISHBUTTON = 3,
    QWIZARD_WIZARDBUTTON_CANCELBUTTON = 4,
    QWIZARD_WIZARDBUTTON_HELPBUTTON = 5,
    QWIZARD_WIZARDBUTTON_CUSTOMBUTTON1 = 6,
    QWIZARD_WIZARDBUTTON_CUSTOMBUTTON2 = 7,
    QWIZARD_WIZARDBUTTON_CUSTOMBUTTON3 = 8,
    QWIZARD_WIZARDBUTTON_STRETCH = 9,
    QWIZARD_WIZARDBUTTON_NOBUTTON = -1,
    QWIZARD_WIZARDBUTTON_NSTANDARDBUTTONS = 6,
    QWIZARD_WIZARDBUTTON_NBUTTONS = 9
} QWizard__WizardButton;

typedef enum {
    QWIZARD_WIZARDPIXMAP_WATERMARKPIXMAP = 0,
    QWIZARD_WIZARDPIXMAP_LOGOPIXMAP = 1,
    QWIZARD_WIZARDPIXMAP_BANNERPIXMAP = 2,
    QWIZARD_WIZARDPIXMAP_BACKGROUNDPIXMAP = 3,
    QWIZARD_WIZARDPIXMAP_NPIXMAPS = 4
} QWizard__WizardPixmap;

typedef enum {
    QWIZARD_WIZARDSTYLE_CLASSICSTYLE = 0,
    QWIZARD_WIZARDSTYLE_MODERNSTYLE = 1,
    QWIZARD_WIZARDSTYLE_MACSTYLE = 2,
    QWIZARD_WIZARDSTYLE_AEROSTYLE = 3,
    QWIZARD_WIZARDSTYLE_NSTYLES = 4
} QWizard__WizardStyle;

typedef enum {
    QWIZARD_WIZARDOPTION_INDEPENDENTPAGES = 1,
    QWIZARD_WIZARDOPTION_IGNORESUBTITLES = 2,
    QWIZARD_WIZARDOPTION_EXTENDEDWATERMARKPIXMAP = 4,
    QWIZARD_WIZARDOPTION_NODEFAULTBUTTON = 8,
    QWIZARD_WIZARDOPTION_NOBACKBUTTONONSTARTPAGE = 16,
    QWIZARD_WIZARDOPTION_NOBACKBUTTONONLASTPAGE = 32,
    QWIZARD_WIZARDOPTION_DISABLEDBACKBUTTONONLASTPAGE = 64,
    QWIZARD_WIZARDOPTION_HAVENEXTBUTTONONLASTPAGE = 128,
    QWIZARD_WIZARDOPTION_HAVEFINISHBUTTONONEARLYPAGES = 256,
    QWIZARD_WIZARDOPTION_NOCANCELBUTTON = 512,
    QWIZARD_WIZARDOPTION_CANCELBUTTONONLEFT = 1024,
    QWIZARD_WIZARDOPTION_HAVEHELPBUTTON = 2048,
    QWIZARD_WIZARDOPTION_HELPBUTTONONRIGHT = 4096,
    QWIZARD_WIZARDOPTION_HAVECUSTOMBUTTON1 = 8192,
    QWIZARD_WIZARDOPTION_HAVECUSTOMBUTTON2 = 16384,
    QWIZARD_WIZARDOPTION_HAVECUSTOMBUTTON3 = 32768,
    QWIZARD_WIZARDOPTION_NOCANCELBUTTONONLASTPAGE = 65536
} QWizard__WizardOption;

#endif
