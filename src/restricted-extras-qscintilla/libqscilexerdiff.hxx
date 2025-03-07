#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERDIFF_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERDIFF_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerDiff so that we can call protected methods
class VirtualQsciLexerDiff : public QsciLexerDiff {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerDiff_Metacall_Callback = int (*)(QsciLexerDiff*, QMetaObject::Call, int, void**);
    using QsciLexerDiff_Language_Callback = const char* (*)();
    using QsciLexerDiff_Lexer_Callback = const char* (*)();
    using QsciLexerDiff_LexerId_Callback = int (*)();
    using QsciLexerDiff_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerDiff_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerDiff_BlockEnd_Callback = const char* (*)(const QsciLexerDiff*, int*);
    using QsciLexerDiff_BlockLookback_Callback = int (*)();
    using QsciLexerDiff_BlockStart_Callback = const char* (*)(const QsciLexerDiff*, int*);
    using QsciLexerDiff_BlockStartKeyword_Callback = const char* (*)(const QsciLexerDiff*, int*);
    using QsciLexerDiff_BraceStyle_Callback = int (*)();
    using QsciLexerDiff_CaseSensitive_Callback = bool (*)();
    using QsciLexerDiff_Color_Callback = QColor (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_EolFill_Callback = bool (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_Font_Callback = QFont (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_IndentationGuideView_Callback = int (*)();
    using QsciLexerDiff_Keywords_Callback = const char* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultStyle_Callback = int (*)();
    using QsciLexerDiff_Description_Callback = QString (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_Paper_Callback = QColor (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultEolFill_Callback = bool (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_SetEditor_Callback = void (*)(QsciLexerDiff*, QsciScintilla*);
    using QsciLexerDiff_RefreshProperties_Callback = void (*)();
    using QsciLexerDiff_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerDiff_WordCharacters_Callback = const char* (*)();
    using QsciLexerDiff_SetAutoIndentStyle_Callback = void (*)(QsciLexerDiff*, int);
    using QsciLexerDiff_SetColor_Callback = void (*)(QsciLexerDiff*, const QColor&, int);
    using QsciLexerDiff_SetEolFill_Callback = void (*)(QsciLexerDiff*, bool, int);
    using QsciLexerDiff_SetFont_Callback = void (*)(QsciLexerDiff*, const QFont&, int);
    using QsciLexerDiff_SetPaper_Callback = void (*)(QsciLexerDiff*, const QColor&, int);
    using QsciLexerDiff_ReadProperties_Callback = bool (*)(QsciLexerDiff*, QSettings&, const QString&);
    using QsciLexerDiff_WriteProperties_Callback = bool (*)(const QsciLexerDiff*, QSettings&, const QString&);
    using QsciLexerDiff_Event_Callback = bool (*)(QsciLexerDiff*, QEvent*);
    using QsciLexerDiff_EventFilter_Callback = bool (*)(QsciLexerDiff*, QObject*, QEvent*);
    using QsciLexerDiff_TimerEvent_Callback = void (*)(QsciLexerDiff*, QTimerEvent*);
    using QsciLexerDiff_ChildEvent_Callback = void (*)(QsciLexerDiff*, QChildEvent*);
    using QsciLexerDiff_CustomEvent_Callback = void (*)(QsciLexerDiff*, QEvent*);
    using QsciLexerDiff_ConnectNotify_Callback = void (*)(QsciLexerDiff*, const QMetaMethod&);
    using QsciLexerDiff_DisconnectNotify_Callback = void (*)(QsciLexerDiff*, const QMetaMethod&);
    using QsciLexerDiff_Sender_Callback = QObject* (*)();
    using QsciLexerDiff_SenderSignalIndex_Callback = int (*)();
    using QsciLexerDiff_Receivers_Callback = int (*)(const QsciLexerDiff*, const char*);
    using QsciLexerDiff_IsSignalConnected_Callback = bool (*)(const QsciLexerDiff*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerDiff_Metacall_Callback qscilexerdiff_metacall_callback = nullptr;
    QsciLexerDiff_Language_Callback qscilexerdiff_language_callback = nullptr;
    QsciLexerDiff_Lexer_Callback qscilexerdiff_lexer_callback = nullptr;
    QsciLexerDiff_LexerId_Callback qscilexerdiff_lexerid_callback = nullptr;
    QsciLexerDiff_AutoCompletionFillups_Callback qscilexerdiff_autocompletionfillups_callback = nullptr;
    QsciLexerDiff_AutoCompletionWordSeparators_Callback qscilexerdiff_autocompletionwordseparators_callback = nullptr;
    QsciLexerDiff_BlockEnd_Callback qscilexerdiff_blockend_callback = nullptr;
    QsciLexerDiff_BlockLookback_Callback qscilexerdiff_blocklookback_callback = nullptr;
    QsciLexerDiff_BlockStart_Callback qscilexerdiff_blockstart_callback = nullptr;
    QsciLexerDiff_BlockStartKeyword_Callback qscilexerdiff_blockstartkeyword_callback = nullptr;
    QsciLexerDiff_BraceStyle_Callback qscilexerdiff_bracestyle_callback = nullptr;
    QsciLexerDiff_CaseSensitive_Callback qscilexerdiff_casesensitive_callback = nullptr;
    QsciLexerDiff_Color_Callback qscilexerdiff_color_callback = nullptr;
    QsciLexerDiff_EolFill_Callback qscilexerdiff_eolfill_callback = nullptr;
    QsciLexerDiff_Font_Callback qscilexerdiff_font_callback = nullptr;
    QsciLexerDiff_IndentationGuideView_Callback qscilexerdiff_indentationguideview_callback = nullptr;
    QsciLexerDiff_Keywords_Callback qscilexerdiff_keywords_callback = nullptr;
    QsciLexerDiff_DefaultStyle_Callback qscilexerdiff_defaultstyle_callback = nullptr;
    QsciLexerDiff_Description_Callback qscilexerdiff_description_callback = nullptr;
    QsciLexerDiff_Paper_Callback qscilexerdiff_paper_callback = nullptr;
    QsciLexerDiff_DefaultColorWithStyle_Callback qscilexerdiff_defaultcolorwithstyle_callback = nullptr;
    QsciLexerDiff_DefaultEolFill_Callback qscilexerdiff_defaulteolfill_callback = nullptr;
    QsciLexerDiff_DefaultFontWithStyle_Callback qscilexerdiff_defaultfontwithstyle_callback = nullptr;
    QsciLexerDiff_DefaultPaperWithStyle_Callback qscilexerdiff_defaultpaperwithstyle_callback = nullptr;
    QsciLexerDiff_SetEditor_Callback qscilexerdiff_seteditor_callback = nullptr;
    QsciLexerDiff_RefreshProperties_Callback qscilexerdiff_refreshproperties_callback = nullptr;
    QsciLexerDiff_StyleBitsNeeded_Callback qscilexerdiff_stylebitsneeded_callback = nullptr;
    QsciLexerDiff_WordCharacters_Callback qscilexerdiff_wordcharacters_callback = nullptr;
    QsciLexerDiff_SetAutoIndentStyle_Callback qscilexerdiff_setautoindentstyle_callback = nullptr;
    QsciLexerDiff_SetColor_Callback qscilexerdiff_setcolor_callback = nullptr;
    QsciLexerDiff_SetEolFill_Callback qscilexerdiff_seteolfill_callback = nullptr;
    QsciLexerDiff_SetFont_Callback qscilexerdiff_setfont_callback = nullptr;
    QsciLexerDiff_SetPaper_Callback qscilexerdiff_setpaper_callback = nullptr;
    QsciLexerDiff_ReadProperties_Callback qscilexerdiff_readproperties_callback = nullptr;
    QsciLexerDiff_WriteProperties_Callback qscilexerdiff_writeproperties_callback = nullptr;
    QsciLexerDiff_Event_Callback qscilexerdiff_event_callback = nullptr;
    QsciLexerDiff_EventFilter_Callback qscilexerdiff_eventfilter_callback = nullptr;
    QsciLexerDiff_TimerEvent_Callback qscilexerdiff_timerevent_callback = nullptr;
    QsciLexerDiff_ChildEvent_Callback qscilexerdiff_childevent_callback = nullptr;
    QsciLexerDiff_CustomEvent_Callback qscilexerdiff_customevent_callback = nullptr;
    QsciLexerDiff_ConnectNotify_Callback qscilexerdiff_connectnotify_callback = nullptr;
    QsciLexerDiff_DisconnectNotify_Callback qscilexerdiff_disconnectnotify_callback = nullptr;
    QsciLexerDiff_Sender_Callback qscilexerdiff_sender_callback = nullptr;
    QsciLexerDiff_SenderSignalIndex_Callback qscilexerdiff_sendersignalindex_callback = nullptr;
    QsciLexerDiff_Receivers_Callback qscilexerdiff_receivers_callback = nullptr;
    QsciLexerDiff_IsSignalConnected_Callback qscilexerdiff_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerdiff_metacall_isbase = false;
    mutable bool qscilexerdiff_language_isbase = false;
    mutable bool qscilexerdiff_lexer_isbase = false;
    mutable bool qscilexerdiff_lexerid_isbase = false;
    mutable bool qscilexerdiff_autocompletionfillups_isbase = false;
    mutable bool qscilexerdiff_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerdiff_blockend_isbase = false;
    mutable bool qscilexerdiff_blocklookback_isbase = false;
    mutable bool qscilexerdiff_blockstart_isbase = false;
    mutable bool qscilexerdiff_blockstartkeyword_isbase = false;
    mutable bool qscilexerdiff_bracestyle_isbase = false;
    mutable bool qscilexerdiff_casesensitive_isbase = false;
    mutable bool qscilexerdiff_color_isbase = false;
    mutable bool qscilexerdiff_eolfill_isbase = false;
    mutable bool qscilexerdiff_font_isbase = false;
    mutable bool qscilexerdiff_indentationguideview_isbase = false;
    mutable bool qscilexerdiff_keywords_isbase = false;
    mutable bool qscilexerdiff_defaultstyle_isbase = false;
    mutable bool qscilexerdiff_description_isbase = false;
    mutable bool qscilexerdiff_paper_isbase = false;
    mutable bool qscilexerdiff_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerdiff_defaulteolfill_isbase = false;
    mutable bool qscilexerdiff_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerdiff_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerdiff_seteditor_isbase = false;
    mutable bool qscilexerdiff_refreshproperties_isbase = false;
    mutable bool qscilexerdiff_stylebitsneeded_isbase = false;
    mutable bool qscilexerdiff_wordcharacters_isbase = false;
    mutable bool qscilexerdiff_setautoindentstyle_isbase = false;
    mutable bool qscilexerdiff_setcolor_isbase = false;
    mutable bool qscilexerdiff_seteolfill_isbase = false;
    mutable bool qscilexerdiff_setfont_isbase = false;
    mutable bool qscilexerdiff_setpaper_isbase = false;
    mutable bool qscilexerdiff_readproperties_isbase = false;
    mutable bool qscilexerdiff_writeproperties_isbase = false;
    mutable bool qscilexerdiff_event_isbase = false;
    mutable bool qscilexerdiff_eventfilter_isbase = false;
    mutable bool qscilexerdiff_timerevent_isbase = false;
    mutable bool qscilexerdiff_childevent_isbase = false;
    mutable bool qscilexerdiff_customevent_isbase = false;
    mutable bool qscilexerdiff_connectnotify_isbase = false;
    mutable bool qscilexerdiff_disconnectnotify_isbase = false;
    mutable bool qscilexerdiff_sender_isbase = false;
    mutable bool qscilexerdiff_sendersignalindex_isbase = false;
    mutable bool qscilexerdiff_receivers_isbase = false;
    mutable bool qscilexerdiff_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerDiff() : QsciLexerDiff(){};
    VirtualQsciLexerDiff(QObject* parent) : QsciLexerDiff(parent){};

    ~VirtualQsciLexerDiff() {
        qscilexerdiff_metacall_callback = nullptr;
        qscilexerdiff_language_callback = nullptr;
        qscilexerdiff_lexer_callback = nullptr;
        qscilexerdiff_lexerid_callback = nullptr;
        qscilexerdiff_autocompletionfillups_callback = nullptr;
        qscilexerdiff_autocompletionwordseparators_callback = nullptr;
        qscilexerdiff_blockend_callback = nullptr;
        qscilexerdiff_blocklookback_callback = nullptr;
        qscilexerdiff_blockstart_callback = nullptr;
        qscilexerdiff_blockstartkeyword_callback = nullptr;
        qscilexerdiff_bracestyle_callback = nullptr;
        qscilexerdiff_casesensitive_callback = nullptr;
        qscilexerdiff_color_callback = nullptr;
        qscilexerdiff_eolfill_callback = nullptr;
        qscilexerdiff_font_callback = nullptr;
        qscilexerdiff_indentationguideview_callback = nullptr;
        qscilexerdiff_keywords_callback = nullptr;
        qscilexerdiff_defaultstyle_callback = nullptr;
        qscilexerdiff_description_callback = nullptr;
        qscilexerdiff_paper_callback = nullptr;
        qscilexerdiff_defaultcolorwithstyle_callback = nullptr;
        qscilexerdiff_defaulteolfill_callback = nullptr;
        qscilexerdiff_defaultfontwithstyle_callback = nullptr;
        qscilexerdiff_defaultpaperwithstyle_callback = nullptr;
        qscilexerdiff_seteditor_callback = nullptr;
        qscilexerdiff_refreshproperties_callback = nullptr;
        qscilexerdiff_stylebitsneeded_callback = nullptr;
        qscilexerdiff_wordcharacters_callback = nullptr;
        qscilexerdiff_setautoindentstyle_callback = nullptr;
        qscilexerdiff_setcolor_callback = nullptr;
        qscilexerdiff_seteolfill_callback = nullptr;
        qscilexerdiff_setfont_callback = nullptr;
        qscilexerdiff_setpaper_callback = nullptr;
        qscilexerdiff_readproperties_callback = nullptr;
        qscilexerdiff_writeproperties_callback = nullptr;
        qscilexerdiff_event_callback = nullptr;
        qscilexerdiff_eventfilter_callback = nullptr;
        qscilexerdiff_timerevent_callback = nullptr;
        qscilexerdiff_childevent_callback = nullptr;
        qscilexerdiff_customevent_callback = nullptr;
        qscilexerdiff_connectnotify_callback = nullptr;
        qscilexerdiff_disconnectnotify_callback = nullptr;
        qscilexerdiff_sender_callback = nullptr;
        qscilexerdiff_sendersignalindex_callback = nullptr;
        qscilexerdiff_receivers_callback = nullptr;
        qscilexerdiff_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerDiff_Metacall_Callback(QsciLexerDiff_Metacall_Callback cb) { qscilexerdiff_metacall_callback = cb; }
    void setQsciLexerDiff_Language_Callback(QsciLexerDiff_Language_Callback cb) { qscilexerdiff_language_callback = cb; }
    void setQsciLexerDiff_Lexer_Callback(QsciLexerDiff_Lexer_Callback cb) { qscilexerdiff_lexer_callback = cb; }
    void setQsciLexerDiff_LexerId_Callback(QsciLexerDiff_LexerId_Callback cb) { qscilexerdiff_lexerid_callback = cb; }
    void setQsciLexerDiff_AutoCompletionFillups_Callback(QsciLexerDiff_AutoCompletionFillups_Callback cb) { qscilexerdiff_autocompletionfillups_callback = cb; }
    void setQsciLexerDiff_AutoCompletionWordSeparators_Callback(QsciLexerDiff_AutoCompletionWordSeparators_Callback cb) { qscilexerdiff_autocompletionwordseparators_callback = cb; }
    void setQsciLexerDiff_BlockEnd_Callback(QsciLexerDiff_BlockEnd_Callback cb) { qscilexerdiff_blockend_callback = cb; }
    void setQsciLexerDiff_BlockLookback_Callback(QsciLexerDiff_BlockLookback_Callback cb) { qscilexerdiff_blocklookback_callback = cb; }
    void setQsciLexerDiff_BlockStart_Callback(QsciLexerDiff_BlockStart_Callback cb) { qscilexerdiff_blockstart_callback = cb; }
    void setQsciLexerDiff_BlockStartKeyword_Callback(QsciLexerDiff_BlockStartKeyword_Callback cb) { qscilexerdiff_blockstartkeyword_callback = cb; }
    void setQsciLexerDiff_BraceStyle_Callback(QsciLexerDiff_BraceStyle_Callback cb) { qscilexerdiff_bracestyle_callback = cb; }
    void setQsciLexerDiff_CaseSensitive_Callback(QsciLexerDiff_CaseSensitive_Callback cb) { qscilexerdiff_casesensitive_callback = cb; }
    void setQsciLexerDiff_Color_Callback(QsciLexerDiff_Color_Callback cb) { qscilexerdiff_color_callback = cb; }
    void setQsciLexerDiff_EolFill_Callback(QsciLexerDiff_EolFill_Callback cb) { qscilexerdiff_eolfill_callback = cb; }
    void setQsciLexerDiff_Font_Callback(QsciLexerDiff_Font_Callback cb) { qscilexerdiff_font_callback = cb; }
    void setQsciLexerDiff_IndentationGuideView_Callback(QsciLexerDiff_IndentationGuideView_Callback cb) { qscilexerdiff_indentationguideview_callback = cb; }
    void setQsciLexerDiff_Keywords_Callback(QsciLexerDiff_Keywords_Callback cb) { qscilexerdiff_keywords_callback = cb; }
    void setQsciLexerDiff_DefaultStyle_Callback(QsciLexerDiff_DefaultStyle_Callback cb) { qscilexerdiff_defaultstyle_callback = cb; }
    void setQsciLexerDiff_Description_Callback(QsciLexerDiff_Description_Callback cb) { qscilexerdiff_description_callback = cb; }
    void setQsciLexerDiff_Paper_Callback(QsciLexerDiff_Paper_Callback cb) { qscilexerdiff_paper_callback = cb; }
    void setQsciLexerDiff_DefaultColorWithStyle_Callback(QsciLexerDiff_DefaultColorWithStyle_Callback cb) { qscilexerdiff_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerDiff_DefaultEolFill_Callback(QsciLexerDiff_DefaultEolFill_Callback cb) { qscilexerdiff_defaulteolfill_callback = cb; }
    void setQsciLexerDiff_DefaultFontWithStyle_Callback(QsciLexerDiff_DefaultFontWithStyle_Callback cb) { qscilexerdiff_defaultfontwithstyle_callback = cb; }
    void setQsciLexerDiff_DefaultPaperWithStyle_Callback(QsciLexerDiff_DefaultPaperWithStyle_Callback cb) { qscilexerdiff_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerDiff_SetEditor_Callback(QsciLexerDiff_SetEditor_Callback cb) { qscilexerdiff_seteditor_callback = cb; }
    void setQsciLexerDiff_RefreshProperties_Callback(QsciLexerDiff_RefreshProperties_Callback cb) { qscilexerdiff_refreshproperties_callback = cb; }
    void setQsciLexerDiff_StyleBitsNeeded_Callback(QsciLexerDiff_StyleBitsNeeded_Callback cb) { qscilexerdiff_stylebitsneeded_callback = cb; }
    void setQsciLexerDiff_WordCharacters_Callback(QsciLexerDiff_WordCharacters_Callback cb) { qscilexerdiff_wordcharacters_callback = cb; }
    void setQsciLexerDiff_SetAutoIndentStyle_Callback(QsciLexerDiff_SetAutoIndentStyle_Callback cb) { qscilexerdiff_setautoindentstyle_callback = cb; }
    void setQsciLexerDiff_SetColor_Callback(QsciLexerDiff_SetColor_Callback cb) { qscilexerdiff_setcolor_callback = cb; }
    void setQsciLexerDiff_SetEolFill_Callback(QsciLexerDiff_SetEolFill_Callback cb) { qscilexerdiff_seteolfill_callback = cb; }
    void setQsciLexerDiff_SetFont_Callback(QsciLexerDiff_SetFont_Callback cb) { qscilexerdiff_setfont_callback = cb; }
    void setQsciLexerDiff_SetPaper_Callback(QsciLexerDiff_SetPaper_Callback cb) { qscilexerdiff_setpaper_callback = cb; }
    void setQsciLexerDiff_ReadProperties_Callback(QsciLexerDiff_ReadProperties_Callback cb) { qscilexerdiff_readproperties_callback = cb; }
    void setQsciLexerDiff_WriteProperties_Callback(QsciLexerDiff_WriteProperties_Callback cb) { qscilexerdiff_writeproperties_callback = cb; }
    void setQsciLexerDiff_Event_Callback(QsciLexerDiff_Event_Callback cb) { qscilexerdiff_event_callback = cb; }
    void setQsciLexerDiff_EventFilter_Callback(QsciLexerDiff_EventFilter_Callback cb) { qscilexerdiff_eventfilter_callback = cb; }
    void setQsciLexerDiff_TimerEvent_Callback(QsciLexerDiff_TimerEvent_Callback cb) { qscilexerdiff_timerevent_callback = cb; }
    void setQsciLexerDiff_ChildEvent_Callback(QsciLexerDiff_ChildEvent_Callback cb) { qscilexerdiff_childevent_callback = cb; }
    void setQsciLexerDiff_CustomEvent_Callback(QsciLexerDiff_CustomEvent_Callback cb) { qscilexerdiff_customevent_callback = cb; }
    void setQsciLexerDiff_ConnectNotify_Callback(QsciLexerDiff_ConnectNotify_Callback cb) { qscilexerdiff_connectnotify_callback = cb; }
    void setQsciLexerDiff_DisconnectNotify_Callback(QsciLexerDiff_DisconnectNotify_Callback cb) { qscilexerdiff_disconnectnotify_callback = cb; }
    void setQsciLexerDiff_Sender_Callback(QsciLexerDiff_Sender_Callback cb) { qscilexerdiff_sender_callback = cb; }
    void setQsciLexerDiff_SenderSignalIndex_Callback(QsciLexerDiff_SenderSignalIndex_Callback cb) { qscilexerdiff_sendersignalindex_callback = cb; }
    void setQsciLexerDiff_Receivers_Callback(QsciLexerDiff_Receivers_Callback cb) { qscilexerdiff_receivers_callback = cb; }
    void setQsciLexerDiff_IsSignalConnected_Callback(QsciLexerDiff_IsSignalConnected_Callback cb) { qscilexerdiff_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerDiff_Metacall_IsBase(bool value) const { qscilexerdiff_metacall_isbase = value; }
    void setQsciLexerDiff_Language_IsBase(bool value) const { qscilexerdiff_language_isbase = value; }
    void setQsciLexerDiff_Lexer_IsBase(bool value) const { qscilexerdiff_lexer_isbase = value; }
    void setQsciLexerDiff_LexerId_IsBase(bool value) const { qscilexerdiff_lexerid_isbase = value; }
    void setQsciLexerDiff_AutoCompletionFillups_IsBase(bool value) const { qscilexerdiff_autocompletionfillups_isbase = value; }
    void setQsciLexerDiff_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerdiff_autocompletionwordseparators_isbase = value; }
    void setQsciLexerDiff_BlockEnd_IsBase(bool value) const { qscilexerdiff_blockend_isbase = value; }
    void setQsciLexerDiff_BlockLookback_IsBase(bool value) const { qscilexerdiff_blocklookback_isbase = value; }
    void setQsciLexerDiff_BlockStart_IsBase(bool value) const { qscilexerdiff_blockstart_isbase = value; }
    void setQsciLexerDiff_BlockStartKeyword_IsBase(bool value) const { qscilexerdiff_blockstartkeyword_isbase = value; }
    void setQsciLexerDiff_BraceStyle_IsBase(bool value) const { qscilexerdiff_bracestyle_isbase = value; }
    void setQsciLexerDiff_CaseSensitive_IsBase(bool value) const { qscilexerdiff_casesensitive_isbase = value; }
    void setQsciLexerDiff_Color_IsBase(bool value) const { qscilexerdiff_color_isbase = value; }
    void setQsciLexerDiff_EolFill_IsBase(bool value) const { qscilexerdiff_eolfill_isbase = value; }
    void setQsciLexerDiff_Font_IsBase(bool value) const { qscilexerdiff_font_isbase = value; }
    void setQsciLexerDiff_IndentationGuideView_IsBase(bool value) const { qscilexerdiff_indentationguideview_isbase = value; }
    void setQsciLexerDiff_Keywords_IsBase(bool value) const { qscilexerdiff_keywords_isbase = value; }
    void setQsciLexerDiff_DefaultStyle_IsBase(bool value) const { qscilexerdiff_defaultstyle_isbase = value; }
    void setQsciLexerDiff_Description_IsBase(bool value) const { qscilexerdiff_description_isbase = value; }
    void setQsciLexerDiff_Paper_IsBase(bool value) const { qscilexerdiff_paper_isbase = value; }
    void setQsciLexerDiff_DefaultColorWithStyle_IsBase(bool value) const { qscilexerdiff_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerDiff_DefaultEolFill_IsBase(bool value) const { qscilexerdiff_defaulteolfill_isbase = value; }
    void setQsciLexerDiff_DefaultFontWithStyle_IsBase(bool value) const { qscilexerdiff_defaultfontwithstyle_isbase = value; }
    void setQsciLexerDiff_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerdiff_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerDiff_SetEditor_IsBase(bool value) const { qscilexerdiff_seteditor_isbase = value; }
    void setQsciLexerDiff_RefreshProperties_IsBase(bool value) const { qscilexerdiff_refreshproperties_isbase = value; }
    void setQsciLexerDiff_StyleBitsNeeded_IsBase(bool value) const { qscilexerdiff_stylebitsneeded_isbase = value; }
    void setQsciLexerDiff_WordCharacters_IsBase(bool value) const { qscilexerdiff_wordcharacters_isbase = value; }
    void setQsciLexerDiff_SetAutoIndentStyle_IsBase(bool value) const { qscilexerdiff_setautoindentstyle_isbase = value; }
    void setQsciLexerDiff_SetColor_IsBase(bool value) const { qscilexerdiff_setcolor_isbase = value; }
    void setQsciLexerDiff_SetEolFill_IsBase(bool value) const { qscilexerdiff_seteolfill_isbase = value; }
    void setQsciLexerDiff_SetFont_IsBase(bool value) const { qscilexerdiff_setfont_isbase = value; }
    void setQsciLexerDiff_SetPaper_IsBase(bool value) const { qscilexerdiff_setpaper_isbase = value; }
    void setQsciLexerDiff_ReadProperties_IsBase(bool value) const { qscilexerdiff_readproperties_isbase = value; }
    void setQsciLexerDiff_WriteProperties_IsBase(bool value) const { qscilexerdiff_writeproperties_isbase = value; }
    void setQsciLexerDiff_Event_IsBase(bool value) const { qscilexerdiff_event_isbase = value; }
    void setQsciLexerDiff_EventFilter_IsBase(bool value) const { qscilexerdiff_eventfilter_isbase = value; }
    void setQsciLexerDiff_TimerEvent_IsBase(bool value) const { qscilexerdiff_timerevent_isbase = value; }
    void setQsciLexerDiff_ChildEvent_IsBase(bool value) const { qscilexerdiff_childevent_isbase = value; }
    void setQsciLexerDiff_CustomEvent_IsBase(bool value) const { qscilexerdiff_customevent_isbase = value; }
    void setQsciLexerDiff_ConnectNotify_IsBase(bool value) const { qscilexerdiff_connectnotify_isbase = value; }
    void setQsciLexerDiff_DisconnectNotify_IsBase(bool value) const { qscilexerdiff_disconnectnotify_isbase = value; }
    void setQsciLexerDiff_Sender_IsBase(bool value) const { qscilexerdiff_sender_isbase = value; }
    void setQsciLexerDiff_SenderSignalIndex_IsBase(bool value) const { qscilexerdiff_sendersignalindex_isbase = value; }
    void setQsciLexerDiff_Receivers_IsBase(bool value) const { qscilexerdiff_receivers_isbase = value; }
    void setQsciLexerDiff_IsSignalConnected_IsBase(bool value) const { qscilexerdiff_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerdiff_metacall_isbase) {
            qscilexerdiff_metacall_isbase = false;
            return QsciLexerDiff::qt_metacall(param1, param2, param3);
        } else if (qscilexerdiff_metacall_callback != nullptr) {
            return qscilexerdiff_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerDiff::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerdiff_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerdiff_lexer_isbase) {
            qscilexerdiff_lexer_isbase = false;
            return QsciLexerDiff::lexer();
        } else if (qscilexerdiff_lexer_callback != nullptr) {
            return qscilexerdiff_lexer_callback();
        } else {
            return QsciLexerDiff::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerdiff_lexerid_isbase) {
            qscilexerdiff_lexerid_isbase = false;
            return QsciLexerDiff::lexerId();
        } else if (qscilexerdiff_lexerid_callback != nullptr) {
            return qscilexerdiff_lexerid_callback();
        } else {
            return QsciLexerDiff::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerdiff_autocompletionfillups_isbase) {
            qscilexerdiff_autocompletionfillups_isbase = false;
            return QsciLexerDiff::autoCompletionFillups();
        } else if (qscilexerdiff_autocompletionfillups_callback != nullptr) {
            return qscilexerdiff_autocompletionfillups_callback();
        } else {
            return QsciLexerDiff::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerdiff_autocompletionwordseparators_isbase) {
            qscilexerdiff_autocompletionwordseparators_isbase = false;
            return QsciLexerDiff::autoCompletionWordSeparators();
        } else if (qscilexerdiff_autocompletionwordseparators_callback != nullptr) {
            return qscilexerdiff_autocompletionwordseparators_callback();
        } else {
            return QsciLexerDiff::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerdiff_blockend_isbase) {
            qscilexerdiff_blockend_isbase = false;
            return QsciLexerDiff::blockEnd(style);
        } else if (qscilexerdiff_blockend_callback != nullptr) {
            return qscilexerdiff_blockend_callback(this, style);
        } else {
            return QsciLexerDiff::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerdiff_blocklookback_isbase) {
            qscilexerdiff_blocklookback_isbase = false;
            return QsciLexerDiff::blockLookback();
        } else if (qscilexerdiff_blocklookback_callback != nullptr) {
            return qscilexerdiff_blocklookback_callback();
        } else {
            return QsciLexerDiff::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerdiff_blockstart_isbase) {
            qscilexerdiff_blockstart_isbase = false;
            return QsciLexerDiff::blockStart(style);
        } else if (qscilexerdiff_blockstart_callback != nullptr) {
            return qscilexerdiff_blockstart_callback(this, style);
        } else {
            return QsciLexerDiff::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerdiff_blockstartkeyword_isbase) {
            qscilexerdiff_blockstartkeyword_isbase = false;
            return QsciLexerDiff::blockStartKeyword(style);
        } else if (qscilexerdiff_blockstartkeyword_callback != nullptr) {
            return qscilexerdiff_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerDiff::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerdiff_bracestyle_isbase) {
            qscilexerdiff_bracestyle_isbase = false;
            return QsciLexerDiff::braceStyle();
        } else if (qscilexerdiff_bracestyle_callback != nullptr) {
            return qscilexerdiff_bracestyle_callback();
        } else {
            return QsciLexerDiff::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerdiff_casesensitive_isbase) {
            qscilexerdiff_casesensitive_isbase = false;
            return QsciLexerDiff::caseSensitive();
        } else if (qscilexerdiff_casesensitive_callback != nullptr) {
            return qscilexerdiff_casesensitive_callback();
        } else {
            return QsciLexerDiff::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerdiff_color_isbase) {
            qscilexerdiff_color_isbase = false;
            return QsciLexerDiff::color(style);
        } else if (qscilexerdiff_color_callback != nullptr) {
            return qscilexerdiff_color_callback(this, style);
        } else {
            return QsciLexerDiff::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerdiff_eolfill_isbase) {
            qscilexerdiff_eolfill_isbase = false;
            return QsciLexerDiff::eolFill(style);
        } else if (qscilexerdiff_eolfill_callback != nullptr) {
            return qscilexerdiff_eolfill_callback(this, style);
        } else {
            return QsciLexerDiff::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerdiff_font_isbase) {
            qscilexerdiff_font_isbase = false;
            return QsciLexerDiff::font(style);
        } else if (qscilexerdiff_font_callback != nullptr) {
            return qscilexerdiff_font_callback(this, style);
        } else {
            return QsciLexerDiff::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerdiff_indentationguideview_isbase) {
            qscilexerdiff_indentationguideview_isbase = false;
            return QsciLexerDiff::indentationGuideView();
        } else if (qscilexerdiff_indentationguideview_callback != nullptr) {
            return qscilexerdiff_indentationguideview_callback();
        } else {
            return QsciLexerDiff::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerdiff_keywords_isbase) {
            qscilexerdiff_keywords_isbase = false;
            return QsciLexerDiff::keywords(set);
        } else if (qscilexerdiff_keywords_callback != nullptr) {
            return qscilexerdiff_keywords_callback(this, set);
        } else {
            return QsciLexerDiff::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerdiff_defaultstyle_isbase) {
            qscilexerdiff_defaultstyle_isbase = false;
            return QsciLexerDiff::defaultStyle();
        } else if (qscilexerdiff_defaultstyle_callback != nullptr) {
            return qscilexerdiff_defaultstyle_callback();
        } else {
            return QsciLexerDiff::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerdiff_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerdiff_paper_isbase) {
            qscilexerdiff_paper_isbase = false;
            return QsciLexerDiff::paper(style);
        } else if (qscilexerdiff_paper_callback != nullptr) {
            return qscilexerdiff_paper_callback(this, style);
        } else {
            return QsciLexerDiff::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerdiff_defaultcolorwithstyle_isbase) {
            qscilexerdiff_defaultcolorwithstyle_isbase = false;
            return QsciLexerDiff::defaultColor(style);
        } else if (qscilexerdiff_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerdiff_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerDiff::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerdiff_defaulteolfill_isbase) {
            qscilexerdiff_defaulteolfill_isbase = false;
            return QsciLexerDiff::defaultEolFill(style);
        } else if (qscilexerdiff_defaulteolfill_callback != nullptr) {
            return qscilexerdiff_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerDiff::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerdiff_defaultfontwithstyle_isbase) {
            qscilexerdiff_defaultfontwithstyle_isbase = false;
            return QsciLexerDiff::defaultFont(style);
        } else if (qscilexerdiff_defaultfontwithstyle_callback != nullptr) {
            return qscilexerdiff_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerDiff::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerdiff_defaultpaperwithstyle_isbase) {
            qscilexerdiff_defaultpaperwithstyle_isbase = false;
            return QsciLexerDiff::defaultPaper(style);
        } else if (qscilexerdiff_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerdiff_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerDiff::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerdiff_seteditor_isbase) {
            qscilexerdiff_seteditor_isbase = false;
            QsciLexerDiff::setEditor(editor);
        } else if (qscilexerdiff_seteditor_callback != nullptr) {
            qscilexerdiff_seteditor_callback(this, editor);
        } else {
            QsciLexerDiff::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerdiff_refreshproperties_isbase) {
            qscilexerdiff_refreshproperties_isbase = false;
            QsciLexerDiff::refreshProperties();
        } else if (qscilexerdiff_refreshproperties_callback != nullptr) {
            qscilexerdiff_refreshproperties_callback();
        } else {
            QsciLexerDiff::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerdiff_stylebitsneeded_isbase) {
            qscilexerdiff_stylebitsneeded_isbase = false;
            return QsciLexerDiff::styleBitsNeeded();
        } else if (qscilexerdiff_stylebitsneeded_callback != nullptr) {
            return qscilexerdiff_stylebitsneeded_callback();
        } else {
            return QsciLexerDiff::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerdiff_wordcharacters_isbase) {
            qscilexerdiff_wordcharacters_isbase = false;
            return QsciLexerDiff::wordCharacters();
        } else if (qscilexerdiff_wordcharacters_callback != nullptr) {
            return qscilexerdiff_wordcharacters_callback();
        } else {
            return QsciLexerDiff::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerdiff_setautoindentstyle_isbase) {
            qscilexerdiff_setautoindentstyle_isbase = false;
            QsciLexerDiff::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerdiff_setautoindentstyle_callback != nullptr) {
            qscilexerdiff_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerDiff::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerdiff_setcolor_isbase) {
            qscilexerdiff_setcolor_isbase = false;
            QsciLexerDiff::setColor(c, style);
        } else if (qscilexerdiff_setcolor_callback != nullptr) {
            qscilexerdiff_setcolor_callback(this, c, style);
        } else {
            QsciLexerDiff::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerdiff_seteolfill_isbase) {
            qscilexerdiff_seteolfill_isbase = false;
            QsciLexerDiff::setEolFill(eoffill, style);
        } else if (qscilexerdiff_seteolfill_callback != nullptr) {
            qscilexerdiff_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerDiff::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerdiff_setfont_isbase) {
            qscilexerdiff_setfont_isbase = false;
            QsciLexerDiff::setFont(f, style);
        } else if (qscilexerdiff_setfont_callback != nullptr) {
            qscilexerdiff_setfont_callback(this, f, style);
        } else {
            QsciLexerDiff::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerdiff_setpaper_isbase) {
            qscilexerdiff_setpaper_isbase = false;
            QsciLexerDiff::setPaper(c, style);
        } else if (qscilexerdiff_setpaper_callback != nullptr) {
            qscilexerdiff_setpaper_callback(this, c, style);
        } else {
            QsciLexerDiff::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerdiff_readproperties_isbase) {
            qscilexerdiff_readproperties_isbase = false;
            return QsciLexerDiff::readProperties(qs, prefix);
        } else if (qscilexerdiff_readproperties_callback != nullptr) {
            return qscilexerdiff_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerDiff::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerdiff_writeproperties_isbase) {
            qscilexerdiff_writeproperties_isbase = false;
            return QsciLexerDiff::writeProperties(qs, prefix);
        } else if (qscilexerdiff_writeproperties_callback != nullptr) {
            return qscilexerdiff_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerDiff::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerdiff_event_isbase) {
            qscilexerdiff_event_isbase = false;
            return QsciLexerDiff::event(event);
        } else if (qscilexerdiff_event_callback != nullptr) {
            return qscilexerdiff_event_callback(this, event);
        } else {
            return QsciLexerDiff::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerdiff_eventfilter_isbase) {
            qscilexerdiff_eventfilter_isbase = false;
            return QsciLexerDiff::eventFilter(watched, event);
        } else if (qscilexerdiff_eventfilter_callback != nullptr) {
            return qscilexerdiff_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerDiff::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerdiff_timerevent_isbase) {
            qscilexerdiff_timerevent_isbase = false;
            QsciLexerDiff::timerEvent(event);
        } else if (qscilexerdiff_timerevent_callback != nullptr) {
            qscilexerdiff_timerevent_callback(this, event);
        } else {
            QsciLexerDiff::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerdiff_childevent_isbase) {
            qscilexerdiff_childevent_isbase = false;
            QsciLexerDiff::childEvent(event);
        } else if (qscilexerdiff_childevent_callback != nullptr) {
            qscilexerdiff_childevent_callback(this, event);
        } else {
            QsciLexerDiff::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerdiff_customevent_isbase) {
            qscilexerdiff_customevent_isbase = false;
            QsciLexerDiff::customEvent(event);
        } else if (qscilexerdiff_customevent_callback != nullptr) {
            qscilexerdiff_customevent_callback(this, event);
        } else {
            QsciLexerDiff::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerdiff_connectnotify_isbase) {
            qscilexerdiff_connectnotify_isbase = false;
            QsciLexerDiff::connectNotify(signal);
        } else if (qscilexerdiff_connectnotify_callback != nullptr) {
            qscilexerdiff_connectnotify_callback(this, signal);
        } else {
            QsciLexerDiff::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerdiff_disconnectnotify_isbase) {
            qscilexerdiff_disconnectnotify_isbase = false;
            QsciLexerDiff::disconnectNotify(signal);
        } else if (qscilexerdiff_disconnectnotify_callback != nullptr) {
            qscilexerdiff_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerDiff::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerdiff_sender_isbase) {
            qscilexerdiff_sender_isbase = false;
            return QsciLexerDiff::sender();
        } else if (qscilexerdiff_sender_callback != nullptr) {
            return qscilexerdiff_sender_callback();
        } else {
            return QsciLexerDiff::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerdiff_sendersignalindex_isbase) {
            qscilexerdiff_sendersignalindex_isbase = false;
            return QsciLexerDiff::senderSignalIndex();
        } else if (qscilexerdiff_sendersignalindex_callback != nullptr) {
            return qscilexerdiff_sendersignalindex_callback();
        } else {
            return QsciLexerDiff::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerdiff_receivers_isbase) {
            qscilexerdiff_receivers_isbase = false;
            return QsciLexerDiff::receivers(signal);
        } else if (qscilexerdiff_receivers_callback != nullptr) {
            return qscilexerdiff_receivers_callback(this, signal);
        } else {
            return QsciLexerDiff::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerdiff_issignalconnected_isbase) {
            qscilexerdiff_issignalconnected_isbase = false;
            return QsciLexerDiff::isSignalConnected(signal);
        } else if (qscilexerdiff_issignalconnected_callback != nullptr) {
            return qscilexerdiff_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerDiff::isSignalConnected(signal);
        }
    }
};

#endif
