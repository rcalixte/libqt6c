#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERLUA_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERLUA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerLua so that we can call protected methods
class VirtualQsciLexerLua : public QsciLexerLua {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerLua_Metacall_Callback = int (*)(QsciLexerLua*, QMetaObject::Call, int, void**);
    using QsciLexerLua_SetFoldCompact_Callback = void (*)(QsciLexerLua*, bool);
    using QsciLexerLua_Language_Callback = const char* (*)();
    using QsciLexerLua_Lexer_Callback = const char* (*)();
    using QsciLexerLua_LexerId_Callback = int (*)();
    using QsciLexerLua_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerLua_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerLua_BlockEnd_Callback = const char* (*)(const QsciLexerLua*, int*);
    using QsciLexerLua_BlockLookback_Callback = int (*)();
    using QsciLexerLua_BlockStart_Callback = const char* (*)(const QsciLexerLua*, int*);
    using QsciLexerLua_BlockStartKeyword_Callback = const char* (*)(const QsciLexerLua*, int*);
    using QsciLexerLua_BraceStyle_Callback = int (*)();
    using QsciLexerLua_CaseSensitive_Callback = bool (*)();
    using QsciLexerLua_Color_Callback = QColor (*)(const QsciLexerLua*, int);
    using QsciLexerLua_EolFill_Callback = bool (*)(const QsciLexerLua*, int);
    using QsciLexerLua_Font_Callback = QFont (*)(const QsciLexerLua*, int);
    using QsciLexerLua_IndentationGuideView_Callback = int (*)();
    using QsciLexerLua_Keywords_Callback = const char* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultStyle_Callback = int (*)();
    using QsciLexerLua_Description_Callback = QString (*)(const QsciLexerLua*, int);
    using QsciLexerLua_Paper_Callback = QColor (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultEolFill_Callback = bool (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerLua*, int);
    using QsciLexerLua_SetEditor_Callback = void (*)(QsciLexerLua*, QsciScintilla*);
    using QsciLexerLua_RefreshProperties_Callback = void (*)();
    using QsciLexerLua_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerLua_WordCharacters_Callback = const char* (*)();
    using QsciLexerLua_SetAutoIndentStyle_Callback = void (*)(QsciLexerLua*, int);
    using QsciLexerLua_SetColor_Callback = void (*)(QsciLexerLua*, const QColor&, int);
    using QsciLexerLua_SetEolFill_Callback = void (*)(QsciLexerLua*, bool, int);
    using QsciLexerLua_SetFont_Callback = void (*)(QsciLexerLua*, const QFont&, int);
    using QsciLexerLua_SetPaper_Callback = void (*)(QsciLexerLua*, const QColor&, int);
    using QsciLexerLua_ReadProperties_Callback = bool (*)(QsciLexerLua*, QSettings&, const QString&);
    using QsciLexerLua_WriteProperties_Callback = bool (*)(const QsciLexerLua*, QSettings&, const QString&);
    using QsciLexerLua_Event_Callback = bool (*)(QsciLexerLua*, QEvent*);
    using QsciLexerLua_EventFilter_Callback = bool (*)(QsciLexerLua*, QObject*, QEvent*);
    using QsciLexerLua_TimerEvent_Callback = void (*)(QsciLexerLua*, QTimerEvent*);
    using QsciLexerLua_ChildEvent_Callback = void (*)(QsciLexerLua*, QChildEvent*);
    using QsciLexerLua_CustomEvent_Callback = void (*)(QsciLexerLua*, QEvent*);
    using QsciLexerLua_ConnectNotify_Callback = void (*)(QsciLexerLua*, const QMetaMethod&);
    using QsciLexerLua_DisconnectNotify_Callback = void (*)(QsciLexerLua*, const QMetaMethod&);
    using QsciLexerLua_Sender_Callback = QObject* (*)();
    using QsciLexerLua_SenderSignalIndex_Callback = int (*)();
    using QsciLexerLua_Receivers_Callback = int (*)(const QsciLexerLua*, const char*);
    using QsciLexerLua_IsSignalConnected_Callback = bool (*)(const QsciLexerLua*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerLua_Metacall_Callback qscilexerlua_metacall_callback = nullptr;
    QsciLexerLua_SetFoldCompact_Callback qscilexerlua_setfoldcompact_callback = nullptr;
    QsciLexerLua_Language_Callback qscilexerlua_language_callback = nullptr;
    QsciLexerLua_Lexer_Callback qscilexerlua_lexer_callback = nullptr;
    QsciLexerLua_LexerId_Callback qscilexerlua_lexerid_callback = nullptr;
    QsciLexerLua_AutoCompletionFillups_Callback qscilexerlua_autocompletionfillups_callback = nullptr;
    QsciLexerLua_AutoCompletionWordSeparators_Callback qscilexerlua_autocompletionwordseparators_callback = nullptr;
    QsciLexerLua_BlockEnd_Callback qscilexerlua_blockend_callback = nullptr;
    QsciLexerLua_BlockLookback_Callback qscilexerlua_blocklookback_callback = nullptr;
    QsciLexerLua_BlockStart_Callback qscilexerlua_blockstart_callback = nullptr;
    QsciLexerLua_BlockStartKeyword_Callback qscilexerlua_blockstartkeyword_callback = nullptr;
    QsciLexerLua_BraceStyle_Callback qscilexerlua_bracestyle_callback = nullptr;
    QsciLexerLua_CaseSensitive_Callback qscilexerlua_casesensitive_callback = nullptr;
    QsciLexerLua_Color_Callback qscilexerlua_color_callback = nullptr;
    QsciLexerLua_EolFill_Callback qscilexerlua_eolfill_callback = nullptr;
    QsciLexerLua_Font_Callback qscilexerlua_font_callback = nullptr;
    QsciLexerLua_IndentationGuideView_Callback qscilexerlua_indentationguideview_callback = nullptr;
    QsciLexerLua_Keywords_Callback qscilexerlua_keywords_callback = nullptr;
    QsciLexerLua_DefaultStyle_Callback qscilexerlua_defaultstyle_callback = nullptr;
    QsciLexerLua_Description_Callback qscilexerlua_description_callback = nullptr;
    QsciLexerLua_Paper_Callback qscilexerlua_paper_callback = nullptr;
    QsciLexerLua_DefaultColorWithStyle_Callback qscilexerlua_defaultcolorwithstyle_callback = nullptr;
    QsciLexerLua_DefaultEolFill_Callback qscilexerlua_defaulteolfill_callback = nullptr;
    QsciLexerLua_DefaultFontWithStyle_Callback qscilexerlua_defaultfontwithstyle_callback = nullptr;
    QsciLexerLua_DefaultPaperWithStyle_Callback qscilexerlua_defaultpaperwithstyle_callback = nullptr;
    QsciLexerLua_SetEditor_Callback qscilexerlua_seteditor_callback = nullptr;
    QsciLexerLua_RefreshProperties_Callback qscilexerlua_refreshproperties_callback = nullptr;
    QsciLexerLua_StyleBitsNeeded_Callback qscilexerlua_stylebitsneeded_callback = nullptr;
    QsciLexerLua_WordCharacters_Callback qscilexerlua_wordcharacters_callback = nullptr;
    QsciLexerLua_SetAutoIndentStyle_Callback qscilexerlua_setautoindentstyle_callback = nullptr;
    QsciLexerLua_SetColor_Callback qscilexerlua_setcolor_callback = nullptr;
    QsciLexerLua_SetEolFill_Callback qscilexerlua_seteolfill_callback = nullptr;
    QsciLexerLua_SetFont_Callback qscilexerlua_setfont_callback = nullptr;
    QsciLexerLua_SetPaper_Callback qscilexerlua_setpaper_callback = nullptr;
    QsciLexerLua_ReadProperties_Callback qscilexerlua_readproperties_callback = nullptr;
    QsciLexerLua_WriteProperties_Callback qscilexerlua_writeproperties_callback = nullptr;
    QsciLexerLua_Event_Callback qscilexerlua_event_callback = nullptr;
    QsciLexerLua_EventFilter_Callback qscilexerlua_eventfilter_callback = nullptr;
    QsciLexerLua_TimerEvent_Callback qscilexerlua_timerevent_callback = nullptr;
    QsciLexerLua_ChildEvent_Callback qscilexerlua_childevent_callback = nullptr;
    QsciLexerLua_CustomEvent_Callback qscilexerlua_customevent_callback = nullptr;
    QsciLexerLua_ConnectNotify_Callback qscilexerlua_connectnotify_callback = nullptr;
    QsciLexerLua_DisconnectNotify_Callback qscilexerlua_disconnectnotify_callback = nullptr;
    QsciLexerLua_Sender_Callback qscilexerlua_sender_callback = nullptr;
    QsciLexerLua_SenderSignalIndex_Callback qscilexerlua_sendersignalindex_callback = nullptr;
    QsciLexerLua_Receivers_Callback qscilexerlua_receivers_callback = nullptr;
    QsciLexerLua_IsSignalConnected_Callback qscilexerlua_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerlua_metacall_isbase = false;
    mutable bool qscilexerlua_setfoldcompact_isbase = false;
    mutable bool qscilexerlua_language_isbase = false;
    mutable bool qscilexerlua_lexer_isbase = false;
    mutable bool qscilexerlua_lexerid_isbase = false;
    mutable bool qscilexerlua_autocompletionfillups_isbase = false;
    mutable bool qscilexerlua_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerlua_blockend_isbase = false;
    mutable bool qscilexerlua_blocklookback_isbase = false;
    mutable bool qscilexerlua_blockstart_isbase = false;
    mutable bool qscilexerlua_blockstartkeyword_isbase = false;
    mutable bool qscilexerlua_bracestyle_isbase = false;
    mutable bool qscilexerlua_casesensitive_isbase = false;
    mutable bool qscilexerlua_color_isbase = false;
    mutable bool qscilexerlua_eolfill_isbase = false;
    mutable bool qscilexerlua_font_isbase = false;
    mutable bool qscilexerlua_indentationguideview_isbase = false;
    mutable bool qscilexerlua_keywords_isbase = false;
    mutable bool qscilexerlua_defaultstyle_isbase = false;
    mutable bool qscilexerlua_description_isbase = false;
    mutable bool qscilexerlua_paper_isbase = false;
    mutable bool qscilexerlua_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerlua_defaulteolfill_isbase = false;
    mutable bool qscilexerlua_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerlua_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerlua_seteditor_isbase = false;
    mutable bool qscilexerlua_refreshproperties_isbase = false;
    mutable bool qscilexerlua_stylebitsneeded_isbase = false;
    mutable bool qscilexerlua_wordcharacters_isbase = false;
    mutable bool qscilexerlua_setautoindentstyle_isbase = false;
    mutable bool qscilexerlua_setcolor_isbase = false;
    mutable bool qscilexerlua_seteolfill_isbase = false;
    mutable bool qscilexerlua_setfont_isbase = false;
    mutable bool qscilexerlua_setpaper_isbase = false;
    mutable bool qscilexerlua_readproperties_isbase = false;
    mutable bool qscilexerlua_writeproperties_isbase = false;
    mutable bool qscilexerlua_event_isbase = false;
    mutable bool qscilexerlua_eventfilter_isbase = false;
    mutable bool qscilexerlua_timerevent_isbase = false;
    mutable bool qscilexerlua_childevent_isbase = false;
    mutable bool qscilexerlua_customevent_isbase = false;
    mutable bool qscilexerlua_connectnotify_isbase = false;
    mutable bool qscilexerlua_disconnectnotify_isbase = false;
    mutable bool qscilexerlua_sender_isbase = false;
    mutable bool qscilexerlua_sendersignalindex_isbase = false;
    mutable bool qscilexerlua_receivers_isbase = false;
    mutable bool qscilexerlua_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerLua() : QsciLexerLua(){};
    VirtualQsciLexerLua(QObject* parent) : QsciLexerLua(parent){};

    ~VirtualQsciLexerLua() {
        qscilexerlua_metacall_callback = nullptr;
        qscilexerlua_setfoldcompact_callback = nullptr;
        qscilexerlua_language_callback = nullptr;
        qscilexerlua_lexer_callback = nullptr;
        qscilexerlua_lexerid_callback = nullptr;
        qscilexerlua_autocompletionfillups_callback = nullptr;
        qscilexerlua_autocompletionwordseparators_callback = nullptr;
        qscilexerlua_blockend_callback = nullptr;
        qscilexerlua_blocklookback_callback = nullptr;
        qscilexerlua_blockstart_callback = nullptr;
        qscilexerlua_blockstartkeyword_callback = nullptr;
        qscilexerlua_bracestyle_callback = nullptr;
        qscilexerlua_casesensitive_callback = nullptr;
        qscilexerlua_color_callback = nullptr;
        qscilexerlua_eolfill_callback = nullptr;
        qscilexerlua_font_callback = nullptr;
        qscilexerlua_indentationguideview_callback = nullptr;
        qscilexerlua_keywords_callback = nullptr;
        qscilexerlua_defaultstyle_callback = nullptr;
        qscilexerlua_description_callback = nullptr;
        qscilexerlua_paper_callback = nullptr;
        qscilexerlua_defaultcolorwithstyle_callback = nullptr;
        qscilexerlua_defaulteolfill_callback = nullptr;
        qscilexerlua_defaultfontwithstyle_callback = nullptr;
        qscilexerlua_defaultpaperwithstyle_callback = nullptr;
        qscilexerlua_seteditor_callback = nullptr;
        qscilexerlua_refreshproperties_callback = nullptr;
        qscilexerlua_stylebitsneeded_callback = nullptr;
        qscilexerlua_wordcharacters_callback = nullptr;
        qscilexerlua_setautoindentstyle_callback = nullptr;
        qscilexerlua_setcolor_callback = nullptr;
        qscilexerlua_seteolfill_callback = nullptr;
        qscilexerlua_setfont_callback = nullptr;
        qscilexerlua_setpaper_callback = nullptr;
        qscilexerlua_readproperties_callback = nullptr;
        qscilexerlua_writeproperties_callback = nullptr;
        qscilexerlua_event_callback = nullptr;
        qscilexerlua_eventfilter_callback = nullptr;
        qscilexerlua_timerevent_callback = nullptr;
        qscilexerlua_childevent_callback = nullptr;
        qscilexerlua_customevent_callback = nullptr;
        qscilexerlua_connectnotify_callback = nullptr;
        qscilexerlua_disconnectnotify_callback = nullptr;
        qscilexerlua_sender_callback = nullptr;
        qscilexerlua_sendersignalindex_callback = nullptr;
        qscilexerlua_receivers_callback = nullptr;
        qscilexerlua_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerLua_Metacall_Callback(QsciLexerLua_Metacall_Callback cb) { qscilexerlua_metacall_callback = cb; }
    void setQsciLexerLua_SetFoldCompact_Callback(QsciLexerLua_SetFoldCompact_Callback cb) { qscilexerlua_setfoldcompact_callback = cb; }
    void setQsciLexerLua_Language_Callback(QsciLexerLua_Language_Callback cb) { qscilexerlua_language_callback = cb; }
    void setQsciLexerLua_Lexer_Callback(QsciLexerLua_Lexer_Callback cb) { qscilexerlua_lexer_callback = cb; }
    void setQsciLexerLua_LexerId_Callback(QsciLexerLua_LexerId_Callback cb) { qscilexerlua_lexerid_callback = cb; }
    void setQsciLexerLua_AutoCompletionFillups_Callback(QsciLexerLua_AutoCompletionFillups_Callback cb) { qscilexerlua_autocompletionfillups_callback = cb; }
    void setQsciLexerLua_AutoCompletionWordSeparators_Callback(QsciLexerLua_AutoCompletionWordSeparators_Callback cb) { qscilexerlua_autocompletionwordseparators_callback = cb; }
    void setQsciLexerLua_BlockEnd_Callback(QsciLexerLua_BlockEnd_Callback cb) { qscilexerlua_blockend_callback = cb; }
    void setQsciLexerLua_BlockLookback_Callback(QsciLexerLua_BlockLookback_Callback cb) { qscilexerlua_blocklookback_callback = cb; }
    void setQsciLexerLua_BlockStart_Callback(QsciLexerLua_BlockStart_Callback cb) { qscilexerlua_blockstart_callback = cb; }
    void setQsciLexerLua_BlockStartKeyword_Callback(QsciLexerLua_BlockStartKeyword_Callback cb) { qscilexerlua_blockstartkeyword_callback = cb; }
    void setQsciLexerLua_BraceStyle_Callback(QsciLexerLua_BraceStyle_Callback cb) { qscilexerlua_bracestyle_callback = cb; }
    void setQsciLexerLua_CaseSensitive_Callback(QsciLexerLua_CaseSensitive_Callback cb) { qscilexerlua_casesensitive_callback = cb; }
    void setQsciLexerLua_Color_Callback(QsciLexerLua_Color_Callback cb) { qscilexerlua_color_callback = cb; }
    void setQsciLexerLua_EolFill_Callback(QsciLexerLua_EolFill_Callback cb) { qscilexerlua_eolfill_callback = cb; }
    void setQsciLexerLua_Font_Callback(QsciLexerLua_Font_Callback cb) { qscilexerlua_font_callback = cb; }
    void setQsciLexerLua_IndentationGuideView_Callback(QsciLexerLua_IndentationGuideView_Callback cb) { qscilexerlua_indentationguideview_callback = cb; }
    void setQsciLexerLua_Keywords_Callback(QsciLexerLua_Keywords_Callback cb) { qscilexerlua_keywords_callback = cb; }
    void setQsciLexerLua_DefaultStyle_Callback(QsciLexerLua_DefaultStyle_Callback cb) { qscilexerlua_defaultstyle_callback = cb; }
    void setQsciLexerLua_Description_Callback(QsciLexerLua_Description_Callback cb) { qscilexerlua_description_callback = cb; }
    void setQsciLexerLua_Paper_Callback(QsciLexerLua_Paper_Callback cb) { qscilexerlua_paper_callback = cb; }
    void setQsciLexerLua_DefaultColorWithStyle_Callback(QsciLexerLua_DefaultColorWithStyle_Callback cb) { qscilexerlua_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerLua_DefaultEolFill_Callback(QsciLexerLua_DefaultEolFill_Callback cb) { qscilexerlua_defaulteolfill_callback = cb; }
    void setQsciLexerLua_DefaultFontWithStyle_Callback(QsciLexerLua_DefaultFontWithStyle_Callback cb) { qscilexerlua_defaultfontwithstyle_callback = cb; }
    void setQsciLexerLua_DefaultPaperWithStyle_Callback(QsciLexerLua_DefaultPaperWithStyle_Callback cb) { qscilexerlua_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerLua_SetEditor_Callback(QsciLexerLua_SetEditor_Callback cb) { qscilexerlua_seteditor_callback = cb; }
    void setQsciLexerLua_RefreshProperties_Callback(QsciLexerLua_RefreshProperties_Callback cb) { qscilexerlua_refreshproperties_callback = cb; }
    void setQsciLexerLua_StyleBitsNeeded_Callback(QsciLexerLua_StyleBitsNeeded_Callback cb) { qscilexerlua_stylebitsneeded_callback = cb; }
    void setQsciLexerLua_WordCharacters_Callback(QsciLexerLua_WordCharacters_Callback cb) { qscilexerlua_wordcharacters_callback = cb; }
    void setQsciLexerLua_SetAutoIndentStyle_Callback(QsciLexerLua_SetAutoIndentStyle_Callback cb) { qscilexerlua_setautoindentstyle_callback = cb; }
    void setQsciLexerLua_SetColor_Callback(QsciLexerLua_SetColor_Callback cb) { qscilexerlua_setcolor_callback = cb; }
    void setQsciLexerLua_SetEolFill_Callback(QsciLexerLua_SetEolFill_Callback cb) { qscilexerlua_seteolfill_callback = cb; }
    void setQsciLexerLua_SetFont_Callback(QsciLexerLua_SetFont_Callback cb) { qscilexerlua_setfont_callback = cb; }
    void setQsciLexerLua_SetPaper_Callback(QsciLexerLua_SetPaper_Callback cb) { qscilexerlua_setpaper_callback = cb; }
    void setQsciLexerLua_ReadProperties_Callback(QsciLexerLua_ReadProperties_Callback cb) { qscilexerlua_readproperties_callback = cb; }
    void setQsciLexerLua_WriteProperties_Callback(QsciLexerLua_WriteProperties_Callback cb) { qscilexerlua_writeproperties_callback = cb; }
    void setQsciLexerLua_Event_Callback(QsciLexerLua_Event_Callback cb) { qscilexerlua_event_callback = cb; }
    void setQsciLexerLua_EventFilter_Callback(QsciLexerLua_EventFilter_Callback cb) { qscilexerlua_eventfilter_callback = cb; }
    void setQsciLexerLua_TimerEvent_Callback(QsciLexerLua_TimerEvent_Callback cb) { qscilexerlua_timerevent_callback = cb; }
    void setQsciLexerLua_ChildEvent_Callback(QsciLexerLua_ChildEvent_Callback cb) { qscilexerlua_childevent_callback = cb; }
    void setQsciLexerLua_CustomEvent_Callback(QsciLexerLua_CustomEvent_Callback cb) { qscilexerlua_customevent_callback = cb; }
    void setQsciLexerLua_ConnectNotify_Callback(QsciLexerLua_ConnectNotify_Callback cb) { qscilexerlua_connectnotify_callback = cb; }
    void setQsciLexerLua_DisconnectNotify_Callback(QsciLexerLua_DisconnectNotify_Callback cb) { qscilexerlua_disconnectnotify_callback = cb; }
    void setQsciLexerLua_Sender_Callback(QsciLexerLua_Sender_Callback cb) { qscilexerlua_sender_callback = cb; }
    void setQsciLexerLua_SenderSignalIndex_Callback(QsciLexerLua_SenderSignalIndex_Callback cb) { qscilexerlua_sendersignalindex_callback = cb; }
    void setQsciLexerLua_Receivers_Callback(QsciLexerLua_Receivers_Callback cb) { qscilexerlua_receivers_callback = cb; }
    void setQsciLexerLua_IsSignalConnected_Callback(QsciLexerLua_IsSignalConnected_Callback cb) { qscilexerlua_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerLua_Metacall_IsBase(bool value) const { qscilexerlua_metacall_isbase = value; }
    void setQsciLexerLua_SetFoldCompact_IsBase(bool value) const { qscilexerlua_setfoldcompact_isbase = value; }
    void setQsciLexerLua_Language_IsBase(bool value) const { qscilexerlua_language_isbase = value; }
    void setQsciLexerLua_Lexer_IsBase(bool value) const { qscilexerlua_lexer_isbase = value; }
    void setQsciLexerLua_LexerId_IsBase(bool value) const { qscilexerlua_lexerid_isbase = value; }
    void setQsciLexerLua_AutoCompletionFillups_IsBase(bool value) const { qscilexerlua_autocompletionfillups_isbase = value; }
    void setQsciLexerLua_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerlua_autocompletionwordseparators_isbase = value; }
    void setQsciLexerLua_BlockEnd_IsBase(bool value) const { qscilexerlua_blockend_isbase = value; }
    void setQsciLexerLua_BlockLookback_IsBase(bool value) const { qscilexerlua_blocklookback_isbase = value; }
    void setQsciLexerLua_BlockStart_IsBase(bool value) const { qscilexerlua_blockstart_isbase = value; }
    void setQsciLexerLua_BlockStartKeyword_IsBase(bool value) const { qscilexerlua_blockstartkeyword_isbase = value; }
    void setQsciLexerLua_BraceStyle_IsBase(bool value) const { qscilexerlua_bracestyle_isbase = value; }
    void setQsciLexerLua_CaseSensitive_IsBase(bool value) const { qscilexerlua_casesensitive_isbase = value; }
    void setQsciLexerLua_Color_IsBase(bool value) const { qscilexerlua_color_isbase = value; }
    void setQsciLexerLua_EolFill_IsBase(bool value) const { qscilexerlua_eolfill_isbase = value; }
    void setQsciLexerLua_Font_IsBase(bool value) const { qscilexerlua_font_isbase = value; }
    void setQsciLexerLua_IndentationGuideView_IsBase(bool value) const { qscilexerlua_indentationguideview_isbase = value; }
    void setQsciLexerLua_Keywords_IsBase(bool value) const { qscilexerlua_keywords_isbase = value; }
    void setQsciLexerLua_DefaultStyle_IsBase(bool value) const { qscilexerlua_defaultstyle_isbase = value; }
    void setQsciLexerLua_Description_IsBase(bool value) const { qscilexerlua_description_isbase = value; }
    void setQsciLexerLua_Paper_IsBase(bool value) const { qscilexerlua_paper_isbase = value; }
    void setQsciLexerLua_DefaultColorWithStyle_IsBase(bool value) const { qscilexerlua_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerLua_DefaultEolFill_IsBase(bool value) const { qscilexerlua_defaulteolfill_isbase = value; }
    void setQsciLexerLua_DefaultFontWithStyle_IsBase(bool value) const { qscilexerlua_defaultfontwithstyle_isbase = value; }
    void setQsciLexerLua_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerlua_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerLua_SetEditor_IsBase(bool value) const { qscilexerlua_seteditor_isbase = value; }
    void setQsciLexerLua_RefreshProperties_IsBase(bool value) const { qscilexerlua_refreshproperties_isbase = value; }
    void setQsciLexerLua_StyleBitsNeeded_IsBase(bool value) const { qscilexerlua_stylebitsneeded_isbase = value; }
    void setQsciLexerLua_WordCharacters_IsBase(bool value) const { qscilexerlua_wordcharacters_isbase = value; }
    void setQsciLexerLua_SetAutoIndentStyle_IsBase(bool value) const { qscilexerlua_setautoindentstyle_isbase = value; }
    void setQsciLexerLua_SetColor_IsBase(bool value) const { qscilexerlua_setcolor_isbase = value; }
    void setQsciLexerLua_SetEolFill_IsBase(bool value) const { qscilexerlua_seteolfill_isbase = value; }
    void setQsciLexerLua_SetFont_IsBase(bool value) const { qscilexerlua_setfont_isbase = value; }
    void setQsciLexerLua_SetPaper_IsBase(bool value) const { qscilexerlua_setpaper_isbase = value; }
    void setQsciLexerLua_ReadProperties_IsBase(bool value) const { qscilexerlua_readproperties_isbase = value; }
    void setQsciLexerLua_WriteProperties_IsBase(bool value) const { qscilexerlua_writeproperties_isbase = value; }
    void setQsciLexerLua_Event_IsBase(bool value) const { qscilexerlua_event_isbase = value; }
    void setQsciLexerLua_EventFilter_IsBase(bool value) const { qscilexerlua_eventfilter_isbase = value; }
    void setQsciLexerLua_TimerEvent_IsBase(bool value) const { qscilexerlua_timerevent_isbase = value; }
    void setQsciLexerLua_ChildEvent_IsBase(bool value) const { qscilexerlua_childevent_isbase = value; }
    void setQsciLexerLua_CustomEvent_IsBase(bool value) const { qscilexerlua_customevent_isbase = value; }
    void setQsciLexerLua_ConnectNotify_IsBase(bool value) const { qscilexerlua_connectnotify_isbase = value; }
    void setQsciLexerLua_DisconnectNotify_IsBase(bool value) const { qscilexerlua_disconnectnotify_isbase = value; }
    void setQsciLexerLua_Sender_IsBase(bool value) const { qscilexerlua_sender_isbase = value; }
    void setQsciLexerLua_SenderSignalIndex_IsBase(bool value) const { qscilexerlua_sendersignalindex_isbase = value; }
    void setQsciLexerLua_Receivers_IsBase(bool value) const { qscilexerlua_receivers_isbase = value; }
    void setQsciLexerLua_IsSignalConnected_IsBase(bool value) const { qscilexerlua_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerlua_metacall_isbase) {
            qscilexerlua_metacall_isbase = false;
            return QsciLexerLua::qt_metacall(param1, param2, param3);
        } else if (qscilexerlua_metacall_callback != nullptr) {
            return qscilexerlua_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerLua::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerlua_setfoldcompact_isbase) {
            qscilexerlua_setfoldcompact_isbase = false;
            QsciLexerLua::setFoldCompact(fold);
        } else if (qscilexerlua_setfoldcompact_callback != nullptr) {
            qscilexerlua_setfoldcompact_callback(this, fold);
        } else {
            QsciLexerLua::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerlua_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerlua_lexer_isbase) {
            qscilexerlua_lexer_isbase = false;
            return QsciLexerLua::lexer();
        } else if (qscilexerlua_lexer_callback != nullptr) {
            return qscilexerlua_lexer_callback();
        } else {
            return QsciLexerLua::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerlua_lexerid_isbase) {
            qscilexerlua_lexerid_isbase = false;
            return QsciLexerLua::lexerId();
        } else if (qscilexerlua_lexerid_callback != nullptr) {
            return qscilexerlua_lexerid_callback();
        } else {
            return QsciLexerLua::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerlua_autocompletionfillups_isbase) {
            qscilexerlua_autocompletionfillups_isbase = false;
            return QsciLexerLua::autoCompletionFillups();
        } else if (qscilexerlua_autocompletionfillups_callback != nullptr) {
            return qscilexerlua_autocompletionfillups_callback();
        } else {
            return QsciLexerLua::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerlua_autocompletionwordseparators_isbase) {
            qscilexerlua_autocompletionwordseparators_isbase = false;
            return QsciLexerLua::autoCompletionWordSeparators();
        } else if (qscilexerlua_autocompletionwordseparators_callback != nullptr) {
            return qscilexerlua_autocompletionwordseparators_callback();
        } else {
            return QsciLexerLua::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerlua_blockend_isbase) {
            qscilexerlua_blockend_isbase = false;
            return QsciLexerLua::blockEnd(style);
        } else if (qscilexerlua_blockend_callback != nullptr) {
            return qscilexerlua_blockend_callback(this, style);
        } else {
            return QsciLexerLua::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerlua_blocklookback_isbase) {
            qscilexerlua_blocklookback_isbase = false;
            return QsciLexerLua::blockLookback();
        } else if (qscilexerlua_blocklookback_callback != nullptr) {
            return qscilexerlua_blocklookback_callback();
        } else {
            return QsciLexerLua::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerlua_blockstart_isbase) {
            qscilexerlua_blockstart_isbase = false;
            return QsciLexerLua::blockStart(style);
        } else if (qscilexerlua_blockstart_callback != nullptr) {
            return qscilexerlua_blockstart_callback(this, style);
        } else {
            return QsciLexerLua::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerlua_blockstartkeyword_isbase) {
            qscilexerlua_blockstartkeyword_isbase = false;
            return QsciLexerLua::blockStartKeyword(style);
        } else if (qscilexerlua_blockstartkeyword_callback != nullptr) {
            return qscilexerlua_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerLua::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerlua_bracestyle_isbase) {
            qscilexerlua_bracestyle_isbase = false;
            return QsciLexerLua::braceStyle();
        } else if (qscilexerlua_bracestyle_callback != nullptr) {
            return qscilexerlua_bracestyle_callback();
        } else {
            return QsciLexerLua::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerlua_casesensitive_isbase) {
            qscilexerlua_casesensitive_isbase = false;
            return QsciLexerLua::caseSensitive();
        } else if (qscilexerlua_casesensitive_callback != nullptr) {
            return qscilexerlua_casesensitive_callback();
        } else {
            return QsciLexerLua::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerlua_color_isbase) {
            qscilexerlua_color_isbase = false;
            return QsciLexerLua::color(style);
        } else if (qscilexerlua_color_callback != nullptr) {
            return qscilexerlua_color_callback(this, style);
        } else {
            return QsciLexerLua::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerlua_eolfill_isbase) {
            qscilexerlua_eolfill_isbase = false;
            return QsciLexerLua::eolFill(style);
        } else if (qscilexerlua_eolfill_callback != nullptr) {
            return qscilexerlua_eolfill_callback(this, style);
        } else {
            return QsciLexerLua::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerlua_font_isbase) {
            qscilexerlua_font_isbase = false;
            return QsciLexerLua::font(style);
        } else if (qscilexerlua_font_callback != nullptr) {
            return qscilexerlua_font_callback(this, style);
        } else {
            return QsciLexerLua::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerlua_indentationguideview_isbase) {
            qscilexerlua_indentationguideview_isbase = false;
            return QsciLexerLua::indentationGuideView();
        } else if (qscilexerlua_indentationguideview_callback != nullptr) {
            return qscilexerlua_indentationguideview_callback();
        } else {
            return QsciLexerLua::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerlua_keywords_isbase) {
            qscilexerlua_keywords_isbase = false;
            return QsciLexerLua::keywords(set);
        } else if (qscilexerlua_keywords_callback != nullptr) {
            return qscilexerlua_keywords_callback(this, set);
        } else {
            return QsciLexerLua::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerlua_defaultstyle_isbase) {
            qscilexerlua_defaultstyle_isbase = false;
            return QsciLexerLua::defaultStyle();
        } else if (qscilexerlua_defaultstyle_callback != nullptr) {
            return qscilexerlua_defaultstyle_callback();
        } else {
            return QsciLexerLua::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerlua_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerlua_paper_isbase) {
            qscilexerlua_paper_isbase = false;
            return QsciLexerLua::paper(style);
        } else if (qscilexerlua_paper_callback != nullptr) {
            return qscilexerlua_paper_callback(this, style);
        } else {
            return QsciLexerLua::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerlua_defaultcolorwithstyle_isbase) {
            qscilexerlua_defaultcolorwithstyle_isbase = false;
            return QsciLexerLua::defaultColor(style);
        } else if (qscilexerlua_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerlua_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerLua::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerlua_defaulteolfill_isbase) {
            qscilexerlua_defaulteolfill_isbase = false;
            return QsciLexerLua::defaultEolFill(style);
        } else if (qscilexerlua_defaulteolfill_callback != nullptr) {
            return qscilexerlua_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerLua::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerlua_defaultfontwithstyle_isbase) {
            qscilexerlua_defaultfontwithstyle_isbase = false;
            return QsciLexerLua::defaultFont(style);
        } else if (qscilexerlua_defaultfontwithstyle_callback != nullptr) {
            return qscilexerlua_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerLua::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerlua_defaultpaperwithstyle_isbase) {
            qscilexerlua_defaultpaperwithstyle_isbase = false;
            return QsciLexerLua::defaultPaper(style);
        } else if (qscilexerlua_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerlua_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerLua::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerlua_seteditor_isbase) {
            qscilexerlua_seteditor_isbase = false;
            QsciLexerLua::setEditor(editor);
        } else if (qscilexerlua_seteditor_callback != nullptr) {
            qscilexerlua_seteditor_callback(this, editor);
        } else {
            QsciLexerLua::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerlua_refreshproperties_isbase) {
            qscilexerlua_refreshproperties_isbase = false;
            QsciLexerLua::refreshProperties();
        } else if (qscilexerlua_refreshproperties_callback != nullptr) {
            qscilexerlua_refreshproperties_callback();
        } else {
            QsciLexerLua::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerlua_stylebitsneeded_isbase) {
            qscilexerlua_stylebitsneeded_isbase = false;
            return QsciLexerLua::styleBitsNeeded();
        } else if (qscilexerlua_stylebitsneeded_callback != nullptr) {
            return qscilexerlua_stylebitsneeded_callback();
        } else {
            return QsciLexerLua::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerlua_wordcharacters_isbase) {
            qscilexerlua_wordcharacters_isbase = false;
            return QsciLexerLua::wordCharacters();
        } else if (qscilexerlua_wordcharacters_callback != nullptr) {
            return qscilexerlua_wordcharacters_callback();
        } else {
            return QsciLexerLua::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerlua_setautoindentstyle_isbase) {
            qscilexerlua_setautoindentstyle_isbase = false;
            QsciLexerLua::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerlua_setautoindentstyle_callback != nullptr) {
            qscilexerlua_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerLua::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerlua_setcolor_isbase) {
            qscilexerlua_setcolor_isbase = false;
            QsciLexerLua::setColor(c, style);
        } else if (qscilexerlua_setcolor_callback != nullptr) {
            qscilexerlua_setcolor_callback(this, c, style);
        } else {
            QsciLexerLua::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerlua_seteolfill_isbase) {
            qscilexerlua_seteolfill_isbase = false;
            QsciLexerLua::setEolFill(eoffill, style);
        } else if (qscilexerlua_seteolfill_callback != nullptr) {
            qscilexerlua_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerLua::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerlua_setfont_isbase) {
            qscilexerlua_setfont_isbase = false;
            QsciLexerLua::setFont(f, style);
        } else if (qscilexerlua_setfont_callback != nullptr) {
            qscilexerlua_setfont_callback(this, f, style);
        } else {
            QsciLexerLua::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerlua_setpaper_isbase) {
            qscilexerlua_setpaper_isbase = false;
            QsciLexerLua::setPaper(c, style);
        } else if (qscilexerlua_setpaper_callback != nullptr) {
            qscilexerlua_setpaper_callback(this, c, style);
        } else {
            QsciLexerLua::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerlua_readproperties_isbase) {
            qscilexerlua_readproperties_isbase = false;
            return QsciLexerLua::readProperties(qs, prefix);
        } else if (qscilexerlua_readproperties_callback != nullptr) {
            return qscilexerlua_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerLua::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerlua_writeproperties_isbase) {
            qscilexerlua_writeproperties_isbase = false;
            return QsciLexerLua::writeProperties(qs, prefix);
        } else if (qscilexerlua_writeproperties_callback != nullptr) {
            return qscilexerlua_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerLua::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerlua_event_isbase) {
            qscilexerlua_event_isbase = false;
            return QsciLexerLua::event(event);
        } else if (qscilexerlua_event_callback != nullptr) {
            return qscilexerlua_event_callback(this, event);
        } else {
            return QsciLexerLua::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerlua_eventfilter_isbase) {
            qscilexerlua_eventfilter_isbase = false;
            return QsciLexerLua::eventFilter(watched, event);
        } else if (qscilexerlua_eventfilter_callback != nullptr) {
            return qscilexerlua_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerLua::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerlua_timerevent_isbase) {
            qscilexerlua_timerevent_isbase = false;
            QsciLexerLua::timerEvent(event);
        } else if (qscilexerlua_timerevent_callback != nullptr) {
            qscilexerlua_timerevent_callback(this, event);
        } else {
            QsciLexerLua::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerlua_childevent_isbase) {
            qscilexerlua_childevent_isbase = false;
            QsciLexerLua::childEvent(event);
        } else if (qscilexerlua_childevent_callback != nullptr) {
            qscilexerlua_childevent_callback(this, event);
        } else {
            QsciLexerLua::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerlua_customevent_isbase) {
            qscilexerlua_customevent_isbase = false;
            QsciLexerLua::customEvent(event);
        } else if (qscilexerlua_customevent_callback != nullptr) {
            qscilexerlua_customevent_callback(this, event);
        } else {
            QsciLexerLua::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerlua_connectnotify_isbase) {
            qscilexerlua_connectnotify_isbase = false;
            QsciLexerLua::connectNotify(signal);
        } else if (qscilexerlua_connectnotify_callback != nullptr) {
            qscilexerlua_connectnotify_callback(this, signal);
        } else {
            QsciLexerLua::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerlua_disconnectnotify_isbase) {
            qscilexerlua_disconnectnotify_isbase = false;
            QsciLexerLua::disconnectNotify(signal);
        } else if (qscilexerlua_disconnectnotify_callback != nullptr) {
            qscilexerlua_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerLua::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerlua_sender_isbase) {
            qscilexerlua_sender_isbase = false;
            return QsciLexerLua::sender();
        } else if (qscilexerlua_sender_callback != nullptr) {
            return qscilexerlua_sender_callback();
        } else {
            return QsciLexerLua::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerlua_sendersignalindex_isbase) {
            qscilexerlua_sendersignalindex_isbase = false;
            return QsciLexerLua::senderSignalIndex();
        } else if (qscilexerlua_sendersignalindex_callback != nullptr) {
            return qscilexerlua_sendersignalindex_callback();
        } else {
            return QsciLexerLua::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerlua_receivers_isbase) {
            qscilexerlua_receivers_isbase = false;
            return QsciLexerLua::receivers(signal);
        } else if (qscilexerlua_receivers_callback != nullptr) {
            return qscilexerlua_receivers_callback(this, signal);
        } else {
            return QsciLexerLua::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerlua_issignalconnected_isbase) {
            qscilexerlua_issignalconnected_isbase = false;
            return QsciLexerLua::isSignalConnected(signal);
        } else if (qscilexerlua_issignalconnected_callback != nullptr) {
            return qscilexerlua_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerLua::isSignalConnected(signal);
        }
    }
};

#endif
