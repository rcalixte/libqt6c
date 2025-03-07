#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERMARKDOWN_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERMARKDOWN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerMarkdown so that we can call protected methods
class VirtualQsciLexerMarkdown : public QsciLexerMarkdown {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerMarkdown_Metacall_Callback = int (*)(QsciLexerMarkdown*, QMetaObject::Call, int, void**);
    using QsciLexerMarkdown_Language_Callback = const char* (*)();
    using QsciLexerMarkdown_Lexer_Callback = const char* (*)();
    using QsciLexerMarkdown_LexerId_Callback = int (*)();
    using QsciLexerMarkdown_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerMarkdown_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerMarkdown_BlockEnd_Callback = const char* (*)(const QsciLexerMarkdown*, int*);
    using QsciLexerMarkdown_BlockLookback_Callback = int (*)();
    using QsciLexerMarkdown_BlockStart_Callback = const char* (*)(const QsciLexerMarkdown*, int*);
    using QsciLexerMarkdown_BlockStartKeyword_Callback = const char* (*)(const QsciLexerMarkdown*, int*);
    using QsciLexerMarkdown_BraceStyle_Callback = int (*)();
    using QsciLexerMarkdown_CaseSensitive_Callback = bool (*)();
    using QsciLexerMarkdown_Color_Callback = QColor (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_EolFill_Callback = bool (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_Font_Callback = QFont (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_IndentationGuideView_Callback = int (*)();
    using QsciLexerMarkdown_Keywords_Callback = const char* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultStyle_Callback = int (*)();
    using QsciLexerMarkdown_Description_Callback = QString (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_Paper_Callback = QColor (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultEolFill_Callback = bool (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_SetEditor_Callback = void (*)(QsciLexerMarkdown*, QsciScintilla*);
    using QsciLexerMarkdown_RefreshProperties_Callback = void (*)();
    using QsciLexerMarkdown_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerMarkdown_WordCharacters_Callback = const char* (*)();
    using QsciLexerMarkdown_SetAutoIndentStyle_Callback = void (*)(QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_SetColor_Callback = void (*)(QsciLexerMarkdown*, const QColor&, int);
    using QsciLexerMarkdown_SetEolFill_Callback = void (*)(QsciLexerMarkdown*, bool, int);
    using QsciLexerMarkdown_SetFont_Callback = void (*)(QsciLexerMarkdown*, const QFont&, int);
    using QsciLexerMarkdown_SetPaper_Callback = void (*)(QsciLexerMarkdown*, const QColor&, int);
    using QsciLexerMarkdown_ReadProperties_Callback = bool (*)(QsciLexerMarkdown*, QSettings&, const QString&);
    using QsciLexerMarkdown_WriteProperties_Callback = bool (*)(const QsciLexerMarkdown*, QSettings&, const QString&);
    using QsciLexerMarkdown_Event_Callback = bool (*)(QsciLexerMarkdown*, QEvent*);
    using QsciLexerMarkdown_EventFilter_Callback = bool (*)(QsciLexerMarkdown*, QObject*, QEvent*);
    using QsciLexerMarkdown_TimerEvent_Callback = void (*)(QsciLexerMarkdown*, QTimerEvent*);
    using QsciLexerMarkdown_ChildEvent_Callback = void (*)(QsciLexerMarkdown*, QChildEvent*);
    using QsciLexerMarkdown_CustomEvent_Callback = void (*)(QsciLexerMarkdown*, QEvent*);
    using QsciLexerMarkdown_ConnectNotify_Callback = void (*)(QsciLexerMarkdown*, const QMetaMethod&);
    using QsciLexerMarkdown_DisconnectNotify_Callback = void (*)(QsciLexerMarkdown*, const QMetaMethod&);
    using QsciLexerMarkdown_Sender_Callback = QObject* (*)();
    using QsciLexerMarkdown_SenderSignalIndex_Callback = int (*)();
    using QsciLexerMarkdown_Receivers_Callback = int (*)(const QsciLexerMarkdown*, const char*);
    using QsciLexerMarkdown_IsSignalConnected_Callback = bool (*)(const QsciLexerMarkdown*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerMarkdown_Metacall_Callback qscilexermarkdown_metacall_callback = nullptr;
    QsciLexerMarkdown_Language_Callback qscilexermarkdown_language_callback = nullptr;
    QsciLexerMarkdown_Lexer_Callback qscilexermarkdown_lexer_callback = nullptr;
    QsciLexerMarkdown_LexerId_Callback qscilexermarkdown_lexerid_callback = nullptr;
    QsciLexerMarkdown_AutoCompletionFillups_Callback qscilexermarkdown_autocompletionfillups_callback = nullptr;
    QsciLexerMarkdown_AutoCompletionWordSeparators_Callback qscilexermarkdown_autocompletionwordseparators_callback = nullptr;
    QsciLexerMarkdown_BlockEnd_Callback qscilexermarkdown_blockend_callback = nullptr;
    QsciLexerMarkdown_BlockLookback_Callback qscilexermarkdown_blocklookback_callback = nullptr;
    QsciLexerMarkdown_BlockStart_Callback qscilexermarkdown_blockstart_callback = nullptr;
    QsciLexerMarkdown_BlockStartKeyword_Callback qscilexermarkdown_blockstartkeyword_callback = nullptr;
    QsciLexerMarkdown_BraceStyle_Callback qscilexermarkdown_bracestyle_callback = nullptr;
    QsciLexerMarkdown_CaseSensitive_Callback qscilexermarkdown_casesensitive_callback = nullptr;
    QsciLexerMarkdown_Color_Callback qscilexermarkdown_color_callback = nullptr;
    QsciLexerMarkdown_EolFill_Callback qscilexermarkdown_eolfill_callback = nullptr;
    QsciLexerMarkdown_Font_Callback qscilexermarkdown_font_callback = nullptr;
    QsciLexerMarkdown_IndentationGuideView_Callback qscilexermarkdown_indentationguideview_callback = nullptr;
    QsciLexerMarkdown_Keywords_Callback qscilexermarkdown_keywords_callback = nullptr;
    QsciLexerMarkdown_DefaultStyle_Callback qscilexermarkdown_defaultstyle_callback = nullptr;
    QsciLexerMarkdown_Description_Callback qscilexermarkdown_description_callback = nullptr;
    QsciLexerMarkdown_Paper_Callback qscilexermarkdown_paper_callback = nullptr;
    QsciLexerMarkdown_DefaultColorWithStyle_Callback qscilexermarkdown_defaultcolorwithstyle_callback = nullptr;
    QsciLexerMarkdown_DefaultEolFill_Callback qscilexermarkdown_defaulteolfill_callback = nullptr;
    QsciLexerMarkdown_DefaultFontWithStyle_Callback qscilexermarkdown_defaultfontwithstyle_callback = nullptr;
    QsciLexerMarkdown_DefaultPaperWithStyle_Callback qscilexermarkdown_defaultpaperwithstyle_callback = nullptr;
    QsciLexerMarkdown_SetEditor_Callback qscilexermarkdown_seteditor_callback = nullptr;
    QsciLexerMarkdown_RefreshProperties_Callback qscilexermarkdown_refreshproperties_callback = nullptr;
    QsciLexerMarkdown_StyleBitsNeeded_Callback qscilexermarkdown_stylebitsneeded_callback = nullptr;
    QsciLexerMarkdown_WordCharacters_Callback qscilexermarkdown_wordcharacters_callback = nullptr;
    QsciLexerMarkdown_SetAutoIndentStyle_Callback qscilexermarkdown_setautoindentstyle_callback = nullptr;
    QsciLexerMarkdown_SetColor_Callback qscilexermarkdown_setcolor_callback = nullptr;
    QsciLexerMarkdown_SetEolFill_Callback qscilexermarkdown_seteolfill_callback = nullptr;
    QsciLexerMarkdown_SetFont_Callback qscilexermarkdown_setfont_callback = nullptr;
    QsciLexerMarkdown_SetPaper_Callback qscilexermarkdown_setpaper_callback = nullptr;
    QsciLexerMarkdown_ReadProperties_Callback qscilexermarkdown_readproperties_callback = nullptr;
    QsciLexerMarkdown_WriteProperties_Callback qscilexermarkdown_writeproperties_callback = nullptr;
    QsciLexerMarkdown_Event_Callback qscilexermarkdown_event_callback = nullptr;
    QsciLexerMarkdown_EventFilter_Callback qscilexermarkdown_eventfilter_callback = nullptr;
    QsciLexerMarkdown_TimerEvent_Callback qscilexermarkdown_timerevent_callback = nullptr;
    QsciLexerMarkdown_ChildEvent_Callback qscilexermarkdown_childevent_callback = nullptr;
    QsciLexerMarkdown_CustomEvent_Callback qscilexermarkdown_customevent_callback = nullptr;
    QsciLexerMarkdown_ConnectNotify_Callback qscilexermarkdown_connectnotify_callback = nullptr;
    QsciLexerMarkdown_DisconnectNotify_Callback qscilexermarkdown_disconnectnotify_callback = nullptr;
    QsciLexerMarkdown_Sender_Callback qscilexermarkdown_sender_callback = nullptr;
    QsciLexerMarkdown_SenderSignalIndex_Callback qscilexermarkdown_sendersignalindex_callback = nullptr;
    QsciLexerMarkdown_Receivers_Callback qscilexermarkdown_receivers_callback = nullptr;
    QsciLexerMarkdown_IsSignalConnected_Callback qscilexermarkdown_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexermarkdown_metacall_isbase = false;
    mutable bool qscilexermarkdown_language_isbase = false;
    mutable bool qscilexermarkdown_lexer_isbase = false;
    mutable bool qscilexermarkdown_lexerid_isbase = false;
    mutable bool qscilexermarkdown_autocompletionfillups_isbase = false;
    mutable bool qscilexermarkdown_autocompletionwordseparators_isbase = false;
    mutable bool qscilexermarkdown_blockend_isbase = false;
    mutable bool qscilexermarkdown_blocklookback_isbase = false;
    mutable bool qscilexermarkdown_blockstart_isbase = false;
    mutable bool qscilexermarkdown_blockstartkeyword_isbase = false;
    mutable bool qscilexermarkdown_bracestyle_isbase = false;
    mutable bool qscilexermarkdown_casesensitive_isbase = false;
    mutable bool qscilexermarkdown_color_isbase = false;
    mutable bool qscilexermarkdown_eolfill_isbase = false;
    mutable bool qscilexermarkdown_font_isbase = false;
    mutable bool qscilexermarkdown_indentationguideview_isbase = false;
    mutable bool qscilexermarkdown_keywords_isbase = false;
    mutable bool qscilexermarkdown_defaultstyle_isbase = false;
    mutable bool qscilexermarkdown_description_isbase = false;
    mutable bool qscilexermarkdown_paper_isbase = false;
    mutable bool qscilexermarkdown_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexermarkdown_defaulteolfill_isbase = false;
    mutable bool qscilexermarkdown_defaultfontwithstyle_isbase = false;
    mutable bool qscilexermarkdown_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexermarkdown_seteditor_isbase = false;
    mutable bool qscilexermarkdown_refreshproperties_isbase = false;
    mutable bool qscilexermarkdown_stylebitsneeded_isbase = false;
    mutable bool qscilexermarkdown_wordcharacters_isbase = false;
    mutable bool qscilexermarkdown_setautoindentstyle_isbase = false;
    mutable bool qscilexermarkdown_setcolor_isbase = false;
    mutable bool qscilexermarkdown_seteolfill_isbase = false;
    mutable bool qscilexermarkdown_setfont_isbase = false;
    mutable bool qscilexermarkdown_setpaper_isbase = false;
    mutable bool qscilexermarkdown_readproperties_isbase = false;
    mutable bool qscilexermarkdown_writeproperties_isbase = false;
    mutable bool qscilexermarkdown_event_isbase = false;
    mutable bool qscilexermarkdown_eventfilter_isbase = false;
    mutable bool qscilexermarkdown_timerevent_isbase = false;
    mutable bool qscilexermarkdown_childevent_isbase = false;
    mutable bool qscilexermarkdown_customevent_isbase = false;
    mutable bool qscilexermarkdown_connectnotify_isbase = false;
    mutable bool qscilexermarkdown_disconnectnotify_isbase = false;
    mutable bool qscilexermarkdown_sender_isbase = false;
    mutable bool qscilexermarkdown_sendersignalindex_isbase = false;
    mutable bool qscilexermarkdown_receivers_isbase = false;
    mutable bool qscilexermarkdown_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerMarkdown() : QsciLexerMarkdown(){};
    VirtualQsciLexerMarkdown(QObject* parent) : QsciLexerMarkdown(parent){};

    ~VirtualQsciLexerMarkdown() {
        qscilexermarkdown_metacall_callback = nullptr;
        qscilexermarkdown_language_callback = nullptr;
        qscilexermarkdown_lexer_callback = nullptr;
        qscilexermarkdown_lexerid_callback = nullptr;
        qscilexermarkdown_autocompletionfillups_callback = nullptr;
        qscilexermarkdown_autocompletionwordseparators_callback = nullptr;
        qscilexermarkdown_blockend_callback = nullptr;
        qscilexermarkdown_blocklookback_callback = nullptr;
        qscilexermarkdown_blockstart_callback = nullptr;
        qscilexermarkdown_blockstartkeyword_callback = nullptr;
        qscilexermarkdown_bracestyle_callback = nullptr;
        qscilexermarkdown_casesensitive_callback = nullptr;
        qscilexermarkdown_color_callback = nullptr;
        qscilexermarkdown_eolfill_callback = nullptr;
        qscilexermarkdown_font_callback = nullptr;
        qscilexermarkdown_indentationguideview_callback = nullptr;
        qscilexermarkdown_keywords_callback = nullptr;
        qscilexermarkdown_defaultstyle_callback = nullptr;
        qscilexermarkdown_description_callback = nullptr;
        qscilexermarkdown_paper_callback = nullptr;
        qscilexermarkdown_defaultcolorwithstyle_callback = nullptr;
        qscilexermarkdown_defaulteolfill_callback = nullptr;
        qscilexermarkdown_defaultfontwithstyle_callback = nullptr;
        qscilexermarkdown_defaultpaperwithstyle_callback = nullptr;
        qscilexermarkdown_seteditor_callback = nullptr;
        qscilexermarkdown_refreshproperties_callback = nullptr;
        qscilexermarkdown_stylebitsneeded_callback = nullptr;
        qscilexermarkdown_wordcharacters_callback = nullptr;
        qscilexermarkdown_setautoindentstyle_callback = nullptr;
        qscilexermarkdown_setcolor_callback = nullptr;
        qscilexermarkdown_seteolfill_callback = nullptr;
        qscilexermarkdown_setfont_callback = nullptr;
        qscilexermarkdown_setpaper_callback = nullptr;
        qscilexermarkdown_readproperties_callback = nullptr;
        qscilexermarkdown_writeproperties_callback = nullptr;
        qscilexermarkdown_event_callback = nullptr;
        qscilexermarkdown_eventfilter_callback = nullptr;
        qscilexermarkdown_timerevent_callback = nullptr;
        qscilexermarkdown_childevent_callback = nullptr;
        qscilexermarkdown_customevent_callback = nullptr;
        qscilexermarkdown_connectnotify_callback = nullptr;
        qscilexermarkdown_disconnectnotify_callback = nullptr;
        qscilexermarkdown_sender_callback = nullptr;
        qscilexermarkdown_sendersignalindex_callback = nullptr;
        qscilexermarkdown_receivers_callback = nullptr;
        qscilexermarkdown_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerMarkdown_Metacall_Callback(QsciLexerMarkdown_Metacall_Callback cb) { qscilexermarkdown_metacall_callback = cb; }
    void setQsciLexerMarkdown_Language_Callback(QsciLexerMarkdown_Language_Callback cb) { qscilexermarkdown_language_callback = cb; }
    void setQsciLexerMarkdown_Lexer_Callback(QsciLexerMarkdown_Lexer_Callback cb) { qscilexermarkdown_lexer_callback = cb; }
    void setQsciLexerMarkdown_LexerId_Callback(QsciLexerMarkdown_LexerId_Callback cb) { qscilexermarkdown_lexerid_callback = cb; }
    void setQsciLexerMarkdown_AutoCompletionFillups_Callback(QsciLexerMarkdown_AutoCompletionFillups_Callback cb) { qscilexermarkdown_autocompletionfillups_callback = cb; }
    void setQsciLexerMarkdown_AutoCompletionWordSeparators_Callback(QsciLexerMarkdown_AutoCompletionWordSeparators_Callback cb) { qscilexermarkdown_autocompletionwordseparators_callback = cb; }
    void setQsciLexerMarkdown_BlockEnd_Callback(QsciLexerMarkdown_BlockEnd_Callback cb) { qscilexermarkdown_blockend_callback = cb; }
    void setQsciLexerMarkdown_BlockLookback_Callback(QsciLexerMarkdown_BlockLookback_Callback cb) { qscilexermarkdown_blocklookback_callback = cb; }
    void setQsciLexerMarkdown_BlockStart_Callback(QsciLexerMarkdown_BlockStart_Callback cb) { qscilexermarkdown_blockstart_callback = cb; }
    void setQsciLexerMarkdown_BlockStartKeyword_Callback(QsciLexerMarkdown_BlockStartKeyword_Callback cb) { qscilexermarkdown_blockstartkeyword_callback = cb; }
    void setQsciLexerMarkdown_BraceStyle_Callback(QsciLexerMarkdown_BraceStyle_Callback cb) { qscilexermarkdown_bracestyle_callback = cb; }
    void setQsciLexerMarkdown_CaseSensitive_Callback(QsciLexerMarkdown_CaseSensitive_Callback cb) { qscilexermarkdown_casesensitive_callback = cb; }
    void setQsciLexerMarkdown_Color_Callback(QsciLexerMarkdown_Color_Callback cb) { qscilexermarkdown_color_callback = cb; }
    void setQsciLexerMarkdown_EolFill_Callback(QsciLexerMarkdown_EolFill_Callback cb) { qscilexermarkdown_eolfill_callback = cb; }
    void setQsciLexerMarkdown_Font_Callback(QsciLexerMarkdown_Font_Callback cb) { qscilexermarkdown_font_callback = cb; }
    void setQsciLexerMarkdown_IndentationGuideView_Callback(QsciLexerMarkdown_IndentationGuideView_Callback cb) { qscilexermarkdown_indentationguideview_callback = cb; }
    void setQsciLexerMarkdown_Keywords_Callback(QsciLexerMarkdown_Keywords_Callback cb) { qscilexermarkdown_keywords_callback = cb; }
    void setQsciLexerMarkdown_DefaultStyle_Callback(QsciLexerMarkdown_DefaultStyle_Callback cb) { qscilexermarkdown_defaultstyle_callback = cb; }
    void setQsciLexerMarkdown_Description_Callback(QsciLexerMarkdown_Description_Callback cb) { qscilexermarkdown_description_callback = cb; }
    void setQsciLexerMarkdown_Paper_Callback(QsciLexerMarkdown_Paper_Callback cb) { qscilexermarkdown_paper_callback = cb; }
    void setQsciLexerMarkdown_DefaultColorWithStyle_Callback(QsciLexerMarkdown_DefaultColorWithStyle_Callback cb) { qscilexermarkdown_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerMarkdown_DefaultEolFill_Callback(QsciLexerMarkdown_DefaultEolFill_Callback cb) { qscilexermarkdown_defaulteolfill_callback = cb; }
    void setQsciLexerMarkdown_DefaultFontWithStyle_Callback(QsciLexerMarkdown_DefaultFontWithStyle_Callback cb) { qscilexermarkdown_defaultfontwithstyle_callback = cb; }
    void setQsciLexerMarkdown_DefaultPaperWithStyle_Callback(QsciLexerMarkdown_DefaultPaperWithStyle_Callback cb) { qscilexermarkdown_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerMarkdown_SetEditor_Callback(QsciLexerMarkdown_SetEditor_Callback cb) { qscilexermarkdown_seteditor_callback = cb; }
    void setQsciLexerMarkdown_RefreshProperties_Callback(QsciLexerMarkdown_RefreshProperties_Callback cb) { qscilexermarkdown_refreshproperties_callback = cb; }
    void setQsciLexerMarkdown_StyleBitsNeeded_Callback(QsciLexerMarkdown_StyleBitsNeeded_Callback cb) { qscilexermarkdown_stylebitsneeded_callback = cb; }
    void setQsciLexerMarkdown_WordCharacters_Callback(QsciLexerMarkdown_WordCharacters_Callback cb) { qscilexermarkdown_wordcharacters_callback = cb; }
    void setQsciLexerMarkdown_SetAutoIndentStyle_Callback(QsciLexerMarkdown_SetAutoIndentStyle_Callback cb) { qscilexermarkdown_setautoindentstyle_callback = cb; }
    void setQsciLexerMarkdown_SetColor_Callback(QsciLexerMarkdown_SetColor_Callback cb) { qscilexermarkdown_setcolor_callback = cb; }
    void setQsciLexerMarkdown_SetEolFill_Callback(QsciLexerMarkdown_SetEolFill_Callback cb) { qscilexermarkdown_seteolfill_callback = cb; }
    void setQsciLexerMarkdown_SetFont_Callback(QsciLexerMarkdown_SetFont_Callback cb) { qscilexermarkdown_setfont_callback = cb; }
    void setQsciLexerMarkdown_SetPaper_Callback(QsciLexerMarkdown_SetPaper_Callback cb) { qscilexermarkdown_setpaper_callback = cb; }
    void setQsciLexerMarkdown_ReadProperties_Callback(QsciLexerMarkdown_ReadProperties_Callback cb) { qscilexermarkdown_readproperties_callback = cb; }
    void setQsciLexerMarkdown_WriteProperties_Callback(QsciLexerMarkdown_WriteProperties_Callback cb) { qscilexermarkdown_writeproperties_callback = cb; }
    void setQsciLexerMarkdown_Event_Callback(QsciLexerMarkdown_Event_Callback cb) { qscilexermarkdown_event_callback = cb; }
    void setQsciLexerMarkdown_EventFilter_Callback(QsciLexerMarkdown_EventFilter_Callback cb) { qscilexermarkdown_eventfilter_callback = cb; }
    void setQsciLexerMarkdown_TimerEvent_Callback(QsciLexerMarkdown_TimerEvent_Callback cb) { qscilexermarkdown_timerevent_callback = cb; }
    void setQsciLexerMarkdown_ChildEvent_Callback(QsciLexerMarkdown_ChildEvent_Callback cb) { qscilexermarkdown_childevent_callback = cb; }
    void setQsciLexerMarkdown_CustomEvent_Callback(QsciLexerMarkdown_CustomEvent_Callback cb) { qscilexermarkdown_customevent_callback = cb; }
    void setQsciLexerMarkdown_ConnectNotify_Callback(QsciLexerMarkdown_ConnectNotify_Callback cb) { qscilexermarkdown_connectnotify_callback = cb; }
    void setQsciLexerMarkdown_DisconnectNotify_Callback(QsciLexerMarkdown_DisconnectNotify_Callback cb) { qscilexermarkdown_disconnectnotify_callback = cb; }
    void setQsciLexerMarkdown_Sender_Callback(QsciLexerMarkdown_Sender_Callback cb) { qscilexermarkdown_sender_callback = cb; }
    void setQsciLexerMarkdown_SenderSignalIndex_Callback(QsciLexerMarkdown_SenderSignalIndex_Callback cb) { qscilexermarkdown_sendersignalindex_callback = cb; }
    void setQsciLexerMarkdown_Receivers_Callback(QsciLexerMarkdown_Receivers_Callback cb) { qscilexermarkdown_receivers_callback = cb; }
    void setQsciLexerMarkdown_IsSignalConnected_Callback(QsciLexerMarkdown_IsSignalConnected_Callback cb) { qscilexermarkdown_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerMarkdown_Metacall_IsBase(bool value) const { qscilexermarkdown_metacall_isbase = value; }
    void setQsciLexerMarkdown_Language_IsBase(bool value) const { qscilexermarkdown_language_isbase = value; }
    void setQsciLexerMarkdown_Lexer_IsBase(bool value) const { qscilexermarkdown_lexer_isbase = value; }
    void setQsciLexerMarkdown_LexerId_IsBase(bool value) const { qscilexermarkdown_lexerid_isbase = value; }
    void setQsciLexerMarkdown_AutoCompletionFillups_IsBase(bool value) const { qscilexermarkdown_autocompletionfillups_isbase = value; }
    void setQsciLexerMarkdown_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexermarkdown_autocompletionwordseparators_isbase = value; }
    void setQsciLexerMarkdown_BlockEnd_IsBase(bool value) const { qscilexermarkdown_blockend_isbase = value; }
    void setQsciLexerMarkdown_BlockLookback_IsBase(bool value) const { qscilexermarkdown_blocklookback_isbase = value; }
    void setQsciLexerMarkdown_BlockStart_IsBase(bool value) const { qscilexermarkdown_blockstart_isbase = value; }
    void setQsciLexerMarkdown_BlockStartKeyword_IsBase(bool value) const { qscilexermarkdown_blockstartkeyword_isbase = value; }
    void setQsciLexerMarkdown_BraceStyle_IsBase(bool value) const { qscilexermarkdown_bracestyle_isbase = value; }
    void setQsciLexerMarkdown_CaseSensitive_IsBase(bool value) const { qscilexermarkdown_casesensitive_isbase = value; }
    void setQsciLexerMarkdown_Color_IsBase(bool value) const { qscilexermarkdown_color_isbase = value; }
    void setQsciLexerMarkdown_EolFill_IsBase(bool value) const { qscilexermarkdown_eolfill_isbase = value; }
    void setQsciLexerMarkdown_Font_IsBase(bool value) const { qscilexermarkdown_font_isbase = value; }
    void setQsciLexerMarkdown_IndentationGuideView_IsBase(bool value) const { qscilexermarkdown_indentationguideview_isbase = value; }
    void setQsciLexerMarkdown_Keywords_IsBase(bool value) const { qscilexermarkdown_keywords_isbase = value; }
    void setQsciLexerMarkdown_DefaultStyle_IsBase(bool value) const { qscilexermarkdown_defaultstyle_isbase = value; }
    void setQsciLexerMarkdown_Description_IsBase(bool value) const { qscilexermarkdown_description_isbase = value; }
    void setQsciLexerMarkdown_Paper_IsBase(bool value) const { qscilexermarkdown_paper_isbase = value; }
    void setQsciLexerMarkdown_DefaultColorWithStyle_IsBase(bool value) const { qscilexermarkdown_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerMarkdown_DefaultEolFill_IsBase(bool value) const { qscilexermarkdown_defaulteolfill_isbase = value; }
    void setQsciLexerMarkdown_DefaultFontWithStyle_IsBase(bool value) const { qscilexermarkdown_defaultfontwithstyle_isbase = value; }
    void setQsciLexerMarkdown_DefaultPaperWithStyle_IsBase(bool value) const { qscilexermarkdown_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerMarkdown_SetEditor_IsBase(bool value) const { qscilexermarkdown_seteditor_isbase = value; }
    void setQsciLexerMarkdown_RefreshProperties_IsBase(bool value) const { qscilexermarkdown_refreshproperties_isbase = value; }
    void setQsciLexerMarkdown_StyleBitsNeeded_IsBase(bool value) const { qscilexermarkdown_stylebitsneeded_isbase = value; }
    void setQsciLexerMarkdown_WordCharacters_IsBase(bool value) const { qscilexermarkdown_wordcharacters_isbase = value; }
    void setQsciLexerMarkdown_SetAutoIndentStyle_IsBase(bool value) const { qscilexermarkdown_setautoindentstyle_isbase = value; }
    void setQsciLexerMarkdown_SetColor_IsBase(bool value) const { qscilexermarkdown_setcolor_isbase = value; }
    void setQsciLexerMarkdown_SetEolFill_IsBase(bool value) const { qscilexermarkdown_seteolfill_isbase = value; }
    void setQsciLexerMarkdown_SetFont_IsBase(bool value) const { qscilexermarkdown_setfont_isbase = value; }
    void setQsciLexerMarkdown_SetPaper_IsBase(bool value) const { qscilexermarkdown_setpaper_isbase = value; }
    void setQsciLexerMarkdown_ReadProperties_IsBase(bool value) const { qscilexermarkdown_readproperties_isbase = value; }
    void setQsciLexerMarkdown_WriteProperties_IsBase(bool value) const { qscilexermarkdown_writeproperties_isbase = value; }
    void setQsciLexerMarkdown_Event_IsBase(bool value) const { qscilexermarkdown_event_isbase = value; }
    void setQsciLexerMarkdown_EventFilter_IsBase(bool value) const { qscilexermarkdown_eventfilter_isbase = value; }
    void setQsciLexerMarkdown_TimerEvent_IsBase(bool value) const { qscilexermarkdown_timerevent_isbase = value; }
    void setQsciLexerMarkdown_ChildEvent_IsBase(bool value) const { qscilexermarkdown_childevent_isbase = value; }
    void setQsciLexerMarkdown_CustomEvent_IsBase(bool value) const { qscilexermarkdown_customevent_isbase = value; }
    void setQsciLexerMarkdown_ConnectNotify_IsBase(bool value) const { qscilexermarkdown_connectnotify_isbase = value; }
    void setQsciLexerMarkdown_DisconnectNotify_IsBase(bool value) const { qscilexermarkdown_disconnectnotify_isbase = value; }
    void setQsciLexerMarkdown_Sender_IsBase(bool value) const { qscilexermarkdown_sender_isbase = value; }
    void setQsciLexerMarkdown_SenderSignalIndex_IsBase(bool value) const { qscilexermarkdown_sendersignalindex_isbase = value; }
    void setQsciLexerMarkdown_Receivers_IsBase(bool value) const { qscilexermarkdown_receivers_isbase = value; }
    void setQsciLexerMarkdown_IsSignalConnected_IsBase(bool value) const { qscilexermarkdown_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexermarkdown_metacall_isbase) {
            qscilexermarkdown_metacall_isbase = false;
            return QsciLexerMarkdown::qt_metacall(param1, param2, param3);
        } else if (qscilexermarkdown_metacall_callback != nullptr) {
            return qscilexermarkdown_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerMarkdown::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexermarkdown_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexermarkdown_lexer_isbase) {
            qscilexermarkdown_lexer_isbase = false;
            return QsciLexerMarkdown::lexer();
        } else if (qscilexermarkdown_lexer_callback != nullptr) {
            return qscilexermarkdown_lexer_callback();
        } else {
            return QsciLexerMarkdown::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexermarkdown_lexerid_isbase) {
            qscilexermarkdown_lexerid_isbase = false;
            return QsciLexerMarkdown::lexerId();
        } else if (qscilexermarkdown_lexerid_callback != nullptr) {
            return qscilexermarkdown_lexerid_callback();
        } else {
            return QsciLexerMarkdown::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexermarkdown_autocompletionfillups_isbase) {
            qscilexermarkdown_autocompletionfillups_isbase = false;
            return QsciLexerMarkdown::autoCompletionFillups();
        } else if (qscilexermarkdown_autocompletionfillups_callback != nullptr) {
            return qscilexermarkdown_autocompletionfillups_callback();
        } else {
            return QsciLexerMarkdown::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexermarkdown_autocompletionwordseparators_isbase) {
            qscilexermarkdown_autocompletionwordseparators_isbase = false;
            return QsciLexerMarkdown::autoCompletionWordSeparators();
        } else if (qscilexermarkdown_autocompletionwordseparators_callback != nullptr) {
            return qscilexermarkdown_autocompletionwordseparators_callback();
        } else {
            return QsciLexerMarkdown::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexermarkdown_blockend_isbase) {
            qscilexermarkdown_blockend_isbase = false;
            return QsciLexerMarkdown::blockEnd(style);
        } else if (qscilexermarkdown_blockend_callback != nullptr) {
            return qscilexermarkdown_blockend_callback(this, style);
        } else {
            return QsciLexerMarkdown::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexermarkdown_blocklookback_isbase) {
            qscilexermarkdown_blocklookback_isbase = false;
            return QsciLexerMarkdown::blockLookback();
        } else if (qscilexermarkdown_blocklookback_callback != nullptr) {
            return qscilexermarkdown_blocklookback_callback();
        } else {
            return QsciLexerMarkdown::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexermarkdown_blockstart_isbase) {
            qscilexermarkdown_blockstart_isbase = false;
            return QsciLexerMarkdown::blockStart(style);
        } else if (qscilexermarkdown_blockstart_callback != nullptr) {
            return qscilexermarkdown_blockstart_callback(this, style);
        } else {
            return QsciLexerMarkdown::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexermarkdown_blockstartkeyword_isbase) {
            qscilexermarkdown_blockstartkeyword_isbase = false;
            return QsciLexerMarkdown::blockStartKeyword(style);
        } else if (qscilexermarkdown_blockstartkeyword_callback != nullptr) {
            return qscilexermarkdown_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerMarkdown::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexermarkdown_bracestyle_isbase) {
            qscilexermarkdown_bracestyle_isbase = false;
            return QsciLexerMarkdown::braceStyle();
        } else if (qscilexermarkdown_bracestyle_callback != nullptr) {
            return qscilexermarkdown_bracestyle_callback();
        } else {
            return QsciLexerMarkdown::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexermarkdown_casesensitive_isbase) {
            qscilexermarkdown_casesensitive_isbase = false;
            return QsciLexerMarkdown::caseSensitive();
        } else if (qscilexermarkdown_casesensitive_callback != nullptr) {
            return qscilexermarkdown_casesensitive_callback();
        } else {
            return QsciLexerMarkdown::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexermarkdown_color_isbase) {
            qscilexermarkdown_color_isbase = false;
            return QsciLexerMarkdown::color(style);
        } else if (qscilexermarkdown_color_callback != nullptr) {
            return qscilexermarkdown_color_callback(this, style);
        } else {
            return QsciLexerMarkdown::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexermarkdown_eolfill_isbase) {
            qscilexermarkdown_eolfill_isbase = false;
            return QsciLexerMarkdown::eolFill(style);
        } else if (qscilexermarkdown_eolfill_callback != nullptr) {
            return qscilexermarkdown_eolfill_callback(this, style);
        } else {
            return QsciLexerMarkdown::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexermarkdown_font_isbase) {
            qscilexermarkdown_font_isbase = false;
            return QsciLexerMarkdown::font(style);
        } else if (qscilexermarkdown_font_callback != nullptr) {
            return qscilexermarkdown_font_callback(this, style);
        } else {
            return QsciLexerMarkdown::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexermarkdown_indentationguideview_isbase) {
            qscilexermarkdown_indentationguideview_isbase = false;
            return QsciLexerMarkdown::indentationGuideView();
        } else if (qscilexermarkdown_indentationguideview_callback != nullptr) {
            return qscilexermarkdown_indentationguideview_callback();
        } else {
            return QsciLexerMarkdown::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexermarkdown_keywords_isbase) {
            qscilexermarkdown_keywords_isbase = false;
            return QsciLexerMarkdown::keywords(set);
        } else if (qscilexermarkdown_keywords_callback != nullptr) {
            return qscilexermarkdown_keywords_callback(this, set);
        } else {
            return QsciLexerMarkdown::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexermarkdown_defaultstyle_isbase) {
            qscilexermarkdown_defaultstyle_isbase = false;
            return QsciLexerMarkdown::defaultStyle();
        } else if (qscilexermarkdown_defaultstyle_callback != nullptr) {
            return qscilexermarkdown_defaultstyle_callback();
        } else {
            return QsciLexerMarkdown::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexermarkdown_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexermarkdown_paper_isbase) {
            qscilexermarkdown_paper_isbase = false;
            return QsciLexerMarkdown::paper(style);
        } else if (qscilexermarkdown_paper_callback != nullptr) {
            return qscilexermarkdown_paper_callback(this, style);
        } else {
            return QsciLexerMarkdown::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexermarkdown_defaultcolorwithstyle_isbase) {
            qscilexermarkdown_defaultcolorwithstyle_isbase = false;
            return QsciLexerMarkdown::defaultColor(style);
        } else if (qscilexermarkdown_defaultcolorwithstyle_callback != nullptr) {
            return qscilexermarkdown_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerMarkdown::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexermarkdown_defaulteolfill_isbase) {
            qscilexermarkdown_defaulteolfill_isbase = false;
            return QsciLexerMarkdown::defaultEolFill(style);
        } else if (qscilexermarkdown_defaulteolfill_callback != nullptr) {
            return qscilexermarkdown_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerMarkdown::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexermarkdown_defaultfontwithstyle_isbase) {
            qscilexermarkdown_defaultfontwithstyle_isbase = false;
            return QsciLexerMarkdown::defaultFont(style);
        } else if (qscilexermarkdown_defaultfontwithstyle_callback != nullptr) {
            return qscilexermarkdown_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerMarkdown::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexermarkdown_defaultpaperwithstyle_isbase) {
            qscilexermarkdown_defaultpaperwithstyle_isbase = false;
            return QsciLexerMarkdown::defaultPaper(style);
        } else if (qscilexermarkdown_defaultpaperwithstyle_callback != nullptr) {
            return qscilexermarkdown_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerMarkdown::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexermarkdown_seteditor_isbase) {
            qscilexermarkdown_seteditor_isbase = false;
            QsciLexerMarkdown::setEditor(editor);
        } else if (qscilexermarkdown_seteditor_callback != nullptr) {
            qscilexermarkdown_seteditor_callback(this, editor);
        } else {
            QsciLexerMarkdown::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexermarkdown_refreshproperties_isbase) {
            qscilexermarkdown_refreshproperties_isbase = false;
            QsciLexerMarkdown::refreshProperties();
        } else if (qscilexermarkdown_refreshproperties_callback != nullptr) {
            qscilexermarkdown_refreshproperties_callback();
        } else {
            QsciLexerMarkdown::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexermarkdown_stylebitsneeded_isbase) {
            qscilexermarkdown_stylebitsneeded_isbase = false;
            return QsciLexerMarkdown::styleBitsNeeded();
        } else if (qscilexermarkdown_stylebitsneeded_callback != nullptr) {
            return qscilexermarkdown_stylebitsneeded_callback();
        } else {
            return QsciLexerMarkdown::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexermarkdown_wordcharacters_isbase) {
            qscilexermarkdown_wordcharacters_isbase = false;
            return QsciLexerMarkdown::wordCharacters();
        } else if (qscilexermarkdown_wordcharacters_callback != nullptr) {
            return qscilexermarkdown_wordcharacters_callback();
        } else {
            return QsciLexerMarkdown::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexermarkdown_setautoindentstyle_isbase) {
            qscilexermarkdown_setautoindentstyle_isbase = false;
            QsciLexerMarkdown::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexermarkdown_setautoindentstyle_callback != nullptr) {
            qscilexermarkdown_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerMarkdown::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexermarkdown_setcolor_isbase) {
            qscilexermarkdown_setcolor_isbase = false;
            QsciLexerMarkdown::setColor(c, style);
        } else if (qscilexermarkdown_setcolor_callback != nullptr) {
            qscilexermarkdown_setcolor_callback(this, c, style);
        } else {
            QsciLexerMarkdown::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexermarkdown_seteolfill_isbase) {
            qscilexermarkdown_seteolfill_isbase = false;
            QsciLexerMarkdown::setEolFill(eoffill, style);
        } else if (qscilexermarkdown_seteolfill_callback != nullptr) {
            qscilexermarkdown_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerMarkdown::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexermarkdown_setfont_isbase) {
            qscilexermarkdown_setfont_isbase = false;
            QsciLexerMarkdown::setFont(f, style);
        } else if (qscilexermarkdown_setfont_callback != nullptr) {
            qscilexermarkdown_setfont_callback(this, f, style);
        } else {
            QsciLexerMarkdown::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexermarkdown_setpaper_isbase) {
            qscilexermarkdown_setpaper_isbase = false;
            QsciLexerMarkdown::setPaper(c, style);
        } else if (qscilexermarkdown_setpaper_callback != nullptr) {
            qscilexermarkdown_setpaper_callback(this, c, style);
        } else {
            QsciLexerMarkdown::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexermarkdown_readproperties_isbase) {
            qscilexermarkdown_readproperties_isbase = false;
            return QsciLexerMarkdown::readProperties(qs, prefix);
        } else if (qscilexermarkdown_readproperties_callback != nullptr) {
            return qscilexermarkdown_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerMarkdown::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexermarkdown_writeproperties_isbase) {
            qscilexermarkdown_writeproperties_isbase = false;
            return QsciLexerMarkdown::writeProperties(qs, prefix);
        } else if (qscilexermarkdown_writeproperties_callback != nullptr) {
            return qscilexermarkdown_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerMarkdown::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexermarkdown_event_isbase) {
            qscilexermarkdown_event_isbase = false;
            return QsciLexerMarkdown::event(event);
        } else if (qscilexermarkdown_event_callback != nullptr) {
            return qscilexermarkdown_event_callback(this, event);
        } else {
            return QsciLexerMarkdown::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexermarkdown_eventfilter_isbase) {
            qscilexermarkdown_eventfilter_isbase = false;
            return QsciLexerMarkdown::eventFilter(watched, event);
        } else if (qscilexermarkdown_eventfilter_callback != nullptr) {
            return qscilexermarkdown_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerMarkdown::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexermarkdown_timerevent_isbase) {
            qscilexermarkdown_timerevent_isbase = false;
            QsciLexerMarkdown::timerEvent(event);
        } else if (qscilexermarkdown_timerevent_callback != nullptr) {
            qscilexermarkdown_timerevent_callback(this, event);
        } else {
            QsciLexerMarkdown::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexermarkdown_childevent_isbase) {
            qscilexermarkdown_childevent_isbase = false;
            QsciLexerMarkdown::childEvent(event);
        } else if (qscilexermarkdown_childevent_callback != nullptr) {
            qscilexermarkdown_childevent_callback(this, event);
        } else {
            QsciLexerMarkdown::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexermarkdown_customevent_isbase) {
            qscilexermarkdown_customevent_isbase = false;
            QsciLexerMarkdown::customEvent(event);
        } else if (qscilexermarkdown_customevent_callback != nullptr) {
            qscilexermarkdown_customevent_callback(this, event);
        } else {
            QsciLexerMarkdown::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexermarkdown_connectnotify_isbase) {
            qscilexermarkdown_connectnotify_isbase = false;
            QsciLexerMarkdown::connectNotify(signal);
        } else if (qscilexermarkdown_connectnotify_callback != nullptr) {
            qscilexermarkdown_connectnotify_callback(this, signal);
        } else {
            QsciLexerMarkdown::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexermarkdown_disconnectnotify_isbase) {
            qscilexermarkdown_disconnectnotify_isbase = false;
            QsciLexerMarkdown::disconnectNotify(signal);
        } else if (qscilexermarkdown_disconnectnotify_callback != nullptr) {
            qscilexermarkdown_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerMarkdown::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexermarkdown_sender_isbase) {
            qscilexermarkdown_sender_isbase = false;
            return QsciLexerMarkdown::sender();
        } else if (qscilexermarkdown_sender_callback != nullptr) {
            return qscilexermarkdown_sender_callback();
        } else {
            return QsciLexerMarkdown::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexermarkdown_sendersignalindex_isbase) {
            qscilexermarkdown_sendersignalindex_isbase = false;
            return QsciLexerMarkdown::senderSignalIndex();
        } else if (qscilexermarkdown_sendersignalindex_callback != nullptr) {
            return qscilexermarkdown_sendersignalindex_callback();
        } else {
            return QsciLexerMarkdown::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexermarkdown_receivers_isbase) {
            qscilexermarkdown_receivers_isbase = false;
            return QsciLexerMarkdown::receivers(signal);
        } else if (qscilexermarkdown_receivers_callback != nullptr) {
            return qscilexermarkdown_receivers_callback(this, signal);
        } else {
            return QsciLexerMarkdown::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexermarkdown_issignalconnected_isbase) {
            qscilexermarkdown_issignalconnected_isbase = false;
            return QsciLexerMarkdown::isSignalConnected(signal);
        } else if (qscilexermarkdown_issignalconnected_callback != nullptr) {
            return qscilexermarkdown_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerMarkdown::isSignalConnected(signal);
        }
    }
};

#endif
