#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERRUBY_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERRUBY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerRuby so that we can call protected methods
class VirtualQsciLexerRuby : public QsciLexerRuby {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerRuby_Metacall_Callback = int (*)(QsciLexerRuby*, QMetaObject::Call, int, void**);
    using QsciLexerRuby_Language_Callback = const char* (*)();
    using QsciLexerRuby_Lexer_Callback = const char* (*)();
    using QsciLexerRuby_LexerId_Callback = int (*)();
    using QsciLexerRuby_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerRuby_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerRuby_BlockEnd_Callback = const char* (*)(const QsciLexerRuby*, int*);
    using QsciLexerRuby_BlockLookback_Callback = int (*)();
    using QsciLexerRuby_BlockStart_Callback = const char* (*)(const QsciLexerRuby*, int*);
    using QsciLexerRuby_BlockStartKeyword_Callback = const char* (*)(const QsciLexerRuby*, int*);
    using QsciLexerRuby_BraceStyle_Callback = int (*)();
    using QsciLexerRuby_CaseSensitive_Callback = bool (*)();
    using QsciLexerRuby_Color_Callback = QColor (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_EolFill_Callback = bool (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_Font_Callback = QFont (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_IndentationGuideView_Callback = int (*)();
    using QsciLexerRuby_Keywords_Callback = const char* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultStyle_Callback = int (*)();
    using QsciLexerRuby_Description_Callback = QString (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_Paper_Callback = QColor (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultEolFill_Callback = bool (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_SetEditor_Callback = void (*)(QsciLexerRuby*, QsciScintilla*);
    using QsciLexerRuby_RefreshProperties_Callback = void (*)();
    using QsciLexerRuby_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerRuby_WordCharacters_Callback = const char* (*)();
    using QsciLexerRuby_SetAutoIndentStyle_Callback = void (*)(QsciLexerRuby*, int);
    using QsciLexerRuby_SetColor_Callback = void (*)(QsciLexerRuby*, const QColor&, int);
    using QsciLexerRuby_SetEolFill_Callback = void (*)(QsciLexerRuby*, bool, int);
    using QsciLexerRuby_SetFont_Callback = void (*)(QsciLexerRuby*, const QFont&, int);
    using QsciLexerRuby_SetPaper_Callback = void (*)(QsciLexerRuby*, const QColor&, int);
    using QsciLexerRuby_ReadProperties_Callback = bool (*)(QsciLexerRuby*, QSettings&, const QString&);
    using QsciLexerRuby_WriteProperties_Callback = bool (*)(const QsciLexerRuby*, QSettings&, const QString&);
    using QsciLexerRuby_Event_Callback = bool (*)(QsciLexerRuby*, QEvent*);
    using QsciLexerRuby_EventFilter_Callback = bool (*)(QsciLexerRuby*, QObject*, QEvent*);
    using QsciLexerRuby_TimerEvent_Callback = void (*)(QsciLexerRuby*, QTimerEvent*);
    using QsciLexerRuby_ChildEvent_Callback = void (*)(QsciLexerRuby*, QChildEvent*);
    using QsciLexerRuby_CustomEvent_Callback = void (*)(QsciLexerRuby*, QEvent*);
    using QsciLexerRuby_ConnectNotify_Callback = void (*)(QsciLexerRuby*, const QMetaMethod&);
    using QsciLexerRuby_DisconnectNotify_Callback = void (*)(QsciLexerRuby*, const QMetaMethod&);
    using QsciLexerRuby_Sender_Callback = QObject* (*)();
    using QsciLexerRuby_SenderSignalIndex_Callback = int (*)();
    using QsciLexerRuby_Receivers_Callback = int (*)(const QsciLexerRuby*, const char*);
    using QsciLexerRuby_IsSignalConnected_Callback = bool (*)(const QsciLexerRuby*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerRuby_Metacall_Callback qscilexerruby_metacall_callback = nullptr;
    QsciLexerRuby_Language_Callback qscilexerruby_language_callback = nullptr;
    QsciLexerRuby_Lexer_Callback qscilexerruby_lexer_callback = nullptr;
    QsciLexerRuby_LexerId_Callback qscilexerruby_lexerid_callback = nullptr;
    QsciLexerRuby_AutoCompletionFillups_Callback qscilexerruby_autocompletionfillups_callback = nullptr;
    QsciLexerRuby_AutoCompletionWordSeparators_Callback qscilexerruby_autocompletionwordseparators_callback = nullptr;
    QsciLexerRuby_BlockEnd_Callback qscilexerruby_blockend_callback = nullptr;
    QsciLexerRuby_BlockLookback_Callback qscilexerruby_blocklookback_callback = nullptr;
    QsciLexerRuby_BlockStart_Callback qscilexerruby_blockstart_callback = nullptr;
    QsciLexerRuby_BlockStartKeyword_Callback qscilexerruby_blockstartkeyword_callback = nullptr;
    QsciLexerRuby_BraceStyle_Callback qscilexerruby_bracestyle_callback = nullptr;
    QsciLexerRuby_CaseSensitive_Callback qscilexerruby_casesensitive_callback = nullptr;
    QsciLexerRuby_Color_Callback qscilexerruby_color_callback = nullptr;
    QsciLexerRuby_EolFill_Callback qscilexerruby_eolfill_callback = nullptr;
    QsciLexerRuby_Font_Callback qscilexerruby_font_callback = nullptr;
    QsciLexerRuby_IndentationGuideView_Callback qscilexerruby_indentationguideview_callback = nullptr;
    QsciLexerRuby_Keywords_Callback qscilexerruby_keywords_callback = nullptr;
    QsciLexerRuby_DefaultStyle_Callback qscilexerruby_defaultstyle_callback = nullptr;
    QsciLexerRuby_Description_Callback qscilexerruby_description_callback = nullptr;
    QsciLexerRuby_Paper_Callback qscilexerruby_paper_callback = nullptr;
    QsciLexerRuby_DefaultColorWithStyle_Callback qscilexerruby_defaultcolorwithstyle_callback = nullptr;
    QsciLexerRuby_DefaultEolFill_Callback qscilexerruby_defaulteolfill_callback = nullptr;
    QsciLexerRuby_DefaultFontWithStyle_Callback qscilexerruby_defaultfontwithstyle_callback = nullptr;
    QsciLexerRuby_DefaultPaperWithStyle_Callback qscilexerruby_defaultpaperwithstyle_callback = nullptr;
    QsciLexerRuby_SetEditor_Callback qscilexerruby_seteditor_callback = nullptr;
    QsciLexerRuby_RefreshProperties_Callback qscilexerruby_refreshproperties_callback = nullptr;
    QsciLexerRuby_StyleBitsNeeded_Callback qscilexerruby_stylebitsneeded_callback = nullptr;
    QsciLexerRuby_WordCharacters_Callback qscilexerruby_wordcharacters_callback = nullptr;
    QsciLexerRuby_SetAutoIndentStyle_Callback qscilexerruby_setautoindentstyle_callback = nullptr;
    QsciLexerRuby_SetColor_Callback qscilexerruby_setcolor_callback = nullptr;
    QsciLexerRuby_SetEolFill_Callback qscilexerruby_seteolfill_callback = nullptr;
    QsciLexerRuby_SetFont_Callback qscilexerruby_setfont_callback = nullptr;
    QsciLexerRuby_SetPaper_Callback qscilexerruby_setpaper_callback = nullptr;
    QsciLexerRuby_ReadProperties_Callback qscilexerruby_readproperties_callback = nullptr;
    QsciLexerRuby_WriteProperties_Callback qscilexerruby_writeproperties_callback = nullptr;
    QsciLexerRuby_Event_Callback qscilexerruby_event_callback = nullptr;
    QsciLexerRuby_EventFilter_Callback qscilexerruby_eventfilter_callback = nullptr;
    QsciLexerRuby_TimerEvent_Callback qscilexerruby_timerevent_callback = nullptr;
    QsciLexerRuby_ChildEvent_Callback qscilexerruby_childevent_callback = nullptr;
    QsciLexerRuby_CustomEvent_Callback qscilexerruby_customevent_callback = nullptr;
    QsciLexerRuby_ConnectNotify_Callback qscilexerruby_connectnotify_callback = nullptr;
    QsciLexerRuby_DisconnectNotify_Callback qscilexerruby_disconnectnotify_callback = nullptr;
    QsciLexerRuby_Sender_Callback qscilexerruby_sender_callback = nullptr;
    QsciLexerRuby_SenderSignalIndex_Callback qscilexerruby_sendersignalindex_callback = nullptr;
    QsciLexerRuby_Receivers_Callback qscilexerruby_receivers_callback = nullptr;
    QsciLexerRuby_IsSignalConnected_Callback qscilexerruby_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerruby_metacall_isbase = false;
    mutable bool qscilexerruby_language_isbase = false;
    mutable bool qscilexerruby_lexer_isbase = false;
    mutable bool qscilexerruby_lexerid_isbase = false;
    mutable bool qscilexerruby_autocompletionfillups_isbase = false;
    mutable bool qscilexerruby_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerruby_blockend_isbase = false;
    mutable bool qscilexerruby_blocklookback_isbase = false;
    mutable bool qscilexerruby_blockstart_isbase = false;
    mutable bool qscilexerruby_blockstartkeyword_isbase = false;
    mutable bool qscilexerruby_bracestyle_isbase = false;
    mutable bool qscilexerruby_casesensitive_isbase = false;
    mutable bool qscilexerruby_color_isbase = false;
    mutable bool qscilexerruby_eolfill_isbase = false;
    mutable bool qscilexerruby_font_isbase = false;
    mutable bool qscilexerruby_indentationguideview_isbase = false;
    mutable bool qscilexerruby_keywords_isbase = false;
    mutable bool qscilexerruby_defaultstyle_isbase = false;
    mutable bool qscilexerruby_description_isbase = false;
    mutable bool qscilexerruby_paper_isbase = false;
    mutable bool qscilexerruby_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerruby_defaulteolfill_isbase = false;
    mutable bool qscilexerruby_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerruby_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerruby_seteditor_isbase = false;
    mutable bool qscilexerruby_refreshproperties_isbase = false;
    mutable bool qscilexerruby_stylebitsneeded_isbase = false;
    mutable bool qscilexerruby_wordcharacters_isbase = false;
    mutable bool qscilexerruby_setautoindentstyle_isbase = false;
    mutable bool qscilexerruby_setcolor_isbase = false;
    mutable bool qscilexerruby_seteolfill_isbase = false;
    mutable bool qscilexerruby_setfont_isbase = false;
    mutable bool qscilexerruby_setpaper_isbase = false;
    mutable bool qscilexerruby_readproperties_isbase = false;
    mutable bool qscilexerruby_writeproperties_isbase = false;
    mutable bool qscilexerruby_event_isbase = false;
    mutable bool qscilexerruby_eventfilter_isbase = false;
    mutable bool qscilexerruby_timerevent_isbase = false;
    mutable bool qscilexerruby_childevent_isbase = false;
    mutable bool qscilexerruby_customevent_isbase = false;
    mutable bool qscilexerruby_connectnotify_isbase = false;
    mutable bool qscilexerruby_disconnectnotify_isbase = false;
    mutable bool qscilexerruby_sender_isbase = false;
    mutable bool qscilexerruby_sendersignalindex_isbase = false;
    mutable bool qscilexerruby_receivers_isbase = false;
    mutable bool qscilexerruby_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerRuby() : QsciLexerRuby(){};
    VirtualQsciLexerRuby(QObject* parent) : QsciLexerRuby(parent){};

    ~VirtualQsciLexerRuby() {
        qscilexerruby_metacall_callback = nullptr;
        qscilexerruby_language_callback = nullptr;
        qscilexerruby_lexer_callback = nullptr;
        qscilexerruby_lexerid_callback = nullptr;
        qscilexerruby_autocompletionfillups_callback = nullptr;
        qscilexerruby_autocompletionwordseparators_callback = nullptr;
        qscilexerruby_blockend_callback = nullptr;
        qscilexerruby_blocklookback_callback = nullptr;
        qscilexerruby_blockstart_callback = nullptr;
        qscilexerruby_blockstartkeyword_callback = nullptr;
        qscilexerruby_bracestyle_callback = nullptr;
        qscilexerruby_casesensitive_callback = nullptr;
        qscilexerruby_color_callback = nullptr;
        qscilexerruby_eolfill_callback = nullptr;
        qscilexerruby_font_callback = nullptr;
        qscilexerruby_indentationguideview_callback = nullptr;
        qscilexerruby_keywords_callback = nullptr;
        qscilexerruby_defaultstyle_callback = nullptr;
        qscilexerruby_description_callback = nullptr;
        qscilexerruby_paper_callback = nullptr;
        qscilexerruby_defaultcolorwithstyle_callback = nullptr;
        qscilexerruby_defaulteolfill_callback = nullptr;
        qscilexerruby_defaultfontwithstyle_callback = nullptr;
        qscilexerruby_defaultpaperwithstyle_callback = nullptr;
        qscilexerruby_seteditor_callback = nullptr;
        qscilexerruby_refreshproperties_callback = nullptr;
        qscilexerruby_stylebitsneeded_callback = nullptr;
        qscilexerruby_wordcharacters_callback = nullptr;
        qscilexerruby_setautoindentstyle_callback = nullptr;
        qscilexerruby_setcolor_callback = nullptr;
        qscilexerruby_seteolfill_callback = nullptr;
        qscilexerruby_setfont_callback = nullptr;
        qscilexerruby_setpaper_callback = nullptr;
        qscilexerruby_readproperties_callback = nullptr;
        qscilexerruby_writeproperties_callback = nullptr;
        qscilexerruby_event_callback = nullptr;
        qscilexerruby_eventfilter_callback = nullptr;
        qscilexerruby_timerevent_callback = nullptr;
        qscilexerruby_childevent_callback = nullptr;
        qscilexerruby_customevent_callback = nullptr;
        qscilexerruby_connectnotify_callback = nullptr;
        qscilexerruby_disconnectnotify_callback = nullptr;
        qscilexerruby_sender_callback = nullptr;
        qscilexerruby_sendersignalindex_callback = nullptr;
        qscilexerruby_receivers_callback = nullptr;
        qscilexerruby_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerRuby_Metacall_Callback(QsciLexerRuby_Metacall_Callback cb) { qscilexerruby_metacall_callback = cb; }
    void setQsciLexerRuby_Language_Callback(QsciLexerRuby_Language_Callback cb) { qscilexerruby_language_callback = cb; }
    void setQsciLexerRuby_Lexer_Callback(QsciLexerRuby_Lexer_Callback cb) { qscilexerruby_lexer_callback = cb; }
    void setQsciLexerRuby_LexerId_Callback(QsciLexerRuby_LexerId_Callback cb) { qscilexerruby_lexerid_callback = cb; }
    void setQsciLexerRuby_AutoCompletionFillups_Callback(QsciLexerRuby_AutoCompletionFillups_Callback cb) { qscilexerruby_autocompletionfillups_callback = cb; }
    void setQsciLexerRuby_AutoCompletionWordSeparators_Callback(QsciLexerRuby_AutoCompletionWordSeparators_Callback cb) { qscilexerruby_autocompletionwordseparators_callback = cb; }
    void setQsciLexerRuby_BlockEnd_Callback(QsciLexerRuby_BlockEnd_Callback cb) { qscilexerruby_blockend_callback = cb; }
    void setQsciLexerRuby_BlockLookback_Callback(QsciLexerRuby_BlockLookback_Callback cb) { qscilexerruby_blocklookback_callback = cb; }
    void setQsciLexerRuby_BlockStart_Callback(QsciLexerRuby_BlockStart_Callback cb) { qscilexerruby_blockstart_callback = cb; }
    void setQsciLexerRuby_BlockStartKeyword_Callback(QsciLexerRuby_BlockStartKeyword_Callback cb) { qscilexerruby_blockstartkeyword_callback = cb; }
    void setQsciLexerRuby_BraceStyle_Callback(QsciLexerRuby_BraceStyle_Callback cb) { qscilexerruby_bracestyle_callback = cb; }
    void setQsciLexerRuby_CaseSensitive_Callback(QsciLexerRuby_CaseSensitive_Callback cb) { qscilexerruby_casesensitive_callback = cb; }
    void setQsciLexerRuby_Color_Callback(QsciLexerRuby_Color_Callback cb) { qscilexerruby_color_callback = cb; }
    void setQsciLexerRuby_EolFill_Callback(QsciLexerRuby_EolFill_Callback cb) { qscilexerruby_eolfill_callback = cb; }
    void setQsciLexerRuby_Font_Callback(QsciLexerRuby_Font_Callback cb) { qscilexerruby_font_callback = cb; }
    void setQsciLexerRuby_IndentationGuideView_Callback(QsciLexerRuby_IndentationGuideView_Callback cb) { qscilexerruby_indentationguideview_callback = cb; }
    void setQsciLexerRuby_Keywords_Callback(QsciLexerRuby_Keywords_Callback cb) { qscilexerruby_keywords_callback = cb; }
    void setQsciLexerRuby_DefaultStyle_Callback(QsciLexerRuby_DefaultStyle_Callback cb) { qscilexerruby_defaultstyle_callback = cb; }
    void setQsciLexerRuby_Description_Callback(QsciLexerRuby_Description_Callback cb) { qscilexerruby_description_callback = cb; }
    void setQsciLexerRuby_Paper_Callback(QsciLexerRuby_Paper_Callback cb) { qscilexerruby_paper_callback = cb; }
    void setQsciLexerRuby_DefaultColorWithStyle_Callback(QsciLexerRuby_DefaultColorWithStyle_Callback cb) { qscilexerruby_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerRuby_DefaultEolFill_Callback(QsciLexerRuby_DefaultEolFill_Callback cb) { qscilexerruby_defaulteolfill_callback = cb; }
    void setQsciLexerRuby_DefaultFontWithStyle_Callback(QsciLexerRuby_DefaultFontWithStyle_Callback cb) { qscilexerruby_defaultfontwithstyle_callback = cb; }
    void setQsciLexerRuby_DefaultPaperWithStyle_Callback(QsciLexerRuby_DefaultPaperWithStyle_Callback cb) { qscilexerruby_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerRuby_SetEditor_Callback(QsciLexerRuby_SetEditor_Callback cb) { qscilexerruby_seteditor_callback = cb; }
    void setQsciLexerRuby_RefreshProperties_Callback(QsciLexerRuby_RefreshProperties_Callback cb) { qscilexerruby_refreshproperties_callback = cb; }
    void setQsciLexerRuby_StyleBitsNeeded_Callback(QsciLexerRuby_StyleBitsNeeded_Callback cb) { qscilexerruby_stylebitsneeded_callback = cb; }
    void setQsciLexerRuby_WordCharacters_Callback(QsciLexerRuby_WordCharacters_Callback cb) { qscilexerruby_wordcharacters_callback = cb; }
    void setQsciLexerRuby_SetAutoIndentStyle_Callback(QsciLexerRuby_SetAutoIndentStyle_Callback cb) { qscilexerruby_setautoindentstyle_callback = cb; }
    void setQsciLexerRuby_SetColor_Callback(QsciLexerRuby_SetColor_Callback cb) { qscilexerruby_setcolor_callback = cb; }
    void setQsciLexerRuby_SetEolFill_Callback(QsciLexerRuby_SetEolFill_Callback cb) { qscilexerruby_seteolfill_callback = cb; }
    void setQsciLexerRuby_SetFont_Callback(QsciLexerRuby_SetFont_Callback cb) { qscilexerruby_setfont_callback = cb; }
    void setQsciLexerRuby_SetPaper_Callback(QsciLexerRuby_SetPaper_Callback cb) { qscilexerruby_setpaper_callback = cb; }
    void setQsciLexerRuby_ReadProperties_Callback(QsciLexerRuby_ReadProperties_Callback cb) { qscilexerruby_readproperties_callback = cb; }
    void setQsciLexerRuby_WriteProperties_Callback(QsciLexerRuby_WriteProperties_Callback cb) { qscilexerruby_writeproperties_callback = cb; }
    void setQsciLexerRuby_Event_Callback(QsciLexerRuby_Event_Callback cb) { qscilexerruby_event_callback = cb; }
    void setQsciLexerRuby_EventFilter_Callback(QsciLexerRuby_EventFilter_Callback cb) { qscilexerruby_eventfilter_callback = cb; }
    void setQsciLexerRuby_TimerEvent_Callback(QsciLexerRuby_TimerEvent_Callback cb) { qscilexerruby_timerevent_callback = cb; }
    void setQsciLexerRuby_ChildEvent_Callback(QsciLexerRuby_ChildEvent_Callback cb) { qscilexerruby_childevent_callback = cb; }
    void setQsciLexerRuby_CustomEvent_Callback(QsciLexerRuby_CustomEvent_Callback cb) { qscilexerruby_customevent_callback = cb; }
    void setQsciLexerRuby_ConnectNotify_Callback(QsciLexerRuby_ConnectNotify_Callback cb) { qscilexerruby_connectnotify_callback = cb; }
    void setQsciLexerRuby_DisconnectNotify_Callback(QsciLexerRuby_DisconnectNotify_Callback cb) { qscilexerruby_disconnectnotify_callback = cb; }
    void setQsciLexerRuby_Sender_Callback(QsciLexerRuby_Sender_Callback cb) { qscilexerruby_sender_callback = cb; }
    void setQsciLexerRuby_SenderSignalIndex_Callback(QsciLexerRuby_SenderSignalIndex_Callback cb) { qscilexerruby_sendersignalindex_callback = cb; }
    void setQsciLexerRuby_Receivers_Callback(QsciLexerRuby_Receivers_Callback cb) { qscilexerruby_receivers_callback = cb; }
    void setQsciLexerRuby_IsSignalConnected_Callback(QsciLexerRuby_IsSignalConnected_Callback cb) { qscilexerruby_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerRuby_Metacall_IsBase(bool value) const { qscilexerruby_metacall_isbase = value; }
    void setQsciLexerRuby_Language_IsBase(bool value) const { qscilexerruby_language_isbase = value; }
    void setQsciLexerRuby_Lexer_IsBase(bool value) const { qscilexerruby_lexer_isbase = value; }
    void setQsciLexerRuby_LexerId_IsBase(bool value) const { qscilexerruby_lexerid_isbase = value; }
    void setQsciLexerRuby_AutoCompletionFillups_IsBase(bool value) const { qscilexerruby_autocompletionfillups_isbase = value; }
    void setQsciLexerRuby_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerruby_autocompletionwordseparators_isbase = value; }
    void setQsciLexerRuby_BlockEnd_IsBase(bool value) const { qscilexerruby_blockend_isbase = value; }
    void setQsciLexerRuby_BlockLookback_IsBase(bool value) const { qscilexerruby_blocklookback_isbase = value; }
    void setQsciLexerRuby_BlockStart_IsBase(bool value) const { qscilexerruby_blockstart_isbase = value; }
    void setQsciLexerRuby_BlockStartKeyword_IsBase(bool value) const { qscilexerruby_blockstartkeyword_isbase = value; }
    void setQsciLexerRuby_BraceStyle_IsBase(bool value) const { qscilexerruby_bracestyle_isbase = value; }
    void setQsciLexerRuby_CaseSensitive_IsBase(bool value) const { qscilexerruby_casesensitive_isbase = value; }
    void setQsciLexerRuby_Color_IsBase(bool value) const { qscilexerruby_color_isbase = value; }
    void setQsciLexerRuby_EolFill_IsBase(bool value) const { qscilexerruby_eolfill_isbase = value; }
    void setQsciLexerRuby_Font_IsBase(bool value) const { qscilexerruby_font_isbase = value; }
    void setQsciLexerRuby_IndentationGuideView_IsBase(bool value) const { qscilexerruby_indentationguideview_isbase = value; }
    void setQsciLexerRuby_Keywords_IsBase(bool value) const { qscilexerruby_keywords_isbase = value; }
    void setQsciLexerRuby_DefaultStyle_IsBase(bool value) const { qscilexerruby_defaultstyle_isbase = value; }
    void setQsciLexerRuby_Description_IsBase(bool value) const { qscilexerruby_description_isbase = value; }
    void setQsciLexerRuby_Paper_IsBase(bool value) const { qscilexerruby_paper_isbase = value; }
    void setQsciLexerRuby_DefaultColorWithStyle_IsBase(bool value) const { qscilexerruby_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerRuby_DefaultEolFill_IsBase(bool value) const { qscilexerruby_defaulteolfill_isbase = value; }
    void setQsciLexerRuby_DefaultFontWithStyle_IsBase(bool value) const { qscilexerruby_defaultfontwithstyle_isbase = value; }
    void setQsciLexerRuby_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerruby_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerRuby_SetEditor_IsBase(bool value) const { qscilexerruby_seteditor_isbase = value; }
    void setQsciLexerRuby_RefreshProperties_IsBase(bool value) const { qscilexerruby_refreshproperties_isbase = value; }
    void setQsciLexerRuby_StyleBitsNeeded_IsBase(bool value) const { qscilexerruby_stylebitsneeded_isbase = value; }
    void setQsciLexerRuby_WordCharacters_IsBase(bool value) const { qscilexerruby_wordcharacters_isbase = value; }
    void setQsciLexerRuby_SetAutoIndentStyle_IsBase(bool value) const { qscilexerruby_setautoindentstyle_isbase = value; }
    void setQsciLexerRuby_SetColor_IsBase(bool value) const { qscilexerruby_setcolor_isbase = value; }
    void setQsciLexerRuby_SetEolFill_IsBase(bool value) const { qscilexerruby_seteolfill_isbase = value; }
    void setQsciLexerRuby_SetFont_IsBase(bool value) const { qscilexerruby_setfont_isbase = value; }
    void setQsciLexerRuby_SetPaper_IsBase(bool value) const { qscilexerruby_setpaper_isbase = value; }
    void setQsciLexerRuby_ReadProperties_IsBase(bool value) const { qscilexerruby_readproperties_isbase = value; }
    void setQsciLexerRuby_WriteProperties_IsBase(bool value) const { qscilexerruby_writeproperties_isbase = value; }
    void setQsciLexerRuby_Event_IsBase(bool value) const { qscilexerruby_event_isbase = value; }
    void setQsciLexerRuby_EventFilter_IsBase(bool value) const { qscilexerruby_eventfilter_isbase = value; }
    void setQsciLexerRuby_TimerEvent_IsBase(bool value) const { qscilexerruby_timerevent_isbase = value; }
    void setQsciLexerRuby_ChildEvent_IsBase(bool value) const { qscilexerruby_childevent_isbase = value; }
    void setQsciLexerRuby_CustomEvent_IsBase(bool value) const { qscilexerruby_customevent_isbase = value; }
    void setQsciLexerRuby_ConnectNotify_IsBase(bool value) const { qscilexerruby_connectnotify_isbase = value; }
    void setQsciLexerRuby_DisconnectNotify_IsBase(bool value) const { qscilexerruby_disconnectnotify_isbase = value; }
    void setQsciLexerRuby_Sender_IsBase(bool value) const { qscilexerruby_sender_isbase = value; }
    void setQsciLexerRuby_SenderSignalIndex_IsBase(bool value) const { qscilexerruby_sendersignalindex_isbase = value; }
    void setQsciLexerRuby_Receivers_IsBase(bool value) const { qscilexerruby_receivers_isbase = value; }
    void setQsciLexerRuby_IsSignalConnected_IsBase(bool value) const { qscilexerruby_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerruby_metacall_isbase) {
            qscilexerruby_metacall_isbase = false;
            return QsciLexerRuby::qt_metacall(param1, param2, param3);
        } else if (qscilexerruby_metacall_callback != nullptr) {
            return qscilexerruby_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerRuby::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerruby_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerruby_lexer_isbase) {
            qscilexerruby_lexer_isbase = false;
            return QsciLexerRuby::lexer();
        } else if (qscilexerruby_lexer_callback != nullptr) {
            return qscilexerruby_lexer_callback();
        } else {
            return QsciLexerRuby::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerruby_lexerid_isbase) {
            qscilexerruby_lexerid_isbase = false;
            return QsciLexerRuby::lexerId();
        } else if (qscilexerruby_lexerid_callback != nullptr) {
            return qscilexerruby_lexerid_callback();
        } else {
            return QsciLexerRuby::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerruby_autocompletionfillups_isbase) {
            qscilexerruby_autocompletionfillups_isbase = false;
            return QsciLexerRuby::autoCompletionFillups();
        } else if (qscilexerruby_autocompletionfillups_callback != nullptr) {
            return qscilexerruby_autocompletionfillups_callback();
        } else {
            return QsciLexerRuby::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerruby_autocompletionwordseparators_isbase) {
            qscilexerruby_autocompletionwordseparators_isbase = false;
            return QsciLexerRuby::autoCompletionWordSeparators();
        } else if (qscilexerruby_autocompletionwordseparators_callback != nullptr) {
            return qscilexerruby_autocompletionwordseparators_callback();
        } else {
            return QsciLexerRuby::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerruby_blockend_isbase) {
            qscilexerruby_blockend_isbase = false;
            return QsciLexerRuby::blockEnd(style);
        } else if (qscilexerruby_blockend_callback != nullptr) {
            return qscilexerruby_blockend_callback(this, style);
        } else {
            return QsciLexerRuby::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerruby_blocklookback_isbase) {
            qscilexerruby_blocklookback_isbase = false;
            return QsciLexerRuby::blockLookback();
        } else if (qscilexerruby_blocklookback_callback != nullptr) {
            return qscilexerruby_blocklookback_callback();
        } else {
            return QsciLexerRuby::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerruby_blockstart_isbase) {
            qscilexerruby_blockstart_isbase = false;
            return QsciLexerRuby::blockStart(style);
        } else if (qscilexerruby_blockstart_callback != nullptr) {
            return qscilexerruby_blockstart_callback(this, style);
        } else {
            return QsciLexerRuby::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerruby_blockstartkeyword_isbase) {
            qscilexerruby_blockstartkeyword_isbase = false;
            return QsciLexerRuby::blockStartKeyword(style);
        } else if (qscilexerruby_blockstartkeyword_callback != nullptr) {
            return qscilexerruby_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerRuby::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerruby_bracestyle_isbase) {
            qscilexerruby_bracestyle_isbase = false;
            return QsciLexerRuby::braceStyle();
        } else if (qscilexerruby_bracestyle_callback != nullptr) {
            return qscilexerruby_bracestyle_callback();
        } else {
            return QsciLexerRuby::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerruby_casesensitive_isbase) {
            qscilexerruby_casesensitive_isbase = false;
            return QsciLexerRuby::caseSensitive();
        } else if (qscilexerruby_casesensitive_callback != nullptr) {
            return qscilexerruby_casesensitive_callback();
        } else {
            return QsciLexerRuby::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerruby_color_isbase) {
            qscilexerruby_color_isbase = false;
            return QsciLexerRuby::color(style);
        } else if (qscilexerruby_color_callback != nullptr) {
            return qscilexerruby_color_callback(this, style);
        } else {
            return QsciLexerRuby::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerruby_eolfill_isbase) {
            qscilexerruby_eolfill_isbase = false;
            return QsciLexerRuby::eolFill(style);
        } else if (qscilexerruby_eolfill_callback != nullptr) {
            return qscilexerruby_eolfill_callback(this, style);
        } else {
            return QsciLexerRuby::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerruby_font_isbase) {
            qscilexerruby_font_isbase = false;
            return QsciLexerRuby::font(style);
        } else if (qscilexerruby_font_callback != nullptr) {
            return qscilexerruby_font_callback(this, style);
        } else {
            return QsciLexerRuby::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerruby_indentationguideview_isbase) {
            qscilexerruby_indentationguideview_isbase = false;
            return QsciLexerRuby::indentationGuideView();
        } else if (qscilexerruby_indentationguideview_callback != nullptr) {
            return qscilexerruby_indentationguideview_callback();
        } else {
            return QsciLexerRuby::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerruby_keywords_isbase) {
            qscilexerruby_keywords_isbase = false;
            return QsciLexerRuby::keywords(set);
        } else if (qscilexerruby_keywords_callback != nullptr) {
            return qscilexerruby_keywords_callback(this, set);
        } else {
            return QsciLexerRuby::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerruby_defaultstyle_isbase) {
            qscilexerruby_defaultstyle_isbase = false;
            return QsciLexerRuby::defaultStyle();
        } else if (qscilexerruby_defaultstyle_callback != nullptr) {
            return qscilexerruby_defaultstyle_callback();
        } else {
            return QsciLexerRuby::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerruby_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerruby_paper_isbase) {
            qscilexerruby_paper_isbase = false;
            return QsciLexerRuby::paper(style);
        } else if (qscilexerruby_paper_callback != nullptr) {
            return qscilexerruby_paper_callback(this, style);
        } else {
            return QsciLexerRuby::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerruby_defaultcolorwithstyle_isbase) {
            qscilexerruby_defaultcolorwithstyle_isbase = false;
            return QsciLexerRuby::defaultColor(style);
        } else if (qscilexerruby_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerruby_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerRuby::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerruby_defaulteolfill_isbase) {
            qscilexerruby_defaulteolfill_isbase = false;
            return QsciLexerRuby::defaultEolFill(style);
        } else if (qscilexerruby_defaulteolfill_callback != nullptr) {
            return qscilexerruby_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerRuby::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerruby_defaultfontwithstyle_isbase) {
            qscilexerruby_defaultfontwithstyle_isbase = false;
            return QsciLexerRuby::defaultFont(style);
        } else if (qscilexerruby_defaultfontwithstyle_callback != nullptr) {
            return qscilexerruby_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerRuby::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerruby_defaultpaperwithstyle_isbase) {
            qscilexerruby_defaultpaperwithstyle_isbase = false;
            return QsciLexerRuby::defaultPaper(style);
        } else if (qscilexerruby_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerruby_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerRuby::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerruby_seteditor_isbase) {
            qscilexerruby_seteditor_isbase = false;
            QsciLexerRuby::setEditor(editor);
        } else if (qscilexerruby_seteditor_callback != nullptr) {
            qscilexerruby_seteditor_callback(this, editor);
        } else {
            QsciLexerRuby::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerruby_refreshproperties_isbase) {
            qscilexerruby_refreshproperties_isbase = false;
            QsciLexerRuby::refreshProperties();
        } else if (qscilexerruby_refreshproperties_callback != nullptr) {
            qscilexerruby_refreshproperties_callback();
        } else {
            QsciLexerRuby::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerruby_stylebitsneeded_isbase) {
            qscilexerruby_stylebitsneeded_isbase = false;
            return QsciLexerRuby::styleBitsNeeded();
        } else if (qscilexerruby_stylebitsneeded_callback != nullptr) {
            return qscilexerruby_stylebitsneeded_callback();
        } else {
            return QsciLexerRuby::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerruby_wordcharacters_isbase) {
            qscilexerruby_wordcharacters_isbase = false;
            return QsciLexerRuby::wordCharacters();
        } else if (qscilexerruby_wordcharacters_callback != nullptr) {
            return qscilexerruby_wordcharacters_callback();
        } else {
            return QsciLexerRuby::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerruby_setautoindentstyle_isbase) {
            qscilexerruby_setautoindentstyle_isbase = false;
            QsciLexerRuby::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerruby_setautoindentstyle_callback != nullptr) {
            qscilexerruby_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerRuby::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerruby_setcolor_isbase) {
            qscilexerruby_setcolor_isbase = false;
            QsciLexerRuby::setColor(c, style);
        } else if (qscilexerruby_setcolor_callback != nullptr) {
            qscilexerruby_setcolor_callback(this, c, style);
        } else {
            QsciLexerRuby::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerruby_seteolfill_isbase) {
            qscilexerruby_seteolfill_isbase = false;
            QsciLexerRuby::setEolFill(eoffill, style);
        } else if (qscilexerruby_seteolfill_callback != nullptr) {
            qscilexerruby_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerRuby::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerruby_setfont_isbase) {
            qscilexerruby_setfont_isbase = false;
            QsciLexerRuby::setFont(f, style);
        } else if (qscilexerruby_setfont_callback != nullptr) {
            qscilexerruby_setfont_callback(this, f, style);
        } else {
            QsciLexerRuby::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerruby_setpaper_isbase) {
            qscilexerruby_setpaper_isbase = false;
            QsciLexerRuby::setPaper(c, style);
        } else if (qscilexerruby_setpaper_callback != nullptr) {
            qscilexerruby_setpaper_callback(this, c, style);
        } else {
            QsciLexerRuby::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerruby_readproperties_isbase) {
            qscilexerruby_readproperties_isbase = false;
            return QsciLexerRuby::readProperties(qs, prefix);
        } else if (qscilexerruby_readproperties_callback != nullptr) {
            return qscilexerruby_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerRuby::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerruby_writeproperties_isbase) {
            qscilexerruby_writeproperties_isbase = false;
            return QsciLexerRuby::writeProperties(qs, prefix);
        } else if (qscilexerruby_writeproperties_callback != nullptr) {
            return qscilexerruby_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerRuby::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerruby_event_isbase) {
            qscilexerruby_event_isbase = false;
            return QsciLexerRuby::event(event);
        } else if (qscilexerruby_event_callback != nullptr) {
            return qscilexerruby_event_callback(this, event);
        } else {
            return QsciLexerRuby::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerruby_eventfilter_isbase) {
            qscilexerruby_eventfilter_isbase = false;
            return QsciLexerRuby::eventFilter(watched, event);
        } else if (qscilexerruby_eventfilter_callback != nullptr) {
            return qscilexerruby_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerRuby::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerruby_timerevent_isbase) {
            qscilexerruby_timerevent_isbase = false;
            QsciLexerRuby::timerEvent(event);
        } else if (qscilexerruby_timerevent_callback != nullptr) {
            qscilexerruby_timerevent_callback(this, event);
        } else {
            QsciLexerRuby::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerruby_childevent_isbase) {
            qscilexerruby_childevent_isbase = false;
            QsciLexerRuby::childEvent(event);
        } else if (qscilexerruby_childevent_callback != nullptr) {
            qscilexerruby_childevent_callback(this, event);
        } else {
            QsciLexerRuby::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerruby_customevent_isbase) {
            qscilexerruby_customevent_isbase = false;
            QsciLexerRuby::customEvent(event);
        } else if (qscilexerruby_customevent_callback != nullptr) {
            qscilexerruby_customevent_callback(this, event);
        } else {
            QsciLexerRuby::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerruby_connectnotify_isbase) {
            qscilexerruby_connectnotify_isbase = false;
            QsciLexerRuby::connectNotify(signal);
        } else if (qscilexerruby_connectnotify_callback != nullptr) {
            qscilexerruby_connectnotify_callback(this, signal);
        } else {
            QsciLexerRuby::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerruby_disconnectnotify_isbase) {
            qscilexerruby_disconnectnotify_isbase = false;
            QsciLexerRuby::disconnectNotify(signal);
        } else if (qscilexerruby_disconnectnotify_callback != nullptr) {
            qscilexerruby_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerRuby::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerruby_sender_isbase) {
            qscilexerruby_sender_isbase = false;
            return QsciLexerRuby::sender();
        } else if (qscilexerruby_sender_callback != nullptr) {
            return qscilexerruby_sender_callback();
        } else {
            return QsciLexerRuby::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerruby_sendersignalindex_isbase) {
            qscilexerruby_sendersignalindex_isbase = false;
            return QsciLexerRuby::senderSignalIndex();
        } else if (qscilexerruby_sendersignalindex_callback != nullptr) {
            return qscilexerruby_sendersignalindex_callback();
        } else {
            return QsciLexerRuby::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerruby_receivers_isbase) {
            qscilexerruby_receivers_isbase = false;
            return QsciLexerRuby::receivers(signal);
        } else if (qscilexerruby_receivers_callback != nullptr) {
            return qscilexerruby_receivers_callback(this, signal);
        } else {
            return QsciLexerRuby::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerruby_issignalconnected_isbase) {
            qscilexerruby_issignalconnected_isbase = false;
            return QsciLexerRuby::isSignalConnected(signal);
        } else if (qscilexerruby_issignalconnected_callback != nullptr) {
            return qscilexerruby_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerRuby::isSignalConnected(signal);
        }
    }
};

#endif
