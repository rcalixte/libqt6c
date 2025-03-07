#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERSPICE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERSPICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerSpice so that we can call protected methods
class VirtualQsciLexerSpice : public QsciLexerSpice {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerSpice_Metacall_Callback = int (*)(QsciLexerSpice*, QMetaObject::Call, int, void**);
    using QsciLexerSpice_Language_Callback = const char* (*)();
    using QsciLexerSpice_Lexer_Callback = const char* (*)();
    using QsciLexerSpice_LexerId_Callback = int (*)();
    using QsciLexerSpice_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerSpice_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerSpice_BlockEnd_Callback = const char* (*)(const QsciLexerSpice*, int*);
    using QsciLexerSpice_BlockLookback_Callback = int (*)();
    using QsciLexerSpice_BlockStart_Callback = const char* (*)(const QsciLexerSpice*, int*);
    using QsciLexerSpice_BlockStartKeyword_Callback = const char* (*)(const QsciLexerSpice*, int*);
    using QsciLexerSpice_BraceStyle_Callback = int (*)();
    using QsciLexerSpice_CaseSensitive_Callback = bool (*)();
    using QsciLexerSpice_Color_Callback = QColor (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_EolFill_Callback = bool (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_Font_Callback = QFont (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_IndentationGuideView_Callback = int (*)();
    using QsciLexerSpice_Keywords_Callback = const char* (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_DefaultStyle_Callback = int (*)();
    using QsciLexerSpice_Description_Callback = QString (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_Paper_Callback = QColor (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_DefaultEolFill_Callback = bool (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_SetEditor_Callback = void (*)(QsciLexerSpice*, QsciScintilla*);
    using QsciLexerSpice_RefreshProperties_Callback = void (*)();
    using QsciLexerSpice_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerSpice_WordCharacters_Callback = const char* (*)();
    using QsciLexerSpice_SetAutoIndentStyle_Callback = void (*)(QsciLexerSpice*, int);
    using QsciLexerSpice_SetColor_Callback = void (*)(QsciLexerSpice*, const QColor&, int);
    using QsciLexerSpice_SetEolFill_Callback = void (*)(QsciLexerSpice*, bool, int);
    using QsciLexerSpice_SetFont_Callback = void (*)(QsciLexerSpice*, const QFont&, int);
    using QsciLexerSpice_SetPaper_Callback = void (*)(QsciLexerSpice*, const QColor&, int);
    using QsciLexerSpice_ReadProperties_Callback = bool (*)(QsciLexerSpice*, QSettings&, const QString&);
    using QsciLexerSpice_WriteProperties_Callback = bool (*)(const QsciLexerSpice*, QSettings&, const QString&);
    using QsciLexerSpice_Event_Callback = bool (*)(QsciLexerSpice*, QEvent*);
    using QsciLexerSpice_EventFilter_Callback = bool (*)(QsciLexerSpice*, QObject*, QEvent*);
    using QsciLexerSpice_TimerEvent_Callback = void (*)(QsciLexerSpice*, QTimerEvent*);
    using QsciLexerSpice_ChildEvent_Callback = void (*)(QsciLexerSpice*, QChildEvent*);
    using QsciLexerSpice_CustomEvent_Callback = void (*)(QsciLexerSpice*, QEvent*);
    using QsciLexerSpice_ConnectNotify_Callback = void (*)(QsciLexerSpice*, const QMetaMethod&);
    using QsciLexerSpice_DisconnectNotify_Callback = void (*)(QsciLexerSpice*, const QMetaMethod&);
    using QsciLexerSpice_Sender_Callback = QObject* (*)();
    using QsciLexerSpice_SenderSignalIndex_Callback = int (*)();
    using QsciLexerSpice_Receivers_Callback = int (*)(const QsciLexerSpice*, const char*);
    using QsciLexerSpice_IsSignalConnected_Callback = bool (*)(const QsciLexerSpice*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerSpice_Metacall_Callback qscilexerspice_metacall_callback = nullptr;
    QsciLexerSpice_Language_Callback qscilexerspice_language_callback = nullptr;
    QsciLexerSpice_Lexer_Callback qscilexerspice_lexer_callback = nullptr;
    QsciLexerSpice_LexerId_Callback qscilexerspice_lexerid_callback = nullptr;
    QsciLexerSpice_AutoCompletionFillups_Callback qscilexerspice_autocompletionfillups_callback = nullptr;
    QsciLexerSpice_AutoCompletionWordSeparators_Callback qscilexerspice_autocompletionwordseparators_callback = nullptr;
    QsciLexerSpice_BlockEnd_Callback qscilexerspice_blockend_callback = nullptr;
    QsciLexerSpice_BlockLookback_Callback qscilexerspice_blocklookback_callback = nullptr;
    QsciLexerSpice_BlockStart_Callback qscilexerspice_blockstart_callback = nullptr;
    QsciLexerSpice_BlockStartKeyword_Callback qscilexerspice_blockstartkeyword_callback = nullptr;
    QsciLexerSpice_BraceStyle_Callback qscilexerspice_bracestyle_callback = nullptr;
    QsciLexerSpice_CaseSensitive_Callback qscilexerspice_casesensitive_callback = nullptr;
    QsciLexerSpice_Color_Callback qscilexerspice_color_callback = nullptr;
    QsciLexerSpice_EolFill_Callback qscilexerspice_eolfill_callback = nullptr;
    QsciLexerSpice_Font_Callback qscilexerspice_font_callback = nullptr;
    QsciLexerSpice_IndentationGuideView_Callback qscilexerspice_indentationguideview_callback = nullptr;
    QsciLexerSpice_Keywords_Callback qscilexerspice_keywords_callback = nullptr;
    QsciLexerSpice_DefaultStyle_Callback qscilexerspice_defaultstyle_callback = nullptr;
    QsciLexerSpice_Description_Callback qscilexerspice_description_callback = nullptr;
    QsciLexerSpice_Paper_Callback qscilexerspice_paper_callback = nullptr;
    QsciLexerSpice_DefaultColorWithStyle_Callback qscilexerspice_defaultcolorwithstyle_callback = nullptr;
    QsciLexerSpice_DefaultEolFill_Callback qscilexerspice_defaulteolfill_callback = nullptr;
    QsciLexerSpice_DefaultFontWithStyle_Callback qscilexerspice_defaultfontwithstyle_callback = nullptr;
    QsciLexerSpice_DefaultPaperWithStyle_Callback qscilexerspice_defaultpaperwithstyle_callback = nullptr;
    QsciLexerSpice_SetEditor_Callback qscilexerspice_seteditor_callback = nullptr;
    QsciLexerSpice_RefreshProperties_Callback qscilexerspice_refreshproperties_callback = nullptr;
    QsciLexerSpice_StyleBitsNeeded_Callback qscilexerspice_stylebitsneeded_callback = nullptr;
    QsciLexerSpice_WordCharacters_Callback qscilexerspice_wordcharacters_callback = nullptr;
    QsciLexerSpice_SetAutoIndentStyle_Callback qscilexerspice_setautoindentstyle_callback = nullptr;
    QsciLexerSpice_SetColor_Callback qscilexerspice_setcolor_callback = nullptr;
    QsciLexerSpice_SetEolFill_Callback qscilexerspice_seteolfill_callback = nullptr;
    QsciLexerSpice_SetFont_Callback qscilexerspice_setfont_callback = nullptr;
    QsciLexerSpice_SetPaper_Callback qscilexerspice_setpaper_callback = nullptr;
    QsciLexerSpice_ReadProperties_Callback qscilexerspice_readproperties_callback = nullptr;
    QsciLexerSpice_WriteProperties_Callback qscilexerspice_writeproperties_callback = nullptr;
    QsciLexerSpice_Event_Callback qscilexerspice_event_callback = nullptr;
    QsciLexerSpice_EventFilter_Callback qscilexerspice_eventfilter_callback = nullptr;
    QsciLexerSpice_TimerEvent_Callback qscilexerspice_timerevent_callback = nullptr;
    QsciLexerSpice_ChildEvent_Callback qscilexerspice_childevent_callback = nullptr;
    QsciLexerSpice_CustomEvent_Callback qscilexerspice_customevent_callback = nullptr;
    QsciLexerSpice_ConnectNotify_Callback qscilexerspice_connectnotify_callback = nullptr;
    QsciLexerSpice_DisconnectNotify_Callback qscilexerspice_disconnectnotify_callback = nullptr;
    QsciLexerSpice_Sender_Callback qscilexerspice_sender_callback = nullptr;
    QsciLexerSpice_SenderSignalIndex_Callback qscilexerspice_sendersignalindex_callback = nullptr;
    QsciLexerSpice_Receivers_Callback qscilexerspice_receivers_callback = nullptr;
    QsciLexerSpice_IsSignalConnected_Callback qscilexerspice_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerspice_metacall_isbase = false;
    mutable bool qscilexerspice_language_isbase = false;
    mutable bool qscilexerspice_lexer_isbase = false;
    mutable bool qscilexerspice_lexerid_isbase = false;
    mutable bool qscilexerspice_autocompletionfillups_isbase = false;
    mutable bool qscilexerspice_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerspice_blockend_isbase = false;
    mutable bool qscilexerspice_blocklookback_isbase = false;
    mutable bool qscilexerspice_blockstart_isbase = false;
    mutable bool qscilexerspice_blockstartkeyword_isbase = false;
    mutable bool qscilexerspice_bracestyle_isbase = false;
    mutable bool qscilexerspice_casesensitive_isbase = false;
    mutable bool qscilexerspice_color_isbase = false;
    mutable bool qscilexerspice_eolfill_isbase = false;
    mutable bool qscilexerspice_font_isbase = false;
    mutable bool qscilexerspice_indentationguideview_isbase = false;
    mutable bool qscilexerspice_keywords_isbase = false;
    mutable bool qscilexerspice_defaultstyle_isbase = false;
    mutable bool qscilexerspice_description_isbase = false;
    mutable bool qscilexerspice_paper_isbase = false;
    mutable bool qscilexerspice_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerspice_defaulteolfill_isbase = false;
    mutable bool qscilexerspice_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerspice_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerspice_seteditor_isbase = false;
    mutable bool qscilexerspice_refreshproperties_isbase = false;
    mutable bool qscilexerspice_stylebitsneeded_isbase = false;
    mutable bool qscilexerspice_wordcharacters_isbase = false;
    mutable bool qscilexerspice_setautoindentstyle_isbase = false;
    mutable bool qscilexerspice_setcolor_isbase = false;
    mutable bool qscilexerspice_seteolfill_isbase = false;
    mutable bool qscilexerspice_setfont_isbase = false;
    mutable bool qscilexerspice_setpaper_isbase = false;
    mutable bool qscilexerspice_readproperties_isbase = false;
    mutable bool qscilexerspice_writeproperties_isbase = false;
    mutable bool qscilexerspice_event_isbase = false;
    mutable bool qscilexerspice_eventfilter_isbase = false;
    mutable bool qscilexerspice_timerevent_isbase = false;
    mutable bool qscilexerspice_childevent_isbase = false;
    mutable bool qscilexerspice_customevent_isbase = false;
    mutable bool qscilexerspice_connectnotify_isbase = false;
    mutable bool qscilexerspice_disconnectnotify_isbase = false;
    mutable bool qscilexerspice_sender_isbase = false;
    mutable bool qscilexerspice_sendersignalindex_isbase = false;
    mutable bool qscilexerspice_receivers_isbase = false;
    mutable bool qscilexerspice_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerSpice() : QsciLexerSpice(){};
    VirtualQsciLexerSpice(QObject* parent) : QsciLexerSpice(parent){};

    ~VirtualQsciLexerSpice() {
        qscilexerspice_metacall_callback = nullptr;
        qscilexerspice_language_callback = nullptr;
        qscilexerspice_lexer_callback = nullptr;
        qscilexerspice_lexerid_callback = nullptr;
        qscilexerspice_autocompletionfillups_callback = nullptr;
        qscilexerspice_autocompletionwordseparators_callback = nullptr;
        qscilexerspice_blockend_callback = nullptr;
        qscilexerspice_blocklookback_callback = nullptr;
        qscilexerspice_blockstart_callback = nullptr;
        qscilexerspice_blockstartkeyword_callback = nullptr;
        qscilexerspice_bracestyle_callback = nullptr;
        qscilexerspice_casesensitive_callback = nullptr;
        qscilexerspice_color_callback = nullptr;
        qscilexerspice_eolfill_callback = nullptr;
        qscilexerspice_font_callback = nullptr;
        qscilexerspice_indentationguideview_callback = nullptr;
        qscilexerspice_keywords_callback = nullptr;
        qscilexerspice_defaultstyle_callback = nullptr;
        qscilexerspice_description_callback = nullptr;
        qscilexerspice_paper_callback = nullptr;
        qscilexerspice_defaultcolorwithstyle_callback = nullptr;
        qscilexerspice_defaulteolfill_callback = nullptr;
        qscilexerspice_defaultfontwithstyle_callback = nullptr;
        qscilexerspice_defaultpaperwithstyle_callback = nullptr;
        qscilexerspice_seteditor_callback = nullptr;
        qscilexerspice_refreshproperties_callback = nullptr;
        qscilexerspice_stylebitsneeded_callback = nullptr;
        qscilexerspice_wordcharacters_callback = nullptr;
        qscilexerspice_setautoindentstyle_callback = nullptr;
        qscilexerspice_setcolor_callback = nullptr;
        qscilexerspice_seteolfill_callback = nullptr;
        qscilexerspice_setfont_callback = nullptr;
        qscilexerspice_setpaper_callback = nullptr;
        qscilexerspice_readproperties_callback = nullptr;
        qscilexerspice_writeproperties_callback = nullptr;
        qscilexerspice_event_callback = nullptr;
        qscilexerspice_eventfilter_callback = nullptr;
        qscilexerspice_timerevent_callback = nullptr;
        qscilexerspice_childevent_callback = nullptr;
        qscilexerspice_customevent_callback = nullptr;
        qscilexerspice_connectnotify_callback = nullptr;
        qscilexerspice_disconnectnotify_callback = nullptr;
        qscilexerspice_sender_callback = nullptr;
        qscilexerspice_sendersignalindex_callback = nullptr;
        qscilexerspice_receivers_callback = nullptr;
        qscilexerspice_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerSpice_Metacall_Callback(QsciLexerSpice_Metacall_Callback cb) { qscilexerspice_metacall_callback = cb; }
    void setQsciLexerSpice_Language_Callback(QsciLexerSpice_Language_Callback cb) { qscilexerspice_language_callback = cb; }
    void setQsciLexerSpice_Lexer_Callback(QsciLexerSpice_Lexer_Callback cb) { qscilexerspice_lexer_callback = cb; }
    void setQsciLexerSpice_LexerId_Callback(QsciLexerSpice_LexerId_Callback cb) { qscilexerspice_lexerid_callback = cb; }
    void setQsciLexerSpice_AutoCompletionFillups_Callback(QsciLexerSpice_AutoCompletionFillups_Callback cb) { qscilexerspice_autocompletionfillups_callback = cb; }
    void setQsciLexerSpice_AutoCompletionWordSeparators_Callback(QsciLexerSpice_AutoCompletionWordSeparators_Callback cb) { qscilexerspice_autocompletionwordseparators_callback = cb; }
    void setQsciLexerSpice_BlockEnd_Callback(QsciLexerSpice_BlockEnd_Callback cb) { qscilexerspice_blockend_callback = cb; }
    void setQsciLexerSpice_BlockLookback_Callback(QsciLexerSpice_BlockLookback_Callback cb) { qscilexerspice_blocklookback_callback = cb; }
    void setQsciLexerSpice_BlockStart_Callback(QsciLexerSpice_BlockStart_Callback cb) { qscilexerspice_blockstart_callback = cb; }
    void setQsciLexerSpice_BlockStartKeyword_Callback(QsciLexerSpice_BlockStartKeyword_Callback cb) { qscilexerspice_blockstartkeyword_callback = cb; }
    void setQsciLexerSpice_BraceStyle_Callback(QsciLexerSpice_BraceStyle_Callback cb) { qscilexerspice_bracestyle_callback = cb; }
    void setQsciLexerSpice_CaseSensitive_Callback(QsciLexerSpice_CaseSensitive_Callback cb) { qscilexerspice_casesensitive_callback = cb; }
    void setQsciLexerSpice_Color_Callback(QsciLexerSpice_Color_Callback cb) { qscilexerspice_color_callback = cb; }
    void setQsciLexerSpice_EolFill_Callback(QsciLexerSpice_EolFill_Callback cb) { qscilexerspice_eolfill_callback = cb; }
    void setQsciLexerSpice_Font_Callback(QsciLexerSpice_Font_Callback cb) { qscilexerspice_font_callback = cb; }
    void setQsciLexerSpice_IndentationGuideView_Callback(QsciLexerSpice_IndentationGuideView_Callback cb) { qscilexerspice_indentationguideview_callback = cb; }
    void setQsciLexerSpice_Keywords_Callback(QsciLexerSpice_Keywords_Callback cb) { qscilexerspice_keywords_callback = cb; }
    void setQsciLexerSpice_DefaultStyle_Callback(QsciLexerSpice_DefaultStyle_Callback cb) { qscilexerspice_defaultstyle_callback = cb; }
    void setQsciLexerSpice_Description_Callback(QsciLexerSpice_Description_Callback cb) { qscilexerspice_description_callback = cb; }
    void setQsciLexerSpice_Paper_Callback(QsciLexerSpice_Paper_Callback cb) { qscilexerspice_paper_callback = cb; }
    void setQsciLexerSpice_DefaultColorWithStyle_Callback(QsciLexerSpice_DefaultColorWithStyle_Callback cb) { qscilexerspice_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerSpice_DefaultEolFill_Callback(QsciLexerSpice_DefaultEolFill_Callback cb) { qscilexerspice_defaulteolfill_callback = cb; }
    void setQsciLexerSpice_DefaultFontWithStyle_Callback(QsciLexerSpice_DefaultFontWithStyle_Callback cb) { qscilexerspice_defaultfontwithstyle_callback = cb; }
    void setQsciLexerSpice_DefaultPaperWithStyle_Callback(QsciLexerSpice_DefaultPaperWithStyle_Callback cb) { qscilexerspice_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerSpice_SetEditor_Callback(QsciLexerSpice_SetEditor_Callback cb) { qscilexerspice_seteditor_callback = cb; }
    void setQsciLexerSpice_RefreshProperties_Callback(QsciLexerSpice_RefreshProperties_Callback cb) { qscilexerspice_refreshproperties_callback = cb; }
    void setQsciLexerSpice_StyleBitsNeeded_Callback(QsciLexerSpice_StyleBitsNeeded_Callback cb) { qscilexerspice_stylebitsneeded_callback = cb; }
    void setQsciLexerSpice_WordCharacters_Callback(QsciLexerSpice_WordCharacters_Callback cb) { qscilexerspice_wordcharacters_callback = cb; }
    void setQsciLexerSpice_SetAutoIndentStyle_Callback(QsciLexerSpice_SetAutoIndentStyle_Callback cb) { qscilexerspice_setautoindentstyle_callback = cb; }
    void setQsciLexerSpice_SetColor_Callback(QsciLexerSpice_SetColor_Callback cb) { qscilexerspice_setcolor_callback = cb; }
    void setQsciLexerSpice_SetEolFill_Callback(QsciLexerSpice_SetEolFill_Callback cb) { qscilexerspice_seteolfill_callback = cb; }
    void setQsciLexerSpice_SetFont_Callback(QsciLexerSpice_SetFont_Callback cb) { qscilexerspice_setfont_callback = cb; }
    void setQsciLexerSpice_SetPaper_Callback(QsciLexerSpice_SetPaper_Callback cb) { qscilexerspice_setpaper_callback = cb; }
    void setQsciLexerSpice_ReadProperties_Callback(QsciLexerSpice_ReadProperties_Callback cb) { qscilexerspice_readproperties_callback = cb; }
    void setQsciLexerSpice_WriteProperties_Callback(QsciLexerSpice_WriteProperties_Callback cb) { qscilexerspice_writeproperties_callback = cb; }
    void setQsciLexerSpice_Event_Callback(QsciLexerSpice_Event_Callback cb) { qscilexerspice_event_callback = cb; }
    void setQsciLexerSpice_EventFilter_Callback(QsciLexerSpice_EventFilter_Callback cb) { qscilexerspice_eventfilter_callback = cb; }
    void setQsciLexerSpice_TimerEvent_Callback(QsciLexerSpice_TimerEvent_Callback cb) { qscilexerspice_timerevent_callback = cb; }
    void setQsciLexerSpice_ChildEvent_Callback(QsciLexerSpice_ChildEvent_Callback cb) { qscilexerspice_childevent_callback = cb; }
    void setQsciLexerSpice_CustomEvent_Callback(QsciLexerSpice_CustomEvent_Callback cb) { qscilexerspice_customevent_callback = cb; }
    void setQsciLexerSpice_ConnectNotify_Callback(QsciLexerSpice_ConnectNotify_Callback cb) { qscilexerspice_connectnotify_callback = cb; }
    void setQsciLexerSpice_DisconnectNotify_Callback(QsciLexerSpice_DisconnectNotify_Callback cb) { qscilexerspice_disconnectnotify_callback = cb; }
    void setQsciLexerSpice_Sender_Callback(QsciLexerSpice_Sender_Callback cb) { qscilexerspice_sender_callback = cb; }
    void setQsciLexerSpice_SenderSignalIndex_Callback(QsciLexerSpice_SenderSignalIndex_Callback cb) { qscilexerspice_sendersignalindex_callback = cb; }
    void setQsciLexerSpice_Receivers_Callback(QsciLexerSpice_Receivers_Callback cb) { qscilexerspice_receivers_callback = cb; }
    void setQsciLexerSpice_IsSignalConnected_Callback(QsciLexerSpice_IsSignalConnected_Callback cb) { qscilexerspice_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerSpice_Metacall_IsBase(bool value) const { qscilexerspice_metacall_isbase = value; }
    void setQsciLexerSpice_Language_IsBase(bool value) const { qscilexerspice_language_isbase = value; }
    void setQsciLexerSpice_Lexer_IsBase(bool value) const { qscilexerspice_lexer_isbase = value; }
    void setQsciLexerSpice_LexerId_IsBase(bool value) const { qscilexerspice_lexerid_isbase = value; }
    void setQsciLexerSpice_AutoCompletionFillups_IsBase(bool value) const { qscilexerspice_autocompletionfillups_isbase = value; }
    void setQsciLexerSpice_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerspice_autocompletionwordseparators_isbase = value; }
    void setQsciLexerSpice_BlockEnd_IsBase(bool value) const { qscilexerspice_blockend_isbase = value; }
    void setQsciLexerSpice_BlockLookback_IsBase(bool value) const { qscilexerspice_blocklookback_isbase = value; }
    void setQsciLexerSpice_BlockStart_IsBase(bool value) const { qscilexerspice_blockstart_isbase = value; }
    void setQsciLexerSpice_BlockStartKeyword_IsBase(bool value) const { qscilexerspice_blockstartkeyword_isbase = value; }
    void setQsciLexerSpice_BraceStyle_IsBase(bool value) const { qscilexerspice_bracestyle_isbase = value; }
    void setQsciLexerSpice_CaseSensitive_IsBase(bool value) const { qscilexerspice_casesensitive_isbase = value; }
    void setQsciLexerSpice_Color_IsBase(bool value) const { qscilexerspice_color_isbase = value; }
    void setQsciLexerSpice_EolFill_IsBase(bool value) const { qscilexerspice_eolfill_isbase = value; }
    void setQsciLexerSpice_Font_IsBase(bool value) const { qscilexerspice_font_isbase = value; }
    void setQsciLexerSpice_IndentationGuideView_IsBase(bool value) const { qscilexerspice_indentationguideview_isbase = value; }
    void setQsciLexerSpice_Keywords_IsBase(bool value) const { qscilexerspice_keywords_isbase = value; }
    void setQsciLexerSpice_DefaultStyle_IsBase(bool value) const { qscilexerspice_defaultstyle_isbase = value; }
    void setQsciLexerSpice_Description_IsBase(bool value) const { qscilexerspice_description_isbase = value; }
    void setQsciLexerSpice_Paper_IsBase(bool value) const { qscilexerspice_paper_isbase = value; }
    void setQsciLexerSpice_DefaultColorWithStyle_IsBase(bool value) const { qscilexerspice_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerSpice_DefaultEolFill_IsBase(bool value) const { qscilexerspice_defaulteolfill_isbase = value; }
    void setQsciLexerSpice_DefaultFontWithStyle_IsBase(bool value) const { qscilexerspice_defaultfontwithstyle_isbase = value; }
    void setQsciLexerSpice_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerspice_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerSpice_SetEditor_IsBase(bool value) const { qscilexerspice_seteditor_isbase = value; }
    void setQsciLexerSpice_RefreshProperties_IsBase(bool value) const { qscilexerspice_refreshproperties_isbase = value; }
    void setQsciLexerSpice_StyleBitsNeeded_IsBase(bool value) const { qscilexerspice_stylebitsneeded_isbase = value; }
    void setQsciLexerSpice_WordCharacters_IsBase(bool value) const { qscilexerspice_wordcharacters_isbase = value; }
    void setQsciLexerSpice_SetAutoIndentStyle_IsBase(bool value) const { qscilexerspice_setautoindentstyle_isbase = value; }
    void setQsciLexerSpice_SetColor_IsBase(bool value) const { qscilexerspice_setcolor_isbase = value; }
    void setQsciLexerSpice_SetEolFill_IsBase(bool value) const { qscilexerspice_seteolfill_isbase = value; }
    void setQsciLexerSpice_SetFont_IsBase(bool value) const { qscilexerspice_setfont_isbase = value; }
    void setQsciLexerSpice_SetPaper_IsBase(bool value) const { qscilexerspice_setpaper_isbase = value; }
    void setQsciLexerSpice_ReadProperties_IsBase(bool value) const { qscilexerspice_readproperties_isbase = value; }
    void setQsciLexerSpice_WriteProperties_IsBase(bool value) const { qscilexerspice_writeproperties_isbase = value; }
    void setQsciLexerSpice_Event_IsBase(bool value) const { qscilexerspice_event_isbase = value; }
    void setQsciLexerSpice_EventFilter_IsBase(bool value) const { qscilexerspice_eventfilter_isbase = value; }
    void setQsciLexerSpice_TimerEvent_IsBase(bool value) const { qscilexerspice_timerevent_isbase = value; }
    void setQsciLexerSpice_ChildEvent_IsBase(bool value) const { qscilexerspice_childevent_isbase = value; }
    void setQsciLexerSpice_CustomEvent_IsBase(bool value) const { qscilexerspice_customevent_isbase = value; }
    void setQsciLexerSpice_ConnectNotify_IsBase(bool value) const { qscilexerspice_connectnotify_isbase = value; }
    void setQsciLexerSpice_DisconnectNotify_IsBase(bool value) const { qscilexerspice_disconnectnotify_isbase = value; }
    void setQsciLexerSpice_Sender_IsBase(bool value) const { qscilexerspice_sender_isbase = value; }
    void setQsciLexerSpice_SenderSignalIndex_IsBase(bool value) const { qscilexerspice_sendersignalindex_isbase = value; }
    void setQsciLexerSpice_Receivers_IsBase(bool value) const { qscilexerspice_receivers_isbase = value; }
    void setQsciLexerSpice_IsSignalConnected_IsBase(bool value) const { qscilexerspice_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerspice_metacall_isbase) {
            qscilexerspice_metacall_isbase = false;
            return QsciLexerSpice::qt_metacall(param1, param2, param3);
        } else if (qscilexerspice_metacall_callback != nullptr) {
            return qscilexerspice_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerSpice::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerspice_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerspice_lexer_isbase) {
            qscilexerspice_lexer_isbase = false;
            return QsciLexerSpice::lexer();
        } else if (qscilexerspice_lexer_callback != nullptr) {
            return qscilexerspice_lexer_callback();
        } else {
            return QsciLexerSpice::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerspice_lexerid_isbase) {
            qscilexerspice_lexerid_isbase = false;
            return QsciLexerSpice::lexerId();
        } else if (qscilexerspice_lexerid_callback != nullptr) {
            return qscilexerspice_lexerid_callback();
        } else {
            return QsciLexerSpice::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerspice_autocompletionfillups_isbase) {
            qscilexerspice_autocompletionfillups_isbase = false;
            return QsciLexerSpice::autoCompletionFillups();
        } else if (qscilexerspice_autocompletionfillups_callback != nullptr) {
            return qscilexerspice_autocompletionfillups_callback();
        } else {
            return QsciLexerSpice::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerspice_autocompletionwordseparators_isbase) {
            qscilexerspice_autocompletionwordseparators_isbase = false;
            return QsciLexerSpice::autoCompletionWordSeparators();
        } else if (qscilexerspice_autocompletionwordseparators_callback != nullptr) {
            return qscilexerspice_autocompletionwordseparators_callback();
        } else {
            return QsciLexerSpice::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerspice_blockend_isbase) {
            qscilexerspice_blockend_isbase = false;
            return QsciLexerSpice::blockEnd(style);
        } else if (qscilexerspice_blockend_callback != nullptr) {
            return qscilexerspice_blockend_callback(this, style);
        } else {
            return QsciLexerSpice::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerspice_blocklookback_isbase) {
            qscilexerspice_blocklookback_isbase = false;
            return QsciLexerSpice::blockLookback();
        } else if (qscilexerspice_blocklookback_callback != nullptr) {
            return qscilexerspice_blocklookback_callback();
        } else {
            return QsciLexerSpice::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerspice_blockstart_isbase) {
            qscilexerspice_blockstart_isbase = false;
            return QsciLexerSpice::blockStart(style);
        } else if (qscilexerspice_blockstart_callback != nullptr) {
            return qscilexerspice_blockstart_callback(this, style);
        } else {
            return QsciLexerSpice::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerspice_blockstartkeyword_isbase) {
            qscilexerspice_blockstartkeyword_isbase = false;
            return QsciLexerSpice::blockStartKeyword(style);
        } else if (qscilexerspice_blockstartkeyword_callback != nullptr) {
            return qscilexerspice_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerSpice::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerspice_bracestyle_isbase) {
            qscilexerspice_bracestyle_isbase = false;
            return QsciLexerSpice::braceStyle();
        } else if (qscilexerspice_bracestyle_callback != nullptr) {
            return qscilexerspice_bracestyle_callback();
        } else {
            return QsciLexerSpice::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerspice_casesensitive_isbase) {
            qscilexerspice_casesensitive_isbase = false;
            return QsciLexerSpice::caseSensitive();
        } else if (qscilexerspice_casesensitive_callback != nullptr) {
            return qscilexerspice_casesensitive_callback();
        } else {
            return QsciLexerSpice::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerspice_color_isbase) {
            qscilexerspice_color_isbase = false;
            return QsciLexerSpice::color(style);
        } else if (qscilexerspice_color_callback != nullptr) {
            return qscilexerspice_color_callback(this, style);
        } else {
            return QsciLexerSpice::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerspice_eolfill_isbase) {
            qscilexerspice_eolfill_isbase = false;
            return QsciLexerSpice::eolFill(style);
        } else if (qscilexerspice_eolfill_callback != nullptr) {
            return qscilexerspice_eolfill_callback(this, style);
        } else {
            return QsciLexerSpice::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerspice_font_isbase) {
            qscilexerspice_font_isbase = false;
            return QsciLexerSpice::font(style);
        } else if (qscilexerspice_font_callback != nullptr) {
            return qscilexerspice_font_callback(this, style);
        } else {
            return QsciLexerSpice::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerspice_indentationguideview_isbase) {
            qscilexerspice_indentationguideview_isbase = false;
            return QsciLexerSpice::indentationGuideView();
        } else if (qscilexerspice_indentationguideview_callback != nullptr) {
            return qscilexerspice_indentationguideview_callback();
        } else {
            return QsciLexerSpice::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerspice_keywords_isbase) {
            qscilexerspice_keywords_isbase = false;
            return QsciLexerSpice::keywords(set);
        } else if (qscilexerspice_keywords_callback != nullptr) {
            return qscilexerspice_keywords_callback(this, set);
        } else {
            return QsciLexerSpice::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerspice_defaultstyle_isbase) {
            qscilexerspice_defaultstyle_isbase = false;
            return QsciLexerSpice::defaultStyle();
        } else if (qscilexerspice_defaultstyle_callback != nullptr) {
            return qscilexerspice_defaultstyle_callback();
        } else {
            return QsciLexerSpice::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerspice_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerspice_paper_isbase) {
            qscilexerspice_paper_isbase = false;
            return QsciLexerSpice::paper(style);
        } else if (qscilexerspice_paper_callback != nullptr) {
            return qscilexerspice_paper_callback(this, style);
        } else {
            return QsciLexerSpice::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerspice_defaultcolorwithstyle_isbase) {
            qscilexerspice_defaultcolorwithstyle_isbase = false;
            return QsciLexerSpice::defaultColor(style);
        } else if (qscilexerspice_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerspice_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerSpice::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerspice_defaulteolfill_isbase) {
            qscilexerspice_defaulteolfill_isbase = false;
            return QsciLexerSpice::defaultEolFill(style);
        } else if (qscilexerspice_defaulteolfill_callback != nullptr) {
            return qscilexerspice_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerSpice::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerspice_defaultfontwithstyle_isbase) {
            qscilexerspice_defaultfontwithstyle_isbase = false;
            return QsciLexerSpice::defaultFont(style);
        } else if (qscilexerspice_defaultfontwithstyle_callback != nullptr) {
            return qscilexerspice_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerSpice::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerspice_defaultpaperwithstyle_isbase) {
            qscilexerspice_defaultpaperwithstyle_isbase = false;
            return QsciLexerSpice::defaultPaper(style);
        } else if (qscilexerspice_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerspice_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerSpice::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerspice_seteditor_isbase) {
            qscilexerspice_seteditor_isbase = false;
            QsciLexerSpice::setEditor(editor);
        } else if (qscilexerspice_seteditor_callback != nullptr) {
            qscilexerspice_seteditor_callback(this, editor);
        } else {
            QsciLexerSpice::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerspice_refreshproperties_isbase) {
            qscilexerspice_refreshproperties_isbase = false;
            QsciLexerSpice::refreshProperties();
        } else if (qscilexerspice_refreshproperties_callback != nullptr) {
            qscilexerspice_refreshproperties_callback();
        } else {
            QsciLexerSpice::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerspice_stylebitsneeded_isbase) {
            qscilexerspice_stylebitsneeded_isbase = false;
            return QsciLexerSpice::styleBitsNeeded();
        } else if (qscilexerspice_stylebitsneeded_callback != nullptr) {
            return qscilexerspice_stylebitsneeded_callback();
        } else {
            return QsciLexerSpice::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerspice_wordcharacters_isbase) {
            qscilexerspice_wordcharacters_isbase = false;
            return QsciLexerSpice::wordCharacters();
        } else if (qscilexerspice_wordcharacters_callback != nullptr) {
            return qscilexerspice_wordcharacters_callback();
        } else {
            return QsciLexerSpice::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerspice_setautoindentstyle_isbase) {
            qscilexerspice_setautoindentstyle_isbase = false;
            QsciLexerSpice::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerspice_setautoindentstyle_callback != nullptr) {
            qscilexerspice_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerSpice::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerspice_setcolor_isbase) {
            qscilexerspice_setcolor_isbase = false;
            QsciLexerSpice::setColor(c, style);
        } else if (qscilexerspice_setcolor_callback != nullptr) {
            qscilexerspice_setcolor_callback(this, c, style);
        } else {
            QsciLexerSpice::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerspice_seteolfill_isbase) {
            qscilexerspice_seteolfill_isbase = false;
            QsciLexerSpice::setEolFill(eoffill, style);
        } else if (qscilexerspice_seteolfill_callback != nullptr) {
            qscilexerspice_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerSpice::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerspice_setfont_isbase) {
            qscilexerspice_setfont_isbase = false;
            QsciLexerSpice::setFont(f, style);
        } else if (qscilexerspice_setfont_callback != nullptr) {
            qscilexerspice_setfont_callback(this, f, style);
        } else {
            QsciLexerSpice::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerspice_setpaper_isbase) {
            qscilexerspice_setpaper_isbase = false;
            QsciLexerSpice::setPaper(c, style);
        } else if (qscilexerspice_setpaper_callback != nullptr) {
            qscilexerspice_setpaper_callback(this, c, style);
        } else {
            QsciLexerSpice::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerspice_readproperties_isbase) {
            qscilexerspice_readproperties_isbase = false;
            return QsciLexerSpice::readProperties(qs, prefix);
        } else if (qscilexerspice_readproperties_callback != nullptr) {
            return qscilexerspice_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerSpice::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerspice_writeproperties_isbase) {
            qscilexerspice_writeproperties_isbase = false;
            return QsciLexerSpice::writeProperties(qs, prefix);
        } else if (qscilexerspice_writeproperties_callback != nullptr) {
            return qscilexerspice_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerSpice::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerspice_event_isbase) {
            qscilexerspice_event_isbase = false;
            return QsciLexerSpice::event(event);
        } else if (qscilexerspice_event_callback != nullptr) {
            return qscilexerspice_event_callback(this, event);
        } else {
            return QsciLexerSpice::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerspice_eventfilter_isbase) {
            qscilexerspice_eventfilter_isbase = false;
            return QsciLexerSpice::eventFilter(watched, event);
        } else if (qscilexerspice_eventfilter_callback != nullptr) {
            return qscilexerspice_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerSpice::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerspice_timerevent_isbase) {
            qscilexerspice_timerevent_isbase = false;
            QsciLexerSpice::timerEvent(event);
        } else if (qscilexerspice_timerevent_callback != nullptr) {
            qscilexerspice_timerevent_callback(this, event);
        } else {
            QsciLexerSpice::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerspice_childevent_isbase) {
            qscilexerspice_childevent_isbase = false;
            QsciLexerSpice::childEvent(event);
        } else if (qscilexerspice_childevent_callback != nullptr) {
            qscilexerspice_childevent_callback(this, event);
        } else {
            QsciLexerSpice::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerspice_customevent_isbase) {
            qscilexerspice_customevent_isbase = false;
            QsciLexerSpice::customEvent(event);
        } else if (qscilexerspice_customevent_callback != nullptr) {
            qscilexerspice_customevent_callback(this, event);
        } else {
            QsciLexerSpice::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerspice_connectnotify_isbase) {
            qscilexerspice_connectnotify_isbase = false;
            QsciLexerSpice::connectNotify(signal);
        } else if (qscilexerspice_connectnotify_callback != nullptr) {
            qscilexerspice_connectnotify_callback(this, signal);
        } else {
            QsciLexerSpice::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerspice_disconnectnotify_isbase) {
            qscilexerspice_disconnectnotify_isbase = false;
            QsciLexerSpice::disconnectNotify(signal);
        } else if (qscilexerspice_disconnectnotify_callback != nullptr) {
            qscilexerspice_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerSpice::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerspice_sender_isbase) {
            qscilexerspice_sender_isbase = false;
            return QsciLexerSpice::sender();
        } else if (qscilexerspice_sender_callback != nullptr) {
            return qscilexerspice_sender_callback();
        } else {
            return QsciLexerSpice::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerspice_sendersignalindex_isbase) {
            qscilexerspice_sendersignalindex_isbase = false;
            return QsciLexerSpice::senderSignalIndex();
        } else if (qscilexerspice_sendersignalindex_callback != nullptr) {
            return qscilexerspice_sendersignalindex_callback();
        } else {
            return QsciLexerSpice::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerspice_receivers_isbase) {
            qscilexerspice_receivers_isbase = false;
            return QsciLexerSpice::receivers(signal);
        } else if (qscilexerspice_receivers_callback != nullptr) {
            return qscilexerspice_receivers_callback(this, signal);
        } else {
            return QsciLexerSpice::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerspice_issignalconnected_isbase) {
            qscilexerspice_issignalconnected_isbase = false;
            return QsciLexerSpice::isSignalConnected(signal);
        } else if (qscilexerspice_issignalconnected_callback != nullptr) {
            return qscilexerspice_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerSpice::isSignalConnected(signal);
        }
    }
};

#endif
