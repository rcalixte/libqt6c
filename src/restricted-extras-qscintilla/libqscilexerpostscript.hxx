#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPOSTSCRIPT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPOSTSCRIPT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerPostScript so that we can call protected methods
class VirtualQsciLexerPostScript : public QsciLexerPostScript {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerPostScript_Metacall_Callback = int (*)(QsciLexerPostScript*, QMetaObject::Call, int, void**);
    using QsciLexerPostScript_SetTokenize_Callback = void (*)(QsciLexerPostScript*, bool);
    using QsciLexerPostScript_SetLevel_Callback = void (*)(QsciLexerPostScript*, int);
    using QsciLexerPostScript_SetFoldCompact_Callback = void (*)(QsciLexerPostScript*, bool);
    using QsciLexerPostScript_SetFoldAtElse_Callback = void (*)(QsciLexerPostScript*, bool);
    using QsciLexerPostScript_Language_Callback = const char* (*)();
    using QsciLexerPostScript_Lexer_Callback = const char* (*)();
    using QsciLexerPostScript_LexerId_Callback = int (*)();
    using QsciLexerPostScript_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerPostScript_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerPostScript_BlockEnd_Callback = const char* (*)(const QsciLexerPostScript*, int*);
    using QsciLexerPostScript_BlockLookback_Callback = int (*)();
    using QsciLexerPostScript_BlockStart_Callback = const char* (*)(const QsciLexerPostScript*, int*);
    using QsciLexerPostScript_BlockStartKeyword_Callback = const char* (*)(const QsciLexerPostScript*, int*);
    using QsciLexerPostScript_BraceStyle_Callback = int (*)();
    using QsciLexerPostScript_CaseSensitive_Callback = bool (*)();
    using QsciLexerPostScript_Color_Callback = QColor (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_EolFill_Callback = bool (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_Font_Callback = QFont (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_IndentationGuideView_Callback = int (*)();
    using QsciLexerPostScript_Keywords_Callback = const char* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultStyle_Callback = int (*)();
    using QsciLexerPostScript_Description_Callback = QString (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_Paper_Callback = QColor (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultEolFill_Callback = bool (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_SetEditor_Callback = void (*)(QsciLexerPostScript*, QsciScintilla*);
    using QsciLexerPostScript_RefreshProperties_Callback = void (*)();
    using QsciLexerPostScript_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerPostScript_WordCharacters_Callback = const char* (*)();
    using QsciLexerPostScript_SetAutoIndentStyle_Callback = void (*)(QsciLexerPostScript*, int);
    using QsciLexerPostScript_SetColor_Callback = void (*)(QsciLexerPostScript*, const QColor&, int);
    using QsciLexerPostScript_SetEolFill_Callback = void (*)(QsciLexerPostScript*, bool, int);
    using QsciLexerPostScript_SetFont_Callback = void (*)(QsciLexerPostScript*, const QFont&, int);
    using QsciLexerPostScript_SetPaper_Callback = void (*)(QsciLexerPostScript*, const QColor&, int);
    using QsciLexerPostScript_ReadProperties_Callback = bool (*)(QsciLexerPostScript*, QSettings&, const QString&);
    using QsciLexerPostScript_WriteProperties_Callback = bool (*)(const QsciLexerPostScript*, QSettings&, const QString&);
    using QsciLexerPostScript_Event_Callback = bool (*)(QsciLexerPostScript*, QEvent*);
    using QsciLexerPostScript_EventFilter_Callback = bool (*)(QsciLexerPostScript*, QObject*, QEvent*);
    using QsciLexerPostScript_TimerEvent_Callback = void (*)(QsciLexerPostScript*, QTimerEvent*);
    using QsciLexerPostScript_ChildEvent_Callback = void (*)(QsciLexerPostScript*, QChildEvent*);
    using QsciLexerPostScript_CustomEvent_Callback = void (*)(QsciLexerPostScript*, QEvent*);
    using QsciLexerPostScript_ConnectNotify_Callback = void (*)(QsciLexerPostScript*, const QMetaMethod&);
    using QsciLexerPostScript_DisconnectNotify_Callback = void (*)(QsciLexerPostScript*, const QMetaMethod&);
    using QsciLexerPostScript_Sender_Callback = QObject* (*)();
    using QsciLexerPostScript_SenderSignalIndex_Callback = int (*)();
    using QsciLexerPostScript_Receivers_Callback = int (*)(const QsciLexerPostScript*, const char*);
    using QsciLexerPostScript_IsSignalConnected_Callback = bool (*)(const QsciLexerPostScript*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerPostScript_Metacall_Callback qscilexerpostscript_metacall_callback = nullptr;
    QsciLexerPostScript_SetTokenize_Callback qscilexerpostscript_settokenize_callback = nullptr;
    QsciLexerPostScript_SetLevel_Callback qscilexerpostscript_setlevel_callback = nullptr;
    QsciLexerPostScript_SetFoldCompact_Callback qscilexerpostscript_setfoldcompact_callback = nullptr;
    QsciLexerPostScript_SetFoldAtElse_Callback qscilexerpostscript_setfoldatelse_callback = nullptr;
    QsciLexerPostScript_Language_Callback qscilexerpostscript_language_callback = nullptr;
    QsciLexerPostScript_Lexer_Callback qscilexerpostscript_lexer_callback = nullptr;
    QsciLexerPostScript_LexerId_Callback qscilexerpostscript_lexerid_callback = nullptr;
    QsciLexerPostScript_AutoCompletionFillups_Callback qscilexerpostscript_autocompletionfillups_callback = nullptr;
    QsciLexerPostScript_AutoCompletionWordSeparators_Callback qscilexerpostscript_autocompletionwordseparators_callback = nullptr;
    QsciLexerPostScript_BlockEnd_Callback qscilexerpostscript_blockend_callback = nullptr;
    QsciLexerPostScript_BlockLookback_Callback qscilexerpostscript_blocklookback_callback = nullptr;
    QsciLexerPostScript_BlockStart_Callback qscilexerpostscript_blockstart_callback = nullptr;
    QsciLexerPostScript_BlockStartKeyword_Callback qscilexerpostscript_blockstartkeyword_callback = nullptr;
    QsciLexerPostScript_BraceStyle_Callback qscilexerpostscript_bracestyle_callback = nullptr;
    QsciLexerPostScript_CaseSensitive_Callback qscilexerpostscript_casesensitive_callback = nullptr;
    QsciLexerPostScript_Color_Callback qscilexerpostscript_color_callback = nullptr;
    QsciLexerPostScript_EolFill_Callback qscilexerpostscript_eolfill_callback = nullptr;
    QsciLexerPostScript_Font_Callback qscilexerpostscript_font_callback = nullptr;
    QsciLexerPostScript_IndentationGuideView_Callback qscilexerpostscript_indentationguideview_callback = nullptr;
    QsciLexerPostScript_Keywords_Callback qscilexerpostscript_keywords_callback = nullptr;
    QsciLexerPostScript_DefaultStyle_Callback qscilexerpostscript_defaultstyle_callback = nullptr;
    QsciLexerPostScript_Description_Callback qscilexerpostscript_description_callback = nullptr;
    QsciLexerPostScript_Paper_Callback qscilexerpostscript_paper_callback = nullptr;
    QsciLexerPostScript_DefaultColorWithStyle_Callback qscilexerpostscript_defaultcolorwithstyle_callback = nullptr;
    QsciLexerPostScript_DefaultEolFill_Callback qscilexerpostscript_defaulteolfill_callback = nullptr;
    QsciLexerPostScript_DefaultFontWithStyle_Callback qscilexerpostscript_defaultfontwithstyle_callback = nullptr;
    QsciLexerPostScript_DefaultPaperWithStyle_Callback qscilexerpostscript_defaultpaperwithstyle_callback = nullptr;
    QsciLexerPostScript_SetEditor_Callback qscilexerpostscript_seteditor_callback = nullptr;
    QsciLexerPostScript_RefreshProperties_Callback qscilexerpostscript_refreshproperties_callback = nullptr;
    QsciLexerPostScript_StyleBitsNeeded_Callback qscilexerpostscript_stylebitsneeded_callback = nullptr;
    QsciLexerPostScript_WordCharacters_Callback qscilexerpostscript_wordcharacters_callback = nullptr;
    QsciLexerPostScript_SetAutoIndentStyle_Callback qscilexerpostscript_setautoindentstyle_callback = nullptr;
    QsciLexerPostScript_SetColor_Callback qscilexerpostscript_setcolor_callback = nullptr;
    QsciLexerPostScript_SetEolFill_Callback qscilexerpostscript_seteolfill_callback = nullptr;
    QsciLexerPostScript_SetFont_Callback qscilexerpostscript_setfont_callback = nullptr;
    QsciLexerPostScript_SetPaper_Callback qscilexerpostscript_setpaper_callback = nullptr;
    QsciLexerPostScript_ReadProperties_Callback qscilexerpostscript_readproperties_callback = nullptr;
    QsciLexerPostScript_WriteProperties_Callback qscilexerpostscript_writeproperties_callback = nullptr;
    QsciLexerPostScript_Event_Callback qscilexerpostscript_event_callback = nullptr;
    QsciLexerPostScript_EventFilter_Callback qscilexerpostscript_eventfilter_callback = nullptr;
    QsciLexerPostScript_TimerEvent_Callback qscilexerpostscript_timerevent_callback = nullptr;
    QsciLexerPostScript_ChildEvent_Callback qscilexerpostscript_childevent_callback = nullptr;
    QsciLexerPostScript_CustomEvent_Callback qscilexerpostscript_customevent_callback = nullptr;
    QsciLexerPostScript_ConnectNotify_Callback qscilexerpostscript_connectnotify_callback = nullptr;
    QsciLexerPostScript_DisconnectNotify_Callback qscilexerpostscript_disconnectnotify_callback = nullptr;
    QsciLexerPostScript_Sender_Callback qscilexerpostscript_sender_callback = nullptr;
    QsciLexerPostScript_SenderSignalIndex_Callback qscilexerpostscript_sendersignalindex_callback = nullptr;
    QsciLexerPostScript_Receivers_Callback qscilexerpostscript_receivers_callback = nullptr;
    QsciLexerPostScript_IsSignalConnected_Callback qscilexerpostscript_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerpostscript_metacall_isbase = false;
    mutable bool qscilexerpostscript_settokenize_isbase = false;
    mutable bool qscilexerpostscript_setlevel_isbase = false;
    mutable bool qscilexerpostscript_setfoldcompact_isbase = false;
    mutable bool qscilexerpostscript_setfoldatelse_isbase = false;
    mutable bool qscilexerpostscript_language_isbase = false;
    mutable bool qscilexerpostscript_lexer_isbase = false;
    mutable bool qscilexerpostscript_lexerid_isbase = false;
    mutable bool qscilexerpostscript_autocompletionfillups_isbase = false;
    mutable bool qscilexerpostscript_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerpostscript_blockend_isbase = false;
    mutable bool qscilexerpostscript_blocklookback_isbase = false;
    mutable bool qscilexerpostscript_blockstart_isbase = false;
    mutable bool qscilexerpostscript_blockstartkeyword_isbase = false;
    mutable bool qscilexerpostscript_bracestyle_isbase = false;
    mutable bool qscilexerpostscript_casesensitive_isbase = false;
    mutable bool qscilexerpostscript_color_isbase = false;
    mutable bool qscilexerpostscript_eolfill_isbase = false;
    mutable bool qscilexerpostscript_font_isbase = false;
    mutable bool qscilexerpostscript_indentationguideview_isbase = false;
    mutable bool qscilexerpostscript_keywords_isbase = false;
    mutable bool qscilexerpostscript_defaultstyle_isbase = false;
    mutable bool qscilexerpostscript_description_isbase = false;
    mutable bool qscilexerpostscript_paper_isbase = false;
    mutable bool qscilexerpostscript_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerpostscript_defaulteolfill_isbase = false;
    mutable bool qscilexerpostscript_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerpostscript_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerpostscript_seteditor_isbase = false;
    mutable bool qscilexerpostscript_refreshproperties_isbase = false;
    mutable bool qscilexerpostscript_stylebitsneeded_isbase = false;
    mutable bool qscilexerpostscript_wordcharacters_isbase = false;
    mutable bool qscilexerpostscript_setautoindentstyle_isbase = false;
    mutable bool qscilexerpostscript_setcolor_isbase = false;
    mutable bool qscilexerpostscript_seteolfill_isbase = false;
    mutable bool qscilexerpostscript_setfont_isbase = false;
    mutable bool qscilexerpostscript_setpaper_isbase = false;
    mutable bool qscilexerpostscript_readproperties_isbase = false;
    mutable bool qscilexerpostscript_writeproperties_isbase = false;
    mutable bool qscilexerpostscript_event_isbase = false;
    mutable bool qscilexerpostscript_eventfilter_isbase = false;
    mutable bool qscilexerpostscript_timerevent_isbase = false;
    mutable bool qscilexerpostscript_childevent_isbase = false;
    mutable bool qscilexerpostscript_customevent_isbase = false;
    mutable bool qscilexerpostscript_connectnotify_isbase = false;
    mutable bool qscilexerpostscript_disconnectnotify_isbase = false;
    mutable bool qscilexerpostscript_sender_isbase = false;
    mutable bool qscilexerpostscript_sendersignalindex_isbase = false;
    mutable bool qscilexerpostscript_receivers_isbase = false;
    mutable bool qscilexerpostscript_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerPostScript() : QsciLexerPostScript(){};
    VirtualQsciLexerPostScript(QObject* parent) : QsciLexerPostScript(parent){};

    ~VirtualQsciLexerPostScript() {
        qscilexerpostscript_metacall_callback = nullptr;
        qscilexerpostscript_settokenize_callback = nullptr;
        qscilexerpostscript_setlevel_callback = nullptr;
        qscilexerpostscript_setfoldcompact_callback = nullptr;
        qscilexerpostscript_setfoldatelse_callback = nullptr;
        qscilexerpostscript_language_callback = nullptr;
        qscilexerpostscript_lexer_callback = nullptr;
        qscilexerpostscript_lexerid_callback = nullptr;
        qscilexerpostscript_autocompletionfillups_callback = nullptr;
        qscilexerpostscript_autocompletionwordseparators_callback = nullptr;
        qscilexerpostscript_blockend_callback = nullptr;
        qscilexerpostscript_blocklookback_callback = nullptr;
        qscilexerpostscript_blockstart_callback = nullptr;
        qscilexerpostscript_blockstartkeyword_callback = nullptr;
        qscilexerpostscript_bracestyle_callback = nullptr;
        qscilexerpostscript_casesensitive_callback = nullptr;
        qscilexerpostscript_color_callback = nullptr;
        qscilexerpostscript_eolfill_callback = nullptr;
        qscilexerpostscript_font_callback = nullptr;
        qscilexerpostscript_indentationguideview_callback = nullptr;
        qscilexerpostscript_keywords_callback = nullptr;
        qscilexerpostscript_defaultstyle_callback = nullptr;
        qscilexerpostscript_description_callback = nullptr;
        qscilexerpostscript_paper_callback = nullptr;
        qscilexerpostscript_defaultcolorwithstyle_callback = nullptr;
        qscilexerpostscript_defaulteolfill_callback = nullptr;
        qscilexerpostscript_defaultfontwithstyle_callback = nullptr;
        qscilexerpostscript_defaultpaperwithstyle_callback = nullptr;
        qscilexerpostscript_seteditor_callback = nullptr;
        qscilexerpostscript_refreshproperties_callback = nullptr;
        qscilexerpostscript_stylebitsneeded_callback = nullptr;
        qscilexerpostscript_wordcharacters_callback = nullptr;
        qscilexerpostscript_setautoindentstyle_callback = nullptr;
        qscilexerpostscript_setcolor_callback = nullptr;
        qscilexerpostscript_seteolfill_callback = nullptr;
        qscilexerpostscript_setfont_callback = nullptr;
        qscilexerpostscript_setpaper_callback = nullptr;
        qscilexerpostscript_readproperties_callback = nullptr;
        qscilexerpostscript_writeproperties_callback = nullptr;
        qscilexerpostscript_event_callback = nullptr;
        qscilexerpostscript_eventfilter_callback = nullptr;
        qscilexerpostscript_timerevent_callback = nullptr;
        qscilexerpostscript_childevent_callback = nullptr;
        qscilexerpostscript_customevent_callback = nullptr;
        qscilexerpostscript_connectnotify_callback = nullptr;
        qscilexerpostscript_disconnectnotify_callback = nullptr;
        qscilexerpostscript_sender_callback = nullptr;
        qscilexerpostscript_sendersignalindex_callback = nullptr;
        qscilexerpostscript_receivers_callback = nullptr;
        qscilexerpostscript_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerPostScript_Metacall_Callback(QsciLexerPostScript_Metacall_Callback cb) { qscilexerpostscript_metacall_callback = cb; }
    void setQsciLexerPostScript_SetTokenize_Callback(QsciLexerPostScript_SetTokenize_Callback cb) { qscilexerpostscript_settokenize_callback = cb; }
    void setQsciLexerPostScript_SetLevel_Callback(QsciLexerPostScript_SetLevel_Callback cb) { qscilexerpostscript_setlevel_callback = cb; }
    void setQsciLexerPostScript_SetFoldCompact_Callback(QsciLexerPostScript_SetFoldCompact_Callback cb) { qscilexerpostscript_setfoldcompact_callback = cb; }
    void setQsciLexerPostScript_SetFoldAtElse_Callback(QsciLexerPostScript_SetFoldAtElse_Callback cb) { qscilexerpostscript_setfoldatelse_callback = cb; }
    void setQsciLexerPostScript_Language_Callback(QsciLexerPostScript_Language_Callback cb) { qscilexerpostscript_language_callback = cb; }
    void setQsciLexerPostScript_Lexer_Callback(QsciLexerPostScript_Lexer_Callback cb) { qscilexerpostscript_lexer_callback = cb; }
    void setQsciLexerPostScript_LexerId_Callback(QsciLexerPostScript_LexerId_Callback cb) { qscilexerpostscript_lexerid_callback = cb; }
    void setQsciLexerPostScript_AutoCompletionFillups_Callback(QsciLexerPostScript_AutoCompletionFillups_Callback cb) { qscilexerpostscript_autocompletionfillups_callback = cb; }
    void setQsciLexerPostScript_AutoCompletionWordSeparators_Callback(QsciLexerPostScript_AutoCompletionWordSeparators_Callback cb) { qscilexerpostscript_autocompletionwordseparators_callback = cb; }
    void setQsciLexerPostScript_BlockEnd_Callback(QsciLexerPostScript_BlockEnd_Callback cb) { qscilexerpostscript_blockend_callback = cb; }
    void setQsciLexerPostScript_BlockLookback_Callback(QsciLexerPostScript_BlockLookback_Callback cb) { qscilexerpostscript_blocklookback_callback = cb; }
    void setQsciLexerPostScript_BlockStart_Callback(QsciLexerPostScript_BlockStart_Callback cb) { qscilexerpostscript_blockstart_callback = cb; }
    void setQsciLexerPostScript_BlockStartKeyword_Callback(QsciLexerPostScript_BlockStartKeyword_Callback cb) { qscilexerpostscript_blockstartkeyword_callback = cb; }
    void setQsciLexerPostScript_BraceStyle_Callback(QsciLexerPostScript_BraceStyle_Callback cb) { qscilexerpostscript_bracestyle_callback = cb; }
    void setQsciLexerPostScript_CaseSensitive_Callback(QsciLexerPostScript_CaseSensitive_Callback cb) { qscilexerpostscript_casesensitive_callback = cb; }
    void setQsciLexerPostScript_Color_Callback(QsciLexerPostScript_Color_Callback cb) { qscilexerpostscript_color_callback = cb; }
    void setQsciLexerPostScript_EolFill_Callback(QsciLexerPostScript_EolFill_Callback cb) { qscilexerpostscript_eolfill_callback = cb; }
    void setQsciLexerPostScript_Font_Callback(QsciLexerPostScript_Font_Callback cb) { qscilexerpostscript_font_callback = cb; }
    void setQsciLexerPostScript_IndentationGuideView_Callback(QsciLexerPostScript_IndentationGuideView_Callback cb) { qscilexerpostscript_indentationguideview_callback = cb; }
    void setQsciLexerPostScript_Keywords_Callback(QsciLexerPostScript_Keywords_Callback cb) { qscilexerpostscript_keywords_callback = cb; }
    void setQsciLexerPostScript_DefaultStyle_Callback(QsciLexerPostScript_DefaultStyle_Callback cb) { qscilexerpostscript_defaultstyle_callback = cb; }
    void setQsciLexerPostScript_Description_Callback(QsciLexerPostScript_Description_Callback cb) { qscilexerpostscript_description_callback = cb; }
    void setQsciLexerPostScript_Paper_Callback(QsciLexerPostScript_Paper_Callback cb) { qscilexerpostscript_paper_callback = cb; }
    void setQsciLexerPostScript_DefaultColorWithStyle_Callback(QsciLexerPostScript_DefaultColorWithStyle_Callback cb) { qscilexerpostscript_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerPostScript_DefaultEolFill_Callback(QsciLexerPostScript_DefaultEolFill_Callback cb) { qscilexerpostscript_defaulteolfill_callback = cb; }
    void setQsciLexerPostScript_DefaultFontWithStyle_Callback(QsciLexerPostScript_DefaultFontWithStyle_Callback cb) { qscilexerpostscript_defaultfontwithstyle_callback = cb; }
    void setQsciLexerPostScript_DefaultPaperWithStyle_Callback(QsciLexerPostScript_DefaultPaperWithStyle_Callback cb) { qscilexerpostscript_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerPostScript_SetEditor_Callback(QsciLexerPostScript_SetEditor_Callback cb) { qscilexerpostscript_seteditor_callback = cb; }
    void setQsciLexerPostScript_RefreshProperties_Callback(QsciLexerPostScript_RefreshProperties_Callback cb) { qscilexerpostscript_refreshproperties_callback = cb; }
    void setQsciLexerPostScript_StyleBitsNeeded_Callback(QsciLexerPostScript_StyleBitsNeeded_Callback cb) { qscilexerpostscript_stylebitsneeded_callback = cb; }
    void setQsciLexerPostScript_WordCharacters_Callback(QsciLexerPostScript_WordCharacters_Callback cb) { qscilexerpostscript_wordcharacters_callback = cb; }
    void setQsciLexerPostScript_SetAutoIndentStyle_Callback(QsciLexerPostScript_SetAutoIndentStyle_Callback cb) { qscilexerpostscript_setautoindentstyle_callback = cb; }
    void setQsciLexerPostScript_SetColor_Callback(QsciLexerPostScript_SetColor_Callback cb) { qscilexerpostscript_setcolor_callback = cb; }
    void setQsciLexerPostScript_SetEolFill_Callback(QsciLexerPostScript_SetEolFill_Callback cb) { qscilexerpostscript_seteolfill_callback = cb; }
    void setQsciLexerPostScript_SetFont_Callback(QsciLexerPostScript_SetFont_Callback cb) { qscilexerpostscript_setfont_callback = cb; }
    void setQsciLexerPostScript_SetPaper_Callback(QsciLexerPostScript_SetPaper_Callback cb) { qscilexerpostscript_setpaper_callback = cb; }
    void setQsciLexerPostScript_ReadProperties_Callback(QsciLexerPostScript_ReadProperties_Callback cb) { qscilexerpostscript_readproperties_callback = cb; }
    void setQsciLexerPostScript_WriteProperties_Callback(QsciLexerPostScript_WriteProperties_Callback cb) { qscilexerpostscript_writeproperties_callback = cb; }
    void setQsciLexerPostScript_Event_Callback(QsciLexerPostScript_Event_Callback cb) { qscilexerpostscript_event_callback = cb; }
    void setQsciLexerPostScript_EventFilter_Callback(QsciLexerPostScript_EventFilter_Callback cb) { qscilexerpostscript_eventfilter_callback = cb; }
    void setQsciLexerPostScript_TimerEvent_Callback(QsciLexerPostScript_TimerEvent_Callback cb) { qscilexerpostscript_timerevent_callback = cb; }
    void setQsciLexerPostScript_ChildEvent_Callback(QsciLexerPostScript_ChildEvent_Callback cb) { qscilexerpostscript_childevent_callback = cb; }
    void setQsciLexerPostScript_CustomEvent_Callback(QsciLexerPostScript_CustomEvent_Callback cb) { qscilexerpostscript_customevent_callback = cb; }
    void setQsciLexerPostScript_ConnectNotify_Callback(QsciLexerPostScript_ConnectNotify_Callback cb) { qscilexerpostscript_connectnotify_callback = cb; }
    void setQsciLexerPostScript_DisconnectNotify_Callback(QsciLexerPostScript_DisconnectNotify_Callback cb) { qscilexerpostscript_disconnectnotify_callback = cb; }
    void setQsciLexerPostScript_Sender_Callback(QsciLexerPostScript_Sender_Callback cb) { qscilexerpostscript_sender_callback = cb; }
    void setQsciLexerPostScript_SenderSignalIndex_Callback(QsciLexerPostScript_SenderSignalIndex_Callback cb) { qscilexerpostscript_sendersignalindex_callback = cb; }
    void setQsciLexerPostScript_Receivers_Callback(QsciLexerPostScript_Receivers_Callback cb) { qscilexerpostscript_receivers_callback = cb; }
    void setQsciLexerPostScript_IsSignalConnected_Callback(QsciLexerPostScript_IsSignalConnected_Callback cb) { qscilexerpostscript_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerPostScript_Metacall_IsBase(bool value) const { qscilexerpostscript_metacall_isbase = value; }
    void setQsciLexerPostScript_SetTokenize_IsBase(bool value) const { qscilexerpostscript_settokenize_isbase = value; }
    void setQsciLexerPostScript_SetLevel_IsBase(bool value) const { qscilexerpostscript_setlevel_isbase = value; }
    void setQsciLexerPostScript_SetFoldCompact_IsBase(bool value) const { qscilexerpostscript_setfoldcompact_isbase = value; }
    void setQsciLexerPostScript_SetFoldAtElse_IsBase(bool value) const { qscilexerpostscript_setfoldatelse_isbase = value; }
    void setQsciLexerPostScript_Language_IsBase(bool value) const { qscilexerpostscript_language_isbase = value; }
    void setQsciLexerPostScript_Lexer_IsBase(bool value) const { qscilexerpostscript_lexer_isbase = value; }
    void setQsciLexerPostScript_LexerId_IsBase(bool value) const { qscilexerpostscript_lexerid_isbase = value; }
    void setQsciLexerPostScript_AutoCompletionFillups_IsBase(bool value) const { qscilexerpostscript_autocompletionfillups_isbase = value; }
    void setQsciLexerPostScript_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerpostscript_autocompletionwordseparators_isbase = value; }
    void setQsciLexerPostScript_BlockEnd_IsBase(bool value) const { qscilexerpostscript_blockend_isbase = value; }
    void setQsciLexerPostScript_BlockLookback_IsBase(bool value) const { qscilexerpostscript_blocklookback_isbase = value; }
    void setQsciLexerPostScript_BlockStart_IsBase(bool value) const { qscilexerpostscript_blockstart_isbase = value; }
    void setQsciLexerPostScript_BlockStartKeyword_IsBase(bool value) const { qscilexerpostscript_blockstartkeyword_isbase = value; }
    void setQsciLexerPostScript_BraceStyle_IsBase(bool value) const { qscilexerpostscript_bracestyle_isbase = value; }
    void setQsciLexerPostScript_CaseSensitive_IsBase(bool value) const { qscilexerpostscript_casesensitive_isbase = value; }
    void setQsciLexerPostScript_Color_IsBase(bool value) const { qscilexerpostscript_color_isbase = value; }
    void setQsciLexerPostScript_EolFill_IsBase(bool value) const { qscilexerpostscript_eolfill_isbase = value; }
    void setQsciLexerPostScript_Font_IsBase(bool value) const { qscilexerpostscript_font_isbase = value; }
    void setQsciLexerPostScript_IndentationGuideView_IsBase(bool value) const { qscilexerpostscript_indentationguideview_isbase = value; }
    void setQsciLexerPostScript_Keywords_IsBase(bool value) const { qscilexerpostscript_keywords_isbase = value; }
    void setQsciLexerPostScript_DefaultStyle_IsBase(bool value) const { qscilexerpostscript_defaultstyle_isbase = value; }
    void setQsciLexerPostScript_Description_IsBase(bool value) const { qscilexerpostscript_description_isbase = value; }
    void setQsciLexerPostScript_Paper_IsBase(bool value) const { qscilexerpostscript_paper_isbase = value; }
    void setQsciLexerPostScript_DefaultColorWithStyle_IsBase(bool value) const { qscilexerpostscript_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerPostScript_DefaultEolFill_IsBase(bool value) const { qscilexerpostscript_defaulteolfill_isbase = value; }
    void setQsciLexerPostScript_DefaultFontWithStyle_IsBase(bool value) const { qscilexerpostscript_defaultfontwithstyle_isbase = value; }
    void setQsciLexerPostScript_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerpostscript_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerPostScript_SetEditor_IsBase(bool value) const { qscilexerpostscript_seteditor_isbase = value; }
    void setQsciLexerPostScript_RefreshProperties_IsBase(bool value) const { qscilexerpostscript_refreshproperties_isbase = value; }
    void setQsciLexerPostScript_StyleBitsNeeded_IsBase(bool value) const { qscilexerpostscript_stylebitsneeded_isbase = value; }
    void setQsciLexerPostScript_WordCharacters_IsBase(bool value) const { qscilexerpostscript_wordcharacters_isbase = value; }
    void setQsciLexerPostScript_SetAutoIndentStyle_IsBase(bool value) const { qscilexerpostscript_setautoindentstyle_isbase = value; }
    void setQsciLexerPostScript_SetColor_IsBase(bool value) const { qscilexerpostscript_setcolor_isbase = value; }
    void setQsciLexerPostScript_SetEolFill_IsBase(bool value) const { qscilexerpostscript_seteolfill_isbase = value; }
    void setQsciLexerPostScript_SetFont_IsBase(bool value) const { qscilexerpostscript_setfont_isbase = value; }
    void setQsciLexerPostScript_SetPaper_IsBase(bool value) const { qscilexerpostscript_setpaper_isbase = value; }
    void setQsciLexerPostScript_ReadProperties_IsBase(bool value) const { qscilexerpostscript_readproperties_isbase = value; }
    void setQsciLexerPostScript_WriteProperties_IsBase(bool value) const { qscilexerpostscript_writeproperties_isbase = value; }
    void setQsciLexerPostScript_Event_IsBase(bool value) const { qscilexerpostscript_event_isbase = value; }
    void setQsciLexerPostScript_EventFilter_IsBase(bool value) const { qscilexerpostscript_eventfilter_isbase = value; }
    void setQsciLexerPostScript_TimerEvent_IsBase(bool value) const { qscilexerpostscript_timerevent_isbase = value; }
    void setQsciLexerPostScript_ChildEvent_IsBase(bool value) const { qscilexerpostscript_childevent_isbase = value; }
    void setQsciLexerPostScript_CustomEvent_IsBase(bool value) const { qscilexerpostscript_customevent_isbase = value; }
    void setQsciLexerPostScript_ConnectNotify_IsBase(bool value) const { qscilexerpostscript_connectnotify_isbase = value; }
    void setQsciLexerPostScript_DisconnectNotify_IsBase(bool value) const { qscilexerpostscript_disconnectnotify_isbase = value; }
    void setQsciLexerPostScript_Sender_IsBase(bool value) const { qscilexerpostscript_sender_isbase = value; }
    void setQsciLexerPostScript_SenderSignalIndex_IsBase(bool value) const { qscilexerpostscript_sendersignalindex_isbase = value; }
    void setQsciLexerPostScript_Receivers_IsBase(bool value) const { qscilexerpostscript_receivers_isbase = value; }
    void setQsciLexerPostScript_IsSignalConnected_IsBase(bool value) const { qscilexerpostscript_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerpostscript_metacall_isbase) {
            qscilexerpostscript_metacall_isbase = false;
            return QsciLexerPostScript::qt_metacall(param1, param2, param3);
        } else if (qscilexerpostscript_metacall_callback != nullptr) {
            return qscilexerpostscript_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerPostScript::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTokenize(bool tokenize) override {
        if (qscilexerpostscript_settokenize_isbase) {
            qscilexerpostscript_settokenize_isbase = false;
            QsciLexerPostScript::setTokenize(tokenize);
        } else if (qscilexerpostscript_settokenize_callback != nullptr) {
            qscilexerpostscript_settokenize_callback(this, tokenize);
        } else {
            QsciLexerPostScript::setTokenize(tokenize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLevel(int level) override {
        if (qscilexerpostscript_setlevel_isbase) {
            qscilexerpostscript_setlevel_isbase = false;
            QsciLexerPostScript::setLevel(level);
        } else if (qscilexerpostscript_setlevel_callback != nullptr) {
            qscilexerpostscript_setlevel_callback(this, level);
        } else {
            QsciLexerPostScript::setLevel(level);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerpostscript_setfoldcompact_isbase) {
            qscilexerpostscript_setfoldcompact_isbase = false;
            QsciLexerPostScript::setFoldCompact(fold);
        } else if (qscilexerpostscript_setfoldcompact_callback != nullptr) {
            qscilexerpostscript_setfoldcompact_callback(this, fold);
        } else {
            QsciLexerPostScript::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexerpostscript_setfoldatelse_isbase) {
            qscilexerpostscript_setfoldatelse_isbase = false;
            QsciLexerPostScript::setFoldAtElse(fold);
        } else if (qscilexerpostscript_setfoldatelse_callback != nullptr) {
            qscilexerpostscript_setfoldatelse_callback(this, fold);
        } else {
            QsciLexerPostScript::setFoldAtElse(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerpostscript_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerpostscript_lexer_isbase) {
            qscilexerpostscript_lexer_isbase = false;
            return QsciLexerPostScript::lexer();
        } else if (qscilexerpostscript_lexer_callback != nullptr) {
            return qscilexerpostscript_lexer_callback();
        } else {
            return QsciLexerPostScript::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerpostscript_lexerid_isbase) {
            qscilexerpostscript_lexerid_isbase = false;
            return QsciLexerPostScript::lexerId();
        } else if (qscilexerpostscript_lexerid_callback != nullptr) {
            return qscilexerpostscript_lexerid_callback();
        } else {
            return QsciLexerPostScript::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerpostscript_autocompletionfillups_isbase) {
            qscilexerpostscript_autocompletionfillups_isbase = false;
            return QsciLexerPostScript::autoCompletionFillups();
        } else if (qscilexerpostscript_autocompletionfillups_callback != nullptr) {
            return qscilexerpostscript_autocompletionfillups_callback();
        } else {
            return QsciLexerPostScript::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerpostscript_autocompletionwordseparators_isbase) {
            qscilexerpostscript_autocompletionwordseparators_isbase = false;
            return QsciLexerPostScript::autoCompletionWordSeparators();
        } else if (qscilexerpostscript_autocompletionwordseparators_callback != nullptr) {
            return qscilexerpostscript_autocompletionwordseparators_callback();
        } else {
            return QsciLexerPostScript::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerpostscript_blockend_isbase) {
            qscilexerpostscript_blockend_isbase = false;
            return QsciLexerPostScript::blockEnd(style);
        } else if (qscilexerpostscript_blockend_callback != nullptr) {
            return qscilexerpostscript_blockend_callback(this, style);
        } else {
            return QsciLexerPostScript::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerpostscript_blocklookback_isbase) {
            qscilexerpostscript_blocklookback_isbase = false;
            return QsciLexerPostScript::blockLookback();
        } else if (qscilexerpostscript_blocklookback_callback != nullptr) {
            return qscilexerpostscript_blocklookback_callback();
        } else {
            return QsciLexerPostScript::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerpostscript_blockstart_isbase) {
            qscilexerpostscript_blockstart_isbase = false;
            return QsciLexerPostScript::blockStart(style);
        } else if (qscilexerpostscript_blockstart_callback != nullptr) {
            return qscilexerpostscript_blockstart_callback(this, style);
        } else {
            return QsciLexerPostScript::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerpostscript_blockstartkeyword_isbase) {
            qscilexerpostscript_blockstartkeyword_isbase = false;
            return QsciLexerPostScript::blockStartKeyword(style);
        } else if (qscilexerpostscript_blockstartkeyword_callback != nullptr) {
            return qscilexerpostscript_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerPostScript::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerpostscript_bracestyle_isbase) {
            qscilexerpostscript_bracestyle_isbase = false;
            return QsciLexerPostScript::braceStyle();
        } else if (qscilexerpostscript_bracestyle_callback != nullptr) {
            return qscilexerpostscript_bracestyle_callback();
        } else {
            return QsciLexerPostScript::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerpostscript_casesensitive_isbase) {
            qscilexerpostscript_casesensitive_isbase = false;
            return QsciLexerPostScript::caseSensitive();
        } else if (qscilexerpostscript_casesensitive_callback != nullptr) {
            return qscilexerpostscript_casesensitive_callback();
        } else {
            return QsciLexerPostScript::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerpostscript_color_isbase) {
            qscilexerpostscript_color_isbase = false;
            return QsciLexerPostScript::color(style);
        } else if (qscilexerpostscript_color_callback != nullptr) {
            return qscilexerpostscript_color_callback(this, style);
        } else {
            return QsciLexerPostScript::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerpostscript_eolfill_isbase) {
            qscilexerpostscript_eolfill_isbase = false;
            return QsciLexerPostScript::eolFill(style);
        } else if (qscilexerpostscript_eolfill_callback != nullptr) {
            return qscilexerpostscript_eolfill_callback(this, style);
        } else {
            return QsciLexerPostScript::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerpostscript_font_isbase) {
            qscilexerpostscript_font_isbase = false;
            return QsciLexerPostScript::font(style);
        } else if (qscilexerpostscript_font_callback != nullptr) {
            return qscilexerpostscript_font_callback(this, style);
        } else {
            return QsciLexerPostScript::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerpostscript_indentationguideview_isbase) {
            qscilexerpostscript_indentationguideview_isbase = false;
            return QsciLexerPostScript::indentationGuideView();
        } else if (qscilexerpostscript_indentationguideview_callback != nullptr) {
            return qscilexerpostscript_indentationguideview_callback();
        } else {
            return QsciLexerPostScript::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerpostscript_keywords_isbase) {
            qscilexerpostscript_keywords_isbase = false;
            return QsciLexerPostScript::keywords(set);
        } else if (qscilexerpostscript_keywords_callback != nullptr) {
            return qscilexerpostscript_keywords_callback(this, set);
        } else {
            return QsciLexerPostScript::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerpostscript_defaultstyle_isbase) {
            qscilexerpostscript_defaultstyle_isbase = false;
            return QsciLexerPostScript::defaultStyle();
        } else if (qscilexerpostscript_defaultstyle_callback != nullptr) {
            return qscilexerpostscript_defaultstyle_callback();
        } else {
            return QsciLexerPostScript::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerpostscript_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerpostscript_paper_isbase) {
            qscilexerpostscript_paper_isbase = false;
            return QsciLexerPostScript::paper(style);
        } else if (qscilexerpostscript_paper_callback != nullptr) {
            return qscilexerpostscript_paper_callback(this, style);
        } else {
            return QsciLexerPostScript::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerpostscript_defaultcolorwithstyle_isbase) {
            qscilexerpostscript_defaultcolorwithstyle_isbase = false;
            return QsciLexerPostScript::defaultColor(style);
        } else if (qscilexerpostscript_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerpostscript_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerPostScript::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerpostscript_defaulteolfill_isbase) {
            qscilexerpostscript_defaulteolfill_isbase = false;
            return QsciLexerPostScript::defaultEolFill(style);
        } else if (qscilexerpostscript_defaulteolfill_callback != nullptr) {
            return qscilexerpostscript_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerPostScript::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerpostscript_defaultfontwithstyle_isbase) {
            qscilexerpostscript_defaultfontwithstyle_isbase = false;
            return QsciLexerPostScript::defaultFont(style);
        } else if (qscilexerpostscript_defaultfontwithstyle_callback != nullptr) {
            return qscilexerpostscript_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerPostScript::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerpostscript_defaultpaperwithstyle_isbase) {
            qscilexerpostscript_defaultpaperwithstyle_isbase = false;
            return QsciLexerPostScript::defaultPaper(style);
        } else if (qscilexerpostscript_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerpostscript_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerPostScript::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerpostscript_seteditor_isbase) {
            qscilexerpostscript_seteditor_isbase = false;
            QsciLexerPostScript::setEditor(editor);
        } else if (qscilexerpostscript_seteditor_callback != nullptr) {
            qscilexerpostscript_seteditor_callback(this, editor);
        } else {
            QsciLexerPostScript::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerpostscript_refreshproperties_isbase) {
            qscilexerpostscript_refreshproperties_isbase = false;
            QsciLexerPostScript::refreshProperties();
        } else if (qscilexerpostscript_refreshproperties_callback != nullptr) {
            qscilexerpostscript_refreshproperties_callback();
        } else {
            QsciLexerPostScript::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerpostscript_stylebitsneeded_isbase) {
            qscilexerpostscript_stylebitsneeded_isbase = false;
            return QsciLexerPostScript::styleBitsNeeded();
        } else if (qscilexerpostscript_stylebitsneeded_callback != nullptr) {
            return qscilexerpostscript_stylebitsneeded_callback();
        } else {
            return QsciLexerPostScript::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerpostscript_wordcharacters_isbase) {
            qscilexerpostscript_wordcharacters_isbase = false;
            return QsciLexerPostScript::wordCharacters();
        } else if (qscilexerpostscript_wordcharacters_callback != nullptr) {
            return qscilexerpostscript_wordcharacters_callback();
        } else {
            return QsciLexerPostScript::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerpostscript_setautoindentstyle_isbase) {
            qscilexerpostscript_setautoindentstyle_isbase = false;
            QsciLexerPostScript::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerpostscript_setautoindentstyle_callback != nullptr) {
            qscilexerpostscript_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerPostScript::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerpostscript_setcolor_isbase) {
            qscilexerpostscript_setcolor_isbase = false;
            QsciLexerPostScript::setColor(c, style);
        } else if (qscilexerpostscript_setcolor_callback != nullptr) {
            qscilexerpostscript_setcolor_callback(this, c, style);
        } else {
            QsciLexerPostScript::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerpostscript_seteolfill_isbase) {
            qscilexerpostscript_seteolfill_isbase = false;
            QsciLexerPostScript::setEolFill(eoffill, style);
        } else if (qscilexerpostscript_seteolfill_callback != nullptr) {
            qscilexerpostscript_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerPostScript::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerpostscript_setfont_isbase) {
            qscilexerpostscript_setfont_isbase = false;
            QsciLexerPostScript::setFont(f, style);
        } else if (qscilexerpostscript_setfont_callback != nullptr) {
            qscilexerpostscript_setfont_callback(this, f, style);
        } else {
            QsciLexerPostScript::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerpostscript_setpaper_isbase) {
            qscilexerpostscript_setpaper_isbase = false;
            QsciLexerPostScript::setPaper(c, style);
        } else if (qscilexerpostscript_setpaper_callback != nullptr) {
            qscilexerpostscript_setpaper_callback(this, c, style);
        } else {
            QsciLexerPostScript::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerpostscript_readproperties_isbase) {
            qscilexerpostscript_readproperties_isbase = false;
            return QsciLexerPostScript::readProperties(qs, prefix);
        } else if (qscilexerpostscript_readproperties_callback != nullptr) {
            return qscilexerpostscript_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerPostScript::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerpostscript_writeproperties_isbase) {
            qscilexerpostscript_writeproperties_isbase = false;
            return QsciLexerPostScript::writeProperties(qs, prefix);
        } else if (qscilexerpostscript_writeproperties_callback != nullptr) {
            return qscilexerpostscript_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerPostScript::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerpostscript_event_isbase) {
            qscilexerpostscript_event_isbase = false;
            return QsciLexerPostScript::event(event);
        } else if (qscilexerpostscript_event_callback != nullptr) {
            return qscilexerpostscript_event_callback(this, event);
        } else {
            return QsciLexerPostScript::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerpostscript_eventfilter_isbase) {
            qscilexerpostscript_eventfilter_isbase = false;
            return QsciLexerPostScript::eventFilter(watched, event);
        } else if (qscilexerpostscript_eventfilter_callback != nullptr) {
            return qscilexerpostscript_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerPostScript::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerpostscript_timerevent_isbase) {
            qscilexerpostscript_timerevent_isbase = false;
            QsciLexerPostScript::timerEvent(event);
        } else if (qscilexerpostscript_timerevent_callback != nullptr) {
            qscilexerpostscript_timerevent_callback(this, event);
        } else {
            QsciLexerPostScript::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerpostscript_childevent_isbase) {
            qscilexerpostscript_childevent_isbase = false;
            QsciLexerPostScript::childEvent(event);
        } else if (qscilexerpostscript_childevent_callback != nullptr) {
            qscilexerpostscript_childevent_callback(this, event);
        } else {
            QsciLexerPostScript::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerpostscript_customevent_isbase) {
            qscilexerpostscript_customevent_isbase = false;
            QsciLexerPostScript::customEvent(event);
        } else if (qscilexerpostscript_customevent_callback != nullptr) {
            qscilexerpostscript_customevent_callback(this, event);
        } else {
            QsciLexerPostScript::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerpostscript_connectnotify_isbase) {
            qscilexerpostscript_connectnotify_isbase = false;
            QsciLexerPostScript::connectNotify(signal);
        } else if (qscilexerpostscript_connectnotify_callback != nullptr) {
            qscilexerpostscript_connectnotify_callback(this, signal);
        } else {
            QsciLexerPostScript::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerpostscript_disconnectnotify_isbase) {
            qscilexerpostscript_disconnectnotify_isbase = false;
            QsciLexerPostScript::disconnectNotify(signal);
        } else if (qscilexerpostscript_disconnectnotify_callback != nullptr) {
            qscilexerpostscript_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerPostScript::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerpostscript_sender_isbase) {
            qscilexerpostscript_sender_isbase = false;
            return QsciLexerPostScript::sender();
        } else if (qscilexerpostscript_sender_callback != nullptr) {
            return qscilexerpostscript_sender_callback();
        } else {
            return QsciLexerPostScript::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerpostscript_sendersignalindex_isbase) {
            qscilexerpostscript_sendersignalindex_isbase = false;
            return QsciLexerPostScript::senderSignalIndex();
        } else if (qscilexerpostscript_sendersignalindex_callback != nullptr) {
            return qscilexerpostscript_sendersignalindex_callback();
        } else {
            return QsciLexerPostScript::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerpostscript_receivers_isbase) {
            qscilexerpostscript_receivers_isbase = false;
            return QsciLexerPostScript::receivers(signal);
        } else if (qscilexerpostscript_receivers_callback != nullptr) {
            return qscilexerpostscript_receivers_callback(this, signal);
        } else {
            return QsciLexerPostScript::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerpostscript_issignalconnected_isbase) {
            qscilexerpostscript_issignalconnected_isbase = false;
            return QsciLexerPostScript::isSignalConnected(signal);
        } else if (qscilexerpostscript_issignalconnected_callback != nullptr) {
            return qscilexerpostscript_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerPostScript::isSignalConnected(signal);
        }
    }
};

#endif
