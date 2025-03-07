#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCOFFEESCRIPT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCOFFEESCRIPT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCoffeeScript so that we can call protected methods
class VirtualQsciLexerCoffeeScript : public QsciLexerCoffeeScript {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerCoffeeScript_Metacall_Callback = int (*)(QsciLexerCoffeeScript*, QMetaObject::Call, int, void**);
    using QsciLexerCoffeeScript_Language_Callback = const char* (*)();
    using QsciLexerCoffeeScript_Lexer_Callback = const char* (*)();
    using QsciLexerCoffeeScript_LexerId_Callback = int (*)();
    using QsciLexerCoffeeScript_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerCoffeeScript_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerCoffeeScript_BlockEnd_Callback = const char* (*)(const QsciLexerCoffeeScript*, int*);
    using QsciLexerCoffeeScript_BlockLookback_Callback = int (*)();
    using QsciLexerCoffeeScript_BlockStart_Callback = const char* (*)(const QsciLexerCoffeeScript*, int*);
    using QsciLexerCoffeeScript_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCoffeeScript*, int*);
    using QsciLexerCoffeeScript_BraceStyle_Callback = int (*)();
    using QsciLexerCoffeeScript_CaseSensitive_Callback = bool (*)();
    using QsciLexerCoffeeScript_Color_Callback = QColor (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_EolFill_Callback = bool (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_Font_Callback = QFont (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_IndentationGuideView_Callback = int (*)();
    using QsciLexerCoffeeScript_Keywords_Callback = const char* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultStyle_Callback = int (*)();
    using QsciLexerCoffeeScript_Description_Callback = QString (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_Paper_Callback = QColor (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultEolFill_Callback = bool (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_SetEditor_Callback = void (*)(QsciLexerCoffeeScript*, QsciScintilla*);
    using QsciLexerCoffeeScript_RefreshProperties_Callback = void (*)();
    using QsciLexerCoffeeScript_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerCoffeeScript_WordCharacters_Callback = const char* (*)();
    using QsciLexerCoffeeScript_SetAutoIndentStyle_Callback = void (*)(QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_SetColor_Callback = void (*)(QsciLexerCoffeeScript*, const QColor&, int);
    using QsciLexerCoffeeScript_SetEolFill_Callback = void (*)(QsciLexerCoffeeScript*, bool, int);
    using QsciLexerCoffeeScript_SetFont_Callback = void (*)(QsciLexerCoffeeScript*, const QFont&, int);
    using QsciLexerCoffeeScript_SetPaper_Callback = void (*)(QsciLexerCoffeeScript*, const QColor&, int);
    using QsciLexerCoffeeScript_ReadProperties_Callback = bool (*)(QsciLexerCoffeeScript*, QSettings&, const QString&);
    using QsciLexerCoffeeScript_WriteProperties_Callback = bool (*)(const QsciLexerCoffeeScript*, QSettings&, const QString&);
    using QsciLexerCoffeeScript_Event_Callback = bool (*)(QsciLexerCoffeeScript*, QEvent*);
    using QsciLexerCoffeeScript_EventFilter_Callback = bool (*)(QsciLexerCoffeeScript*, QObject*, QEvent*);
    using QsciLexerCoffeeScript_TimerEvent_Callback = void (*)(QsciLexerCoffeeScript*, QTimerEvent*);
    using QsciLexerCoffeeScript_ChildEvent_Callback = void (*)(QsciLexerCoffeeScript*, QChildEvent*);
    using QsciLexerCoffeeScript_CustomEvent_Callback = void (*)(QsciLexerCoffeeScript*, QEvent*);
    using QsciLexerCoffeeScript_ConnectNotify_Callback = void (*)(QsciLexerCoffeeScript*, const QMetaMethod&);
    using QsciLexerCoffeeScript_DisconnectNotify_Callback = void (*)(QsciLexerCoffeeScript*, const QMetaMethod&);
    using QsciLexerCoffeeScript_Sender_Callback = QObject* (*)();
    using QsciLexerCoffeeScript_SenderSignalIndex_Callback = int (*)();
    using QsciLexerCoffeeScript_Receivers_Callback = int (*)(const QsciLexerCoffeeScript*, const char*);
    using QsciLexerCoffeeScript_IsSignalConnected_Callback = bool (*)(const QsciLexerCoffeeScript*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerCoffeeScript_Metacall_Callback qscilexercoffeescript_metacall_callback = nullptr;
    QsciLexerCoffeeScript_Language_Callback qscilexercoffeescript_language_callback = nullptr;
    QsciLexerCoffeeScript_Lexer_Callback qscilexercoffeescript_lexer_callback = nullptr;
    QsciLexerCoffeeScript_LexerId_Callback qscilexercoffeescript_lexerid_callback = nullptr;
    QsciLexerCoffeeScript_AutoCompletionFillups_Callback qscilexercoffeescript_autocompletionfillups_callback = nullptr;
    QsciLexerCoffeeScript_AutoCompletionWordSeparators_Callback qscilexercoffeescript_autocompletionwordseparators_callback = nullptr;
    QsciLexerCoffeeScript_BlockEnd_Callback qscilexercoffeescript_blockend_callback = nullptr;
    QsciLexerCoffeeScript_BlockLookback_Callback qscilexercoffeescript_blocklookback_callback = nullptr;
    QsciLexerCoffeeScript_BlockStart_Callback qscilexercoffeescript_blockstart_callback = nullptr;
    QsciLexerCoffeeScript_BlockStartKeyword_Callback qscilexercoffeescript_blockstartkeyword_callback = nullptr;
    QsciLexerCoffeeScript_BraceStyle_Callback qscilexercoffeescript_bracestyle_callback = nullptr;
    QsciLexerCoffeeScript_CaseSensitive_Callback qscilexercoffeescript_casesensitive_callback = nullptr;
    QsciLexerCoffeeScript_Color_Callback qscilexercoffeescript_color_callback = nullptr;
    QsciLexerCoffeeScript_EolFill_Callback qscilexercoffeescript_eolfill_callback = nullptr;
    QsciLexerCoffeeScript_Font_Callback qscilexercoffeescript_font_callback = nullptr;
    QsciLexerCoffeeScript_IndentationGuideView_Callback qscilexercoffeescript_indentationguideview_callback = nullptr;
    QsciLexerCoffeeScript_Keywords_Callback qscilexercoffeescript_keywords_callback = nullptr;
    QsciLexerCoffeeScript_DefaultStyle_Callback qscilexercoffeescript_defaultstyle_callback = nullptr;
    QsciLexerCoffeeScript_Description_Callback qscilexercoffeescript_description_callback = nullptr;
    QsciLexerCoffeeScript_Paper_Callback qscilexercoffeescript_paper_callback = nullptr;
    QsciLexerCoffeeScript_DefaultColorWithStyle_Callback qscilexercoffeescript_defaultcolorwithstyle_callback = nullptr;
    QsciLexerCoffeeScript_DefaultEolFill_Callback qscilexercoffeescript_defaulteolfill_callback = nullptr;
    QsciLexerCoffeeScript_DefaultFontWithStyle_Callback qscilexercoffeescript_defaultfontwithstyle_callback = nullptr;
    QsciLexerCoffeeScript_DefaultPaperWithStyle_Callback qscilexercoffeescript_defaultpaperwithstyle_callback = nullptr;
    QsciLexerCoffeeScript_SetEditor_Callback qscilexercoffeescript_seteditor_callback = nullptr;
    QsciLexerCoffeeScript_RefreshProperties_Callback qscilexercoffeescript_refreshproperties_callback = nullptr;
    QsciLexerCoffeeScript_StyleBitsNeeded_Callback qscilexercoffeescript_stylebitsneeded_callback = nullptr;
    QsciLexerCoffeeScript_WordCharacters_Callback qscilexercoffeescript_wordcharacters_callback = nullptr;
    QsciLexerCoffeeScript_SetAutoIndentStyle_Callback qscilexercoffeescript_setautoindentstyle_callback = nullptr;
    QsciLexerCoffeeScript_SetColor_Callback qscilexercoffeescript_setcolor_callback = nullptr;
    QsciLexerCoffeeScript_SetEolFill_Callback qscilexercoffeescript_seteolfill_callback = nullptr;
    QsciLexerCoffeeScript_SetFont_Callback qscilexercoffeescript_setfont_callback = nullptr;
    QsciLexerCoffeeScript_SetPaper_Callback qscilexercoffeescript_setpaper_callback = nullptr;
    QsciLexerCoffeeScript_ReadProperties_Callback qscilexercoffeescript_readproperties_callback = nullptr;
    QsciLexerCoffeeScript_WriteProperties_Callback qscilexercoffeescript_writeproperties_callback = nullptr;
    QsciLexerCoffeeScript_Event_Callback qscilexercoffeescript_event_callback = nullptr;
    QsciLexerCoffeeScript_EventFilter_Callback qscilexercoffeescript_eventfilter_callback = nullptr;
    QsciLexerCoffeeScript_TimerEvent_Callback qscilexercoffeescript_timerevent_callback = nullptr;
    QsciLexerCoffeeScript_ChildEvent_Callback qscilexercoffeescript_childevent_callback = nullptr;
    QsciLexerCoffeeScript_CustomEvent_Callback qscilexercoffeescript_customevent_callback = nullptr;
    QsciLexerCoffeeScript_ConnectNotify_Callback qscilexercoffeescript_connectnotify_callback = nullptr;
    QsciLexerCoffeeScript_DisconnectNotify_Callback qscilexercoffeescript_disconnectnotify_callback = nullptr;
    QsciLexerCoffeeScript_Sender_Callback qscilexercoffeescript_sender_callback = nullptr;
    QsciLexerCoffeeScript_SenderSignalIndex_Callback qscilexercoffeescript_sendersignalindex_callback = nullptr;
    QsciLexerCoffeeScript_Receivers_Callback qscilexercoffeescript_receivers_callback = nullptr;
    QsciLexerCoffeeScript_IsSignalConnected_Callback qscilexercoffeescript_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexercoffeescript_metacall_isbase = false;
    mutable bool qscilexercoffeescript_language_isbase = false;
    mutable bool qscilexercoffeescript_lexer_isbase = false;
    mutable bool qscilexercoffeescript_lexerid_isbase = false;
    mutable bool qscilexercoffeescript_autocompletionfillups_isbase = false;
    mutable bool qscilexercoffeescript_autocompletionwordseparators_isbase = false;
    mutable bool qscilexercoffeescript_blockend_isbase = false;
    mutable bool qscilexercoffeescript_blocklookback_isbase = false;
    mutable bool qscilexercoffeescript_blockstart_isbase = false;
    mutable bool qscilexercoffeescript_blockstartkeyword_isbase = false;
    mutable bool qscilexercoffeescript_bracestyle_isbase = false;
    mutable bool qscilexercoffeescript_casesensitive_isbase = false;
    mutable bool qscilexercoffeescript_color_isbase = false;
    mutable bool qscilexercoffeescript_eolfill_isbase = false;
    mutable bool qscilexercoffeescript_font_isbase = false;
    mutable bool qscilexercoffeescript_indentationguideview_isbase = false;
    mutable bool qscilexercoffeescript_keywords_isbase = false;
    mutable bool qscilexercoffeescript_defaultstyle_isbase = false;
    mutable bool qscilexercoffeescript_description_isbase = false;
    mutable bool qscilexercoffeescript_paper_isbase = false;
    mutable bool qscilexercoffeescript_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexercoffeescript_defaulteolfill_isbase = false;
    mutable bool qscilexercoffeescript_defaultfontwithstyle_isbase = false;
    mutable bool qscilexercoffeescript_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexercoffeescript_seteditor_isbase = false;
    mutable bool qscilexercoffeescript_refreshproperties_isbase = false;
    mutable bool qscilexercoffeescript_stylebitsneeded_isbase = false;
    mutable bool qscilexercoffeescript_wordcharacters_isbase = false;
    mutable bool qscilexercoffeescript_setautoindentstyle_isbase = false;
    mutable bool qscilexercoffeescript_setcolor_isbase = false;
    mutable bool qscilexercoffeescript_seteolfill_isbase = false;
    mutable bool qscilexercoffeescript_setfont_isbase = false;
    mutable bool qscilexercoffeescript_setpaper_isbase = false;
    mutable bool qscilexercoffeescript_readproperties_isbase = false;
    mutable bool qscilexercoffeescript_writeproperties_isbase = false;
    mutable bool qscilexercoffeescript_event_isbase = false;
    mutable bool qscilexercoffeescript_eventfilter_isbase = false;
    mutable bool qscilexercoffeescript_timerevent_isbase = false;
    mutable bool qscilexercoffeescript_childevent_isbase = false;
    mutable bool qscilexercoffeescript_customevent_isbase = false;
    mutable bool qscilexercoffeescript_connectnotify_isbase = false;
    mutable bool qscilexercoffeescript_disconnectnotify_isbase = false;
    mutable bool qscilexercoffeescript_sender_isbase = false;
    mutable bool qscilexercoffeescript_sendersignalindex_isbase = false;
    mutable bool qscilexercoffeescript_receivers_isbase = false;
    mutable bool qscilexercoffeescript_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerCoffeeScript() : QsciLexerCoffeeScript(){};
    VirtualQsciLexerCoffeeScript(QObject* parent) : QsciLexerCoffeeScript(parent){};

    ~VirtualQsciLexerCoffeeScript() {
        qscilexercoffeescript_metacall_callback = nullptr;
        qscilexercoffeescript_language_callback = nullptr;
        qscilexercoffeescript_lexer_callback = nullptr;
        qscilexercoffeescript_lexerid_callback = nullptr;
        qscilexercoffeescript_autocompletionfillups_callback = nullptr;
        qscilexercoffeescript_autocompletionwordseparators_callback = nullptr;
        qscilexercoffeescript_blockend_callback = nullptr;
        qscilexercoffeescript_blocklookback_callback = nullptr;
        qscilexercoffeescript_blockstart_callback = nullptr;
        qscilexercoffeescript_blockstartkeyword_callback = nullptr;
        qscilexercoffeescript_bracestyle_callback = nullptr;
        qscilexercoffeescript_casesensitive_callback = nullptr;
        qscilexercoffeescript_color_callback = nullptr;
        qscilexercoffeescript_eolfill_callback = nullptr;
        qscilexercoffeescript_font_callback = nullptr;
        qscilexercoffeescript_indentationguideview_callback = nullptr;
        qscilexercoffeescript_keywords_callback = nullptr;
        qscilexercoffeescript_defaultstyle_callback = nullptr;
        qscilexercoffeescript_description_callback = nullptr;
        qscilexercoffeescript_paper_callback = nullptr;
        qscilexercoffeescript_defaultcolorwithstyle_callback = nullptr;
        qscilexercoffeescript_defaulteolfill_callback = nullptr;
        qscilexercoffeescript_defaultfontwithstyle_callback = nullptr;
        qscilexercoffeescript_defaultpaperwithstyle_callback = nullptr;
        qscilexercoffeescript_seteditor_callback = nullptr;
        qscilexercoffeescript_refreshproperties_callback = nullptr;
        qscilexercoffeescript_stylebitsneeded_callback = nullptr;
        qscilexercoffeescript_wordcharacters_callback = nullptr;
        qscilexercoffeescript_setautoindentstyle_callback = nullptr;
        qscilexercoffeescript_setcolor_callback = nullptr;
        qscilexercoffeescript_seteolfill_callback = nullptr;
        qscilexercoffeescript_setfont_callback = nullptr;
        qscilexercoffeescript_setpaper_callback = nullptr;
        qscilexercoffeescript_readproperties_callback = nullptr;
        qscilexercoffeescript_writeproperties_callback = nullptr;
        qscilexercoffeescript_event_callback = nullptr;
        qscilexercoffeescript_eventfilter_callback = nullptr;
        qscilexercoffeescript_timerevent_callback = nullptr;
        qscilexercoffeescript_childevent_callback = nullptr;
        qscilexercoffeescript_customevent_callback = nullptr;
        qscilexercoffeescript_connectnotify_callback = nullptr;
        qscilexercoffeescript_disconnectnotify_callback = nullptr;
        qscilexercoffeescript_sender_callback = nullptr;
        qscilexercoffeescript_sendersignalindex_callback = nullptr;
        qscilexercoffeescript_receivers_callback = nullptr;
        qscilexercoffeescript_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerCoffeeScript_Metacall_Callback(QsciLexerCoffeeScript_Metacall_Callback cb) { qscilexercoffeescript_metacall_callback = cb; }
    void setQsciLexerCoffeeScript_Language_Callback(QsciLexerCoffeeScript_Language_Callback cb) { qscilexercoffeescript_language_callback = cb; }
    void setQsciLexerCoffeeScript_Lexer_Callback(QsciLexerCoffeeScript_Lexer_Callback cb) { qscilexercoffeescript_lexer_callback = cb; }
    void setQsciLexerCoffeeScript_LexerId_Callback(QsciLexerCoffeeScript_LexerId_Callback cb) { qscilexercoffeescript_lexerid_callback = cb; }
    void setQsciLexerCoffeeScript_AutoCompletionFillups_Callback(QsciLexerCoffeeScript_AutoCompletionFillups_Callback cb) { qscilexercoffeescript_autocompletionfillups_callback = cb; }
    void setQsciLexerCoffeeScript_AutoCompletionWordSeparators_Callback(QsciLexerCoffeeScript_AutoCompletionWordSeparators_Callback cb) { qscilexercoffeescript_autocompletionwordseparators_callback = cb; }
    void setQsciLexerCoffeeScript_BlockEnd_Callback(QsciLexerCoffeeScript_BlockEnd_Callback cb) { qscilexercoffeescript_blockend_callback = cb; }
    void setQsciLexerCoffeeScript_BlockLookback_Callback(QsciLexerCoffeeScript_BlockLookback_Callback cb) { qscilexercoffeescript_blocklookback_callback = cb; }
    void setQsciLexerCoffeeScript_BlockStart_Callback(QsciLexerCoffeeScript_BlockStart_Callback cb) { qscilexercoffeescript_blockstart_callback = cb; }
    void setQsciLexerCoffeeScript_BlockStartKeyword_Callback(QsciLexerCoffeeScript_BlockStartKeyword_Callback cb) { qscilexercoffeescript_blockstartkeyword_callback = cb; }
    void setQsciLexerCoffeeScript_BraceStyle_Callback(QsciLexerCoffeeScript_BraceStyle_Callback cb) { qscilexercoffeescript_bracestyle_callback = cb; }
    void setQsciLexerCoffeeScript_CaseSensitive_Callback(QsciLexerCoffeeScript_CaseSensitive_Callback cb) { qscilexercoffeescript_casesensitive_callback = cb; }
    void setQsciLexerCoffeeScript_Color_Callback(QsciLexerCoffeeScript_Color_Callback cb) { qscilexercoffeescript_color_callback = cb; }
    void setQsciLexerCoffeeScript_EolFill_Callback(QsciLexerCoffeeScript_EolFill_Callback cb) { qscilexercoffeescript_eolfill_callback = cb; }
    void setQsciLexerCoffeeScript_Font_Callback(QsciLexerCoffeeScript_Font_Callback cb) { qscilexercoffeescript_font_callback = cb; }
    void setQsciLexerCoffeeScript_IndentationGuideView_Callback(QsciLexerCoffeeScript_IndentationGuideView_Callback cb) { qscilexercoffeescript_indentationguideview_callback = cb; }
    void setQsciLexerCoffeeScript_Keywords_Callback(QsciLexerCoffeeScript_Keywords_Callback cb) { qscilexercoffeescript_keywords_callback = cb; }
    void setQsciLexerCoffeeScript_DefaultStyle_Callback(QsciLexerCoffeeScript_DefaultStyle_Callback cb) { qscilexercoffeescript_defaultstyle_callback = cb; }
    void setQsciLexerCoffeeScript_Description_Callback(QsciLexerCoffeeScript_Description_Callback cb) { qscilexercoffeescript_description_callback = cb; }
    void setQsciLexerCoffeeScript_Paper_Callback(QsciLexerCoffeeScript_Paper_Callback cb) { qscilexercoffeescript_paper_callback = cb; }
    void setQsciLexerCoffeeScript_DefaultColorWithStyle_Callback(QsciLexerCoffeeScript_DefaultColorWithStyle_Callback cb) { qscilexercoffeescript_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerCoffeeScript_DefaultEolFill_Callback(QsciLexerCoffeeScript_DefaultEolFill_Callback cb) { qscilexercoffeescript_defaulteolfill_callback = cb; }
    void setQsciLexerCoffeeScript_DefaultFontWithStyle_Callback(QsciLexerCoffeeScript_DefaultFontWithStyle_Callback cb) { qscilexercoffeescript_defaultfontwithstyle_callback = cb; }
    void setQsciLexerCoffeeScript_DefaultPaperWithStyle_Callback(QsciLexerCoffeeScript_DefaultPaperWithStyle_Callback cb) { qscilexercoffeescript_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerCoffeeScript_SetEditor_Callback(QsciLexerCoffeeScript_SetEditor_Callback cb) { qscilexercoffeescript_seteditor_callback = cb; }
    void setQsciLexerCoffeeScript_RefreshProperties_Callback(QsciLexerCoffeeScript_RefreshProperties_Callback cb) { qscilexercoffeescript_refreshproperties_callback = cb; }
    void setQsciLexerCoffeeScript_StyleBitsNeeded_Callback(QsciLexerCoffeeScript_StyleBitsNeeded_Callback cb) { qscilexercoffeescript_stylebitsneeded_callback = cb; }
    void setQsciLexerCoffeeScript_WordCharacters_Callback(QsciLexerCoffeeScript_WordCharacters_Callback cb) { qscilexercoffeescript_wordcharacters_callback = cb; }
    void setQsciLexerCoffeeScript_SetAutoIndentStyle_Callback(QsciLexerCoffeeScript_SetAutoIndentStyle_Callback cb) { qscilexercoffeescript_setautoindentstyle_callback = cb; }
    void setQsciLexerCoffeeScript_SetColor_Callback(QsciLexerCoffeeScript_SetColor_Callback cb) { qscilexercoffeescript_setcolor_callback = cb; }
    void setQsciLexerCoffeeScript_SetEolFill_Callback(QsciLexerCoffeeScript_SetEolFill_Callback cb) { qscilexercoffeescript_seteolfill_callback = cb; }
    void setQsciLexerCoffeeScript_SetFont_Callback(QsciLexerCoffeeScript_SetFont_Callback cb) { qscilexercoffeescript_setfont_callback = cb; }
    void setQsciLexerCoffeeScript_SetPaper_Callback(QsciLexerCoffeeScript_SetPaper_Callback cb) { qscilexercoffeescript_setpaper_callback = cb; }
    void setQsciLexerCoffeeScript_ReadProperties_Callback(QsciLexerCoffeeScript_ReadProperties_Callback cb) { qscilexercoffeescript_readproperties_callback = cb; }
    void setQsciLexerCoffeeScript_WriteProperties_Callback(QsciLexerCoffeeScript_WriteProperties_Callback cb) { qscilexercoffeescript_writeproperties_callback = cb; }
    void setQsciLexerCoffeeScript_Event_Callback(QsciLexerCoffeeScript_Event_Callback cb) { qscilexercoffeescript_event_callback = cb; }
    void setQsciLexerCoffeeScript_EventFilter_Callback(QsciLexerCoffeeScript_EventFilter_Callback cb) { qscilexercoffeescript_eventfilter_callback = cb; }
    void setQsciLexerCoffeeScript_TimerEvent_Callback(QsciLexerCoffeeScript_TimerEvent_Callback cb) { qscilexercoffeescript_timerevent_callback = cb; }
    void setQsciLexerCoffeeScript_ChildEvent_Callback(QsciLexerCoffeeScript_ChildEvent_Callback cb) { qscilexercoffeescript_childevent_callback = cb; }
    void setQsciLexerCoffeeScript_CustomEvent_Callback(QsciLexerCoffeeScript_CustomEvent_Callback cb) { qscilexercoffeescript_customevent_callback = cb; }
    void setQsciLexerCoffeeScript_ConnectNotify_Callback(QsciLexerCoffeeScript_ConnectNotify_Callback cb) { qscilexercoffeescript_connectnotify_callback = cb; }
    void setQsciLexerCoffeeScript_DisconnectNotify_Callback(QsciLexerCoffeeScript_DisconnectNotify_Callback cb) { qscilexercoffeescript_disconnectnotify_callback = cb; }
    void setQsciLexerCoffeeScript_Sender_Callback(QsciLexerCoffeeScript_Sender_Callback cb) { qscilexercoffeescript_sender_callback = cb; }
    void setQsciLexerCoffeeScript_SenderSignalIndex_Callback(QsciLexerCoffeeScript_SenderSignalIndex_Callback cb) { qscilexercoffeescript_sendersignalindex_callback = cb; }
    void setQsciLexerCoffeeScript_Receivers_Callback(QsciLexerCoffeeScript_Receivers_Callback cb) { qscilexercoffeescript_receivers_callback = cb; }
    void setQsciLexerCoffeeScript_IsSignalConnected_Callback(QsciLexerCoffeeScript_IsSignalConnected_Callback cb) { qscilexercoffeescript_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerCoffeeScript_Metacall_IsBase(bool value) const { qscilexercoffeescript_metacall_isbase = value; }
    void setQsciLexerCoffeeScript_Language_IsBase(bool value) const { qscilexercoffeescript_language_isbase = value; }
    void setQsciLexerCoffeeScript_Lexer_IsBase(bool value) const { qscilexercoffeescript_lexer_isbase = value; }
    void setQsciLexerCoffeeScript_LexerId_IsBase(bool value) const { qscilexercoffeescript_lexerid_isbase = value; }
    void setQsciLexerCoffeeScript_AutoCompletionFillups_IsBase(bool value) const { qscilexercoffeescript_autocompletionfillups_isbase = value; }
    void setQsciLexerCoffeeScript_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexercoffeescript_autocompletionwordseparators_isbase = value; }
    void setQsciLexerCoffeeScript_BlockEnd_IsBase(bool value) const { qscilexercoffeescript_blockend_isbase = value; }
    void setQsciLexerCoffeeScript_BlockLookback_IsBase(bool value) const { qscilexercoffeescript_blocklookback_isbase = value; }
    void setQsciLexerCoffeeScript_BlockStart_IsBase(bool value) const { qscilexercoffeescript_blockstart_isbase = value; }
    void setQsciLexerCoffeeScript_BlockStartKeyword_IsBase(bool value) const { qscilexercoffeescript_blockstartkeyword_isbase = value; }
    void setQsciLexerCoffeeScript_BraceStyle_IsBase(bool value) const { qscilexercoffeescript_bracestyle_isbase = value; }
    void setQsciLexerCoffeeScript_CaseSensitive_IsBase(bool value) const { qscilexercoffeescript_casesensitive_isbase = value; }
    void setQsciLexerCoffeeScript_Color_IsBase(bool value) const { qscilexercoffeescript_color_isbase = value; }
    void setQsciLexerCoffeeScript_EolFill_IsBase(bool value) const { qscilexercoffeescript_eolfill_isbase = value; }
    void setQsciLexerCoffeeScript_Font_IsBase(bool value) const { qscilexercoffeescript_font_isbase = value; }
    void setQsciLexerCoffeeScript_IndentationGuideView_IsBase(bool value) const { qscilexercoffeescript_indentationguideview_isbase = value; }
    void setQsciLexerCoffeeScript_Keywords_IsBase(bool value) const { qscilexercoffeescript_keywords_isbase = value; }
    void setQsciLexerCoffeeScript_DefaultStyle_IsBase(bool value) const { qscilexercoffeescript_defaultstyle_isbase = value; }
    void setQsciLexerCoffeeScript_Description_IsBase(bool value) const { qscilexercoffeescript_description_isbase = value; }
    void setQsciLexerCoffeeScript_Paper_IsBase(bool value) const { qscilexercoffeescript_paper_isbase = value; }
    void setQsciLexerCoffeeScript_DefaultColorWithStyle_IsBase(bool value) const { qscilexercoffeescript_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerCoffeeScript_DefaultEolFill_IsBase(bool value) const { qscilexercoffeescript_defaulteolfill_isbase = value; }
    void setQsciLexerCoffeeScript_DefaultFontWithStyle_IsBase(bool value) const { qscilexercoffeescript_defaultfontwithstyle_isbase = value; }
    void setQsciLexerCoffeeScript_DefaultPaperWithStyle_IsBase(bool value) const { qscilexercoffeescript_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerCoffeeScript_SetEditor_IsBase(bool value) const { qscilexercoffeescript_seteditor_isbase = value; }
    void setQsciLexerCoffeeScript_RefreshProperties_IsBase(bool value) const { qscilexercoffeescript_refreshproperties_isbase = value; }
    void setQsciLexerCoffeeScript_StyleBitsNeeded_IsBase(bool value) const { qscilexercoffeescript_stylebitsneeded_isbase = value; }
    void setQsciLexerCoffeeScript_WordCharacters_IsBase(bool value) const { qscilexercoffeescript_wordcharacters_isbase = value; }
    void setQsciLexerCoffeeScript_SetAutoIndentStyle_IsBase(bool value) const { qscilexercoffeescript_setautoindentstyle_isbase = value; }
    void setQsciLexerCoffeeScript_SetColor_IsBase(bool value) const { qscilexercoffeescript_setcolor_isbase = value; }
    void setQsciLexerCoffeeScript_SetEolFill_IsBase(bool value) const { qscilexercoffeescript_seteolfill_isbase = value; }
    void setQsciLexerCoffeeScript_SetFont_IsBase(bool value) const { qscilexercoffeescript_setfont_isbase = value; }
    void setQsciLexerCoffeeScript_SetPaper_IsBase(bool value) const { qscilexercoffeescript_setpaper_isbase = value; }
    void setQsciLexerCoffeeScript_ReadProperties_IsBase(bool value) const { qscilexercoffeescript_readproperties_isbase = value; }
    void setQsciLexerCoffeeScript_WriteProperties_IsBase(bool value) const { qscilexercoffeescript_writeproperties_isbase = value; }
    void setQsciLexerCoffeeScript_Event_IsBase(bool value) const { qscilexercoffeescript_event_isbase = value; }
    void setQsciLexerCoffeeScript_EventFilter_IsBase(bool value) const { qscilexercoffeescript_eventfilter_isbase = value; }
    void setQsciLexerCoffeeScript_TimerEvent_IsBase(bool value) const { qscilexercoffeescript_timerevent_isbase = value; }
    void setQsciLexerCoffeeScript_ChildEvent_IsBase(bool value) const { qscilexercoffeescript_childevent_isbase = value; }
    void setQsciLexerCoffeeScript_CustomEvent_IsBase(bool value) const { qscilexercoffeescript_customevent_isbase = value; }
    void setQsciLexerCoffeeScript_ConnectNotify_IsBase(bool value) const { qscilexercoffeescript_connectnotify_isbase = value; }
    void setQsciLexerCoffeeScript_DisconnectNotify_IsBase(bool value) const { qscilexercoffeescript_disconnectnotify_isbase = value; }
    void setQsciLexerCoffeeScript_Sender_IsBase(bool value) const { qscilexercoffeescript_sender_isbase = value; }
    void setQsciLexerCoffeeScript_SenderSignalIndex_IsBase(bool value) const { qscilexercoffeescript_sendersignalindex_isbase = value; }
    void setQsciLexerCoffeeScript_Receivers_IsBase(bool value) const { qscilexercoffeescript_receivers_isbase = value; }
    void setQsciLexerCoffeeScript_IsSignalConnected_IsBase(bool value) const { qscilexercoffeescript_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercoffeescript_metacall_isbase) {
            qscilexercoffeescript_metacall_isbase = false;
            return QsciLexerCoffeeScript::qt_metacall(param1, param2, param3);
        } else if (qscilexercoffeescript_metacall_callback != nullptr) {
            return qscilexercoffeescript_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerCoffeeScript::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexercoffeescript_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercoffeescript_lexer_isbase) {
            qscilexercoffeescript_lexer_isbase = false;
            return QsciLexerCoffeeScript::lexer();
        } else if (qscilexercoffeescript_lexer_callback != nullptr) {
            return qscilexercoffeescript_lexer_callback();
        } else {
            return QsciLexerCoffeeScript::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercoffeescript_lexerid_isbase) {
            qscilexercoffeescript_lexerid_isbase = false;
            return QsciLexerCoffeeScript::lexerId();
        } else if (qscilexercoffeescript_lexerid_callback != nullptr) {
            return qscilexercoffeescript_lexerid_callback();
        } else {
            return QsciLexerCoffeeScript::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercoffeescript_autocompletionfillups_isbase) {
            qscilexercoffeescript_autocompletionfillups_isbase = false;
            return QsciLexerCoffeeScript::autoCompletionFillups();
        } else if (qscilexercoffeescript_autocompletionfillups_callback != nullptr) {
            return qscilexercoffeescript_autocompletionfillups_callback();
        } else {
            return QsciLexerCoffeeScript::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexercoffeescript_autocompletionwordseparators_isbase) {
            qscilexercoffeescript_autocompletionwordseparators_isbase = false;
            return QsciLexerCoffeeScript::autoCompletionWordSeparators();
        } else if (qscilexercoffeescript_autocompletionwordseparators_callback != nullptr) {
            return qscilexercoffeescript_autocompletionwordseparators_callback();
        } else {
            return QsciLexerCoffeeScript::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercoffeescript_blockend_isbase) {
            qscilexercoffeescript_blockend_isbase = false;
            return QsciLexerCoffeeScript::blockEnd(style);
        } else if (qscilexercoffeescript_blockend_callback != nullptr) {
            return qscilexercoffeescript_blockend_callback(this, style);
        } else {
            return QsciLexerCoffeeScript::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercoffeescript_blocklookback_isbase) {
            qscilexercoffeescript_blocklookback_isbase = false;
            return QsciLexerCoffeeScript::blockLookback();
        } else if (qscilexercoffeescript_blocklookback_callback != nullptr) {
            return qscilexercoffeescript_blocklookback_callback();
        } else {
            return QsciLexerCoffeeScript::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercoffeescript_blockstart_isbase) {
            qscilexercoffeescript_blockstart_isbase = false;
            return QsciLexerCoffeeScript::blockStart(style);
        } else if (qscilexercoffeescript_blockstart_callback != nullptr) {
            return qscilexercoffeescript_blockstart_callback(this, style);
        } else {
            return QsciLexerCoffeeScript::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercoffeescript_blockstartkeyword_isbase) {
            qscilexercoffeescript_blockstartkeyword_isbase = false;
            return QsciLexerCoffeeScript::blockStartKeyword(style);
        } else if (qscilexercoffeescript_blockstartkeyword_callback != nullptr) {
            return qscilexercoffeescript_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerCoffeeScript::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercoffeescript_bracestyle_isbase) {
            qscilexercoffeescript_bracestyle_isbase = false;
            return QsciLexerCoffeeScript::braceStyle();
        } else if (qscilexercoffeescript_bracestyle_callback != nullptr) {
            return qscilexercoffeescript_bracestyle_callback();
        } else {
            return QsciLexerCoffeeScript::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercoffeescript_casesensitive_isbase) {
            qscilexercoffeescript_casesensitive_isbase = false;
            return QsciLexerCoffeeScript::caseSensitive();
        } else if (qscilexercoffeescript_casesensitive_callback != nullptr) {
            return qscilexercoffeescript_casesensitive_callback();
        } else {
            return QsciLexerCoffeeScript::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercoffeescript_color_isbase) {
            qscilexercoffeescript_color_isbase = false;
            return QsciLexerCoffeeScript::color(style);
        } else if (qscilexercoffeescript_color_callback != nullptr) {
            return qscilexercoffeescript_color_callback(this, style);
        } else {
            return QsciLexerCoffeeScript::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercoffeescript_eolfill_isbase) {
            qscilexercoffeescript_eolfill_isbase = false;
            return QsciLexerCoffeeScript::eolFill(style);
        } else if (qscilexercoffeescript_eolfill_callback != nullptr) {
            return qscilexercoffeescript_eolfill_callback(this, style);
        } else {
            return QsciLexerCoffeeScript::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercoffeescript_font_isbase) {
            qscilexercoffeescript_font_isbase = false;
            return QsciLexerCoffeeScript::font(style);
        } else if (qscilexercoffeescript_font_callback != nullptr) {
            return qscilexercoffeescript_font_callback(this, style);
        } else {
            return QsciLexerCoffeeScript::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercoffeescript_indentationguideview_isbase) {
            qscilexercoffeescript_indentationguideview_isbase = false;
            return QsciLexerCoffeeScript::indentationGuideView();
        } else if (qscilexercoffeescript_indentationguideview_callback != nullptr) {
            return qscilexercoffeescript_indentationguideview_callback();
        } else {
            return QsciLexerCoffeeScript::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercoffeescript_keywords_isbase) {
            qscilexercoffeescript_keywords_isbase = false;
            return QsciLexerCoffeeScript::keywords(set);
        } else if (qscilexercoffeescript_keywords_callback != nullptr) {
            return qscilexercoffeescript_keywords_callback(this, set);
        } else {
            return QsciLexerCoffeeScript::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercoffeescript_defaultstyle_isbase) {
            qscilexercoffeescript_defaultstyle_isbase = false;
            return QsciLexerCoffeeScript::defaultStyle();
        } else if (qscilexercoffeescript_defaultstyle_callback != nullptr) {
            return qscilexercoffeescript_defaultstyle_callback();
        } else {
            return QsciLexerCoffeeScript::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexercoffeescript_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexercoffeescript_paper_isbase) {
            qscilexercoffeescript_paper_isbase = false;
            return QsciLexerCoffeeScript::paper(style);
        } else if (qscilexercoffeescript_paper_callback != nullptr) {
            return qscilexercoffeescript_paper_callback(this, style);
        } else {
            return QsciLexerCoffeeScript::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercoffeescript_defaultcolorwithstyle_isbase) {
            qscilexercoffeescript_defaultcolorwithstyle_isbase = false;
            return QsciLexerCoffeeScript::defaultColor(style);
        } else if (qscilexercoffeescript_defaultcolorwithstyle_callback != nullptr) {
            return qscilexercoffeescript_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerCoffeeScript::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercoffeescript_defaulteolfill_isbase) {
            qscilexercoffeescript_defaulteolfill_isbase = false;
            return QsciLexerCoffeeScript::defaultEolFill(style);
        } else if (qscilexercoffeescript_defaulteolfill_callback != nullptr) {
            return qscilexercoffeescript_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerCoffeeScript::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercoffeescript_defaultfontwithstyle_isbase) {
            qscilexercoffeescript_defaultfontwithstyle_isbase = false;
            return QsciLexerCoffeeScript::defaultFont(style);
        } else if (qscilexercoffeescript_defaultfontwithstyle_callback != nullptr) {
            return qscilexercoffeescript_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerCoffeeScript::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercoffeescript_defaultpaperwithstyle_isbase) {
            qscilexercoffeescript_defaultpaperwithstyle_isbase = false;
            return QsciLexerCoffeeScript::defaultPaper(style);
        } else if (qscilexercoffeescript_defaultpaperwithstyle_callback != nullptr) {
            return qscilexercoffeescript_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerCoffeeScript::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercoffeescript_seteditor_isbase) {
            qscilexercoffeescript_seteditor_isbase = false;
            QsciLexerCoffeeScript::setEditor(editor);
        } else if (qscilexercoffeescript_seteditor_callback != nullptr) {
            qscilexercoffeescript_seteditor_callback(this, editor);
        } else {
            QsciLexerCoffeeScript::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercoffeescript_refreshproperties_isbase) {
            qscilexercoffeescript_refreshproperties_isbase = false;
            QsciLexerCoffeeScript::refreshProperties();
        } else if (qscilexercoffeescript_refreshproperties_callback != nullptr) {
            qscilexercoffeescript_refreshproperties_callback();
        } else {
            QsciLexerCoffeeScript::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercoffeescript_stylebitsneeded_isbase) {
            qscilexercoffeescript_stylebitsneeded_isbase = false;
            return QsciLexerCoffeeScript::styleBitsNeeded();
        } else if (qscilexercoffeescript_stylebitsneeded_callback != nullptr) {
            return qscilexercoffeescript_stylebitsneeded_callback();
        } else {
            return QsciLexerCoffeeScript::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercoffeescript_wordcharacters_isbase) {
            qscilexercoffeescript_wordcharacters_isbase = false;
            return QsciLexerCoffeeScript::wordCharacters();
        } else if (qscilexercoffeescript_wordcharacters_callback != nullptr) {
            return qscilexercoffeescript_wordcharacters_callback();
        } else {
            return QsciLexerCoffeeScript::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercoffeescript_setautoindentstyle_isbase) {
            qscilexercoffeescript_setautoindentstyle_isbase = false;
            QsciLexerCoffeeScript::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexercoffeescript_setautoindentstyle_callback != nullptr) {
            qscilexercoffeescript_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerCoffeeScript::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercoffeescript_setcolor_isbase) {
            qscilexercoffeescript_setcolor_isbase = false;
            QsciLexerCoffeeScript::setColor(c, style);
        } else if (qscilexercoffeescript_setcolor_callback != nullptr) {
            qscilexercoffeescript_setcolor_callback(this, c, style);
        } else {
            QsciLexerCoffeeScript::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercoffeescript_seteolfill_isbase) {
            qscilexercoffeescript_seteolfill_isbase = false;
            QsciLexerCoffeeScript::setEolFill(eoffill, style);
        } else if (qscilexercoffeescript_seteolfill_callback != nullptr) {
            qscilexercoffeescript_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerCoffeeScript::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercoffeescript_setfont_isbase) {
            qscilexercoffeescript_setfont_isbase = false;
            QsciLexerCoffeeScript::setFont(f, style);
        } else if (qscilexercoffeescript_setfont_callback != nullptr) {
            qscilexercoffeescript_setfont_callback(this, f, style);
        } else {
            QsciLexerCoffeeScript::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercoffeescript_setpaper_isbase) {
            qscilexercoffeescript_setpaper_isbase = false;
            QsciLexerCoffeeScript::setPaper(c, style);
        } else if (qscilexercoffeescript_setpaper_callback != nullptr) {
            qscilexercoffeescript_setpaper_callback(this, c, style);
        } else {
            QsciLexerCoffeeScript::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercoffeescript_readproperties_isbase) {
            qscilexercoffeescript_readproperties_isbase = false;
            return QsciLexerCoffeeScript::readProperties(qs, prefix);
        } else if (qscilexercoffeescript_readproperties_callback != nullptr) {
            return qscilexercoffeescript_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerCoffeeScript::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercoffeescript_writeproperties_isbase) {
            qscilexercoffeescript_writeproperties_isbase = false;
            return QsciLexerCoffeeScript::writeProperties(qs, prefix);
        } else if (qscilexercoffeescript_writeproperties_callback != nullptr) {
            return qscilexercoffeescript_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerCoffeeScript::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercoffeescript_event_isbase) {
            qscilexercoffeescript_event_isbase = false;
            return QsciLexerCoffeeScript::event(event);
        } else if (qscilexercoffeescript_event_callback != nullptr) {
            return qscilexercoffeescript_event_callback(this, event);
        } else {
            return QsciLexerCoffeeScript::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercoffeescript_eventfilter_isbase) {
            qscilexercoffeescript_eventfilter_isbase = false;
            return QsciLexerCoffeeScript::eventFilter(watched, event);
        } else if (qscilexercoffeescript_eventfilter_callback != nullptr) {
            return qscilexercoffeescript_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerCoffeeScript::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercoffeescript_timerevent_isbase) {
            qscilexercoffeescript_timerevent_isbase = false;
            QsciLexerCoffeeScript::timerEvent(event);
        } else if (qscilexercoffeescript_timerevent_callback != nullptr) {
            qscilexercoffeescript_timerevent_callback(this, event);
        } else {
            QsciLexerCoffeeScript::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercoffeescript_childevent_isbase) {
            qscilexercoffeescript_childevent_isbase = false;
            QsciLexerCoffeeScript::childEvent(event);
        } else if (qscilexercoffeescript_childevent_callback != nullptr) {
            qscilexercoffeescript_childevent_callback(this, event);
        } else {
            QsciLexerCoffeeScript::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercoffeescript_customevent_isbase) {
            qscilexercoffeescript_customevent_isbase = false;
            QsciLexerCoffeeScript::customEvent(event);
        } else if (qscilexercoffeescript_customevent_callback != nullptr) {
            qscilexercoffeescript_customevent_callback(this, event);
        } else {
            QsciLexerCoffeeScript::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercoffeescript_connectnotify_isbase) {
            qscilexercoffeescript_connectnotify_isbase = false;
            QsciLexerCoffeeScript::connectNotify(signal);
        } else if (qscilexercoffeescript_connectnotify_callback != nullptr) {
            qscilexercoffeescript_connectnotify_callback(this, signal);
        } else {
            QsciLexerCoffeeScript::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercoffeescript_disconnectnotify_isbase) {
            qscilexercoffeescript_disconnectnotify_isbase = false;
            QsciLexerCoffeeScript::disconnectNotify(signal);
        } else if (qscilexercoffeescript_disconnectnotify_callback != nullptr) {
            qscilexercoffeescript_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerCoffeeScript::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexercoffeescript_sender_isbase) {
            qscilexercoffeescript_sender_isbase = false;
            return QsciLexerCoffeeScript::sender();
        } else if (qscilexercoffeescript_sender_callback != nullptr) {
            return qscilexercoffeescript_sender_callback();
        } else {
            return QsciLexerCoffeeScript::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexercoffeescript_sendersignalindex_isbase) {
            qscilexercoffeescript_sendersignalindex_isbase = false;
            return QsciLexerCoffeeScript::senderSignalIndex();
        } else if (qscilexercoffeescript_sendersignalindex_callback != nullptr) {
            return qscilexercoffeescript_sendersignalindex_callback();
        } else {
            return QsciLexerCoffeeScript::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexercoffeescript_receivers_isbase) {
            qscilexercoffeescript_receivers_isbase = false;
            return QsciLexerCoffeeScript::receivers(signal);
        } else if (qscilexercoffeescript_receivers_callback != nullptr) {
            return qscilexercoffeescript_receivers_callback(this, signal);
        } else {
            return QsciLexerCoffeeScript::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexercoffeescript_issignalconnected_isbase) {
            qscilexercoffeescript_issignalconnected_isbase = false;
            return QsciLexerCoffeeScript::isSignalConnected(signal);
        } else if (qscilexercoffeescript_issignalconnected_callback != nullptr) {
            return qscilexercoffeescript_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerCoffeeScript::isSignalConnected(signal);
        }
    }
};

#endif
