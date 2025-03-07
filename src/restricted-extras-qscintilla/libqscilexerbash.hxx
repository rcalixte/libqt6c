#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERBASH_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERBASH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerBash so that we can call protected methods
class VirtualQsciLexerBash : public QsciLexerBash {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerBash_Metacall_Callback = int (*)(QsciLexerBash*, QMetaObject::Call, int, void**);
    using QsciLexerBash_SetFoldComments_Callback = void (*)(QsciLexerBash*, bool);
    using QsciLexerBash_SetFoldCompact_Callback = void (*)(QsciLexerBash*, bool);
    using QsciLexerBash_Language_Callback = const char* (*)();
    using QsciLexerBash_Lexer_Callback = const char* (*)();
    using QsciLexerBash_LexerId_Callback = int (*)();
    using QsciLexerBash_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerBash_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerBash_BlockEnd_Callback = const char* (*)(const QsciLexerBash*, int*);
    using QsciLexerBash_BlockLookback_Callback = int (*)();
    using QsciLexerBash_BlockStart_Callback = const char* (*)(const QsciLexerBash*, int*);
    using QsciLexerBash_BlockStartKeyword_Callback = const char* (*)(const QsciLexerBash*, int*);
    using QsciLexerBash_BraceStyle_Callback = int (*)();
    using QsciLexerBash_CaseSensitive_Callback = bool (*)();
    using QsciLexerBash_Color_Callback = QColor (*)(const QsciLexerBash*, int);
    using QsciLexerBash_EolFill_Callback = bool (*)(const QsciLexerBash*, int);
    using QsciLexerBash_Font_Callback = QFont (*)(const QsciLexerBash*, int);
    using QsciLexerBash_IndentationGuideView_Callback = int (*)();
    using QsciLexerBash_Keywords_Callback = const char* (*)(const QsciLexerBash*, int);
    using QsciLexerBash_DefaultStyle_Callback = int (*)();
    using QsciLexerBash_Description_Callback = QString (*)(const QsciLexerBash*, int);
    using QsciLexerBash_Paper_Callback = QColor (*)(const QsciLexerBash*, int);
    using QsciLexerBash_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerBash*, int);
    using QsciLexerBash_DefaultEolFill_Callback = bool (*)(const QsciLexerBash*, int);
    using QsciLexerBash_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerBash*, int);
    using QsciLexerBash_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerBash*, int);
    using QsciLexerBash_SetEditor_Callback = void (*)(QsciLexerBash*, QsciScintilla*);
    using QsciLexerBash_RefreshProperties_Callback = void (*)();
    using QsciLexerBash_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerBash_WordCharacters_Callback = const char* (*)();
    using QsciLexerBash_SetAutoIndentStyle_Callback = void (*)(QsciLexerBash*, int);
    using QsciLexerBash_SetColor_Callback = void (*)(QsciLexerBash*, const QColor&, int);
    using QsciLexerBash_SetEolFill_Callback = void (*)(QsciLexerBash*, bool, int);
    using QsciLexerBash_SetFont_Callback = void (*)(QsciLexerBash*, const QFont&, int);
    using QsciLexerBash_SetPaper_Callback = void (*)(QsciLexerBash*, const QColor&, int);
    using QsciLexerBash_ReadProperties_Callback = bool (*)(QsciLexerBash*, QSettings&, const QString&);
    using QsciLexerBash_WriteProperties_Callback = bool (*)(const QsciLexerBash*, QSettings&, const QString&);
    using QsciLexerBash_Event_Callback = bool (*)(QsciLexerBash*, QEvent*);
    using QsciLexerBash_EventFilter_Callback = bool (*)(QsciLexerBash*, QObject*, QEvent*);
    using QsciLexerBash_TimerEvent_Callback = void (*)(QsciLexerBash*, QTimerEvent*);
    using QsciLexerBash_ChildEvent_Callback = void (*)(QsciLexerBash*, QChildEvent*);
    using QsciLexerBash_CustomEvent_Callback = void (*)(QsciLexerBash*, QEvent*);
    using QsciLexerBash_ConnectNotify_Callback = void (*)(QsciLexerBash*, const QMetaMethod&);
    using QsciLexerBash_DisconnectNotify_Callback = void (*)(QsciLexerBash*, const QMetaMethod&);
    using QsciLexerBash_Sender_Callback = QObject* (*)();
    using QsciLexerBash_SenderSignalIndex_Callback = int (*)();
    using QsciLexerBash_Receivers_Callback = int (*)(const QsciLexerBash*, const char*);
    using QsciLexerBash_IsSignalConnected_Callback = bool (*)(const QsciLexerBash*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerBash_Metacall_Callback qscilexerbash_metacall_callback = nullptr;
    QsciLexerBash_SetFoldComments_Callback qscilexerbash_setfoldcomments_callback = nullptr;
    QsciLexerBash_SetFoldCompact_Callback qscilexerbash_setfoldcompact_callback = nullptr;
    QsciLexerBash_Language_Callback qscilexerbash_language_callback = nullptr;
    QsciLexerBash_Lexer_Callback qscilexerbash_lexer_callback = nullptr;
    QsciLexerBash_LexerId_Callback qscilexerbash_lexerid_callback = nullptr;
    QsciLexerBash_AutoCompletionFillups_Callback qscilexerbash_autocompletionfillups_callback = nullptr;
    QsciLexerBash_AutoCompletionWordSeparators_Callback qscilexerbash_autocompletionwordseparators_callback = nullptr;
    QsciLexerBash_BlockEnd_Callback qscilexerbash_blockend_callback = nullptr;
    QsciLexerBash_BlockLookback_Callback qscilexerbash_blocklookback_callback = nullptr;
    QsciLexerBash_BlockStart_Callback qscilexerbash_blockstart_callback = nullptr;
    QsciLexerBash_BlockStartKeyword_Callback qscilexerbash_blockstartkeyword_callback = nullptr;
    QsciLexerBash_BraceStyle_Callback qscilexerbash_bracestyle_callback = nullptr;
    QsciLexerBash_CaseSensitive_Callback qscilexerbash_casesensitive_callback = nullptr;
    QsciLexerBash_Color_Callback qscilexerbash_color_callback = nullptr;
    QsciLexerBash_EolFill_Callback qscilexerbash_eolfill_callback = nullptr;
    QsciLexerBash_Font_Callback qscilexerbash_font_callback = nullptr;
    QsciLexerBash_IndentationGuideView_Callback qscilexerbash_indentationguideview_callback = nullptr;
    QsciLexerBash_Keywords_Callback qscilexerbash_keywords_callback = nullptr;
    QsciLexerBash_DefaultStyle_Callback qscilexerbash_defaultstyle_callback = nullptr;
    QsciLexerBash_Description_Callback qscilexerbash_description_callback = nullptr;
    QsciLexerBash_Paper_Callback qscilexerbash_paper_callback = nullptr;
    QsciLexerBash_DefaultColorWithStyle_Callback qscilexerbash_defaultcolorwithstyle_callback = nullptr;
    QsciLexerBash_DefaultEolFill_Callback qscilexerbash_defaulteolfill_callback = nullptr;
    QsciLexerBash_DefaultFontWithStyle_Callback qscilexerbash_defaultfontwithstyle_callback = nullptr;
    QsciLexerBash_DefaultPaperWithStyle_Callback qscilexerbash_defaultpaperwithstyle_callback = nullptr;
    QsciLexerBash_SetEditor_Callback qscilexerbash_seteditor_callback = nullptr;
    QsciLexerBash_RefreshProperties_Callback qscilexerbash_refreshproperties_callback = nullptr;
    QsciLexerBash_StyleBitsNeeded_Callback qscilexerbash_stylebitsneeded_callback = nullptr;
    QsciLexerBash_WordCharacters_Callback qscilexerbash_wordcharacters_callback = nullptr;
    QsciLexerBash_SetAutoIndentStyle_Callback qscilexerbash_setautoindentstyle_callback = nullptr;
    QsciLexerBash_SetColor_Callback qscilexerbash_setcolor_callback = nullptr;
    QsciLexerBash_SetEolFill_Callback qscilexerbash_seteolfill_callback = nullptr;
    QsciLexerBash_SetFont_Callback qscilexerbash_setfont_callback = nullptr;
    QsciLexerBash_SetPaper_Callback qscilexerbash_setpaper_callback = nullptr;
    QsciLexerBash_ReadProperties_Callback qscilexerbash_readproperties_callback = nullptr;
    QsciLexerBash_WriteProperties_Callback qscilexerbash_writeproperties_callback = nullptr;
    QsciLexerBash_Event_Callback qscilexerbash_event_callback = nullptr;
    QsciLexerBash_EventFilter_Callback qscilexerbash_eventfilter_callback = nullptr;
    QsciLexerBash_TimerEvent_Callback qscilexerbash_timerevent_callback = nullptr;
    QsciLexerBash_ChildEvent_Callback qscilexerbash_childevent_callback = nullptr;
    QsciLexerBash_CustomEvent_Callback qscilexerbash_customevent_callback = nullptr;
    QsciLexerBash_ConnectNotify_Callback qscilexerbash_connectnotify_callback = nullptr;
    QsciLexerBash_DisconnectNotify_Callback qscilexerbash_disconnectnotify_callback = nullptr;
    QsciLexerBash_Sender_Callback qscilexerbash_sender_callback = nullptr;
    QsciLexerBash_SenderSignalIndex_Callback qscilexerbash_sendersignalindex_callback = nullptr;
    QsciLexerBash_Receivers_Callback qscilexerbash_receivers_callback = nullptr;
    QsciLexerBash_IsSignalConnected_Callback qscilexerbash_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerbash_metacall_isbase = false;
    mutable bool qscilexerbash_setfoldcomments_isbase = false;
    mutable bool qscilexerbash_setfoldcompact_isbase = false;
    mutable bool qscilexerbash_language_isbase = false;
    mutable bool qscilexerbash_lexer_isbase = false;
    mutable bool qscilexerbash_lexerid_isbase = false;
    mutable bool qscilexerbash_autocompletionfillups_isbase = false;
    mutable bool qscilexerbash_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerbash_blockend_isbase = false;
    mutable bool qscilexerbash_blocklookback_isbase = false;
    mutable bool qscilexerbash_blockstart_isbase = false;
    mutable bool qscilexerbash_blockstartkeyword_isbase = false;
    mutable bool qscilexerbash_bracestyle_isbase = false;
    mutable bool qscilexerbash_casesensitive_isbase = false;
    mutable bool qscilexerbash_color_isbase = false;
    mutable bool qscilexerbash_eolfill_isbase = false;
    mutable bool qscilexerbash_font_isbase = false;
    mutable bool qscilexerbash_indentationguideview_isbase = false;
    mutable bool qscilexerbash_keywords_isbase = false;
    mutable bool qscilexerbash_defaultstyle_isbase = false;
    mutable bool qscilexerbash_description_isbase = false;
    mutable bool qscilexerbash_paper_isbase = false;
    mutable bool qscilexerbash_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerbash_defaulteolfill_isbase = false;
    mutable bool qscilexerbash_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerbash_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerbash_seteditor_isbase = false;
    mutable bool qscilexerbash_refreshproperties_isbase = false;
    mutable bool qscilexerbash_stylebitsneeded_isbase = false;
    mutable bool qscilexerbash_wordcharacters_isbase = false;
    mutable bool qscilexerbash_setautoindentstyle_isbase = false;
    mutable bool qscilexerbash_setcolor_isbase = false;
    mutable bool qscilexerbash_seteolfill_isbase = false;
    mutable bool qscilexerbash_setfont_isbase = false;
    mutable bool qscilexerbash_setpaper_isbase = false;
    mutable bool qscilexerbash_readproperties_isbase = false;
    mutable bool qscilexerbash_writeproperties_isbase = false;
    mutable bool qscilexerbash_event_isbase = false;
    mutable bool qscilexerbash_eventfilter_isbase = false;
    mutable bool qscilexerbash_timerevent_isbase = false;
    mutable bool qscilexerbash_childevent_isbase = false;
    mutable bool qscilexerbash_customevent_isbase = false;
    mutable bool qscilexerbash_connectnotify_isbase = false;
    mutable bool qscilexerbash_disconnectnotify_isbase = false;
    mutable bool qscilexerbash_sender_isbase = false;
    mutable bool qscilexerbash_sendersignalindex_isbase = false;
    mutable bool qscilexerbash_receivers_isbase = false;
    mutable bool qscilexerbash_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerBash() : QsciLexerBash(){};
    VirtualQsciLexerBash(QObject* parent) : QsciLexerBash(parent){};

    ~VirtualQsciLexerBash() {
        qscilexerbash_metacall_callback = nullptr;
        qscilexerbash_setfoldcomments_callback = nullptr;
        qscilexerbash_setfoldcompact_callback = nullptr;
        qscilexerbash_language_callback = nullptr;
        qscilexerbash_lexer_callback = nullptr;
        qscilexerbash_lexerid_callback = nullptr;
        qscilexerbash_autocompletionfillups_callback = nullptr;
        qscilexerbash_autocompletionwordseparators_callback = nullptr;
        qscilexerbash_blockend_callback = nullptr;
        qscilexerbash_blocklookback_callback = nullptr;
        qscilexerbash_blockstart_callback = nullptr;
        qscilexerbash_blockstartkeyword_callback = nullptr;
        qscilexerbash_bracestyle_callback = nullptr;
        qscilexerbash_casesensitive_callback = nullptr;
        qscilexerbash_color_callback = nullptr;
        qscilexerbash_eolfill_callback = nullptr;
        qscilexerbash_font_callback = nullptr;
        qscilexerbash_indentationguideview_callback = nullptr;
        qscilexerbash_keywords_callback = nullptr;
        qscilexerbash_defaultstyle_callback = nullptr;
        qscilexerbash_description_callback = nullptr;
        qscilexerbash_paper_callback = nullptr;
        qscilexerbash_defaultcolorwithstyle_callback = nullptr;
        qscilexerbash_defaulteolfill_callback = nullptr;
        qscilexerbash_defaultfontwithstyle_callback = nullptr;
        qscilexerbash_defaultpaperwithstyle_callback = nullptr;
        qscilexerbash_seteditor_callback = nullptr;
        qscilexerbash_refreshproperties_callback = nullptr;
        qscilexerbash_stylebitsneeded_callback = nullptr;
        qscilexerbash_wordcharacters_callback = nullptr;
        qscilexerbash_setautoindentstyle_callback = nullptr;
        qscilexerbash_setcolor_callback = nullptr;
        qscilexerbash_seteolfill_callback = nullptr;
        qscilexerbash_setfont_callback = nullptr;
        qscilexerbash_setpaper_callback = nullptr;
        qscilexerbash_readproperties_callback = nullptr;
        qscilexerbash_writeproperties_callback = nullptr;
        qscilexerbash_event_callback = nullptr;
        qscilexerbash_eventfilter_callback = nullptr;
        qscilexerbash_timerevent_callback = nullptr;
        qscilexerbash_childevent_callback = nullptr;
        qscilexerbash_customevent_callback = nullptr;
        qscilexerbash_connectnotify_callback = nullptr;
        qscilexerbash_disconnectnotify_callback = nullptr;
        qscilexerbash_sender_callback = nullptr;
        qscilexerbash_sendersignalindex_callback = nullptr;
        qscilexerbash_receivers_callback = nullptr;
        qscilexerbash_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerBash_Metacall_Callback(QsciLexerBash_Metacall_Callback cb) { qscilexerbash_metacall_callback = cb; }
    void setQsciLexerBash_SetFoldComments_Callback(QsciLexerBash_SetFoldComments_Callback cb) { qscilexerbash_setfoldcomments_callback = cb; }
    void setQsciLexerBash_SetFoldCompact_Callback(QsciLexerBash_SetFoldCompact_Callback cb) { qscilexerbash_setfoldcompact_callback = cb; }
    void setQsciLexerBash_Language_Callback(QsciLexerBash_Language_Callback cb) { qscilexerbash_language_callback = cb; }
    void setQsciLexerBash_Lexer_Callback(QsciLexerBash_Lexer_Callback cb) { qscilexerbash_lexer_callback = cb; }
    void setQsciLexerBash_LexerId_Callback(QsciLexerBash_LexerId_Callback cb) { qscilexerbash_lexerid_callback = cb; }
    void setQsciLexerBash_AutoCompletionFillups_Callback(QsciLexerBash_AutoCompletionFillups_Callback cb) { qscilexerbash_autocompletionfillups_callback = cb; }
    void setQsciLexerBash_AutoCompletionWordSeparators_Callback(QsciLexerBash_AutoCompletionWordSeparators_Callback cb) { qscilexerbash_autocompletionwordseparators_callback = cb; }
    void setQsciLexerBash_BlockEnd_Callback(QsciLexerBash_BlockEnd_Callback cb) { qscilexerbash_blockend_callback = cb; }
    void setQsciLexerBash_BlockLookback_Callback(QsciLexerBash_BlockLookback_Callback cb) { qscilexerbash_blocklookback_callback = cb; }
    void setQsciLexerBash_BlockStart_Callback(QsciLexerBash_BlockStart_Callback cb) { qscilexerbash_blockstart_callback = cb; }
    void setQsciLexerBash_BlockStartKeyword_Callback(QsciLexerBash_BlockStartKeyword_Callback cb) { qscilexerbash_blockstartkeyword_callback = cb; }
    void setQsciLexerBash_BraceStyle_Callback(QsciLexerBash_BraceStyle_Callback cb) { qscilexerbash_bracestyle_callback = cb; }
    void setQsciLexerBash_CaseSensitive_Callback(QsciLexerBash_CaseSensitive_Callback cb) { qscilexerbash_casesensitive_callback = cb; }
    void setQsciLexerBash_Color_Callback(QsciLexerBash_Color_Callback cb) { qscilexerbash_color_callback = cb; }
    void setQsciLexerBash_EolFill_Callback(QsciLexerBash_EolFill_Callback cb) { qscilexerbash_eolfill_callback = cb; }
    void setQsciLexerBash_Font_Callback(QsciLexerBash_Font_Callback cb) { qscilexerbash_font_callback = cb; }
    void setQsciLexerBash_IndentationGuideView_Callback(QsciLexerBash_IndentationGuideView_Callback cb) { qscilexerbash_indentationguideview_callback = cb; }
    void setQsciLexerBash_Keywords_Callback(QsciLexerBash_Keywords_Callback cb) { qscilexerbash_keywords_callback = cb; }
    void setQsciLexerBash_DefaultStyle_Callback(QsciLexerBash_DefaultStyle_Callback cb) { qscilexerbash_defaultstyle_callback = cb; }
    void setQsciLexerBash_Description_Callback(QsciLexerBash_Description_Callback cb) { qscilexerbash_description_callback = cb; }
    void setQsciLexerBash_Paper_Callback(QsciLexerBash_Paper_Callback cb) { qscilexerbash_paper_callback = cb; }
    void setQsciLexerBash_DefaultColorWithStyle_Callback(QsciLexerBash_DefaultColorWithStyle_Callback cb) { qscilexerbash_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerBash_DefaultEolFill_Callback(QsciLexerBash_DefaultEolFill_Callback cb) { qscilexerbash_defaulteolfill_callback = cb; }
    void setQsciLexerBash_DefaultFontWithStyle_Callback(QsciLexerBash_DefaultFontWithStyle_Callback cb) { qscilexerbash_defaultfontwithstyle_callback = cb; }
    void setQsciLexerBash_DefaultPaperWithStyle_Callback(QsciLexerBash_DefaultPaperWithStyle_Callback cb) { qscilexerbash_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerBash_SetEditor_Callback(QsciLexerBash_SetEditor_Callback cb) { qscilexerbash_seteditor_callback = cb; }
    void setQsciLexerBash_RefreshProperties_Callback(QsciLexerBash_RefreshProperties_Callback cb) { qscilexerbash_refreshproperties_callback = cb; }
    void setQsciLexerBash_StyleBitsNeeded_Callback(QsciLexerBash_StyleBitsNeeded_Callback cb) { qscilexerbash_stylebitsneeded_callback = cb; }
    void setQsciLexerBash_WordCharacters_Callback(QsciLexerBash_WordCharacters_Callback cb) { qscilexerbash_wordcharacters_callback = cb; }
    void setQsciLexerBash_SetAutoIndentStyle_Callback(QsciLexerBash_SetAutoIndentStyle_Callback cb) { qscilexerbash_setautoindentstyle_callback = cb; }
    void setQsciLexerBash_SetColor_Callback(QsciLexerBash_SetColor_Callback cb) { qscilexerbash_setcolor_callback = cb; }
    void setQsciLexerBash_SetEolFill_Callback(QsciLexerBash_SetEolFill_Callback cb) { qscilexerbash_seteolfill_callback = cb; }
    void setQsciLexerBash_SetFont_Callback(QsciLexerBash_SetFont_Callback cb) { qscilexerbash_setfont_callback = cb; }
    void setQsciLexerBash_SetPaper_Callback(QsciLexerBash_SetPaper_Callback cb) { qscilexerbash_setpaper_callback = cb; }
    void setQsciLexerBash_ReadProperties_Callback(QsciLexerBash_ReadProperties_Callback cb) { qscilexerbash_readproperties_callback = cb; }
    void setQsciLexerBash_WriteProperties_Callback(QsciLexerBash_WriteProperties_Callback cb) { qscilexerbash_writeproperties_callback = cb; }
    void setQsciLexerBash_Event_Callback(QsciLexerBash_Event_Callback cb) { qscilexerbash_event_callback = cb; }
    void setQsciLexerBash_EventFilter_Callback(QsciLexerBash_EventFilter_Callback cb) { qscilexerbash_eventfilter_callback = cb; }
    void setQsciLexerBash_TimerEvent_Callback(QsciLexerBash_TimerEvent_Callback cb) { qscilexerbash_timerevent_callback = cb; }
    void setQsciLexerBash_ChildEvent_Callback(QsciLexerBash_ChildEvent_Callback cb) { qscilexerbash_childevent_callback = cb; }
    void setQsciLexerBash_CustomEvent_Callback(QsciLexerBash_CustomEvent_Callback cb) { qscilexerbash_customevent_callback = cb; }
    void setQsciLexerBash_ConnectNotify_Callback(QsciLexerBash_ConnectNotify_Callback cb) { qscilexerbash_connectnotify_callback = cb; }
    void setQsciLexerBash_DisconnectNotify_Callback(QsciLexerBash_DisconnectNotify_Callback cb) { qscilexerbash_disconnectnotify_callback = cb; }
    void setQsciLexerBash_Sender_Callback(QsciLexerBash_Sender_Callback cb) { qscilexerbash_sender_callback = cb; }
    void setQsciLexerBash_SenderSignalIndex_Callback(QsciLexerBash_SenderSignalIndex_Callback cb) { qscilexerbash_sendersignalindex_callback = cb; }
    void setQsciLexerBash_Receivers_Callback(QsciLexerBash_Receivers_Callback cb) { qscilexerbash_receivers_callback = cb; }
    void setQsciLexerBash_IsSignalConnected_Callback(QsciLexerBash_IsSignalConnected_Callback cb) { qscilexerbash_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerBash_Metacall_IsBase(bool value) const { qscilexerbash_metacall_isbase = value; }
    void setQsciLexerBash_SetFoldComments_IsBase(bool value) const { qscilexerbash_setfoldcomments_isbase = value; }
    void setQsciLexerBash_SetFoldCompact_IsBase(bool value) const { qscilexerbash_setfoldcompact_isbase = value; }
    void setQsciLexerBash_Language_IsBase(bool value) const { qscilexerbash_language_isbase = value; }
    void setQsciLexerBash_Lexer_IsBase(bool value) const { qscilexerbash_lexer_isbase = value; }
    void setQsciLexerBash_LexerId_IsBase(bool value) const { qscilexerbash_lexerid_isbase = value; }
    void setQsciLexerBash_AutoCompletionFillups_IsBase(bool value) const { qscilexerbash_autocompletionfillups_isbase = value; }
    void setQsciLexerBash_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerbash_autocompletionwordseparators_isbase = value; }
    void setQsciLexerBash_BlockEnd_IsBase(bool value) const { qscilexerbash_blockend_isbase = value; }
    void setQsciLexerBash_BlockLookback_IsBase(bool value) const { qscilexerbash_blocklookback_isbase = value; }
    void setQsciLexerBash_BlockStart_IsBase(bool value) const { qscilexerbash_blockstart_isbase = value; }
    void setQsciLexerBash_BlockStartKeyword_IsBase(bool value) const { qscilexerbash_blockstartkeyword_isbase = value; }
    void setQsciLexerBash_BraceStyle_IsBase(bool value) const { qscilexerbash_bracestyle_isbase = value; }
    void setQsciLexerBash_CaseSensitive_IsBase(bool value) const { qscilexerbash_casesensitive_isbase = value; }
    void setQsciLexerBash_Color_IsBase(bool value) const { qscilexerbash_color_isbase = value; }
    void setQsciLexerBash_EolFill_IsBase(bool value) const { qscilexerbash_eolfill_isbase = value; }
    void setQsciLexerBash_Font_IsBase(bool value) const { qscilexerbash_font_isbase = value; }
    void setQsciLexerBash_IndentationGuideView_IsBase(bool value) const { qscilexerbash_indentationguideview_isbase = value; }
    void setQsciLexerBash_Keywords_IsBase(bool value) const { qscilexerbash_keywords_isbase = value; }
    void setQsciLexerBash_DefaultStyle_IsBase(bool value) const { qscilexerbash_defaultstyle_isbase = value; }
    void setQsciLexerBash_Description_IsBase(bool value) const { qscilexerbash_description_isbase = value; }
    void setQsciLexerBash_Paper_IsBase(bool value) const { qscilexerbash_paper_isbase = value; }
    void setQsciLexerBash_DefaultColorWithStyle_IsBase(bool value) const { qscilexerbash_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerBash_DefaultEolFill_IsBase(bool value) const { qscilexerbash_defaulteolfill_isbase = value; }
    void setQsciLexerBash_DefaultFontWithStyle_IsBase(bool value) const { qscilexerbash_defaultfontwithstyle_isbase = value; }
    void setQsciLexerBash_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerbash_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerBash_SetEditor_IsBase(bool value) const { qscilexerbash_seteditor_isbase = value; }
    void setQsciLexerBash_RefreshProperties_IsBase(bool value) const { qscilexerbash_refreshproperties_isbase = value; }
    void setQsciLexerBash_StyleBitsNeeded_IsBase(bool value) const { qscilexerbash_stylebitsneeded_isbase = value; }
    void setQsciLexerBash_WordCharacters_IsBase(bool value) const { qscilexerbash_wordcharacters_isbase = value; }
    void setQsciLexerBash_SetAutoIndentStyle_IsBase(bool value) const { qscilexerbash_setautoindentstyle_isbase = value; }
    void setQsciLexerBash_SetColor_IsBase(bool value) const { qscilexerbash_setcolor_isbase = value; }
    void setQsciLexerBash_SetEolFill_IsBase(bool value) const { qscilexerbash_seteolfill_isbase = value; }
    void setQsciLexerBash_SetFont_IsBase(bool value) const { qscilexerbash_setfont_isbase = value; }
    void setQsciLexerBash_SetPaper_IsBase(bool value) const { qscilexerbash_setpaper_isbase = value; }
    void setQsciLexerBash_ReadProperties_IsBase(bool value) const { qscilexerbash_readproperties_isbase = value; }
    void setQsciLexerBash_WriteProperties_IsBase(bool value) const { qscilexerbash_writeproperties_isbase = value; }
    void setQsciLexerBash_Event_IsBase(bool value) const { qscilexerbash_event_isbase = value; }
    void setQsciLexerBash_EventFilter_IsBase(bool value) const { qscilexerbash_eventfilter_isbase = value; }
    void setQsciLexerBash_TimerEvent_IsBase(bool value) const { qscilexerbash_timerevent_isbase = value; }
    void setQsciLexerBash_ChildEvent_IsBase(bool value) const { qscilexerbash_childevent_isbase = value; }
    void setQsciLexerBash_CustomEvent_IsBase(bool value) const { qscilexerbash_customevent_isbase = value; }
    void setQsciLexerBash_ConnectNotify_IsBase(bool value) const { qscilexerbash_connectnotify_isbase = value; }
    void setQsciLexerBash_DisconnectNotify_IsBase(bool value) const { qscilexerbash_disconnectnotify_isbase = value; }
    void setQsciLexerBash_Sender_IsBase(bool value) const { qscilexerbash_sender_isbase = value; }
    void setQsciLexerBash_SenderSignalIndex_IsBase(bool value) const { qscilexerbash_sendersignalindex_isbase = value; }
    void setQsciLexerBash_Receivers_IsBase(bool value) const { qscilexerbash_receivers_isbase = value; }
    void setQsciLexerBash_IsSignalConnected_IsBase(bool value) const { qscilexerbash_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerbash_metacall_isbase) {
            qscilexerbash_metacall_isbase = false;
            return QsciLexerBash::qt_metacall(param1, param2, param3);
        } else if (qscilexerbash_metacall_callback != nullptr) {
            return qscilexerbash_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerBash::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerbash_setfoldcomments_isbase) {
            qscilexerbash_setfoldcomments_isbase = false;
            QsciLexerBash::setFoldComments(fold);
        } else if (qscilexerbash_setfoldcomments_callback != nullptr) {
            qscilexerbash_setfoldcomments_callback(this, fold);
        } else {
            QsciLexerBash::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerbash_setfoldcompact_isbase) {
            qscilexerbash_setfoldcompact_isbase = false;
            QsciLexerBash::setFoldCompact(fold);
        } else if (qscilexerbash_setfoldcompact_callback != nullptr) {
            qscilexerbash_setfoldcompact_callback(this, fold);
        } else {
            QsciLexerBash::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerbash_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerbash_lexer_isbase) {
            qscilexerbash_lexer_isbase = false;
            return QsciLexerBash::lexer();
        } else if (qscilexerbash_lexer_callback != nullptr) {
            return qscilexerbash_lexer_callback();
        } else {
            return QsciLexerBash::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerbash_lexerid_isbase) {
            qscilexerbash_lexerid_isbase = false;
            return QsciLexerBash::lexerId();
        } else if (qscilexerbash_lexerid_callback != nullptr) {
            return qscilexerbash_lexerid_callback();
        } else {
            return QsciLexerBash::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerbash_autocompletionfillups_isbase) {
            qscilexerbash_autocompletionfillups_isbase = false;
            return QsciLexerBash::autoCompletionFillups();
        } else if (qscilexerbash_autocompletionfillups_callback != nullptr) {
            return qscilexerbash_autocompletionfillups_callback();
        } else {
            return QsciLexerBash::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerbash_autocompletionwordseparators_isbase) {
            qscilexerbash_autocompletionwordseparators_isbase = false;
            return QsciLexerBash::autoCompletionWordSeparators();
        } else if (qscilexerbash_autocompletionwordseparators_callback != nullptr) {
            return qscilexerbash_autocompletionwordseparators_callback();
        } else {
            return QsciLexerBash::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerbash_blockend_isbase) {
            qscilexerbash_blockend_isbase = false;
            return QsciLexerBash::blockEnd(style);
        } else if (qscilexerbash_blockend_callback != nullptr) {
            return qscilexerbash_blockend_callback(this, style);
        } else {
            return QsciLexerBash::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerbash_blocklookback_isbase) {
            qscilexerbash_blocklookback_isbase = false;
            return QsciLexerBash::blockLookback();
        } else if (qscilexerbash_blocklookback_callback != nullptr) {
            return qscilexerbash_blocklookback_callback();
        } else {
            return QsciLexerBash::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerbash_blockstart_isbase) {
            qscilexerbash_blockstart_isbase = false;
            return QsciLexerBash::blockStart(style);
        } else if (qscilexerbash_blockstart_callback != nullptr) {
            return qscilexerbash_blockstart_callback(this, style);
        } else {
            return QsciLexerBash::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerbash_blockstartkeyword_isbase) {
            qscilexerbash_blockstartkeyword_isbase = false;
            return QsciLexerBash::blockStartKeyword(style);
        } else if (qscilexerbash_blockstartkeyword_callback != nullptr) {
            return qscilexerbash_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerBash::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerbash_bracestyle_isbase) {
            qscilexerbash_bracestyle_isbase = false;
            return QsciLexerBash::braceStyle();
        } else if (qscilexerbash_bracestyle_callback != nullptr) {
            return qscilexerbash_bracestyle_callback();
        } else {
            return QsciLexerBash::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerbash_casesensitive_isbase) {
            qscilexerbash_casesensitive_isbase = false;
            return QsciLexerBash::caseSensitive();
        } else if (qscilexerbash_casesensitive_callback != nullptr) {
            return qscilexerbash_casesensitive_callback();
        } else {
            return QsciLexerBash::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerbash_color_isbase) {
            qscilexerbash_color_isbase = false;
            return QsciLexerBash::color(style);
        } else if (qscilexerbash_color_callback != nullptr) {
            return qscilexerbash_color_callback(this, style);
        } else {
            return QsciLexerBash::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerbash_eolfill_isbase) {
            qscilexerbash_eolfill_isbase = false;
            return QsciLexerBash::eolFill(style);
        } else if (qscilexerbash_eolfill_callback != nullptr) {
            return qscilexerbash_eolfill_callback(this, style);
        } else {
            return QsciLexerBash::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerbash_font_isbase) {
            qscilexerbash_font_isbase = false;
            return QsciLexerBash::font(style);
        } else if (qscilexerbash_font_callback != nullptr) {
            return qscilexerbash_font_callback(this, style);
        } else {
            return QsciLexerBash::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerbash_indentationguideview_isbase) {
            qscilexerbash_indentationguideview_isbase = false;
            return QsciLexerBash::indentationGuideView();
        } else if (qscilexerbash_indentationguideview_callback != nullptr) {
            return qscilexerbash_indentationguideview_callback();
        } else {
            return QsciLexerBash::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerbash_keywords_isbase) {
            qscilexerbash_keywords_isbase = false;
            return QsciLexerBash::keywords(set);
        } else if (qscilexerbash_keywords_callback != nullptr) {
            return qscilexerbash_keywords_callback(this, set);
        } else {
            return QsciLexerBash::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerbash_defaultstyle_isbase) {
            qscilexerbash_defaultstyle_isbase = false;
            return QsciLexerBash::defaultStyle();
        } else if (qscilexerbash_defaultstyle_callback != nullptr) {
            return qscilexerbash_defaultstyle_callback();
        } else {
            return QsciLexerBash::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerbash_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerbash_paper_isbase) {
            qscilexerbash_paper_isbase = false;
            return QsciLexerBash::paper(style);
        } else if (qscilexerbash_paper_callback != nullptr) {
            return qscilexerbash_paper_callback(this, style);
        } else {
            return QsciLexerBash::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerbash_defaultcolorwithstyle_isbase) {
            qscilexerbash_defaultcolorwithstyle_isbase = false;
            return QsciLexerBash::defaultColor(style);
        } else if (qscilexerbash_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerbash_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerBash::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerbash_defaulteolfill_isbase) {
            qscilexerbash_defaulteolfill_isbase = false;
            return QsciLexerBash::defaultEolFill(style);
        } else if (qscilexerbash_defaulteolfill_callback != nullptr) {
            return qscilexerbash_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerBash::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerbash_defaultfontwithstyle_isbase) {
            qscilexerbash_defaultfontwithstyle_isbase = false;
            return QsciLexerBash::defaultFont(style);
        } else if (qscilexerbash_defaultfontwithstyle_callback != nullptr) {
            return qscilexerbash_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerBash::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerbash_defaultpaperwithstyle_isbase) {
            qscilexerbash_defaultpaperwithstyle_isbase = false;
            return QsciLexerBash::defaultPaper(style);
        } else if (qscilexerbash_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerbash_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerBash::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerbash_seteditor_isbase) {
            qscilexerbash_seteditor_isbase = false;
            QsciLexerBash::setEditor(editor);
        } else if (qscilexerbash_seteditor_callback != nullptr) {
            qscilexerbash_seteditor_callback(this, editor);
        } else {
            QsciLexerBash::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerbash_refreshproperties_isbase) {
            qscilexerbash_refreshproperties_isbase = false;
            QsciLexerBash::refreshProperties();
        } else if (qscilexerbash_refreshproperties_callback != nullptr) {
            qscilexerbash_refreshproperties_callback();
        } else {
            QsciLexerBash::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerbash_stylebitsneeded_isbase) {
            qscilexerbash_stylebitsneeded_isbase = false;
            return QsciLexerBash::styleBitsNeeded();
        } else if (qscilexerbash_stylebitsneeded_callback != nullptr) {
            return qscilexerbash_stylebitsneeded_callback();
        } else {
            return QsciLexerBash::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerbash_wordcharacters_isbase) {
            qscilexerbash_wordcharacters_isbase = false;
            return QsciLexerBash::wordCharacters();
        } else if (qscilexerbash_wordcharacters_callback != nullptr) {
            return qscilexerbash_wordcharacters_callback();
        } else {
            return QsciLexerBash::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerbash_setautoindentstyle_isbase) {
            qscilexerbash_setautoindentstyle_isbase = false;
            QsciLexerBash::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerbash_setautoindentstyle_callback != nullptr) {
            qscilexerbash_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerBash::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerbash_setcolor_isbase) {
            qscilexerbash_setcolor_isbase = false;
            QsciLexerBash::setColor(c, style);
        } else if (qscilexerbash_setcolor_callback != nullptr) {
            qscilexerbash_setcolor_callback(this, c, style);
        } else {
            QsciLexerBash::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerbash_seteolfill_isbase) {
            qscilexerbash_seteolfill_isbase = false;
            QsciLexerBash::setEolFill(eoffill, style);
        } else if (qscilexerbash_seteolfill_callback != nullptr) {
            qscilexerbash_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerBash::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerbash_setfont_isbase) {
            qscilexerbash_setfont_isbase = false;
            QsciLexerBash::setFont(f, style);
        } else if (qscilexerbash_setfont_callback != nullptr) {
            qscilexerbash_setfont_callback(this, f, style);
        } else {
            QsciLexerBash::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerbash_setpaper_isbase) {
            qscilexerbash_setpaper_isbase = false;
            QsciLexerBash::setPaper(c, style);
        } else if (qscilexerbash_setpaper_callback != nullptr) {
            qscilexerbash_setpaper_callback(this, c, style);
        } else {
            QsciLexerBash::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerbash_readproperties_isbase) {
            qscilexerbash_readproperties_isbase = false;
            return QsciLexerBash::readProperties(qs, prefix);
        } else if (qscilexerbash_readproperties_callback != nullptr) {
            return qscilexerbash_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerBash::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerbash_writeproperties_isbase) {
            qscilexerbash_writeproperties_isbase = false;
            return QsciLexerBash::writeProperties(qs, prefix);
        } else if (qscilexerbash_writeproperties_callback != nullptr) {
            return qscilexerbash_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerBash::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerbash_event_isbase) {
            qscilexerbash_event_isbase = false;
            return QsciLexerBash::event(event);
        } else if (qscilexerbash_event_callback != nullptr) {
            return qscilexerbash_event_callback(this, event);
        } else {
            return QsciLexerBash::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerbash_eventfilter_isbase) {
            qscilexerbash_eventfilter_isbase = false;
            return QsciLexerBash::eventFilter(watched, event);
        } else if (qscilexerbash_eventfilter_callback != nullptr) {
            return qscilexerbash_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerBash::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerbash_timerevent_isbase) {
            qscilexerbash_timerevent_isbase = false;
            QsciLexerBash::timerEvent(event);
        } else if (qscilexerbash_timerevent_callback != nullptr) {
            qscilexerbash_timerevent_callback(this, event);
        } else {
            QsciLexerBash::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerbash_childevent_isbase) {
            qscilexerbash_childevent_isbase = false;
            QsciLexerBash::childEvent(event);
        } else if (qscilexerbash_childevent_callback != nullptr) {
            qscilexerbash_childevent_callback(this, event);
        } else {
            QsciLexerBash::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerbash_customevent_isbase) {
            qscilexerbash_customevent_isbase = false;
            QsciLexerBash::customEvent(event);
        } else if (qscilexerbash_customevent_callback != nullptr) {
            qscilexerbash_customevent_callback(this, event);
        } else {
            QsciLexerBash::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerbash_connectnotify_isbase) {
            qscilexerbash_connectnotify_isbase = false;
            QsciLexerBash::connectNotify(signal);
        } else if (qscilexerbash_connectnotify_callback != nullptr) {
            qscilexerbash_connectnotify_callback(this, signal);
        } else {
            QsciLexerBash::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerbash_disconnectnotify_isbase) {
            qscilexerbash_disconnectnotify_isbase = false;
            QsciLexerBash::disconnectNotify(signal);
        } else if (qscilexerbash_disconnectnotify_callback != nullptr) {
            qscilexerbash_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerBash::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerbash_sender_isbase) {
            qscilexerbash_sender_isbase = false;
            return QsciLexerBash::sender();
        } else if (qscilexerbash_sender_callback != nullptr) {
            return qscilexerbash_sender_callback();
        } else {
            return QsciLexerBash::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerbash_sendersignalindex_isbase) {
            qscilexerbash_sendersignalindex_isbase = false;
            return QsciLexerBash::senderSignalIndex();
        } else if (qscilexerbash_sendersignalindex_callback != nullptr) {
            return qscilexerbash_sendersignalindex_callback();
        } else {
            return QsciLexerBash::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerbash_receivers_isbase) {
            qscilexerbash_receivers_isbase = false;
            return QsciLexerBash::receivers(signal);
        } else if (qscilexerbash_receivers_callback != nullptr) {
            return qscilexerbash_receivers_callback(this, signal);
        } else {
            return QsciLexerBash::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerbash_issignalconnected_isbase) {
            qscilexerbash_issignalconnected_isbase = false;
            return QsciLexerBash::isSignalConnected(signal);
        } else if (qscilexerbash_issignalconnected_callback != nullptr) {
            return qscilexerbash_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerBash::isSignalConnected(signal);
        }
    }
};

#endif
