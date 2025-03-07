#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPERL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPERL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerPerl so that we can call protected methods
class VirtualQsciLexerPerl : public QsciLexerPerl {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerPerl_Metacall_Callback = int (*)(QsciLexerPerl*, QMetaObject::Call, int, void**);
    using QsciLexerPerl_SetFoldComments_Callback = void (*)(QsciLexerPerl*, bool);
    using QsciLexerPerl_SetFoldCompact_Callback = void (*)(QsciLexerPerl*, bool);
    using QsciLexerPerl_Language_Callback = const char* (*)();
    using QsciLexerPerl_Lexer_Callback = const char* (*)();
    using QsciLexerPerl_LexerId_Callback = int (*)();
    using QsciLexerPerl_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerPerl_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerPerl_BlockEnd_Callback = const char* (*)(const QsciLexerPerl*, int*);
    using QsciLexerPerl_BlockLookback_Callback = int (*)();
    using QsciLexerPerl_BlockStart_Callback = const char* (*)(const QsciLexerPerl*, int*);
    using QsciLexerPerl_BlockStartKeyword_Callback = const char* (*)(const QsciLexerPerl*, int*);
    using QsciLexerPerl_BraceStyle_Callback = int (*)();
    using QsciLexerPerl_CaseSensitive_Callback = bool (*)();
    using QsciLexerPerl_Color_Callback = QColor (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_EolFill_Callback = bool (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_Font_Callback = QFont (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_IndentationGuideView_Callback = int (*)();
    using QsciLexerPerl_Keywords_Callback = const char* (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_DefaultStyle_Callback = int (*)();
    using QsciLexerPerl_Description_Callback = QString (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_Paper_Callback = QColor (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_DefaultEolFill_Callback = bool (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_SetEditor_Callback = void (*)(QsciLexerPerl*, QsciScintilla*);
    using QsciLexerPerl_RefreshProperties_Callback = void (*)();
    using QsciLexerPerl_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerPerl_WordCharacters_Callback = const char* (*)();
    using QsciLexerPerl_SetAutoIndentStyle_Callback = void (*)(QsciLexerPerl*, int);
    using QsciLexerPerl_SetColor_Callback = void (*)(QsciLexerPerl*, const QColor&, int);
    using QsciLexerPerl_SetEolFill_Callback = void (*)(QsciLexerPerl*, bool, int);
    using QsciLexerPerl_SetFont_Callback = void (*)(QsciLexerPerl*, const QFont&, int);
    using QsciLexerPerl_SetPaper_Callback = void (*)(QsciLexerPerl*, const QColor&, int);
    using QsciLexerPerl_ReadProperties_Callback = bool (*)(QsciLexerPerl*, QSettings&, const QString&);
    using QsciLexerPerl_WriteProperties_Callback = bool (*)(const QsciLexerPerl*, QSettings&, const QString&);
    using QsciLexerPerl_Event_Callback = bool (*)(QsciLexerPerl*, QEvent*);
    using QsciLexerPerl_EventFilter_Callback = bool (*)(QsciLexerPerl*, QObject*, QEvent*);
    using QsciLexerPerl_TimerEvent_Callback = void (*)(QsciLexerPerl*, QTimerEvent*);
    using QsciLexerPerl_ChildEvent_Callback = void (*)(QsciLexerPerl*, QChildEvent*);
    using QsciLexerPerl_CustomEvent_Callback = void (*)(QsciLexerPerl*, QEvent*);
    using QsciLexerPerl_ConnectNotify_Callback = void (*)(QsciLexerPerl*, const QMetaMethod&);
    using QsciLexerPerl_DisconnectNotify_Callback = void (*)(QsciLexerPerl*, const QMetaMethod&);
    using QsciLexerPerl_Sender_Callback = QObject* (*)();
    using QsciLexerPerl_SenderSignalIndex_Callback = int (*)();
    using QsciLexerPerl_Receivers_Callback = int (*)(const QsciLexerPerl*, const char*);
    using QsciLexerPerl_IsSignalConnected_Callback = bool (*)(const QsciLexerPerl*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerPerl_Metacall_Callback qscilexerperl_metacall_callback = nullptr;
    QsciLexerPerl_SetFoldComments_Callback qscilexerperl_setfoldcomments_callback = nullptr;
    QsciLexerPerl_SetFoldCompact_Callback qscilexerperl_setfoldcompact_callback = nullptr;
    QsciLexerPerl_Language_Callback qscilexerperl_language_callback = nullptr;
    QsciLexerPerl_Lexer_Callback qscilexerperl_lexer_callback = nullptr;
    QsciLexerPerl_LexerId_Callback qscilexerperl_lexerid_callback = nullptr;
    QsciLexerPerl_AutoCompletionFillups_Callback qscilexerperl_autocompletionfillups_callback = nullptr;
    QsciLexerPerl_AutoCompletionWordSeparators_Callback qscilexerperl_autocompletionwordseparators_callback = nullptr;
    QsciLexerPerl_BlockEnd_Callback qscilexerperl_blockend_callback = nullptr;
    QsciLexerPerl_BlockLookback_Callback qscilexerperl_blocklookback_callback = nullptr;
    QsciLexerPerl_BlockStart_Callback qscilexerperl_blockstart_callback = nullptr;
    QsciLexerPerl_BlockStartKeyword_Callback qscilexerperl_blockstartkeyword_callback = nullptr;
    QsciLexerPerl_BraceStyle_Callback qscilexerperl_bracestyle_callback = nullptr;
    QsciLexerPerl_CaseSensitive_Callback qscilexerperl_casesensitive_callback = nullptr;
    QsciLexerPerl_Color_Callback qscilexerperl_color_callback = nullptr;
    QsciLexerPerl_EolFill_Callback qscilexerperl_eolfill_callback = nullptr;
    QsciLexerPerl_Font_Callback qscilexerperl_font_callback = nullptr;
    QsciLexerPerl_IndentationGuideView_Callback qscilexerperl_indentationguideview_callback = nullptr;
    QsciLexerPerl_Keywords_Callback qscilexerperl_keywords_callback = nullptr;
    QsciLexerPerl_DefaultStyle_Callback qscilexerperl_defaultstyle_callback = nullptr;
    QsciLexerPerl_Description_Callback qscilexerperl_description_callback = nullptr;
    QsciLexerPerl_Paper_Callback qscilexerperl_paper_callback = nullptr;
    QsciLexerPerl_DefaultColorWithStyle_Callback qscilexerperl_defaultcolorwithstyle_callback = nullptr;
    QsciLexerPerl_DefaultEolFill_Callback qscilexerperl_defaulteolfill_callback = nullptr;
    QsciLexerPerl_DefaultFontWithStyle_Callback qscilexerperl_defaultfontwithstyle_callback = nullptr;
    QsciLexerPerl_DefaultPaperWithStyle_Callback qscilexerperl_defaultpaperwithstyle_callback = nullptr;
    QsciLexerPerl_SetEditor_Callback qscilexerperl_seteditor_callback = nullptr;
    QsciLexerPerl_RefreshProperties_Callback qscilexerperl_refreshproperties_callback = nullptr;
    QsciLexerPerl_StyleBitsNeeded_Callback qscilexerperl_stylebitsneeded_callback = nullptr;
    QsciLexerPerl_WordCharacters_Callback qscilexerperl_wordcharacters_callback = nullptr;
    QsciLexerPerl_SetAutoIndentStyle_Callback qscilexerperl_setautoindentstyle_callback = nullptr;
    QsciLexerPerl_SetColor_Callback qscilexerperl_setcolor_callback = nullptr;
    QsciLexerPerl_SetEolFill_Callback qscilexerperl_seteolfill_callback = nullptr;
    QsciLexerPerl_SetFont_Callback qscilexerperl_setfont_callback = nullptr;
    QsciLexerPerl_SetPaper_Callback qscilexerperl_setpaper_callback = nullptr;
    QsciLexerPerl_ReadProperties_Callback qscilexerperl_readproperties_callback = nullptr;
    QsciLexerPerl_WriteProperties_Callback qscilexerperl_writeproperties_callback = nullptr;
    QsciLexerPerl_Event_Callback qscilexerperl_event_callback = nullptr;
    QsciLexerPerl_EventFilter_Callback qscilexerperl_eventfilter_callback = nullptr;
    QsciLexerPerl_TimerEvent_Callback qscilexerperl_timerevent_callback = nullptr;
    QsciLexerPerl_ChildEvent_Callback qscilexerperl_childevent_callback = nullptr;
    QsciLexerPerl_CustomEvent_Callback qscilexerperl_customevent_callback = nullptr;
    QsciLexerPerl_ConnectNotify_Callback qscilexerperl_connectnotify_callback = nullptr;
    QsciLexerPerl_DisconnectNotify_Callback qscilexerperl_disconnectnotify_callback = nullptr;
    QsciLexerPerl_Sender_Callback qscilexerperl_sender_callback = nullptr;
    QsciLexerPerl_SenderSignalIndex_Callback qscilexerperl_sendersignalindex_callback = nullptr;
    QsciLexerPerl_Receivers_Callback qscilexerperl_receivers_callback = nullptr;
    QsciLexerPerl_IsSignalConnected_Callback qscilexerperl_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerperl_metacall_isbase = false;
    mutable bool qscilexerperl_setfoldcomments_isbase = false;
    mutable bool qscilexerperl_setfoldcompact_isbase = false;
    mutable bool qscilexerperl_language_isbase = false;
    mutable bool qscilexerperl_lexer_isbase = false;
    mutable bool qscilexerperl_lexerid_isbase = false;
    mutable bool qscilexerperl_autocompletionfillups_isbase = false;
    mutable bool qscilexerperl_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerperl_blockend_isbase = false;
    mutable bool qscilexerperl_blocklookback_isbase = false;
    mutable bool qscilexerperl_blockstart_isbase = false;
    mutable bool qscilexerperl_blockstartkeyword_isbase = false;
    mutable bool qscilexerperl_bracestyle_isbase = false;
    mutable bool qscilexerperl_casesensitive_isbase = false;
    mutable bool qscilexerperl_color_isbase = false;
    mutable bool qscilexerperl_eolfill_isbase = false;
    mutable bool qscilexerperl_font_isbase = false;
    mutable bool qscilexerperl_indentationguideview_isbase = false;
    mutable bool qscilexerperl_keywords_isbase = false;
    mutable bool qscilexerperl_defaultstyle_isbase = false;
    mutable bool qscilexerperl_description_isbase = false;
    mutable bool qscilexerperl_paper_isbase = false;
    mutable bool qscilexerperl_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerperl_defaulteolfill_isbase = false;
    mutable bool qscilexerperl_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerperl_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerperl_seteditor_isbase = false;
    mutable bool qscilexerperl_refreshproperties_isbase = false;
    mutable bool qscilexerperl_stylebitsneeded_isbase = false;
    mutable bool qscilexerperl_wordcharacters_isbase = false;
    mutable bool qscilexerperl_setautoindentstyle_isbase = false;
    mutable bool qscilexerperl_setcolor_isbase = false;
    mutable bool qscilexerperl_seteolfill_isbase = false;
    mutable bool qscilexerperl_setfont_isbase = false;
    mutable bool qscilexerperl_setpaper_isbase = false;
    mutable bool qscilexerperl_readproperties_isbase = false;
    mutable bool qscilexerperl_writeproperties_isbase = false;
    mutable bool qscilexerperl_event_isbase = false;
    mutable bool qscilexerperl_eventfilter_isbase = false;
    mutable bool qscilexerperl_timerevent_isbase = false;
    mutable bool qscilexerperl_childevent_isbase = false;
    mutable bool qscilexerperl_customevent_isbase = false;
    mutable bool qscilexerperl_connectnotify_isbase = false;
    mutable bool qscilexerperl_disconnectnotify_isbase = false;
    mutable bool qscilexerperl_sender_isbase = false;
    mutable bool qscilexerperl_sendersignalindex_isbase = false;
    mutable bool qscilexerperl_receivers_isbase = false;
    mutable bool qscilexerperl_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerPerl() : QsciLexerPerl(){};
    VirtualQsciLexerPerl(QObject* parent) : QsciLexerPerl(parent){};

    ~VirtualQsciLexerPerl() {
        qscilexerperl_metacall_callback = nullptr;
        qscilexerperl_setfoldcomments_callback = nullptr;
        qscilexerperl_setfoldcompact_callback = nullptr;
        qscilexerperl_language_callback = nullptr;
        qscilexerperl_lexer_callback = nullptr;
        qscilexerperl_lexerid_callback = nullptr;
        qscilexerperl_autocompletionfillups_callback = nullptr;
        qscilexerperl_autocompletionwordseparators_callback = nullptr;
        qscilexerperl_blockend_callback = nullptr;
        qscilexerperl_blocklookback_callback = nullptr;
        qscilexerperl_blockstart_callback = nullptr;
        qscilexerperl_blockstartkeyword_callback = nullptr;
        qscilexerperl_bracestyle_callback = nullptr;
        qscilexerperl_casesensitive_callback = nullptr;
        qscilexerperl_color_callback = nullptr;
        qscilexerperl_eolfill_callback = nullptr;
        qscilexerperl_font_callback = nullptr;
        qscilexerperl_indentationguideview_callback = nullptr;
        qscilexerperl_keywords_callback = nullptr;
        qscilexerperl_defaultstyle_callback = nullptr;
        qscilexerperl_description_callback = nullptr;
        qscilexerperl_paper_callback = nullptr;
        qscilexerperl_defaultcolorwithstyle_callback = nullptr;
        qscilexerperl_defaulteolfill_callback = nullptr;
        qscilexerperl_defaultfontwithstyle_callback = nullptr;
        qscilexerperl_defaultpaperwithstyle_callback = nullptr;
        qscilexerperl_seteditor_callback = nullptr;
        qscilexerperl_refreshproperties_callback = nullptr;
        qscilexerperl_stylebitsneeded_callback = nullptr;
        qscilexerperl_wordcharacters_callback = nullptr;
        qscilexerperl_setautoindentstyle_callback = nullptr;
        qscilexerperl_setcolor_callback = nullptr;
        qscilexerperl_seteolfill_callback = nullptr;
        qscilexerperl_setfont_callback = nullptr;
        qscilexerperl_setpaper_callback = nullptr;
        qscilexerperl_readproperties_callback = nullptr;
        qscilexerperl_writeproperties_callback = nullptr;
        qscilexerperl_event_callback = nullptr;
        qscilexerperl_eventfilter_callback = nullptr;
        qscilexerperl_timerevent_callback = nullptr;
        qscilexerperl_childevent_callback = nullptr;
        qscilexerperl_customevent_callback = nullptr;
        qscilexerperl_connectnotify_callback = nullptr;
        qscilexerperl_disconnectnotify_callback = nullptr;
        qscilexerperl_sender_callback = nullptr;
        qscilexerperl_sendersignalindex_callback = nullptr;
        qscilexerperl_receivers_callback = nullptr;
        qscilexerperl_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerPerl_Metacall_Callback(QsciLexerPerl_Metacall_Callback cb) { qscilexerperl_metacall_callback = cb; }
    void setQsciLexerPerl_SetFoldComments_Callback(QsciLexerPerl_SetFoldComments_Callback cb) { qscilexerperl_setfoldcomments_callback = cb; }
    void setQsciLexerPerl_SetFoldCompact_Callback(QsciLexerPerl_SetFoldCompact_Callback cb) { qscilexerperl_setfoldcompact_callback = cb; }
    void setQsciLexerPerl_Language_Callback(QsciLexerPerl_Language_Callback cb) { qscilexerperl_language_callback = cb; }
    void setQsciLexerPerl_Lexer_Callback(QsciLexerPerl_Lexer_Callback cb) { qscilexerperl_lexer_callback = cb; }
    void setQsciLexerPerl_LexerId_Callback(QsciLexerPerl_LexerId_Callback cb) { qscilexerperl_lexerid_callback = cb; }
    void setQsciLexerPerl_AutoCompletionFillups_Callback(QsciLexerPerl_AutoCompletionFillups_Callback cb) { qscilexerperl_autocompletionfillups_callback = cb; }
    void setQsciLexerPerl_AutoCompletionWordSeparators_Callback(QsciLexerPerl_AutoCompletionWordSeparators_Callback cb) { qscilexerperl_autocompletionwordseparators_callback = cb; }
    void setQsciLexerPerl_BlockEnd_Callback(QsciLexerPerl_BlockEnd_Callback cb) { qscilexerperl_blockend_callback = cb; }
    void setQsciLexerPerl_BlockLookback_Callback(QsciLexerPerl_BlockLookback_Callback cb) { qscilexerperl_blocklookback_callback = cb; }
    void setQsciLexerPerl_BlockStart_Callback(QsciLexerPerl_BlockStart_Callback cb) { qscilexerperl_blockstart_callback = cb; }
    void setQsciLexerPerl_BlockStartKeyword_Callback(QsciLexerPerl_BlockStartKeyword_Callback cb) { qscilexerperl_blockstartkeyword_callback = cb; }
    void setQsciLexerPerl_BraceStyle_Callback(QsciLexerPerl_BraceStyle_Callback cb) { qscilexerperl_bracestyle_callback = cb; }
    void setQsciLexerPerl_CaseSensitive_Callback(QsciLexerPerl_CaseSensitive_Callback cb) { qscilexerperl_casesensitive_callback = cb; }
    void setQsciLexerPerl_Color_Callback(QsciLexerPerl_Color_Callback cb) { qscilexerperl_color_callback = cb; }
    void setQsciLexerPerl_EolFill_Callback(QsciLexerPerl_EolFill_Callback cb) { qscilexerperl_eolfill_callback = cb; }
    void setQsciLexerPerl_Font_Callback(QsciLexerPerl_Font_Callback cb) { qscilexerperl_font_callback = cb; }
    void setQsciLexerPerl_IndentationGuideView_Callback(QsciLexerPerl_IndentationGuideView_Callback cb) { qscilexerperl_indentationguideview_callback = cb; }
    void setQsciLexerPerl_Keywords_Callback(QsciLexerPerl_Keywords_Callback cb) { qscilexerperl_keywords_callback = cb; }
    void setQsciLexerPerl_DefaultStyle_Callback(QsciLexerPerl_DefaultStyle_Callback cb) { qscilexerperl_defaultstyle_callback = cb; }
    void setQsciLexerPerl_Description_Callback(QsciLexerPerl_Description_Callback cb) { qscilexerperl_description_callback = cb; }
    void setQsciLexerPerl_Paper_Callback(QsciLexerPerl_Paper_Callback cb) { qscilexerperl_paper_callback = cb; }
    void setQsciLexerPerl_DefaultColorWithStyle_Callback(QsciLexerPerl_DefaultColorWithStyle_Callback cb) { qscilexerperl_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerPerl_DefaultEolFill_Callback(QsciLexerPerl_DefaultEolFill_Callback cb) { qscilexerperl_defaulteolfill_callback = cb; }
    void setQsciLexerPerl_DefaultFontWithStyle_Callback(QsciLexerPerl_DefaultFontWithStyle_Callback cb) { qscilexerperl_defaultfontwithstyle_callback = cb; }
    void setQsciLexerPerl_DefaultPaperWithStyle_Callback(QsciLexerPerl_DefaultPaperWithStyle_Callback cb) { qscilexerperl_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerPerl_SetEditor_Callback(QsciLexerPerl_SetEditor_Callback cb) { qscilexerperl_seteditor_callback = cb; }
    void setQsciLexerPerl_RefreshProperties_Callback(QsciLexerPerl_RefreshProperties_Callback cb) { qscilexerperl_refreshproperties_callback = cb; }
    void setQsciLexerPerl_StyleBitsNeeded_Callback(QsciLexerPerl_StyleBitsNeeded_Callback cb) { qscilexerperl_stylebitsneeded_callback = cb; }
    void setQsciLexerPerl_WordCharacters_Callback(QsciLexerPerl_WordCharacters_Callback cb) { qscilexerperl_wordcharacters_callback = cb; }
    void setQsciLexerPerl_SetAutoIndentStyle_Callback(QsciLexerPerl_SetAutoIndentStyle_Callback cb) { qscilexerperl_setautoindentstyle_callback = cb; }
    void setQsciLexerPerl_SetColor_Callback(QsciLexerPerl_SetColor_Callback cb) { qscilexerperl_setcolor_callback = cb; }
    void setQsciLexerPerl_SetEolFill_Callback(QsciLexerPerl_SetEolFill_Callback cb) { qscilexerperl_seteolfill_callback = cb; }
    void setQsciLexerPerl_SetFont_Callback(QsciLexerPerl_SetFont_Callback cb) { qscilexerperl_setfont_callback = cb; }
    void setQsciLexerPerl_SetPaper_Callback(QsciLexerPerl_SetPaper_Callback cb) { qscilexerperl_setpaper_callback = cb; }
    void setQsciLexerPerl_ReadProperties_Callback(QsciLexerPerl_ReadProperties_Callback cb) { qscilexerperl_readproperties_callback = cb; }
    void setQsciLexerPerl_WriteProperties_Callback(QsciLexerPerl_WriteProperties_Callback cb) { qscilexerperl_writeproperties_callback = cb; }
    void setQsciLexerPerl_Event_Callback(QsciLexerPerl_Event_Callback cb) { qscilexerperl_event_callback = cb; }
    void setQsciLexerPerl_EventFilter_Callback(QsciLexerPerl_EventFilter_Callback cb) { qscilexerperl_eventfilter_callback = cb; }
    void setQsciLexerPerl_TimerEvent_Callback(QsciLexerPerl_TimerEvent_Callback cb) { qscilexerperl_timerevent_callback = cb; }
    void setQsciLexerPerl_ChildEvent_Callback(QsciLexerPerl_ChildEvent_Callback cb) { qscilexerperl_childevent_callback = cb; }
    void setQsciLexerPerl_CustomEvent_Callback(QsciLexerPerl_CustomEvent_Callback cb) { qscilexerperl_customevent_callback = cb; }
    void setQsciLexerPerl_ConnectNotify_Callback(QsciLexerPerl_ConnectNotify_Callback cb) { qscilexerperl_connectnotify_callback = cb; }
    void setQsciLexerPerl_DisconnectNotify_Callback(QsciLexerPerl_DisconnectNotify_Callback cb) { qscilexerperl_disconnectnotify_callback = cb; }
    void setQsciLexerPerl_Sender_Callback(QsciLexerPerl_Sender_Callback cb) { qscilexerperl_sender_callback = cb; }
    void setQsciLexerPerl_SenderSignalIndex_Callback(QsciLexerPerl_SenderSignalIndex_Callback cb) { qscilexerperl_sendersignalindex_callback = cb; }
    void setQsciLexerPerl_Receivers_Callback(QsciLexerPerl_Receivers_Callback cb) { qscilexerperl_receivers_callback = cb; }
    void setQsciLexerPerl_IsSignalConnected_Callback(QsciLexerPerl_IsSignalConnected_Callback cb) { qscilexerperl_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerPerl_Metacall_IsBase(bool value) const { qscilexerperl_metacall_isbase = value; }
    void setQsciLexerPerl_SetFoldComments_IsBase(bool value) const { qscilexerperl_setfoldcomments_isbase = value; }
    void setQsciLexerPerl_SetFoldCompact_IsBase(bool value) const { qscilexerperl_setfoldcompact_isbase = value; }
    void setQsciLexerPerl_Language_IsBase(bool value) const { qscilexerperl_language_isbase = value; }
    void setQsciLexerPerl_Lexer_IsBase(bool value) const { qscilexerperl_lexer_isbase = value; }
    void setQsciLexerPerl_LexerId_IsBase(bool value) const { qscilexerperl_lexerid_isbase = value; }
    void setQsciLexerPerl_AutoCompletionFillups_IsBase(bool value) const { qscilexerperl_autocompletionfillups_isbase = value; }
    void setQsciLexerPerl_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerperl_autocompletionwordseparators_isbase = value; }
    void setQsciLexerPerl_BlockEnd_IsBase(bool value) const { qscilexerperl_blockend_isbase = value; }
    void setQsciLexerPerl_BlockLookback_IsBase(bool value) const { qscilexerperl_blocklookback_isbase = value; }
    void setQsciLexerPerl_BlockStart_IsBase(bool value) const { qscilexerperl_blockstart_isbase = value; }
    void setQsciLexerPerl_BlockStartKeyword_IsBase(bool value) const { qscilexerperl_blockstartkeyword_isbase = value; }
    void setQsciLexerPerl_BraceStyle_IsBase(bool value) const { qscilexerperl_bracestyle_isbase = value; }
    void setQsciLexerPerl_CaseSensitive_IsBase(bool value) const { qscilexerperl_casesensitive_isbase = value; }
    void setQsciLexerPerl_Color_IsBase(bool value) const { qscilexerperl_color_isbase = value; }
    void setQsciLexerPerl_EolFill_IsBase(bool value) const { qscilexerperl_eolfill_isbase = value; }
    void setQsciLexerPerl_Font_IsBase(bool value) const { qscilexerperl_font_isbase = value; }
    void setQsciLexerPerl_IndentationGuideView_IsBase(bool value) const { qscilexerperl_indentationguideview_isbase = value; }
    void setQsciLexerPerl_Keywords_IsBase(bool value) const { qscilexerperl_keywords_isbase = value; }
    void setQsciLexerPerl_DefaultStyle_IsBase(bool value) const { qscilexerperl_defaultstyle_isbase = value; }
    void setQsciLexerPerl_Description_IsBase(bool value) const { qscilexerperl_description_isbase = value; }
    void setQsciLexerPerl_Paper_IsBase(bool value) const { qscilexerperl_paper_isbase = value; }
    void setQsciLexerPerl_DefaultColorWithStyle_IsBase(bool value) const { qscilexerperl_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerPerl_DefaultEolFill_IsBase(bool value) const { qscilexerperl_defaulteolfill_isbase = value; }
    void setQsciLexerPerl_DefaultFontWithStyle_IsBase(bool value) const { qscilexerperl_defaultfontwithstyle_isbase = value; }
    void setQsciLexerPerl_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerperl_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerPerl_SetEditor_IsBase(bool value) const { qscilexerperl_seteditor_isbase = value; }
    void setQsciLexerPerl_RefreshProperties_IsBase(bool value) const { qscilexerperl_refreshproperties_isbase = value; }
    void setQsciLexerPerl_StyleBitsNeeded_IsBase(bool value) const { qscilexerperl_stylebitsneeded_isbase = value; }
    void setQsciLexerPerl_WordCharacters_IsBase(bool value) const { qscilexerperl_wordcharacters_isbase = value; }
    void setQsciLexerPerl_SetAutoIndentStyle_IsBase(bool value) const { qscilexerperl_setautoindentstyle_isbase = value; }
    void setQsciLexerPerl_SetColor_IsBase(bool value) const { qscilexerperl_setcolor_isbase = value; }
    void setQsciLexerPerl_SetEolFill_IsBase(bool value) const { qscilexerperl_seteolfill_isbase = value; }
    void setQsciLexerPerl_SetFont_IsBase(bool value) const { qscilexerperl_setfont_isbase = value; }
    void setQsciLexerPerl_SetPaper_IsBase(bool value) const { qscilexerperl_setpaper_isbase = value; }
    void setQsciLexerPerl_ReadProperties_IsBase(bool value) const { qscilexerperl_readproperties_isbase = value; }
    void setQsciLexerPerl_WriteProperties_IsBase(bool value) const { qscilexerperl_writeproperties_isbase = value; }
    void setQsciLexerPerl_Event_IsBase(bool value) const { qscilexerperl_event_isbase = value; }
    void setQsciLexerPerl_EventFilter_IsBase(bool value) const { qscilexerperl_eventfilter_isbase = value; }
    void setQsciLexerPerl_TimerEvent_IsBase(bool value) const { qscilexerperl_timerevent_isbase = value; }
    void setQsciLexerPerl_ChildEvent_IsBase(bool value) const { qscilexerperl_childevent_isbase = value; }
    void setQsciLexerPerl_CustomEvent_IsBase(bool value) const { qscilexerperl_customevent_isbase = value; }
    void setQsciLexerPerl_ConnectNotify_IsBase(bool value) const { qscilexerperl_connectnotify_isbase = value; }
    void setQsciLexerPerl_DisconnectNotify_IsBase(bool value) const { qscilexerperl_disconnectnotify_isbase = value; }
    void setQsciLexerPerl_Sender_IsBase(bool value) const { qscilexerperl_sender_isbase = value; }
    void setQsciLexerPerl_SenderSignalIndex_IsBase(bool value) const { qscilexerperl_sendersignalindex_isbase = value; }
    void setQsciLexerPerl_Receivers_IsBase(bool value) const { qscilexerperl_receivers_isbase = value; }
    void setQsciLexerPerl_IsSignalConnected_IsBase(bool value) const { qscilexerperl_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerperl_metacall_isbase) {
            qscilexerperl_metacall_isbase = false;
            return QsciLexerPerl::qt_metacall(param1, param2, param3);
        } else if (qscilexerperl_metacall_callback != nullptr) {
            return qscilexerperl_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerPerl::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerperl_setfoldcomments_isbase) {
            qscilexerperl_setfoldcomments_isbase = false;
            QsciLexerPerl::setFoldComments(fold);
        } else if (qscilexerperl_setfoldcomments_callback != nullptr) {
            qscilexerperl_setfoldcomments_callback(this, fold);
        } else {
            QsciLexerPerl::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerperl_setfoldcompact_isbase) {
            qscilexerperl_setfoldcompact_isbase = false;
            QsciLexerPerl::setFoldCompact(fold);
        } else if (qscilexerperl_setfoldcompact_callback != nullptr) {
            qscilexerperl_setfoldcompact_callback(this, fold);
        } else {
            QsciLexerPerl::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerperl_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerperl_lexer_isbase) {
            qscilexerperl_lexer_isbase = false;
            return QsciLexerPerl::lexer();
        } else if (qscilexerperl_lexer_callback != nullptr) {
            return qscilexerperl_lexer_callback();
        } else {
            return QsciLexerPerl::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerperl_lexerid_isbase) {
            qscilexerperl_lexerid_isbase = false;
            return QsciLexerPerl::lexerId();
        } else if (qscilexerperl_lexerid_callback != nullptr) {
            return qscilexerperl_lexerid_callback();
        } else {
            return QsciLexerPerl::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerperl_autocompletionfillups_isbase) {
            qscilexerperl_autocompletionfillups_isbase = false;
            return QsciLexerPerl::autoCompletionFillups();
        } else if (qscilexerperl_autocompletionfillups_callback != nullptr) {
            return qscilexerperl_autocompletionfillups_callback();
        } else {
            return QsciLexerPerl::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerperl_autocompletionwordseparators_isbase) {
            qscilexerperl_autocompletionwordseparators_isbase = false;
            return QsciLexerPerl::autoCompletionWordSeparators();
        } else if (qscilexerperl_autocompletionwordseparators_callback != nullptr) {
            return qscilexerperl_autocompletionwordseparators_callback();
        } else {
            return QsciLexerPerl::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerperl_blockend_isbase) {
            qscilexerperl_blockend_isbase = false;
            return QsciLexerPerl::blockEnd(style);
        } else if (qscilexerperl_blockend_callback != nullptr) {
            return qscilexerperl_blockend_callback(this, style);
        } else {
            return QsciLexerPerl::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerperl_blocklookback_isbase) {
            qscilexerperl_blocklookback_isbase = false;
            return QsciLexerPerl::blockLookback();
        } else if (qscilexerperl_blocklookback_callback != nullptr) {
            return qscilexerperl_blocklookback_callback();
        } else {
            return QsciLexerPerl::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerperl_blockstart_isbase) {
            qscilexerperl_blockstart_isbase = false;
            return QsciLexerPerl::blockStart(style);
        } else if (qscilexerperl_blockstart_callback != nullptr) {
            return qscilexerperl_blockstart_callback(this, style);
        } else {
            return QsciLexerPerl::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerperl_blockstartkeyword_isbase) {
            qscilexerperl_blockstartkeyword_isbase = false;
            return QsciLexerPerl::blockStartKeyword(style);
        } else if (qscilexerperl_blockstartkeyword_callback != nullptr) {
            return qscilexerperl_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerPerl::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerperl_bracestyle_isbase) {
            qscilexerperl_bracestyle_isbase = false;
            return QsciLexerPerl::braceStyle();
        } else if (qscilexerperl_bracestyle_callback != nullptr) {
            return qscilexerperl_bracestyle_callback();
        } else {
            return QsciLexerPerl::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerperl_casesensitive_isbase) {
            qscilexerperl_casesensitive_isbase = false;
            return QsciLexerPerl::caseSensitive();
        } else if (qscilexerperl_casesensitive_callback != nullptr) {
            return qscilexerperl_casesensitive_callback();
        } else {
            return QsciLexerPerl::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerperl_color_isbase) {
            qscilexerperl_color_isbase = false;
            return QsciLexerPerl::color(style);
        } else if (qscilexerperl_color_callback != nullptr) {
            return qscilexerperl_color_callback(this, style);
        } else {
            return QsciLexerPerl::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerperl_eolfill_isbase) {
            qscilexerperl_eolfill_isbase = false;
            return QsciLexerPerl::eolFill(style);
        } else if (qscilexerperl_eolfill_callback != nullptr) {
            return qscilexerperl_eolfill_callback(this, style);
        } else {
            return QsciLexerPerl::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerperl_font_isbase) {
            qscilexerperl_font_isbase = false;
            return QsciLexerPerl::font(style);
        } else if (qscilexerperl_font_callback != nullptr) {
            return qscilexerperl_font_callback(this, style);
        } else {
            return QsciLexerPerl::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerperl_indentationguideview_isbase) {
            qscilexerperl_indentationguideview_isbase = false;
            return QsciLexerPerl::indentationGuideView();
        } else if (qscilexerperl_indentationguideview_callback != nullptr) {
            return qscilexerperl_indentationguideview_callback();
        } else {
            return QsciLexerPerl::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerperl_keywords_isbase) {
            qscilexerperl_keywords_isbase = false;
            return QsciLexerPerl::keywords(set);
        } else if (qscilexerperl_keywords_callback != nullptr) {
            return qscilexerperl_keywords_callback(this, set);
        } else {
            return QsciLexerPerl::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerperl_defaultstyle_isbase) {
            qscilexerperl_defaultstyle_isbase = false;
            return QsciLexerPerl::defaultStyle();
        } else if (qscilexerperl_defaultstyle_callback != nullptr) {
            return qscilexerperl_defaultstyle_callback();
        } else {
            return QsciLexerPerl::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerperl_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerperl_paper_isbase) {
            qscilexerperl_paper_isbase = false;
            return QsciLexerPerl::paper(style);
        } else if (qscilexerperl_paper_callback != nullptr) {
            return qscilexerperl_paper_callback(this, style);
        } else {
            return QsciLexerPerl::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerperl_defaultcolorwithstyle_isbase) {
            qscilexerperl_defaultcolorwithstyle_isbase = false;
            return QsciLexerPerl::defaultColor(style);
        } else if (qscilexerperl_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerperl_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerPerl::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerperl_defaulteolfill_isbase) {
            qscilexerperl_defaulteolfill_isbase = false;
            return QsciLexerPerl::defaultEolFill(style);
        } else if (qscilexerperl_defaulteolfill_callback != nullptr) {
            return qscilexerperl_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerPerl::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerperl_defaultfontwithstyle_isbase) {
            qscilexerperl_defaultfontwithstyle_isbase = false;
            return QsciLexerPerl::defaultFont(style);
        } else if (qscilexerperl_defaultfontwithstyle_callback != nullptr) {
            return qscilexerperl_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerPerl::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerperl_defaultpaperwithstyle_isbase) {
            qscilexerperl_defaultpaperwithstyle_isbase = false;
            return QsciLexerPerl::defaultPaper(style);
        } else if (qscilexerperl_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerperl_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerPerl::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerperl_seteditor_isbase) {
            qscilexerperl_seteditor_isbase = false;
            QsciLexerPerl::setEditor(editor);
        } else if (qscilexerperl_seteditor_callback != nullptr) {
            qscilexerperl_seteditor_callback(this, editor);
        } else {
            QsciLexerPerl::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerperl_refreshproperties_isbase) {
            qscilexerperl_refreshproperties_isbase = false;
            QsciLexerPerl::refreshProperties();
        } else if (qscilexerperl_refreshproperties_callback != nullptr) {
            qscilexerperl_refreshproperties_callback();
        } else {
            QsciLexerPerl::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerperl_stylebitsneeded_isbase) {
            qscilexerperl_stylebitsneeded_isbase = false;
            return QsciLexerPerl::styleBitsNeeded();
        } else if (qscilexerperl_stylebitsneeded_callback != nullptr) {
            return qscilexerperl_stylebitsneeded_callback();
        } else {
            return QsciLexerPerl::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerperl_wordcharacters_isbase) {
            qscilexerperl_wordcharacters_isbase = false;
            return QsciLexerPerl::wordCharacters();
        } else if (qscilexerperl_wordcharacters_callback != nullptr) {
            return qscilexerperl_wordcharacters_callback();
        } else {
            return QsciLexerPerl::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerperl_setautoindentstyle_isbase) {
            qscilexerperl_setautoindentstyle_isbase = false;
            QsciLexerPerl::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerperl_setautoindentstyle_callback != nullptr) {
            qscilexerperl_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerPerl::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerperl_setcolor_isbase) {
            qscilexerperl_setcolor_isbase = false;
            QsciLexerPerl::setColor(c, style);
        } else if (qscilexerperl_setcolor_callback != nullptr) {
            qscilexerperl_setcolor_callback(this, c, style);
        } else {
            QsciLexerPerl::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerperl_seteolfill_isbase) {
            qscilexerperl_seteolfill_isbase = false;
            QsciLexerPerl::setEolFill(eoffill, style);
        } else if (qscilexerperl_seteolfill_callback != nullptr) {
            qscilexerperl_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerPerl::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerperl_setfont_isbase) {
            qscilexerperl_setfont_isbase = false;
            QsciLexerPerl::setFont(f, style);
        } else if (qscilexerperl_setfont_callback != nullptr) {
            qscilexerperl_setfont_callback(this, f, style);
        } else {
            QsciLexerPerl::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerperl_setpaper_isbase) {
            qscilexerperl_setpaper_isbase = false;
            QsciLexerPerl::setPaper(c, style);
        } else if (qscilexerperl_setpaper_callback != nullptr) {
            qscilexerperl_setpaper_callback(this, c, style);
        } else {
            QsciLexerPerl::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerperl_readproperties_isbase) {
            qscilexerperl_readproperties_isbase = false;
            return QsciLexerPerl::readProperties(qs, prefix);
        } else if (qscilexerperl_readproperties_callback != nullptr) {
            return qscilexerperl_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerPerl::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerperl_writeproperties_isbase) {
            qscilexerperl_writeproperties_isbase = false;
            return QsciLexerPerl::writeProperties(qs, prefix);
        } else if (qscilexerperl_writeproperties_callback != nullptr) {
            return qscilexerperl_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerPerl::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerperl_event_isbase) {
            qscilexerperl_event_isbase = false;
            return QsciLexerPerl::event(event);
        } else if (qscilexerperl_event_callback != nullptr) {
            return qscilexerperl_event_callback(this, event);
        } else {
            return QsciLexerPerl::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerperl_eventfilter_isbase) {
            qscilexerperl_eventfilter_isbase = false;
            return QsciLexerPerl::eventFilter(watched, event);
        } else if (qscilexerperl_eventfilter_callback != nullptr) {
            return qscilexerperl_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerPerl::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerperl_timerevent_isbase) {
            qscilexerperl_timerevent_isbase = false;
            QsciLexerPerl::timerEvent(event);
        } else if (qscilexerperl_timerevent_callback != nullptr) {
            qscilexerperl_timerevent_callback(this, event);
        } else {
            QsciLexerPerl::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerperl_childevent_isbase) {
            qscilexerperl_childevent_isbase = false;
            QsciLexerPerl::childEvent(event);
        } else if (qscilexerperl_childevent_callback != nullptr) {
            qscilexerperl_childevent_callback(this, event);
        } else {
            QsciLexerPerl::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerperl_customevent_isbase) {
            qscilexerperl_customevent_isbase = false;
            QsciLexerPerl::customEvent(event);
        } else if (qscilexerperl_customevent_callback != nullptr) {
            qscilexerperl_customevent_callback(this, event);
        } else {
            QsciLexerPerl::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerperl_connectnotify_isbase) {
            qscilexerperl_connectnotify_isbase = false;
            QsciLexerPerl::connectNotify(signal);
        } else if (qscilexerperl_connectnotify_callback != nullptr) {
            qscilexerperl_connectnotify_callback(this, signal);
        } else {
            QsciLexerPerl::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerperl_disconnectnotify_isbase) {
            qscilexerperl_disconnectnotify_isbase = false;
            QsciLexerPerl::disconnectNotify(signal);
        } else if (qscilexerperl_disconnectnotify_callback != nullptr) {
            qscilexerperl_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerPerl::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerperl_sender_isbase) {
            qscilexerperl_sender_isbase = false;
            return QsciLexerPerl::sender();
        } else if (qscilexerperl_sender_callback != nullptr) {
            return qscilexerperl_sender_callback();
        } else {
            return QsciLexerPerl::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerperl_sendersignalindex_isbase) {
            qscilexerperl_sendersignalindex_isbase = false;
            return QsciLexerPerl::senderSignalIndex();
        } else if (qscilexerperl_sendersignalindex_callback != nullptr) {
            return qscilexerperl_sendersignalindex_callback();
        } else {
            return QsciLexerPerl::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerperl_receivers_isbase) {
            qscilexerperl_receivers_isbase = false;
            return QsciLexerPerl::receivers(signal);
        } else if (qscilexerperl_receivers_callback != nullptr) {
            return qscilexerperl_receivers_callback(this, signal);
        } else {
            return QsciLexerPerl::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerperl_issignalconnected_isbase) {
            qscilexerperl_issignalconnected_isbase = false;
            return QsciLexerPerl::isSignalConnected(signal);
        } else if (qscilexerperl_issignalconnected_callback != nullptr) {
            return qscilexerperl_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerPerl::isSignalConnected(signal);
        }
    }
};

#endif
