#pragma once
#ifndef SRC_QT6C_LIBQKEYSEQUENCE_H
#define SRC_QT6C_LIBQKEYSEQUENCE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)

/// q_keysequence_new constructs a new QKeySequence object.
///
QKeySequence* q_keysequence_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)

/// q_keysequence_new2 constructs a new QKeySequence object.
///
/// @param key const char*
///
QKeySequence* q_keysequence_new2(const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)

/// q_keysequence_new3 constructs a new QKeySequence object.
///
/// @param k1 int
///
QKeySequence* q_keysequence_new3(int k1);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)

/// q_keysequence_new4 constructs a new QKeySequence object.
///
/// @param k1 QKeyCombination*
///
QKeySequence* q_keysequence_new4(void* k1);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)

/// q_keysequence_new5 constructs a new QKeySequence object.
///
/// @param ks QKeySequence*
///
QKeySequence* q_keysequence_new5(void* ks);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)

/// q_keysequence_new6 constructs a new QKeySequence object.
///
/// @param key enum QKeySequence__StandardKey
///
QKeySequence* q_keysequence_new6(int32_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)

/// q_keysequence_new7 constructs a new QKeySequence object.
///
/// @param key const char*
/// @param format enum QKeySequence__SequenceFormat
///
QKeySequence* q_keysequence_new7(const char* key, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)

/// q_keysequence_new8 constructs a new QKeySequence object.
///
/// @param k1 int
/// @param k2 int
///
QKeySequence* q_keysequence_new8(int k1, int k2);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)

/// q_keysequence_new9 constructs a new QKeySequence object.
///
/// @param k1 int
/// @param k2 int
/// @param k3 int
///
QKeySequence* q_keysequence_new9(int k1, int k2, int k3);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)

/// q_keysequence_new10 constructs a new QKeySequence object.
///
/// @param k1 int
/// @param k2 int
/// @param k3 int
/// @param k4 int
///
QKeySequence* q_keysequence_new10(int k1, int k2, int k3, int k4);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)

/// q_keysequence_new11 constructs a new QKeySequence object.
///
/// @param k1 QKeyCombination*
/// @param k2 QKeyCombination*
///
QKeySequence* q_keysequence_new11(void* k1, void* k2);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)

/// q_keysequence_new12 constructs a new QKeySequence object.
///
/// @param k1 QKeyCombination*
/// @param k2 QKeyCombination*
/// @param k3 QKeyCombination*
///
QKeySequence* q_keysequence_new12(void* k1, void* k2, void* k3);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html)

