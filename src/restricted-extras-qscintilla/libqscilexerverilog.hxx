#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERVERILOG_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERVERILOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerVerilog so that we can call protected methods
class VirtualQsciLexerVerilog : public QsciLexerVerilog {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerVerilog_Metacall_Callback = int (*)(QsciLexerVerilog*, QMetaObject::Call, int, void**);
    using QsciLexerVerilog_Language_Callback = const char* (*)();
    using QsciLexerVerilog_Lexer_Callback = const char* (*)();
    using QsciLexerVerilog_LexerId_Callback = int (*)();
    using QsciLexerVerilog_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerVerilog_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerVerilog_BlockEnd_Callback = const char* (*)(const QsciLexerVerilog*, int*);
    using QsciLexerVerilog_BlockLookback_Callback = int (*)();
    using QsciLexerVerilog_BlockStart_Callback = const char* (*)(const QsciLexerVerilog*, int*);
    using QsciLexerVerilog_BlockStartKeyword_Callback = const char* (*)(const QsciLexerVerilog*, int*);
    using QsciLexerVerilog_BraceStyle_Callback = int (*)();
    using QsciLexerVerilog_CaseSensitive_Callback = bool (*)();
    using QsciLexerVerilog_Color_Callback = QColor (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_EolFill_Callback = bool (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_Font_Callback = QFont (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_IndentationGuideView_Callback = int (*)();
    using QsciLexerVerilog_Keywords_Callback = const char* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultStyle_Callback = int (*)();
    using QsciLexerVerilog_Description_Callback = QString (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_Paper_Callback = QColor (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultEolFill_Callback = bool (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_SetEditor_Callback = void (*)(QsciLexerVerilog*, QsciScintilla*);
    using QsciLexerVerilog_RefreshProperties_Callback = void (*)();
    using QsciLexerVerilog_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerVerilog_WordCharacters_Callback = const char* (*)();
    using QsciLexerVerilog_SetAutoIndentStyle_Callback = void (*)(QsciLexerVerilog*, int);
    using QsciLexerVerilog_SetColor_Callback = void (*)(QsciLexerVerilog*, const QColor&, int);
    using QsciLexerVerilog_SetEolFill_Callback = void (*)(QsciLexerVerilog*, bool, int);
    using QsciLexerVerilog_SetFont_Callback = void (*)(QsciLexerVerilog*, const QFont&, int);
    using QsciLexerVerilog_SetPaper_Callback = void (*)(QsciLexerVerilog*, const QColor&, int);
    using QsciLexerVerilog_ReadProperties_Callback = bool (*)(QsciLexerVerilog*, QSettings&, const QString&);
    using QsciLexerVerilog_WriteProperties_Callback = bool (*)(const QsciLexerVerilog*, QSettings&, const QString&);
    using QsciLexerVerilog_Event_Callback = bool (*)(QsciLexerVerilog*, QEvent*);
    using QsciLexerVerilog_EventFilter_Callback = bool (*)(QsciLexerVerilog*, QObject*, QEvent*);
    using QsciLexerVerilog_TimerEvent_Callback = void (*)(QsciLexerVerilog*, QTimerEvent*);
    using QsciLexerVerilog_ChildEvent_Callback = void (*)(QsciLexerVerilog*, QChildEvent*);
    using QsciLexerVerilog_CustomEvent_Callback = void (*)(QsciLexerVerilog*, QEvent*);
    using QsciLexerVerilog_ConnectNotify_Callback = void (*)(QsciLexerVerilog*, const QMetaMethod&);
    using QsciLexerVerilog_DisconnectNotify_Callback = void (*)(QsciLexerVerilog*, const QMetaMethod&);
    using QsciLexerVerilog_Sender_Callback = QObject* (*)();
    using QsciLexerVerilog_SenderSignalIndex_Callback = int (*)();
    using QsciLexerVerilog_Receivers_Callback = int (*)(const QsciLexerVerilog*, const char*);
    using QsciLexerVerilog_IsSignalConnected_Callback = bool (*)(const QsciLexerVerilog*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerVerilog_Metacall_Callback qscilexerverilog_metacall_callback = nullptr;
    QsciLexerVerilog_Language_Callback qscilexerverilog_language_callback = nullptr;
    QsciLexerVerilog_Lexer_Callback qscilexerverilog_lexer_callback = nullptr;
    QsciLexerVerilog_LexerId_Callback qscilexerverilog_lexerid_callback = nullptr;
    QsciLexerVerilog_AutoCompletionFillups_Callback qscilexerverilog_autocompletionfillups_callback = nullptr;
    QsciLexerVerilog_AutoCompletionWordSeparators_Callback qscilexerverilog_autocompletionwordseparators_callback = nullptr;
    QsciLexerVerilog_BlockEnd_Callback qscilexerverilog_blockend_callback = nullptr;
    QsciLexerVerilog_BlockLookback_Callback qscilexerverilog_blocklookback_callback = nullptr;
    QsciLexerVerilog_BlockStart_Callback qscilexerverilog_blockstart_callback = nullptr;
    QsciLexerVerilog_BlockStartKeyword_Callback qscilexerverilog_blockstartkeyword_callback = nullptr;
    QsciLexerVerilog_BraceStyle_Callback qscilexerverilog_bracestyle_callback = nullptr;
    QsciLexerVerilog_CaseSensitive_Callback qscilexerverilog_casesensitive_callback = nullptr;
    QsciLexerVerilog_Color_Callback qscilexerverilog_color_callback = nullptr;
    QsciLexerVerilog_EolFill_Callback qscilexerverilog_eolfill_callback = nullptr;
    QsciLexerVerilog_Font_Callback qscilexerverilog_font_callback = nullptr;
    QsciLexerVerilog_IndentationGuideView_Callback qscilexerverilog_indentationguideview_callback = nullptr;
    QsciLexerVerilog_Keywords_Callback qscilexerverilog_keywords_callback = nullptr;
    QsciLexerVerilog_DefaultStyle_Callback qscilexerverilog_defaultstyle_callback = nullptr;
    QsciLexerVerilog_Description_Callback qscilexerverilog_description_callback = nullptr;
    QsciLexerVerilog_Paper_Callback qscilexerverilog_paper_callback = nullptr;
    QsciLexerVerilog_DefaultColorWithStyle_Callback qscilexerverilog_defaultcolorwithstyle_callback = nullptr;
    QsciLexerVerilog_DefaultEolFill_Callback qscilexerverilog_defaulteolfill_callback = nullptr;
    QsciLexerVerilog_DefaultFontWithStyle_Callback qscilexerverilog_defaultfontwithstyle_callback = nullptr;
    QsciLexerVerilog_DefaultPaperWithStyle_Callback qscilexerverilog_defaultpaperwithstyle_callback = nullptr;
    QsciLexerVerilog_SetEditor_Callback qscilexerverilog_seteditor_callback = nullptr;
    QsciLexerVerilog_RefreshProperties_Callback qscilexerverilog_refreshproperties_callback = nullptr;
    QsciLexerVerilog_StyleBitsNeeded_Callback qscilexerverilog_stylebitsneeded_callback = nullptr;
    QsciLexerVerilog_WordCharacters_Callback qscilexerverilog_wordcharacters_callback = nullptr;
    QsciLexerVerilog_SetAutoIndentStyle_Callback qscilexerverilog_setautoindentstyle_callback = nullptr;
    QsciLexerVerilog_SetColor_Callback qscilexerverilog_setcolor_callback = nullptr;
    QsciLexerVerilog_SetEolFill_Callback qscilexerverilog_seteolfill_callback = nullptr;
    QsciLexerVerilog_SetFont_Callback qscilexerverilog_setfont_callback = nullptr;
    QsciLexerVerilog_SetPaper_Callback qscilexerverilog_setpaper_callback = nullptr;
    QsciLexerVerilog_ReadProperties_Callback qscilexerverilog_readproperties_callback = nullptr;
    QsciLexerVerilog_WriteProperties_Callback qscilexerverilog_writeproperties_callback = nullptr;
    QsciLexerVerilog_Event_Callback qscilexerverilog_event_callback = nullptr;
    QsciLexerVerilog_EventFilter_Callback qscilexerverilog_eventfilter_callback = nullptr;
    QsciLexerVerilog_TimerEvent_Callback qscilexerverilog_timerevent_callback = nullptr;
    QsciLexerVerilog_ChildEvent_Callback qscilexerverilog_childevent_callback = nullptr;
    QsciLexerVerilog_CustomEvent_Callback qscilexerverilog_customevent_callback = nullptr;
    QsciLexerVerilog_ConnectNotify_Callback qscilexerverilog_connectnotify_callback = nullptr;
    QsciLexerVerilog_DisconnectNotify_Callback qscilexerverilog_disconnectnotify_callback = nullptr;
    QsciLexerVerilog_Sender_Callback qscilexerverilog_sender_callback = nullptr;
    QsciLexerVerilog_SenderSignalIndex_Callback qscilexerverilog_sendersignalindex_callback = nullptr;
    QsciLexerVerilog_Receivers_Callback qscilexerverilog_receivers_callback = nullptr;
    QsciLexerVerilog_IsSignalConnected_Callback qscilexerverilog_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerverilog_metacall_isbase = false;
    mutable bool qscilexerverilog_language_isbase = false;
    mutable bool qscilexerverilog_lexer_isbase = false;
    mutable bool qscilexerverilog_lexerid_isbase = false;
    mutable bool qscilexerverilog_autocompletionfillups_isbase = false;
    mutable bool qscilexerverilog_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerverilog_blockend_isbase = false;
    mutable bool qscilexerverilog_blocklookback_isbase = false;
    mutable bool qscilexerverilog_blockstart_isbase = false;
    mutable bool qscilexerverilog_blockstartkeyword_isbase = false;
    mutable bool qscilexerverilog_bracestyle_isbase = false;
    mutable bool qscilexerverilog_casesensitive_isbase = false;
    mutable bool qscilexerverilog_color_isbase = false;
    mutable bool qscilexerverilog_eolfill_isbase = false;
    mutable bool qscilexerverilog_font_isbase = false;
    mutable bool qscilexerverilog_indentationguideview_isbase = false;
    mutable bool qscilexerverilog_keywords_isbase = false;
    mutable bool qscilexerverilog_defaultstyle_isbase = false;
    mutable bool qscilexerverilog_description_isbase = false;
    mutable bool qscilexerverilog_paper_isbase = false;
    mutable bool qscilexerverilog_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerverilog_defaulteolfill_isbase = false;
    mutable bool qscilexerverilog_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerverilog_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerverilog_seteditor_isbase = false;
    mutable bool qscilexerverilog_refreshproperties_isbase = false;
    mutable bool qscilexerverilog_stylebitsneeded_isbase = false;
    mutable bool qscilexerverilog_wordcharacters_isbase = false;
    mutable bool qscilexerverilog_setautoindentstyle_isbase = false;
    mutable bool qscilexerverilog_setcolor_isbase = false;
    mutable bool qscilexerverilog_seteolfill_isbase = false;
    mutable bool qscilexerverilog_setfont_isbase = false;
    mutable bool qscilexerverilog_setpaper_isbase = false;
    mutable bool qscilexerverilog_readproperties_isbase = false;
    mutable bool qscilexerverilog_writeproperties_isbase = false;
    mutable bool qscilexerverilog_event_isbase = false;
    mutable bool qscilexerverilog_eventfilter_isbase = false;
    mutable bool qscilexerverilog_timerevent_isbase = false;
    mutable bool qscilexerverilog_childevent_isbase = false;
    mutable bool qscilexerverilog_customevent_isbase = false;
    mutable bool qscilexerverilog_connectnotify_isbase = false;
    mutable bool qscilexerverilog_disconnectnotify_isbase = false;
    mutable bool qscilexerverilog_sender_isbase = false;
    mutable bool qscilexerverilog_sendersignalindex_isbase = false;
    mutable bool qscilexerverilog_receivers_isbase = false;
    mutable bool qscilexerverilog_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerVerilog() : QsciLexerVerilog(){};
    VirtualQsciLexerVerilog(QObject* parent) : QsciLexerVerilog(parent){};

    ~VirtualQsciLexerVerilog() {
        qscilexerverilog_metacall_callback = nullptr;
        qscilexerverilog_language_callback = nullptr;
        qscilexerverilog_lexer_callback = nullptr;
        qscilexerverilog_lexerid_callback = nullptr;
        qscilexerverilog_autocompletionfillups_callback = nullptr;
        qscilexerverilog_autocompletionwordseparators_callback = nullptr;
        qscilexerverilog_blockend_callback = nullptr;
        qscilexerverilog_blocklookback_callback = nullptr;
        qscilexerverilog_blockstart_callback = nullptr;
        qscilexerverilog_blockstartkeyword_callback = nullptr;
        qscilexerverilog_bracestyle_callback = nullptr;
        qscilexerverilog_casesensitive_callback = nullptr;
        qscilexerverilog_color_callback = nullptr;
        qscilexerverilog_eolfill_callback = nullptr;
        qscilexerverilog_font_callback = nullptr;
        qscilexerverilog_indentationguideview_callback = nullptr;
        qscilexerverilog_keywords_callback = nullptr;
        qscilexerverilog_defaultstyle_callback = nullptr;
        qscilexerverilog_description_callback = nullptr;
        qscilexerverilog_paper_callback = nullptr;
        qscilexerverilog_defaultcolorwithstyle_callback = nullptr;
        qscilexerverilog_defaulteolfill_callback = nullptr;
        qscilexerverilog_defaultfontwithstyle_callback = nullptr;
        qscilexerverilog_defaultpaperwithstyle_callback = nullptr;
        qscilexerverilog_seteditor_callback = nullptr;
        qscilexerverilog_refreshproperties_callback = nullptr;
        qscilexerverilog_stylebitsneeded_callback = nullptr;
        qscilexerverilog_wordcharacters_callback = nullptr;
        qscilexerverilog_setautoindentstyle_callback = nullptr;
        qscilexerverilog_setcolor_callback = nullptr;
        qscilexerverilog_seteolfill_callback = nullptr;
        qscilexerverilog_setfont_callback = nullptr;
        qscilexerverilog_setpaper_callback = nullptr;
        qscilexerverilog_readproperties_callback = nullptr;
        qscilexerverilog_writeproperties_callback = nullptr;
        qscilexerverilog_event_callback = nullptr;
        qscilexerverilog_eventfilter_callback = nullptr;
        qscilexerverilog_timerevent_callback = nullptr;
        qscilexerverilog_childevent_callback = nullptr;
        qscilexerverilog_customevent_callback = nullptr;
        qscilexerverilog_connectnotify_callback = nullptr;
        qscilexerverilog_disconnectnotify_callback = nullptr;
        qscilexerverilog_sender_callback = nullptr;
        qscilexerverilog_sendersignalindex_callback = nullptr;
        qscilexerverilog_receivers_callback = nullptr;
        qscilexerverilog_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerVerilog_Metacall_Callback(QsciLexerVerilog_Metacall_Callback cb) { qscilexerverilog_metacall_callback = cb; }
    void setQsciLexerVerilog_Language_Callback(QsciLexerVerilog_Language_Callback cb) { qscilexerverilog_language_callback = cb; }
    void setQsciLexerVerilog_Lexer_Callback(QsciLexerVerilog_Lexer_Callback cb) { qscilexerverilog_lexer_callback = cb; }
    void setQsciLexerVerilog_LexerId_Callback(QsciLexerVerilog_LexerId_Callback cb) { qscilexerverilog_lexerid_callback = cb; }
    void setQsciLexerVerilog_AutoCompletionFillups_Callback(QsciLexerVerilog_AutoCompletionFillups_Callback cb) { qscilexerverilog_autocompletionfillups_callback = cb; }
    void setQsciLexerVerilog_AutoCompletionWordSeparators_Callback(QsciLexerVerilog_AutoCompletionWordSeparators_Callback cb) { qscilexerverilog_autocompletionwordseparators_callback = cb; }
    void setQsciLexerVerilog_BlockEnd_Callback(QsciLexerVerilog_BlockEnd_Callback cb) { qscilexerverilog_blockend_callback = cb; }
    void setQsciLexerVerilog_BlockLookback_Callback(QsciLexerVerilog_BlockLookback_Callback cb) { qscilexerverilog_blocklookback_callback = cb; }
    void setQsciLexerVerilog_BlockStart_Callback(QsciLexerVerilog_BlockStart_Callback cb) { qscilexerverilog_blockstart_callback = cb; }
    void setQsciLexerVerilog_BlockStartKeyword_Callback(QsciLexerVerilog_BlockStartKeyword_Callback cb) { qscilexerverilog_blockstartkeyword_callback = cb; }
    void setQsciLexerVerilog_BraceStyle_Callback(QsciLexerVerilog_BraceStyle_Callback cb) { qscilexerverilog_bracestyle_callback = cb; }
    void setQsciLexerVerilog_CaseSensitive_Callback(QsciLexerVerilog_CaseSensitive_Callback cb) { qscilexerverilog_casesensitive_callback = cb; }
    void setQsciLexerVerilog_Color_Callback(QsciLexerVerilog_Color_Callback cb) { qscilexerverilog_color_callback = cb; }
    void setQsciLexerVerilog_EolFill_Callback(QsciLexerVerilog_EolFill_Callback cb) { qscilexerverilog_eolfill_callback = cb; }
    void setQsciLexerVerilog_Font_Callback(QsciLexerVerilog_Font_Callback cb) { qscilexerverilog_font_callback = cb; }
    void setQsciLexerVerilog_IndentationGuideView_Callback(QsciLexerVerilog_IndentationGuideView_Callback cb) { qscilexerverilog_indentationguideview_callback = cb; }
    void setQsciLexerVerilog_Keywords_Callback(QsciLexerVerilog_Keywords_Callback cb) { qscilexerverilog_keywords_callback = cb; }
    void setQsciLexerVerilog_DefaultStyle_Callback(QsciLexerVerilog_DefaultStyle_Callback cb) { qscilexerverilog_defaultstyle_callback = cb; }
    void setQsciLexerVerilog_Description_Callback(QsciLexerVerilog_Description_Callback cb) { qscilexerverilog_description_callback = cb; }
    void setQsciLexerVerilog_Paper_Callback(QsciLexerVerilog_Paper_Callback cb) { qscilexerverilog_paper_callback = cb; }
    void setQsciLexerVerilog_DefaultColorWithStyle_Callback(QsciLexerVerilog_DefaultColorWithStyle_Callback cb) { qscilexerverilog_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerVerilog_DefaultEolFill_Callback(QsciLexerVerilog_DefaultEolFill_Callback cb) { qscilexerverilog_defaulteolfill_callback = cb; }
    void setQsciLexerVerilog_DefaultFontWithStyle_Callback(QsciLexerVerilog_DefaultFontWithStyle_Callback cb) { qscilexerverilog_defaultfontwithstyle_callback = cb; }
    void setQsciLexerVerilog_DefaultPaperWithStyle_Callback(QsciLexerVerilog_DefaultPaperWithStyle_Callback cb) { qscilexerverilog_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerVerilog_SetEditor_Callback(QsciLexerVerilog_SetEditor_Callback cb) { qscilexerverilog_seteditor_callback = cb; }
    void setQsciLexerVerilog_RefreshProperties_Callback(QsciLexerVerilog_RefreshProperties_Callback cb) { qscilexerverilog_refreshproperties_callback = cb; }
    void setQsciLexerVerilog_StyleBitsNeeded_Callback(QsciLexerVerilog_StyleBitsNeeded_Callback cb) { qscilexerverilog_stylebitsneeded_callback = cb; }
    void setQsciLexerVerilog_WordCharacters_Callback(QsciLexerVerilog_WordCharacters_Callback cb) { qscilexerverilog_wordcharacters_callback = cb; }
    void setQsciLexerVerilog_SetAutoIndentStyle_Callback(QsciLexerVerilog_SetAutoIndentStyle_Callback cb) { qscilexerverilog_setautoindentstyle_callback = cb; }
    void setQsciLexerVerilog_SetColor_Callback(QsciLexerVerilog_SetColor_Callback cb) { qscilexerverilog_setcolor_callback = cb; }
    void setQsciLexerVerilog_SetEolFill_Callback(QsciLexerVerilog_SetEolFill_Callback cb) { qscilexerverilog_seteolfill_callback = cb; }
    void setQsciLexerVerilog_SetFont_Callback(QsciLexerVerilog_SetFont_Callback cb) { qscilexerverilog_setfont_callback = cb; }
    void setQsciLexerVerilog_SetPaper_Callback(QsciLexerVerilog_SetPaper_Callback cb) { qscilexerverilog_setpaper_callback = cb; }
    void setQsciLexerVerilog_ReadProperties_Callback(QsciLexerVerilog_ReadProperties_Callback cb) { qscilexerverilog_readproperties_callback = cb; }
    void setQsciLexerVerilog_WriteProperties_Callback(QsciLexerVerilog_WriteProperties_Callback cb) { qscilexerverilog_writeproperties_callback = cb; }
    void setQsciLexerVerilog_Event_Callback(QsciLexerVerilog_Event_Callback cb) { qscilexerverilog_event_callback = cb; }
    void setQsciLexerVerilog_EventFilter_Callback(QsciLexerVerilog_EventFilter_Callback cb) { qscilexerverilog_eventfilter_callback = cb; }
    void setQsciLexerVerilog_TimerEvent_Callback(QsciLexerVerilog_TimerEvent_Callback cb) { qscilexerverilog_timerevent_callback = cb; }
    void setQsciLexerVerilog_ChildEvent_Callback(QsciLexerVerilog_ChildEvent_Callback cb) { qscilexerverilog_childevent_callback = cb; }
    void setQsciLexerVerilog_CustomEvent_Callback(QsciLexerVerilog_CustomEvent_Callback cb) { qscilexerverilog_customevent_callback = cb; }
    void setQsciLexerVerilog_ConnectNotify_Callback(QsciLexerVerilog_ConnectNotify_Callback cb) { qscilexerverilog_connectnotify_callback = cb; }
    void setQsciLexerVerilog_DisconnectNotify_Callback(QsciLexerVerilog_DisconnectNotify_Callback cb) { qscilexerverilog_disconnectnotify_callback = cb; }
    void setQsciLexerVerilog_Sender_Callback(QsciLexerVerilog_Sender_Callback cb) { qscilexerverilog_sender_callback = cb; }
    void setQsciLexerVerilog_SenderSignalIndex_Callback(QsciLexerVerilog_SenderSignalIndex_Callback cb) { qscilexerverilog_sendersignalindex_callback = cb; }
    void setQsciLexerVerilog_Receivers_Callback(QsciLexerVerilog_Receivers_Callback cb) { qscilexerverilog_receivers_callback = cb; }
    void setQsciLexerVerilog_IsSignalConnected_Callback(QsciLexerVerilog_IsSignalConnected_Callback cb) { qscilexerverilog_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerVerilog_Metacall_IsBase(bool value) const { qscilexerverilog_metacall_isbase = value; }
    void setQsciLexerVerilog_Language_IsBase(bool value) const { qscilexerverilog_language_isbase = value; }
    void setQsciLexerVerilog_Lexer_IsBase(bool value) const { qscilexerverilog_lexer_isbase = value; }
    void setQsciLexerVerilog_LexerId_IsBase(bool value) const { qscilexerverilog_lexerid_isbase = value; }
    void setQsciLexerVerilog_AutoCompletionFillups_IsBase(bool value) const { qscilexerverilog_autocompletionfillups_isbase = value; }
    void setQsciLexerVerilog_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerverilog_autocompletionwordseparators_isbase = value; }
    void setQsciLexerVerilog_BlockEnd_IsBase(bool value) const { qscilexerverilog_blockend_isbase = value; }
    void setQsciLexerVerilog_BlockLookback_IsBase(bool value) const { qscilexerverilog_blocklookback_isbase = value; }
    void setQsciLexerVerilog_BlockStart_IsBase(bool value) const { qscilexerverilog_blockstart_isbase = value; }
    void setQsciLexerVerilog_BlockStartKeyword_IsBase(bool value) const { qscilexerverilog_blockstartkeyword_isbase = value; }
    void setQsciLexerVerilog_BraceStyle_IsBase(bool value) const { qscilexerverilog_bracestyle_isbase = value; }
    void setQsciLexerVerilog_CaseSensitive_IsBase(bool value) const { qscilexerverilog_casesensitive_isbase = value; }
    void setQsciLexerVerilog_Color_IsBase(bool value) const { qscilexerverilog_color_isbase = value; }
    void setQsciLexerVerilog_EolFill_IsBase(bool value) const { qscilexerverilog_eolfill_isbase = value; }
    void setQsciLexerVerilog_Font_IsBase(bool value) const { qscilexerverilog_font_isbase = value; }
    void setQsciLexerVerilog_IndentationGuideView_IsBase(bool value) const { qscilexerverilog_indentationguideview_isbase = value; }
    void setQsciLexerVerilog_Keywords_IsBase(bool value) const { qscilexerverilog_keywords_isbase = value; }
    void setQsciLexerVerilog_DefaultStyle_IsBase(bool value) const { qscilexerverilog_defaultstyle_isbase = value; }
    void setQsciLexerVerilog_Description_IsBase(bool value) const { qscilexerverilog_description_isbase = value; }
    void setQsciLexerVerilog_Paper_IsBase(bool value) const { qscilexerverilog_paper_isbase = value; }
    void setQsciLexerVerilog_DefaultColorWithStyle_IsBase(bool value) const { qscilexerverilog_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerVerilog_DefaultEolFill_IsBase(bool value) const { qscilexerverilog_defaulteolfill_isbase = value; }
    void setQsciLexerVerilog_DefaultFontWithStyle_IsBase(bool value) const { qscilexerverilog_defaultfontwithstyle_isbase = value; }
    void setQsciLexerVerilog_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerverilog_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerVerilog_SetEditor_IsBase(bool value) const { qscilexerverilog_seteditor_isbase = value; }
    void setQsciLexerVerilog_RefreshProperties_IsBase(bool value) const { qscilexerverilog_refreshproperties_isbase = value; }
    void setQsciLexerVerilog_StyleBitsNeeded_IsBase(bool value) const { qscilexerverilog_stylebitsneeded_isbase = value; }
    void setQsciLexerVerilog_WordCharacters_IsBase(bool value) const { qscilexerverilog_wordcharacters_isbase = value; }
    void setQsciLexerVerilog_SetAutoIndentStyle_IsBase(bool value) const { qscilexerverilog_setautoindentstyle_isbase = value; }
    void setQsciLexerVerilog_SetColor_IsBase(bool value) const { qscilexerverilog_setcolor_isbase = value; }
    void setQsciLexerVerilog_SetEolFill_IsBase(bool value) const { qscilexerverilog_seteolfill_isbase = value; }
    void setQsciLexerVerilog_SetFont_IsBase(bool value) const { qscilexerverilog_setfont_isbase = value; }
    void setQsciLexerVerilog_SetPaper_IsBase(bool value) const { qscilexerverilog_setpaper_isbase = value; }
    void setQsciLexerVerilog_ReadProperties_IsBase(bool value) const { qscilexerverilog_readproperties_isbase = value; }
    void setQsciLexerVerilog_WriteProperties_IsBase(bool value) const { qscilexerverilog_writeproperties_isbase = value; }
    void setQsciLexerVerilog_Event_IsBase(bool value) const { qscilexerverilog_event_isbase = value; }
    void setQsciLexerVerilog_EventFilter_IsBase(bool value) const { qscilexerverilog_eventfilter_isbase = value; }
    void setQsciLexerVerilog_TimerEvent_IsBase(bool value) const { qscilexerverilog_timerevent_isbase = value; }
    void setQsciLexerVerilog_ChildEvent_IsBase(bool value) const { qscilexerverilog_childevent_isbase = value; }
    void setQsciLexerVerilog_CustomEvent_IsBase(bool value) const { qscilexerverilog_customevent_isbase = value; }
    void setQsciLexerVerilog_ConnectNotify_IsBase(bool value) const { qscilexerverilog_connectnotify_isbase = value; }
    void setQsciLexerVerilog_DisconnectNotify_IsBase(bool value) const { qscilexerverilog_disconnectnotify_isbase = value; }
    void setQsciLexerVerilog_Sender_IsBase(bool value) const { qscilexerverilog_sender_isbase = value; }
    void setQsciLexerVerilog_SenderSignalIndex_IsBase(bool value) const { qscilexerverilog_sendersignalindex_isbase = value; }
    void setQsciLexerVerilog_Receivers_IsBase(bool value) const { qscilexerverilog_receivers_isbase = value; }
    void setQsciLexerVerilog_IsSignalConnected_IsBase(bool value) const { qscilexerverilog_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerverilog_metacall_isbase) {
            qscilexerverilog_metacall_isbase = false;
            return QsciLexerVerilog::qt_metacall(param1, param2, param3);
        } else if (qscilexerverilog_metacall_callback != nullptr) {
            return qscilexerverilog_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerVerilog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerverilog_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerverilog_lexer_isbase) {
            qscilexerverilog_lexer_isbase = false;
            return QsciLexerVerilog::lexer();
        } else if (qscilexerverilog_lexer_callback != nullptr) {
            return qscilexerverilog_lexer_callback();
        } else {
            return QsciLexerVerilog::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerverilog_lexerid_isbase) {
            qscilexerverilog_lexerid_isbase = false;
            return QsciLexerVerilog::lexerId();
        } else if (qscilexerverilog_lexerid_callback != nullptr) {
            return qscilexerverilog_lexerid_callback();
        } else {
            return QsciLexerVerilog::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerverilog_autocompletionfillups_isbase) {
            qscilexerverilog_autocompletionfillups_isbase = false;
            return QsciLexerVerilog::autoCompletionFillups();
        } else if (qscilexerverilog_autocompletionfillups_callback != nullptr) {
            return qscilexerverilog_autocompletionfillups_callback();
        } else {
            return QsciLexerVerilog::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerverilog_autocompletionwordseparators_isbase) {
            qscilexerverilog_autocompletionwordseparators_isbase = false;
            return QsciLexerVerilog::autoCompletionWordSeparators();
        } else if (qscilexerverilog_autocompletionwordseparators_callback != nullptr) {
            return qscilexerverilog_autocompletionwordseparators_callback();
        } else {
            return QsciLexerVerilog::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerverilog_blockend_isbase) {
            qscilexerverilog_blockend_isbase = false;
            return QsciLexerVerilog::blockEnd(style);
        } else if (qscilexerverilog_blockend_callback != nullptr) {
            return qscilexerverilog_blockend_callback(this, style);
        } else {
            return QsciLexerVerilog::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerverilog_blocklookback_isbase) {
            qscilexerverilog_blocklookback_isbase = false;
            return QsciLexerVerilog::blockLookback();
        } else if (qscilexerverilog_blocklookback_callback != nullptr) {
            return qscilexerverilog_blocklookback_callback();
        } else {
            return QsciLexerVerilog::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerverilog_blockstart_isbase) {
            qscilexerverilog_blockstart_isbase = false;
            return QsciLexerVerilog::blockStart(style);
        } else if (qscilexerverilog_blockstart_callback != nullptr) {
            return qscilexerverilog_blockstart_callback(this, style);
        } else {
            return QsciLexerVerilog::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerverilog_blockstartkeyword_isbase) {
            qscilexerverilog_blockstartkeyword_isbase = false;
            return QsciLexerVerilog::blockStartKeyword(style);
        } else if (qscilexerverilog_blockstartkeyword_callback != nullptr) {
            return qscilexerverilog_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerVerilog::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerverilog_bracestyle_isbase) {
            qscilexerverilog_bracestyle_isbase = false;
            return QsciLexerVerilog::braceStyle();
        } else if (qscilexerverilog_bracestyle_callback != nullptr) {
            return qscilexerverilog_bracestyle_callback();
        } else {
            return QsciLexerVerilog::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerverilog_casesensitive_isbase) {
            qscilexerverilog_casesensitive_isbase = false;
            return QsciLexerVerilog::caseSensitive();
        } else if (qscilexerverilog_casesensitive_callback != nullptr) {
            return qscilexerverilog_casesensitive_callback();
        } else {
            return QsciLexerVerilog::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerverilog_color_isbase) {
            qscilexerverilog_color_isbase = false;
            return QsciLexerVerilog::color(style);
        } else if (qscilexerverilog_color_callback != nullptr) {
            return qscilexerverilog_color_callback(this, style);
        } else {
            return QsciLexerVerilog::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerverilog_eolfill_isbase) {
            qscilexerverilog_eolfill_isbase = false;
            return QsciLexerVerilog::eolFill(style);
        } else if (qscilexerverilog_eolfill_callback != nullptr) {
            return qscilexerverilog_eolfill_callback(this, style);
        } else {
            return QsciLexerVerilog::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerverilog_font_isbase) {
            qscilexerverilog_font_isbase = false;
            return QsciLexerVerilog::font(style);
        } else if (qscilexerverilog_font_callback != nullptr) {
            return qscilexerverilog_font_callback(this, style);
        } else {
            return QsciLexerVerilog::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerverilog_indentationguideview_isbase) {
            qscilexerverilog_indentationguideview_isbase = false;
            return QsciLexerVerilog::indentationGuideView();
        } else if (qscilexerverilog_indentationguideview_callback != nullptr) {
            return qscilexerverilog_indentationguideview_callback();
        } else {
            return QsciLexerVerilog::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerverilog_keywords_isbase) {
            qscilexerverilog_keywords_isbase = false;
            return QsciLexerVerilog::keywords(set);
        } else if (qscilexerverilog_keywords_callback != nullptr) {
            return qscilexerverilog_keywords_callback(this, set);
        } else {
            return QsciLexerVerilog::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerverilog_defaultstyle_isbase) {
            qscilexerverilog_defaultstyle_isbase = false;
            return QsciLexerVerilog::defaultStyle();
        } else if (qscilexerverilog_defaultstyle_callback != nullptr) {
            return qscilexerverilog_defaultstyle_callback();
        } else {
            return QsciLexerVerilog::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerverilog_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerverilog_paper_isbase) {
            qscilexerverilog_paper_isbase = false;
            return QsciLexerVerilog::paper(style);
        } else if (qscilexerverilog_paper_callback != nullptr) {
            return qscilexerverilog_paper_callback(this, style);
        } else {
            return QsciLexerVerilog::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerverilog_defaultcolorwithstyle_isbase) {
            qscilexerverilog_defaultcolorwithstyle_isbase = false;
            return QsciLexerVerilog::defaultColor(style);
        } else if (qscilexerverilog_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerverilog_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerVerilog::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerverilog_defaulteolfill_isbase) {
            qscilexerverilog_defaulteolfill_isbase = false;
            return QsciLexerVerilog::defaultEolFill(style);
        } else if (qscilexerverilog_defaulteolfill_callback != nullptr) {
            return qscilexerverilog_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerVerilog::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerverilog_defaultfontwithstyle_isbase) {
            qscilexerverilog_defaultfontwithstyle_isbase = false;
            return QsciLexerVerilog::defaultFont(style);
        } else if (qscilexerverilog_defaultfontwithstyle_callback != nullptr) {
            return qscilexerverilog_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerVerilog::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerverilog_defaultpaperwithstyle_isbase) {
            qscilexerverilog_defaultpaperwithstyle_isbase = false;
            return QsciLexerVerilog::defaultPaper(style);
        } else if (qscilexerverilog_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerverilog_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerVerilog::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerverilog_seteditor_isbase) {
            qscilexerverilog_seteditor_isbase = false;
            QsciLexerVerilog::setEditor(editor);
        } else if (qscilexerverilog_seteditor_callback != nullptr) {
            qscilexerverilog_seteditor_callback(this, editor);
        } else {
            QsciLexerVerilog::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerverilog_refreshproperties_isbase) {
            qscilexerverilog_refreshproperties_isbase = false;
            QsciLexerVerilog::refreshProperties();
        } else if (qscilexerverilog_refreshproperties_callback != nullptr) {
            qscilexerverilog_refreshproperties_callback();
        } else {
            QsciLexerVerilog::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerverilog_stylebitsneeded_isbase) {
            qscilexerverilog_stylebitsneeded_isbase = false;
            return QsciLexerVerilog::styleBitsNeeded();
        } else if (qscilexerverilog_stylebitsneeded_callback != nullptr) {
            return qscilexerverilog_stylebitsneeded_callback();
        } else {
            return QsciLexerVerilog::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerverilog_wordcharacters_isbase) {
            qscilexerverilog_wordcharacters_isbase = false;
            return QsciLexerVerilog::wordCharacters();
        } else if (qscilexerverilog_wordcharacters_callback != nullptr) {
            return qscilexerverilog_wordcharacters_callback();
        } else {
            return QsciLexerVerilog::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerverilog_setautoindentstyle_isbase) {
            qscilexerverilog_setautoindentstyle_isbase = false;
            QsciLexerVerilog::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerverilog_setautoindentstyle_callback != nullptr) {
            qscilexerverilog_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerVerilog::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerverilog_setcolor_isbase) {
            qscilexerverilog_setcolor_isbase = false;
            QsciLexerVerilog::setColor(c, style);
        } else if (qscilexerverilog_setcolor_callback != nullptr) {
            qscilexerverilog_setcolor_callback(this, c, style);
        } else {
            QsciLexerVerilog::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerverilog_seteolfill_isbase) {
            qscilexerverilog_seteolfill_isbase = false;
            QsciLexerVerilog::setEolFill(eoffill, style);
        } else if (qscilexerverilog_seteolfill_callback != nullptr) {
            qscilexerverilog_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerVerilog::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerverilog_setfont_isbase) {
            qscilexerverilog_setfont_isbase = false;
            QsciLexerVerilog::setFont(f, style);
        } else if (qscilexerverilog_setfont_callback != nullptr) {
            qscilexerverilog_setfont_callback(this, f, style);
        } else {
            QsciLexerVerilog::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerverilog_setpaper_isbase) {
            qscilexerverilog_setpaper_isbase = false;
            QsciLexerVerilog::setPaper(c, style);
        } else if (qscilexerverilog_setpaper_callback != nullptr) {
            qscilexerverilog_setpaper_callback(this, c, style);
        } else {
            QsciLexerVerilog::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerverilog_readproperties_isbase) {
            qscilexerverilog_readproperties_isbase = false;
            return QsciLexerVerilog::readProperties(qs, prefix);
        } else if (qscilexerverilog_readproperties_callback != nullptr) {
            return qscilexerverilog_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerVerilog::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerverilog_writeproperties_isbase) {
            qscilexerverilog_writeproperties_isbase = false;
            return QsciLexerVerilog::writeProperties(qs, prefix);
        } else if (qscilexerverilog_writeproperties_callback != nullptr) {
            return qscilexerverilog_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerVerilog::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerverilog_event_isbase) {
            qscilexerverilog_event_isbase = false;
            return QsciLexerVerilog::event(event);
        } else if (qscilexerverilog_event_callback != nullptr) {
            return qscilexerverilog_event_callback(this, event);
        } else {
            return QsciLexerVerilog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerverilog_eventfilter_isbase) {
            qscilexerverilog_eventfilter_isbase = false;
            return QsciLexerVerilog::eventFilter(watched, event);
        } else if (qscilexerverilog_eventfilter_callback != nullptr) {
            return qscilexerverilog_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerVerilog::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerverilog_timerevent_isbase) {
            qscilexerverilog_timerevent_isbase = false;
            QsciLexerVerilog::timerEvent(event);
        } else if (qscilexerverilog_timerevent_callback != nullptr) {
            qscilexerverilog_timerevent_callback(this, event);
        } else {
            QsciLexerVerilog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerverilog_childevent_isbase) {
            qscilexerverilog_childevent_isbase = false;
            QsciLexerVerilog::childEvent(event);
        } else if (qscilexerverilog_childevent_callback != nullptr) {
            qscilexerverilog_childevent_callback(this, event);
        } else {
            QsciLexerVerilog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerverilog_customevent_isbase) {
            qscilexerverilog_customevent_isbase = false;
            QsciLexerVerilog::customEvent(event);
        } else if (qscilexerverilog_customevent_callback != nullptr) {
            qscilexerverilog_customevent_callback(this, event);
        } else {
            QsciLexerVerilog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerverilog_connectnotify_isbase) {
            qscilexerverilog_connectnotify_isbase = false;
            QsciLexerVerilog::connectNotify(signal);
        } else if (qscilexerverilog_connectnotify_callback != nullptr) {
            qscilexerverilog_connectnotify_callback(this, signal);
        } else {
            QsciLexerVerilog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerverilog_disconnectnotify_isbase) {
            qscilexerverilog_disconnectnotify_isbase = false;
            QsciLexerVerilog::disconnectNotify(signal);
        } else if (qscilexerverilog_disconnectnotify_callback != nullptr) {
            qscilexerverilog_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerVerilog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerverilog_sender_isbase) {
            qscilexerverilog_sender_isbase = false;
            return QsciLexerVerilog::sender();
        } else if (qscilexerverilog_sender_callback != nullptr) {
            return qscilexerverilog_sender_callback();
        } else {
            return QsciLexerVerilog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerverilog_sendersignalindex_isbase) {
            qscilexerverilog_sendersignalindex_isbase = false;
            return QsciLexerVerilog::senderSignalIndex();
        } else if (qscilexerverilog_sendersignalindex_callback != nullptr) {
            return qscilexerverilog_sendersignalindex_callback();
        } else {
            return QsciLexerVerilog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerverilog_receivers_isbase) {
            qscilexerverilog_receivers_isbase = false;
            return QsciLexerVerilog::receivers(signal);
        } else if (qscilexerverilog_receivers_callback != nullptr) {
            return qscilexerverilog_receivers_callback(this, signal);
        } else {
            return QsciLexerVerilog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerverilog_issignalconnected_isbase) {
            qscilexerverilog_issignalconnected_isbase = false;
            return QsciLexerVerilog::isSignalConnected(signal);
        } else if (qscilexerverilog_issignalconnected_callback != nullptr) {
            return qscilexerverilog_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerVerilog::isSignalConnected(signal);
        }
    }
};

#endif
