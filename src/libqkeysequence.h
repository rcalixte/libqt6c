#pragma once
#ifndef SRCQT6C_LIBQKEYSEQUENCE_H
#define SRCQT6C_LIBQKEYSEQUENCE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqnamespace.h"
#include <string.h>
#include "libqvariant.h"

QKeySequence* q_keysequence_new();
QKeySequence* q_keysequence_new2(const char* key);
QKeySequence* q_keysequence_new3(int k1);
QKeySequence* q_keysequence_new4(void* k1);
QKeySequence* q_keysequence_new5(void* ks);
QKeySequence* q_keysequence_new6(int64_t key);
QKeySequence* q_keysequence_new7(const char* key, int64_t format);
QKeySequence* q_keysequence_new8(int k1, int k2);
QKeySequence* q_keysequence_new9(int k1, int k2, int k3);
QKeySequence* q_keysequence_new10(int k1, int k2, int k3, int k4);
QKeySequence* q_keysequence_new11(void* k1, void* k2);
QKeySequence* q_keysequence_new12(void* k1, void* k2, void* k3);
QKeySequence* q_keysequence_new13(void* k1, void* k2, void* k3, void* k4);
int32_t q_keysequence_count(void* self);
bool q_keysequence_is_empty(void* self);
const char* q_keysequence_to_string(void* self);
QKeySequence* q_keysequence_from_string(const char* str);
libqt_list /* of QKeySequence* */ q_keysequence_list_from_string(const char* str);
const char* q_keysequence_list_to_string(void* list[]);
int64_t q_keysequence_matches(void* self, void* seq);
QKeySequence* q_keysequence_mnemonic(const char* text);
libqt_list /* of QKeySequence* */ q_keysequence_key_bindings(int64_t key);
QVariant* q_keysequence_to_q_variant(void* self);
QKeyCombination* q_keysequence_operator_subscript(void* self, uint32_t i);
void q_keysequence_operator_assign(void* self, void* other);
void q_keysequence_swap(void* self, void* other);
bool q_keysequence_operator_equal(void* self, void* other);
bool q_keysequence_operator_not_equal(void* self, void* other);
bool q_keysequence_operator_lesser(void* self, void* ks);
bool q_keysequence_operator_greater(void* self, void* other);
bool q_keysequence_operator_lesser_or_equal(void* self, void* other);
bool q_keysequence_operator_greater_or_equal(void* self, void* other);
bool q_keysequence_is_detached(void* self);
const char* q_keysequence_to_string1(void* self, int64_t format);
QKeySequence* q_keysequence_from_string2(const char* str, int64_t format);
libqt_list /* of QKeySequence* */ q_keysequence_list_from_string2(const char* str, int64_t format);
const char* q_keysequence_list_to_string2(void* list[], int64_t format);
void q_keysequence_delete(void* self);

/// https://doc.qt.io/qt-6/qkeysequence.html#types

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

typedef enum {
    QKEYSEQUENCE_SEQUENCEFORMAT_NATIVETEXT = 0,
    QKEYSEQUENCE_SEQUENCEFORMAT_PORTABLETEXT = 1
} QKeySequence__SequenceFormat;

typedef enum {
    QKEYSEQUENCE_SEQUENCEMATCH_NOMATCH = 0,
    QKEYSEQUENCE_SEQUENCEMATCH_PARTIALMATCH = 1,
    QKEYSEQUENCE_SEQUENCEMATCH_EXACTMATCH = 2
} QKeySequence__SequenceMatch;

#endif