/// q_keysequence_new13 constructs a new QKeySequence object.
///
/// @param k1 QKeyCombination*
/// @param k2 QKeyCombination*
/// @param k3 QKeyCombination*
/// @param k4 QKeyCombination*
///
QKeySequence* q_keysequence_new13(void* k1, void* k2, void* k3, void* k4);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#count)
///
/// @param self QKeySequence*
///
int32_t q_keysequence_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#isEmpty)
///
/// @param self QKeySequence*
///
bool q_keysequence_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QKeySequence*
///
const char* q_keysequence_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#fromString)
///
/// @param str const char*
///
QKeySequence* q_keysequence_from_string(const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#listFromString)
///
/// @param str const char*
///
libqt_list /* of QKeySequence* */ q_keysequence_list_from_string(const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#listToString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param list libqt_list /* of QKeySequence* */
///
const char* q_keysequence_list_to_string(libqt_list list);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#matches)
///
/// @param self QKeySequence*
/// @param seq QKeySequence*
///
/// @return enum QKeySequence__SequenceMatch
///
int32_t q_keysequence_matches(void* self, void* seq);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#mnemonic)
///
/// @param text const char*
///
QKeySequence* q_keysequence_mnemonic(const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#keyBindings)
///
/// @param key enum QKeySequence__StandardKey
///
libqt_list /* of QKeySequence* */ q_keysequence_key_bindings(int32_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator)
///
/// @param self QKeySequence*
///
QVariant* q_keysequence_to_q_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-5b-5d)
///
/// @param self QKeySequence*
/// @param i uint32_t
///
QKeyCombination* q_keysequence_operator_subscript(void* self, uint32_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-eq)
///
/// @param self QKeySequence*
/// @param other QKeySequence*
///
void q_keysequence_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#swap)
///
/// @param self QKeySequence*
/// @param other QKeySequence*
///
void q_keysequence_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-eq-eq)
///
/// @param self QKeySequence*
/// @param other QKeySequence*
///
bool q_keysequence_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-not-eq)
///
/// @param self QKeySequence*
/// @param other QKeySequence*
///
bool q_keysequence_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-lt)
///
/// @param self QKeySequence*
/// @param ks QKeySequence*
///
bool q_keysequence_operator_lesser(void* self, void* ks);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-gt)
///
/// @param self QKeySequence*
/// @param other QKeySequence*
///
bool q_keysequence_operator_greater(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-lt-eq)
///
/// @param self QKeySequence*
/// @param other QKeySequence*
///
bool q_keysequence_operator_lesser_or_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#operator-gt-eq)
///
/// @param self QKeySequence*
/// @param other QKeySequence*
///
bool q_keysequence_operator_greater_or_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#isDetached)
///
/// @param self QKeySequence*
///
bool q_keysequence_is_detached(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QKeySequence*
/// @param format enum QKeySequence__SequenceFormat
///
const char* q_keysequence_to_string1(void* self, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#fromString)
///
/// @param str const char*
/// @param format enum QKeySequence__SequenceFormat
///
QKeySequence* q_keysequence_from_string2(const char* str, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#listFromString)
///
/// @param str const char*
/// @param format enum QKeySequence__SequenceFormat
///
libqt_list /* of QKeySequence* */ q_keysequence_list_from_string2(const char* str, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#listToString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param list libqt_list /* of QKeySequence* */
/// @param format enum QKeySequence__SequenceFormat
///
const char* q_keysequence_list_to_string2(libqt_list list, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#dtor.QKeySequence)
///
/// Delete this object from C++ memory.
///
/// @param self QKeySequence*
///
void q_keysequence_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#public-types)

typedef enum {
    QKEYSEQUENCE_STANDARDKEY_UNKNOWNKEY = 0,
    QKEYSEQUENCE_STANDARDKEY_HELPCONTENTS = 1,
    QKEYSEQUENCE_STANDARDKEY_WHATSTHIS = 2,
    QKEYSEQUENCE_STANDARDKEY_OPEN = 3,
    QKEYSEQUENCE_STANDARDKEY_CLOSE = 4,
    QKEYSEQUENCE_STANDARDKEY_SAVE = 5,
    QKEYSEQUENCE_STANDARDKEY_NEW = 6,
    QKEYSEQUENCE_STANDARDKEY_DELETE = 7,
    QKEYSEQUENCE_STANDARDKEY_CUT = 8,
    QKEYSEQUENCE_STANDARDKEY_COPY = 9,
    QKEYSEQUENCE_STANDARDKEY_PASTE = 10,
    QKEYSEQUENCE_STANDARDKEY_UNDO = 11,
    QKEYSEQUENCE_STANDARDKEY_REDO = 12,
    QKEYSEQUENCE_STANDARDKEY_BACK = 13,
    QKEYSEQUENCE_STANDARDKEY_FORWARD = 14,
    QKEYSEQUENCE_STANDARDKEY_REFRESH = 15,
    QKEYSEQUENCE_STANDARDKEY_ZOOMIN = 16,
    QKEYSEQUENCE_STANDARDKEY_ZOOMOUT = 17,
    QKEYSEQUENCE_STANDARDKEY_PRINT = 18,
    QKEYSEQUENCE_STANDARDKEY_ADDTAB = 19,
    QKEYSEQUENCE_STANDARDKEY_NEXTCHILD = 20,
    QKEYSEQUENCE_STANDARDKEY_PREVIOUSCHILD = 21,
    QKEYSEQUENCE_STANDARDKEY_FIND = 22,
    QKEYSEQUENCE_STANDARDKEY_FINDNEXT = 23,
    QKEYSEQUENCE_STANDARDKEY_FINDPREVIOUS = 24,
    QKEYSEQUENCE_STANDARDKEY_REPLACE = 25,
    QKEYSEQUENCE_STANDARDKEY_SELECTALL = 26,
    QKEYSEQUENCE_STANDARDKEY_BOLD = 27,
    QKEYSEQUENCE_STANDARDKEY_ITALIC = 28,
    QKEYSEQUENCE_STANDARDKEY_UNDERLINE = 29,
    QKEYSEQUENCE_STANDARDKEY_MOVETONEXTCHAR = 30,
    QKEYSEQUENCE_STANDARDKEY_MOVETOPREVIOUSCHAR = 31,
    QKEYSEQUENCE_STANDARDKEY_MOVETONEXTWORD = 32,
    QKEYSEQUENCE_STANDARDKEY_MOVETOPREVIOUSWORD = 33,
    QKEYSEQUENCE_STANDARDKEY_MOVETONEXTLINE = 34,
    QKEYSEQUENCE_STANDARDKEY_MOVETOPREVIOUSLINE = 35,
    QKEYSEQUENCE_STANDARDKEY_MOVETONEXTPAGE = 36,
    QKEYSEQUENCE_STANDARDKEY_MOVETOPREVIOUSPAGE = 37,
    QKEYSEQUENCE_STANDARDKEY_MOVETOSTARTOFLINE = 38,
    QKEYSEQUENCE_STANDARDKEY_MOVETOENDOFLINE = 39,
    QKEYSEQUENCE_STANDARDKEY_MOVETOSTARTOFBLOCK = 40,
    QKEYSEQUENCE_STANDARDKEY_MOVETOENDOFBLOCK = 41,
    QKEYSEQUENCE_STANDARDKEY_MOVETOSTARTOFDOCUMENT = 42,
    QKEYSEQUENCE_STANDARDKEY_MOVETOENDOFDOCUMENT = 43,
    QKEYSEQUENCE_STANDARDKEY_SELECTNEXTCHAR = 44,
    QKEYSEQUENCE_STANDARDKEY_SELECTPREVIOUSCHAR = 45,
    QKEYSEQUENCE_STANDARDKEY_SELECTNEXTWORD = 46,
    QKEYSEQUENCE_STANDARDKEY_SELECTPREVIOUSWORD = 47,
    QKEYSEQUENCE_STANDARDKEY_SELECTNEXTLINE = 48,
    QKEYSEQUENCE_STANDARDKEY_SELECTPREVIOUSLINE = 49,
    QKEYSEQUENCE_STANDARDKEY_SELECTNEXTPAGE = 50,
    QKEYSEQUENCE_STANDARDKEY_SELECTPREVIOUSPAGE = 51,
    QKEYSEQUENCE_STANDARDKEY_SELECTSTARTOFLINE = 52,
    QKEYSEQUENCE_STANDARDKEY_SELECTENDOFLINE = 53,
    QKEYSEQUENCE_STANDARDKEY_SELECTSTARTOFBLOCK = 54,
    QKEYSEQUENCE_STANDARDKEY_SELECTENDOFBLOCK = 55,
    QKEYSEQUENCE_STANDARDKEY_SELECTSTARTOFDOCUMENT = 56,
    QKEYSEQUENCE_STANDARDKEY_SELECTENDOFDOCUMENT = 57,
    QKEYSEQUENCE_STANDARDKEY_DELETESTARTOFWORD = 58,
    QKEYSEQUENCE_STANDARDKEY_DELETEENDOFWORD = 59,
    QKEYSEQUENCE_STANDARDKEY_DELETEENDOFLINE = 60,
    QKEYSEQUENCE_STANDARDKEY_INSERTPARAGRAPHSEPARATOR = 61,
    QKEYSEQUENCE_STANDARDKEY_INSERTLINESEPARATOR = 62,
    QKEYSEQUENCE_STANDARDKEY_SAVEAS = 63,
    QKEYSEQUENCE_STANDARDKEY_PREFERENCES = 64,
    QKEYSEQUENCE_STANDARDKEY_QUIT = 65,
    QKEYSEQUENCE_STANDARDKEY_FULLSCREEN = 66,
    QKEYSEQUENCE_STANDARDKEY_DESELECT = 67,
    QKEYSEQUENCE_STANDARDKEY_DELETECOMPLETELINE = 68,
    QKEYSEQUENCE_STANDARDKEY_BACKSPACE = 69,
    QKEYSEQUENCE_STANDARDKEY_CANCEL = 70
} QKeySequence__StandardKey;

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#public-types)

typedef enum {
    QKEYSEQUENCE_SEQUENCEFORMAT_NATIVETEXT = 0,
    QKEYSEQUENCE_SEQUENCEFORMAT_PORTABLETEXT = 1
} QKeySequence__SequenceFormat;

/// [Upstream resources](https://doc.qt.io/qt-6/qkeysequence.html#public-types)

typedef enum {
    QKEYSEQUENCE_SEQUENCEMATCH_NOMATCH = 0,
    QKEYSEQUENCE_SEQUENCEMATCH_PARTIALMATCH = 1,
    QKEYSEQUENCE_SEQUENCEMATCH_EXACTMATCH = 2
} QKeySequence__SequenceMatch;

#endif
