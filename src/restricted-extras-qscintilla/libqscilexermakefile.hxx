#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERMAKEFILE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERMAKEFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerMakefile so that we can call protected methods
class VirtualQsciLexerMakefile : public QsciLexerMakefile {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerMakefile_Metacall_Callback = int (*)(QsciLexerMakefile*, QMetaObject::Call, int, void**);
    using QsciLexerMakefile_Language_Callback = const char* (*)();
    using QsciLexerMakefile_Lexer_Callback = const char* (*)();
    using QsciLexerMakefile_LexerId_Callback = int (*)();
    using QsciLexerMakefile_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerMakefile_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerMakefile_BlockEnd_Callback = const char* (*)(const QsciLexerMakefile*, int*);
    using QsciLexerMakefile_BlockLookback_Callback = int (*)();
    using QsciLexerMakefile_BlockStart_Callback = const char* (*)(const QsciLexerMakefile*, int*);
    using QsciLexerMakefile_BlockStartKeyword_Callback = const char* (*)(const QsciLexerMakefile*, int*);
    using QsciLexerMakefile_BraceStyle_Callback = int (*)();
    using QsciLexerMakefile_CaseSensitive_Callback = bool (*)();
    using QsciLexerMakefile_Color_Callback = QColor (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_EolFill_Callback = bool (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_Font_Callback = QFont (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_IndentationGuideView_Callback = int (*)();
    using QsciLexerMakefile_Keywords_Callback = const char* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultStyle_Callback = int (*)();
    using QsciLexerMakefile_Description_Callback = QString (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_Paper_Callback = QColor (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultEolFill_Callback = bool (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_SetEditor_Callback = void (*)(QsciLexerMakefile*, QsciScintilla*);
    using QsciLexerMakefile_RefreshProperties_Callback = void (*)();
    using QsciLexerMakefile_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerMakefile_WordCharacters_Callback = const char* (*)();
    using QsciLexerMakefile_SetAutoIndentStyle_Callback = void (*)(QsciLexerMakefile*, int);
    using QsciLexerMakefile_SetColor_Callback = void (*)(QsciLexerMakefile*, const QColor&, int);
    using QsciLexerMakefile_SetEolFill_Callback = void (*)(QsciLexerMakefile*, bool, int);
    using QsciLexerMakefile_SetFont_Callback = void (*)(QsciLexerMakefile*, const QFont&, int);
    using QsciLexerMakefile_SetPaper_Callback = void (*)(QsciLexerMakefile*, const QColor&, int);
    using QsciLexerMakefile_ReadProperties_Callback = bool (*)(QsciLexerMakefile*, QSettings&, const QString&);
    using QsciLexerMakefile_WriteProperties_Callback = bool (*)(const QsciLexerMakefile*, QSettings&, const QString&);
    using QsciLexerMakefile_Event_Callback = bool (*)(QsciLexerMakefile*, QEvent*);
    using QsciLexerMakefile_EventFilter_Callback = bool (*)(QsciLexerMakefile*, QObject*, QEvent*);
    using QsciLexerMakefile_TimerEvent_Callback = void (*)(QsciLexerMakefile*, QTimerEvent*);
    using QsciLexerMakefile_ChildEvent_Callback = void (*)(QsciLexerMakefile*, QChildEvent*);
    using QsciLexerMakefile_CustomEvent_Callback = void (*)(QsciLexerMakefile*, QEvent*);
    using QsciLexerMakefile_ConnectNotify_Callback = void (*)(QsciLexerMakefile*, const QMetaMethod&);
    using QsciLexerMakefile_DisconnectNotify_Callback = void (*)(QsciLexerMakefile*, const QMetaMethod&);
    using QsciLexerMakefile_Sender_Callback = QObject* (*)();
    using QsciLexerMakefile_SenderSignalIndex_Callback = int (*)();
    using QsciLexerMakefile_Receivers_Callback = int (*)(const QsciLexerMakefile*, const char*);
    using QsciLexerMakefile_IsSignalConnected_Callback = bool (*)(const QsciLexerMakefile*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerMakefile_Metacall_Callback qscilexermakefile_metacall_callback = nullptr;
    QsciLexerMakefile_Language_Callback qscilexermakefile_language_callback = nullptr;
    QsciLexerMakefile_Lexer_Callback qscilexermakefile_lexer_callback = nullptr;
    QsciLexerMakefile_LexerId_Callback qscilexermakefile_lexerid_callback = nullptr;
    QsciLexerMakefile_AutoCompletionFillups_Callback qscilexermakefile_autocompletionfillups_callback = nullptr;
    QsciLexerMakefile_AutoCompletionWordSeparators_Callback qscilexermakefile_autocompletionwordseparators_callback = nullptr;
    QsciLexerMakefile_BlockEnd_Callback qscilexermakefile_blockend_callback = nullptr;
    QsciLexerMakefile_BlockLookback_Callback qscilexermakefile_blocklookback_callback = nullptr;
    QsciLexerMakefile_BlockStart_Callback qscilexermakefile_blockstart_callback = nullptr;
    QsciLexerMakefile_BlockStartKeyword_Callback qscilexermakefile_blockstartkeyword_callback = nullptr;
    QsciLexerMakefile_BraceStyle_Callback qscilexermakefile_bracestyle_callback = nullptr;
    QsciLexerMakefile_CaseSensitive_Callback qscilexermakefile_casesensitive_callback = nullptr;
    QsciLexerMakefile_Color_Callback qscilexermakefile_color_callback = nullptr;
    QsciLexerMakefile_EolFill_Callback qscilexermakefile_eolfill_callback = nullptr;
    QsciLexerMakefile_Font_Callback qscilexermakefile_font_callback = nullptr;
    QsciLexerMakefile_IndentationGuideView_Callback qscilexermakefile_indentationguideview_callback = nullptr;
    QsciLexerMakefile_Keywords_Callback qscilexermakefile_keywords_callback = nullptr;
    QsciLexerMakefile_DefaultStyle_Callback qscilexermakefile_defaultstyle_callback = nullptr;
    QsciLexerMakefile_Description_Callback qscilexermakefile_description_callback = nullptr;
    QsciLexerMakefile_Paper_Callback qscilexermakefile_paper_callback = nullptr;
    QsciLexerMakefile_DefaultColorWithStyle_Callback qscilexermakefile_defaultcolorwithstyle_callback = nullptr;
    QsciLexerMakefile_DefaultEolFill_Callback qscilexermakefile_defaulteolfill_callback = nullptr;
    QsciLexerMakefile_DefaultFontWithStyle_Callback qscilexermakefile_defaultfontwithstyle_callback = nullptr;
    QsciLexerMakefile_DefaultPaperWithStyle_Callback qscilexermakefile_defaultpaperwithstyle_callback = nullptr;
    QsciLexerMakefile_SetEditor_Callback qscilexermakefile_seteditor_callback = nullptr;
    QsciLexerMakefile_RefreshProperties_Callback qscilexermakefile_refreshproperties_callback = nullptr;
    QsciLexerMakefile_StyleBitsNeeded_Callback qscilexermakefile_stylebitsneeded_callback = nullptr;
    QsciLexerMakefile_WordCharacters_Callback qscilexermakefile_wordcharacters_callback = nullptr;
    QsciLexerMakefile_SetAutoIndentStyle_Callback qscilexermakefile_setautoindentstyle_callback = nullptr;
    QsciLexerMakefile_SetColor_Callback qscilexermakefile_setcolor_callback = nullptr;
    QsciLexerMakefile_SetEolFill_Callback qscilexermakefile_seteolfill_callback = nullptr;
    QsciLexerMakefile_SetFont_Callback qscilexermakefile_setfont_callback = nullptr;
    QsciLexerMakefile_SetPaper_Callback qscilexermakefile_setpaper_callback = nullptr;
    QsciLexerMakefile_ReadProperties_Callback qscilexermakefile_readproperties_callback = nullptr;
    QsciLexerMakefile_WriteProperties_Callback qscilexermakefile_writeproperties_callback = nullptr;
    QsciLexerMakefile_Event_Callback qscilexermakefile_event_callback = nullptr;
    QsciLexerMakefile_EventFilter_Callback qscilexermakefile_eventfilter_callback = nullptr;
    QsciLexerMakefile_TimerEvent_Callback qscilexermakefile_timerevent_callback = nullptr;
    QsciLexerMakefile_ChildEvent_Callback qscilexermakefile_childevent_callback = nullptr;
    QsciLexerMakefile_CustomEvent_Callback qscilexermakefile_customevent_callback = nullptr;
    QsciLexerMakefile_ConnectNotify_Callback qscilexermakefile_connectnotify_callback = nullptr;
    QsciLexerMakefile_DisconnectNotify_Callback qscilexermakefile_disconnectnotify_callback = nullptr;
    QsciLexerMakefile_Sender_Callback qscilexermakefile_sender_callback = nullptr;
    QsciLexerMakefile_SenderSignalIndex_Callback qscilexermakefile_sendersignalindex_callback = nullptr;
    QsciLexerMakefile_Receivers_Callback qscilexermakefile_receivers_callback = nullptr;
    QsciLexerMakefile_IsSignalConnected_Callback qscilexermakefile_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexermakefile_metacall_isbase = false;
    mutable bool qscilexermakefile_language_isbase = false;
    mutable bool qscilexermakefile_lexer_isbase = false;
    mutable bool qscilexermakefile_lexerid_isbase = false;
    mutable bool qscilexermakefile_autocompletionfillups_isbase = false;
    mutable bool qscilexermakefile_autocompletionwordseparators_isbase = false;
    mutable bool qscilexermakefile_blockend_isbase = false;
    mutable bool qscilexermakefile_blocklookback_isbase = false;
    mutable bool qscilexermakefile_blockstart_isbase = false;
    mutable bool qscilexermakefile_blockstartkeyword_isbase = false;
    mutable bool qscilexermakefile_bracestyle_isbase = false;
    mutable bool qscilexermakefile_casesensitive_isbase = false;
    mutable bool qscilexermakefile_color_isbase = false;
    mutable bool qscilexermakefile_eolfill_isbase = false;
    mutable bool qscilexermakefile_font_isbase = false;
    mutable bool qscilexermakefile_indentationguideview_isbase = false;
    mutable bool qscilexermakefile_keywords_isbase = false;
    mutable bool qscilexermakefile_defaultstyle_isbase = false;
    mutable bool qscilexermakefile_description_isbase = false;
    mutable bool qscilexermakefile_paper_isbase = false;
    mutable bool qscilexermakefile_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexermakefile_defaulteolfill_isbase = false;
    mutable bool qscilexermakefile_defaultfontwithstyle_isbase = false;
    mutable bool qscilexermakefile_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexermakefile_seteditor_isbase = false;
    mutable bool qscilexermakefile_refreshproperties_isbase = false;
    mutable bool qscilexermakefile_stylebitsneeded_isbase = false;
    mutable bool qscilexermakefile_wordcharacters_isbase = false;
    mutable bool qscilexermakefile_setautoindentstyle_isbase = false;
    mutable bool qscilexermakefile_setcolor_isbase = false;
    mutable bool qscilexermakefile_seteolfill_isbase = false;
    mutable bool qscilexermakefile_setfont_isbase = false;
    mutable bool qscilexermakefile_setpaper_isbase = false;
    mutable bool qscilexermakefile_readproperties_isbase = false;
    mutable bool qscilexermakefile_writeproperties_isbase = false;
    mutable bool qscilexermakefile_event_isbase = false;
    mutable bool qscilexermakefile_eventfilter_isbase = false;
    mutable bool qscilexermakefile_timerevent_isbase = false;
    mutable bool qscilexermakefile_childevent_isbase = false;
    mutable bool qscilexermakefile_customevent_isbase = false;
    mutable bool qscilexermakefile_connectnotify_isbase = false;
    mutable bool qscilexermakefile_disconnectnotify_isbase = false;
    mutable bool qscilexermakefile_sender_isbase = false;
    mutable bool qscilexermakefile_sendersignalindex_isbase = false;
    mutable bool qscilexermakefile_receivers_isbase = false;
    mutable bool qscilexermakefile_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerMakefile() : QsciLexerMakefile(){};
    VirtualQsciLexerMakefile(QObject* parent) : QsciLexerMakefile(parent){};

    ~VirtualQsciLexerMakefile() {
        qscilexermakefile_metacall_callback = nullptr;
        qscilexermakefile_language_callback = nullptr;
        qscilexermakefile_lexer_callback = nullptr;
        qscilexermakefile_lexerid_callback = nullptr;
        qscilexermakefile_autocompletionfillups_callback = nullptr;
        qscilexermakefile_autocompletionwordseparators_callback = nullptr;
        qscilexermakefile_blockend_callback = nullptr;
        qscilexermakefile_blocklookback_callback = nullptr;
        qscilexermakefile_blockstart_callback = nullptr;
        qscilexermakefile_blockstartkeyword_callback = nullptr;
        qscilexermakefile_bracestyle_callback = nullptr;
        qscilexermakefile_casesensitive_callback = nullptr;
        qscilexermakefile_color_callback = nullptr;
        qscilexermakefile_eolfill_callback = nullptr;
        qscilexermakefile_font_callback = nullptr;
        qscilexermakefile_indentationguideview_callback = nullptr;
        qscilexermakefile_keywords_callback = nullptr;
        qscilexermakefile_defaultstyle_callback = nullptr;
        qscilexermakefile_description_callback = nullptr;
        qscilexermakefile_paper_callback = nullptr;
        qscilexermakefile_defaultcolorwithstyle_callback = nullptr;
        qscilexermakefile_defaulteolfill_callback = nullptr;
        qscilexermakefile_defaultfontwithstyle_callback = nullptr;
        qscilexermakefile_defaultpaperwithstyle_callback = nullptr;
        qscilexermakefile_seteditor_callback = nullptr;
        qscilexermakefile_refreshproperties_callback = nullptr;
        qscilexermakefile_stylebitsneeded_callback = nullptr;
        qscilexermakefile_wordcharacters_callback = nullptr;
        qscilexermakefile_setautoindentstyle_callback = nullptr;
        qscilexermakefile_setcolor_callback = nullptr;
        qscilexermakefile_seteolfill_callback = nullptr;
        qscilexermakefile_setfont_callback = nullptr;
        qscilexermakefile_setpaper_callback = nullptr;
        qscilexermakefile_readproperties_callback = nullptr;
        qscilexermakefile_writeproperties_callback = nullptr;
        qscilexermakefile_event_callback = nullptr;
        qscilexermakefile_eventfilter_callback = nullptr;
        qscilexermakefile_timerevent_callback = nullptr;
        qscilexermakefile_childevent_callback = nullptr;
        qscilexermakefile_customevent_callback = nullptr;
        qscilexermakefile_connectnotify_callback = nullptr;
        qscilexermakefile_disconnectnotify_callback = nullptr;
        qscilexermakefile_sender_callback = nullptr;
        qscilexermakefile_sendersignalindex_callback = nullptr;
        qscilexermakefile_receivers_callback = nullptr;
        qscilexermakefile_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerMakefile_Metacall_Callback(QsciLexerMakefile_Metacall_Callback cb) { qscilexermakefile_metacall_callback = cb; }
    void setQsciLexerMakefile_Language_Callback(QsciLexerMakefile_Language_Callback cb) { qscilexermakefile_language_callback = cb; }
    void setQsciLexerMakefile_Lexer_Callback(QsciLexerMakefile_Lexer_Callback cb) { qscilexermakefile_lexer_callback = cb; }
    void setQsciLexerMakefile_LexerId_Callback(QsciLexerMakefile_LexerId_Callback cb) { qscilexermakefile_lexerid_callback = cb; }
    void setQsciLexerMakefile_AutoCompletionFillups_Callback(QsciLexerMakefile_AutoCompletionFillups_Callback cb) { qscilexermakefile_autocompletionfillups_callback = cb; }
    void setQsciLexerMakefile_AutoCompletionWordSeparators_Callback(QsciLexerMakefile_AutoCompletionWordSeparators_Callback cb) { qscilexermakefile_autocompletionwordseparators_callback = cb; }
    void setQsciLexerMakefile_BlockEnd_Callback(QsciLexerMakefile_BlockEnd_Callback cb) { qscilexermakefile_blockend_callback = cb; }
    void setQsciLexerMakefile_BlockLookback_Callback(QsciLexerMakefile_BlockLookback_Callback cb) { qscilexermakefile_blocklookback_callback = cb; }
    void setQsciLexerMakefile_BlockStart_Callback(QsciLexerMakefile_BlockStart_Callback cb) { qscilexermakefile_blockstart_callback = cb; }
    void setQsciLexerMakefile_BlockStartKeyword_Callback(QsciLexerMakefile_BlockStartKeyword_Callback cb) { qscilexermakefile_blockstartkeyword_callback = cb; }
    void setQsciLexerMakefile_BraceStyle_Callback(QsciLexerMakefile_BraceStyle_Callback cb) { qscilexermakefile_bracestyle_callback = cb; }
    void setQsciLexerMakefile_CaseSensitive_Callback(QsciLexerMakefile_CaseSensitive_Callback cb) { qscilexermakefile_casesensitive_callback = cb; }
    void setQsciLexerMakefile_Color_Callback(QsciLexerMakefile_Color_Callback cb) { qscilexermakefile_color_callback = cb; }
    void setQsciLexerMakefile_EolFill_Callback(QsciLexerMakefile_EolFill_Callback cb) { qscilexermakefile_eolfill_callback = cb; }
    void setQsciLexerMakefile_Font_Callback(QsciLexerMakefile_Font_Callback cb) { qscilexermakefile_font_callback = cb; }
    void setQsciLexerMakefile_IndentationGuideView_Callback(QsciLexerMakefile_IndentationGuideView_Callback cb) { qscilexermakefile_indentationguideview_callback = cb; }
    void setQsciLexerMakefile_Keywords_Callback(QsciLexerMakefile_Keywords_Callback cb) { qscilexermakefile_keywords_callback = cb; }
    void setQsciLexerMakefile_DefaultStyle_Callback(QsciLexerMakefile_DefaultStyle_Callback cb) { qscilexermakefile_defaultstyle_callback = cb; }
    void setQsciLexerMakefile_Description_Callback(QsciLexerMakefile_Description_Callback cb) { qscilexermakefile_description_callback = cb; }
    void setQsciLexerMakefile_Paper_Callback(QsciLexerMakefile_Paper_Callback cb) { qscilexermakefile_paper_callback = cb; }
    void setQsciLexerMakefile_DefaultColorWithStyle_Callback(QsciLexerMakefile_DefaultColorWithStyle_Callback cb) { qscilexermakefile_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerMakefile_DefaultEolFill_Callback(QsciLexerMakefile_DefaultEolFill_Callback cb) { qscilexermakefile_defaulteolfill_callback = cb; }
    void setQsciLexerMakefile_DefaultFontWithStyle_Callback(QsciLexerMakefile_DefaultFontWithStyle_Callback cb) { qscilexermakefile_defaultfontwithstyle_callback = cb; }
    void setQsciLexerMakefile_DefaultPaperWithStyle_Callback(QsciLexerMakefile_DefaultPaperWithStyle_Callback cb) { qscilexermakefile_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerMakefile_SetEditor_Callback(QsciLexerMakefile_SetEditor_Callback cb) { qscilexermakefile_seteditor_callback = cb; }
    void setQsciLexerMakefile_RefreshProperties_Callback(QsciLexerMakefile_RefreshProperties_Callback cb) { qscilexermakefile_refreshproperties_callback = cb; }
    void setQsciLexerMakefile_StyleBitsNeeded_Callback(QsciLexerMakefile_StyleBitsNeeded_Callback cb) { qscilexermakefile_stylebitsneeded_callback = cb; }
    void setQsciLexerMakefile_WordCharacters_Callback(QsciLexerMakefile_WordCharacters_Callback cb) { qscilexermakefile_wordcharacters_callback = cb; }
    void setQsciLexerMakefile_SetAutoIndentStyle_Callback(QsciLexerMakefile_SetAutoIndentStyle_Callback cb) { qscilexermakefile_setautoindentstyle_callback = cb; }
    void setQsciLexerMakefile_SetColor_Callback(QsciLexerMakefile_SetColor_Callback cb) { qscilexermakefile_setcolor_callback = cb; }
    void setQsciLexerMakefile_SetEolFill_Callback(QsciLexerMakefile_SetEolFill_Callback cb) { qscilexermakefile_seteolfill_callback = cb; }
    void setQsciLexerMakefile_SetFont_Callback(QsciLexerMakefile_SetFont_Callback cb) { qscilexermakefile_setfont_callback = cb; }
    void setQsciLexerMakefile_SetPaper_Callback(QsciLexerMakefile_SetPaper_Callback cb) { qscilexermakefile_setpaper_callback = cb; }
    void setQsciLexerMakefile_ReadProperties_Callback(QsciLexerMakefile_ReadProperties_Callback cb) { qscilexermakefile_readproperties_callback = cb; }
    void setQsciLexerMakefile_WriteProperties_Callback(QsciLexerMakefile_WriteProperties_Callback cb) { qscilexermakefile_writeproperties_callback = cb; }
    void setQsciLexerMakefile_Event_Callback(QsciLexerMakefile_Event_Callback cb) { qscilexermakefile_event_callback = cb; }
    void setQsciLexerMakefile_EventFilter_Callback(QsciLexerMakefile_EventFilter_Callback cb) { qscilexermakefile_eventfilter_callback = cb; }
    void setQsciLexerMakefile_TimerEvent_Callback(QsciLexerMakefile_TimerEvent_Callback cb) { qscilexermakefile_timerevent_callback = cb; }
    void setQsciLexerMakefile_ChildEvent_Callback(QsciLexerMakefile_ChildEvent_Callback cb) { qscilexermakefile_childevent_callback = cb; }
    void setQsciLexerMakefile_CustomEvent_Callback(QsciLexerMakefile_CustomEvent_Callback cb) { qscilexermakefile_customevent_callback = cb; }
    void setQsciLexerMakefile_ConnectNotify_Callback(QsciLexerMakefile_ConnectNotify_Callback cb) { qscilexermakefile_connectnotify_callback = cb; }
    void setQsciLexerMakefile_DisconnectNotify_Callback(QsciLexerMakefile_DisconnectNotify_Callback cb) { qscilexermakefile_disconnectnotify_callback = cb; }
    void setQsciLexerMakefile_Sender_Callback(QsciLexerMakefile_Sender_Callback cb) { qscilexermakefile_sender_callback = cb; }
    void setQsciLexerMakefile_SenderSignalIndex_Callback(QsciLexerMakefile_SenderSignalIndex_Callback cb) { qscilexermakefile_sendersignalindex_callback = cb; }
    void setQsciLexerMakefile_Receivers_Callback(QsciLexerMakefile_Receivers_Callback cb) { qscilexermakefile_receivers_callback = cb; }
    void setQsciLexerMakefile_IsSignalConnected_Callback(QsciLexerMakefile_IsSignalConnected_Callback cb) { qscilexermakefile_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerMakefile_Metacall_IsBase(bool value) const { qscilexermakefile_metacall_isbase = value; }
    void setQsciLexerMakefile_Language_IsBase(bool value) const { qscilexermakefile_language_isbase = value; }
    void setQsciLexerMakefile_Lexer_IsBase(bool value) const { qscilexermakefile_lexer_isbase = value; }
    void setQsciLexerMakefile_LexerId_IsBase(bool value) const { qscilexermakefile_lexerid_isbase = value; }
    void setQsciLexerMakefile_AutoCompletionFillups_IsBase(bool value) const { qscilexermakefile_autocompletionfillups_isbase = value; }
    void setQsciLexerMakefile_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexermakefile_autocompletionwordseparators_isbase = value; }
    void setQsciLexerMakefile_BlockEnd_IsBase(bool value) const { qscilexermakefile_blockend_isbase = value; }
    void setQsciLexerMakefile_BlockLookback_IsBase(bool value) const { qscilexermakefile_blocklookback_isbase = value; }
    void setQsciLexerMakefile_BlockStart_IsBase(bool value) const { qscilexermakefile_blockstart_isbase = value; }
    void setQsciLexerMakefile_BlockStartKeyword_IsBase(bool value) const { qscilexermakefile_blockstartkeyword_isbase = value; }
    void setQsciLexerMakefile_BraceStyle_IsBase(bool value) const { qscilexermakefile_bracestyle_isbase = value; }
    void setQsciLexerMakefile_CaseSensitive_IsBase(bool value) const { qscilexermakefile_casesensitive_isbase = value; }
    void setQsciLexerMakefile_Color_IsBase(bool value) const { qscilexermakefile_color_isbase = value; }
    void setQsciLexerMakefile_EolFill_IsBase(bool value) const { qscilexermakefile_eolfill_isbase = value; }
    void setQsciLexerMakefile_Font_IsBase(bool value) const { qscilexermakefile_font_isbase = value; }
    void setQsciLexerMakefile_IndentationGuideView_IsBase(bool value) const { qscilexermakefile_indentationguideview_isbase = value; }
    void setQsciLexerMakefile_Keywords_IsBase(bool value) const { qscilexermakefile_keywords_isbase = value; }
    void setQsciLexerMakefile_DefaultStyle_IsBase(bool value) const { qscilexermakefile_defaultstyle_isbase = value; }
    void setQsciLexerMakefile_Description_IsBase(bool value) const { qscilexermakefile_description_isbase = value; }
    void setQsciLexerMakefile_Paper_IsBase(bool value) const { qscilexermakefile_paper_isbase = value; }
    void setQsciLexerMakefile_DefaultColorWithStyle_IsBase(bool value) const { qscilexermakefile_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerMakefile_DefaultEolFill_IsBase(bool value) const { qscilexermakefile_defaulteolfill_isbase = value; }
    void setQsciLexerMakefile_DefaultFontWithStyle_IsBase(bool value) const { qscilexermakefile_defaultfontwithstyle_isbase = value; }
    void setQsciLexerMakefile_DefaultPaperWithStyle_IsBase(bool value) const { qscilexermakefile_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerMakefile_SetEditor_IsBase(bool value) const { qscilexermakefile_seteditor_isbase = value; }
    void setQsciLexerMakefile_RefreshProperties_IsBase(bool value) const { qscilexermakefile_refreshproperties_isbase = value; }
    void setQsciLexerMakefile_StyleBitsNeeded_IsBase(bool value) const { qscilexermakefile_stylebitsneeded_isbase = value; }
    void setQsciLexerMakefile_WordCharacters_IsBase(bool value) const { qscilexermakefile_wordcharacters_isbase = value; }
    void setQsciLexerMakefile_SetAutoIndentStyle_IsBase(bool value) const { qscilexermakefile_setautoindentstyle_isbase = value; }
    void setQsciLexerMakefile_SetColor_IsBase(bool value) const { qscilexermakefile_setcolor_isbase = value; }
    void setQsciLexerMakefile_SetEolFill_IsBase(bool value) const { qscilexermakefile_seteolfill_isbase = value; }
    void setQsciLexerMakefile_SetFont_IsBase(bool value) const { qscilexermakefile_setfont_isbase = value; }
    void setQsciLexerMakefile_SetPaper_IsBase(bool value) const { qscilexermakefile_setpaper_isbase = value; }
    void setQsciLexerMakefile_ReadProperties_IsBase(bool value) const { qscilexermakefile_readproperties_isbase = value; }
    void setQsciLexerMakefile_WriteProperties_IsBase(bool value) const { qscilexermakefile_writeproperties_isbase = value; }
    void setQsciLexerMakefile_Event_IsBase(bool value) const { qscilexermakefile_event_isbase = value; }
    void setQsciLexerMakefile_EventFilter_IsBase(bool value) const { qscilexermakefile_eventfilter_isbase = value; }
    void setQsciLexerMakefile_TimerEvent_IsBase(bool value) const { qscilexermakefile_timerevent_isbase = value; }
    void setQsciLexerMakefile_ChildEvent_IsBase(bool value) const { qscilexermakefile_childevent_isbase = value; }
    void setQsciLexerMakefile_CustomEvent_IsBase(bool value) const { qscilexermakefile_customevent_isbase = value; }
    void setQsciLexerMakefile_ConnectNotify_IsBase(bool value) const { qscilexermakefile_connectnotify_isbase = value; }
    void setQsciLexerMakefile_DisconnectNotify_IsBase(bool value) const { qscilexermakefile_disconnectnotify_isbase = value; }
    void setQsciLexerMakefile_Sender_IsBase(bool value) const { qscilexermakefile_sender_isbase = value; }
    void setQsciLexerMakefile_SenderSignalIndex_IsBase(bool value) const { qscilexermakefile_sendersignalindex_isbase = value; }
    void setQsciLexerMakefile_Receivers_IsBase(bool value) const { qscilexermakefile_receivers_isbase = value; }
    void setQsciLexerMakefile_IsSignalConnected_IsBase(bool value) const { qscilexermakefile_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexermakefile_metacall_isbase) {
            qscilexermakefile_metacall_isbase = false;
            return QsciLexerMakefile::qt_metacall(param1, param2, param3);
        } else if (qscilexermakefile_metacall_callback != nullptr) {
            return qscilexermakefile_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerMakefile::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexermakefile_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexermakefile_lexer_isbase) {
            qscilexermakefile_lexer_isbase = false;
            return QsciLexerMakefile::lexer();
        } else if (qscilexermakefile_lexer_callback != nullptr) {
            return qscilexermakefile_lexer_callback();
        } else {
            return QsciLexerMakefile::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexermakefile_lexerid_isbase) {
            qscilexermakefile_lexerid_isbase = false;
            return QsciLexerMakefile::lexerId();
        } else if (qscilexermakefile_lexerid_callback != nullptr) {
            return qscilexermakefile_lexerid_callback();
        } else {
            return QsciLexerMakefile::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexermakefile_autocompletionfillups_isbase) {
            qscilexermakefile_autocompletionfillups_isbase = false;
            return QsciLexerMakefile::autoCompletionFillups();
        } else if (qscilexermakefile_autocompletionfillups_callback != nullptr) {
            return qscilexermakefile_autocompletionfillups_callback();
        } else {
            return QsciLexerMakefile::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexermakefile_autocompletionwordseparators_isbase) {
            qscilexermakefile_autocompletionwordseparators_isbase = false;
            return QsciLexerMakefile::autoCompletionWordSeparators();
        } else if (qscilexermakefile_autocompletionwordseparators_callback != nullptr) {
            return qscilexermakefile_autocompletionwordseparators_callback();
        } else {
            return QsciLexerMakefile::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexermakefile_blockend_isbase) {
            qscilexermakefile_blockend_isbase = false;
            return QsciLexerMakefile::blockEnd(style);
        } else if (qscilexermakefile_blockend_callback != nullptr) {
            return qscilexermakefile_blockend_callback(this, style);
        } else {
            return QsciLexerMakefile::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexermakefile_blocklookback_isbase) {
            qscilexermakefile_blocklookback_isbase = false;
            return QsciLexerMakefile::blockLookback();
        } else if (qscilexermakefile_blocklookback_callback != nullptr) {
            return qscilexermakefile_blocklookback_callback();
        } else {
            return QsciLexerMakefile::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexermakefile_blockstart_isbase) {
            qscilexermakefile_blockstart_isbase = false;
            return QsciLexerMakefile::blockStart(style);
        } else if (qscilexermakefile_blockstart_callback != nullptr) {
            return qscilexermakefile_blockstart_callback(this, style);
        } else {
            return QsciLexerMakefile::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexermakefile_blockstartkeyword_isbase) {
            qscilexermakefile_blockstartkeyword_isbase = false;
            return QsciLexerMakefile::blockStartKeyword(style);
        } else if (qscilexermakefile_blockstartkeyword_callback != nullptr) {
            return qscilexermakefile_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerMakefile::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexermakefile_bracestyle_isbase) {
            qscilexermakefile_bracestyle_isbase = false;
            return QsciLexerMakefile::braceStyle();
        } else if (qscilexermakefile_bracestyle_callback != nullptr) {
            return qscilexermakefile_bracestyle_callback();
        } else {
            return QsciLexerMakefile::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexermakefile_casesensitive_isbase) {
            qscilexermakefile_casesensitive_isbase = false;
            return QsciLexerMakefile::caseSensitive();
        } else if (qscilexermakefile_casesensitive_callback != nullptr) {
            return qscilexermakefile_casesensitive_callback();
        } else {
            return QsciLexerMakefile::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexermakefile_color_isbase) {
            qscilexermakefile_color_isbase = false;
            return QsciLexerMakefile::color(style);
        } else if (qscilexermakefile_color_callback != nullptr) {
            return qscilexermakefile_color_callback(this, style);
        } else {
            return QsciLexerMakefile::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexermakefile_eolfill_isbase) {
            qscilexermakefile_eolfill_isbase = false;
            return QsciLexerMakefile::eolFill(style);
        } else if (qscilexermakefile_eolfill_callback != nullptr) {
            return qscilexermakefile_eolfill_callback(this, style);
        } else {
            return QsciLexerMakefile::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexermakefile_font_isbase) {
            qscilexermakefile_font_isbase = false;
            return QsciLexerMakefile::font(style);
        } else if (qscilexermakefile_font_callback != nullptr) {
            return qscilexermakefile_font_callback(this, style);
        } else {
            return QsciLexerMakefile::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexermakefile_indentationguideview_isbase) {
            qscilexermakefile_indentationguideview_isbase = false;
            return QsciLexerMakefile::indentationGuideView();
        } else if (qscilexermakefile_indentationguideview_callback != nullptr) {
            return qscilexermakefile_indentationguideview_callback();
        } else {
            return QsciLexerMakefile::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexermakefile_keywords_isbase) {
            qscilexermakefile_keywords_isbase = false;
            return QsciLexerMakefile::keywords(set);
        } else if (qscilexermakefile_keywords_callback != nullptr) {
            return qscilexermakefile_keywords_callback(this, set);
        } else {
            return QsciLexerMakefile::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexermakefile_defaultstyle_isbase) {
            qscilexermakefile_defaultstyle_isbase = false;
            return QsciLexerMakefile::defaultStyle();
        } else if (qscilexermakefile_defaultstyle_callback != nullptr) {
            return qscilexermakefile_defaultstyle_callback();
        } else {
            return QsciLexerMakefile::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexermakefile_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexermakefile_paper_isbase) {
            qscilexermakefile_paper_isbase = false;
            return QsciLexerMakefile::paper(style);
        } else if (qscilexermakefile_paper_callback != nullptr) {
            return qscilexermakefile_paper_callback(this, style);
        } else {
            return QsciLexerMakefile::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexermakefile_defaultcolorwithstyle_isbase) {
            qscilexermakefile_defaultcolorwithstyle_isbase = false;
            return QsciLexerMakefile::defaultColor(style);
        } else if (qscilexermakefile_defaultcolorwithstyle_callback != nullptr) {
            return qscilexermakefile_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerMakefile::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexermakefile_defaulteolfill_isbase) {
            qscilexermakefile_defaulteolfill_isbase = false;
            return QsciLexerMakefile::defaultEolFill(style);
        } else if (qscilexermakefile_defaulteolfill_callback != nullptr) {
            return qscilexermakefile_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerMakefile::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexermakefile_defaultfontwithstyle_isbase) {
            qscilexermakefile_defaultfontwithstyle_isbase = false;
            return QsciLexerMakefile::defaultFont(style);
        } else if (qscilexermakefile_defaultfontwithstyle_callback != nullptr) {
            return qscilexermakefile_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerMakefile::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexermakefile_defaultpaperwithstyle_isbase) {
            qscilexermakefile_defaultpaperwithstyle_isbase = false;
            return QsciLexerMakefile::defaultPaper(style);
        } else if (qscilexermakefile_defaultpaperwithstyle_callback != nullptr) {
            return qscilexermakefile_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerMakefile::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexermakefile_seteditor_isbase) {
            qscilexermakefile_seteditor_isbase = false;
            QsciLexerMakefile::setEditor(editor);
        } else if (qscilexermakefile_seteditor_callback != nullptr) {
            qscilexermakefile_seteditor_callback(this, editor);
        } else {
            QsciLexerMakefile::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexermakefile_refreshproperties_isbase) {
            qscilexermakefile_refreshproperties_isbase = false;
            QsciLexerMakefile::refreshProperties();
        } else if (qscilexermakefile_refreshproperties_callback != nullptr) {
            qscilexermakefile_refreshproperties_callback();
        } else {
            QsciLexerMakefile::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexermakefile_stylebitsneeded_isbase) {
            qscilexermakefile_stylebitsneeded_isbase = false;
            return QsciLexerMakefile::styleBitsNeeded();
        } else if (qscilexermakefile_stylebitsneeded_callback != nullptr) {
            return qscilexermakefile_stylebitsneeded_callback();
        } else {
            return QsciLexerMakefile::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexermakefile_wordcharacters_isbase) {
            qscilexermakefile_wordcharacters_isbase = false;
            return QsciLexerMakefile::wordCharacters();
        } else if (qscilexermakefile_wordcharacters_callback != nullptr) {
            return qscilexermakefile_wordcharacters_callback();
        } else {
            return QsciLexerMakefile::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexermakefile_setautoindentstyle_isbase) {
            qscilexermakefile_setautoindentstyle_isbase = false;
            QsciLexerMakefile::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexermakefile_setautoindentstyle_callback != nullptr) {
            qscilexermakefile_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerMakefile::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexermakefile_setcolor_isbase) {
            qscilexermakefile_setcolor_isbase = false;
            QsciLexerMakefile::setColor(c, style);
        } else if (qscilexermakefile_setcolor_callback != nullptr) {
            qscilexermakefile_setcolor_callback(this, c, style);
        } else {
            QsciLexerMakefile::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexermakefile_seteolfill_isbase) {
            qscilexermakefile_seteolfill_isbase = false;
            QsciLexerMakefile::setEolFill(eoffill, style);
        } else if (qscilexermakefile_seteolfill_callback != nullptr) {
            qscilexermakefile_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerMakefile::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexermakefile_setfont_isbase) {
            qscilexermakefile_setfont_isbase = false;
            QsciLexerMakefile::setFont(f, style);
        } else if (qscilexermakefile_setfont_callback != nullptr) {
            qscilexermakefile_setfont_callback(this, f, style);
        } else {
            QsciLexerMakefile::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexermakefile_setpaper_isbase) {
            qscilexermakefile_setpaper_isbase = false;
            QsciLexerMakefile::setPaper(c, style);
        } else if (qscilexermakefile_setpaper_callback != nullptr) {
            qscilexermakefile_setpaper_callback(this, c, style);
        } else {
            QsciLexerMakefile::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexermakefile_readproperties_isbase) {
            qscilexermakefile_readproperties_isbase = false;
            return QsciLexerMakefile::readProperties(qs, prefix);
        } else if (qscilexermakefile_readproperties_callback != nullptr) {
            return qscilexermakefile_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerMakefile::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexermakefile_writeproperties_isbase) {
            qscilexermakefile_writeproperties_isbase = false;
            return QsciLexerMakefile::writeProperties(qs, prefix);
        } else if (qscilexermakefile_writeproperties_callback != nullptr) {
            return qscilexermakefile_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerMakefile::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexermakefile_event_isbase) {
            qscilexermakefile_event_isbase = false;
            return QsciLexerMakefile::event(event);
        } else if (qscilexermakefile_event_callback != nullptr) {
            return qscilexermakefile_event_callback(this, event);
        } else {
            return QsciLexerMakefile::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexermakefile_eventfilter_isbase) {
            qscilexermakefile_eventfilter_isbase = false;
            return QsciLexerMakefile::eventFilter(watched, event);
        } else if (qscilexermakefile_eventfilter_callback != nullptr) {
            return qscilexermakefile_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerMakefile::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexermakefile_timerevent_isbase) {
            qscilexermakefile_timerevent_isbase = false;
            QsciLexerMakefile::timerEvent(event);
        } else if (qscilexermakefile_timerevent_callback != nullptr) {
            qscilexermakefile_timerevent_callback(this, event);
        } else {
            QsciLexerMakefile::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexermakefile_childevent_isbase) {
            qscilexermakefile_childevent_isbase = false;
            QsciLexerMakefile::childEvent(event);
        } else if (qscilexermakefile_childevent_callback != nullptr) {
            qscilexermakefile_childevent_callback(this, event);
        } else {
            QsciLexerMakefile::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexermakefile_customevent_isbase) {
            qscilexermakefile_customevent_isbase = false;
            QsciLexerMakefile::customEvent(event);
        } else if (qscilexermakefile_customevent_callback != nullptr) {
            qscilexermakefile_customevent_callback(this, event);
        } else {
            QsciLexerMakefile::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexermakefile_connectnotify_isbase) {
            qscilexermakefile_connectnotify_isbase = false;
            QsciLexerMakefile::connectNotify(signal);
        } else if (qscilexermakefile_connectnotify_callback != nullptr) {
            qscilexermakefile_connectnotify_callback(this, signal);
        } else {
            QsciLexerMakefile::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexermakefile_disconnectnotify_isbase) {
            qscilexermakefile_disconnectnotify_isbase = false;
            QsciLexerMakefile::disconnectNotify(signal);
        } else if (qscilexermakefile_disconnectnotify_callback != nullptr) {
            qscilexermakefile_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerMakefile::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexermakefile_sender_isbase) {
            qscilexermakefile_sender_isbase = false;
            return QsciLexerMakefile::sender();
        } else if (qscilexermakefile_sender_callback != nullptr) {
            return qscilexermakefile_sender_callback();
        } else {
            return QsciLexerMakefile::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexermakefile_sendersignalindex_isbase) {
            qscilexermakefile_sendersignalindex_isbase = false;
            return QsciLexerMakefile::senderSignalIndex();
        } else if (qscilexermakefile_sendersignalindex_callback != nullptr) {
            return qscilexermakefile_sendersignalindex_callback();
        } else {
            return QsciLexerMakefile::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexermakefile_receivers_isbase) {
            qscilexermakefile_receivers_isbase = false;
            return QsciLexerMakefile::receivers(signal);
        } else if (qscilexermakefile_receivers_callback != nullptr) {
            return qscilexermakefile_receivers_callback(this, signal);
        } else {
            return QsciLexerMakefile::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexermakefile_issignalconnected_isbase) {
            qscilexermakefile_issignalconnected_isbase = false;
            return QsciLexerMakefile::isSignalConnected(signal);
        } else if (qscilexermakefile_issignalconnected_callback != nullptr) {
            return qscilexermakefile_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerMakefile::isSignalConnected(signal);
        }
    }
};

#endif
