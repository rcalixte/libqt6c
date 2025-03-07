#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPO_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerPO so that we can call protected methods
class VirtualQsciLexerPO : public QsciLexerPO {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerPO_Metacall_Callback = int (*)(QsciLexerPO*, QMetaObject::Call, int, void**);
    using QsciLexerPO_SetFoldComments_Callback = void (*)(QsciLexerPO*, bool);
    using QsciLexerPO_SetFoldCompact_Callback = void (*)(QsciLexerPO*, bool);
    using QsciLexerPO_Language_Callback = const char* (*)();
    using QsciLexerPO_Lexer_Callback = const char* (*)();
    using QsciLexerPO_LexerId_Callback = int (*)();
    using QsciLexerPO_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerPO_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerPO_BlockEnd_Callback = const char* (*)(const QsciLexerPO*, int*);
    using QsciLexerPO_BlockLookback_Callback = int (*)();
    using QsciLexerPO_BlockStart_Callback = const char* (*)(const QsciLexerPO*, int*);
    using QsciLexerPO_BlockStartKeyword_Callback = const char* (*)(const QsciLexerPO*, int*);
    using QsciLexerPO_BraceStyle_Callback = int (*)();
    using QsciLexerPO_CaseSensitive_Callback = bool (*)();
    using QsciLexerPO_Color_Callback = QColor (*)(const QsciLexerPO*, int);
    using QsciLexerPO_EolFill_Callback = bool (*)(const QsciLexerPO*, int);
    using QsciLexerPO_Font_Callback = QFont (*)(const QsciLexerPO*, int);
    using QsciLexerPO_IndentationGuideView_Callback = int (*)();
    using QsciLexerPO_Keywords_Callback = const char* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultStyle_Callback = int (*)();
    using QsciLexerPO_Description_Callback = QString (*)(const QsciLexerPO*, int);
    using QsciLexerPO_Paper_Callback = QColor (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultEolFill_Callback = bool (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerPO*, int);
    using QsciLexerPO_SetEditor_Callback = void (*)(QsciLexerPO*, QsciScintilla*);
    using QsciLexerPO_RefreshProperties_Callback = void (*)();
    using QsciLexerPO_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerPO_WordCharacters_Callback = const char* (*)();
    using QsciLexerPO_SetAutoIndentStyle_Callback = void (*)(QsciLexerPO*, int);
    using QsciLexerPO_SetColor_Callback = void (*)(QsciLexerPO*, const QColor&, int);
    using QsciLexerPO_SetEolFill_Callback = void (*)(QsciLexerPO*, bool, int);
    using QsciLexerPO_SetFont_Callback = void (*)(QsciLexerPO*, const QFont&, int);
    using QsciLexerPO_SetPaper_Callback = void (*)(QsciLexerPO*, const QColor&, int);
    using QsciLexerPO_ReadProperties_Callback = bool (*)(QsciLexerPO*, QSettings&, const QString&);
    using QsciLexerPO_WriteProperties_Callback = bool (*)(const QsciLexerPO*, QSettings&, const QString&);
    using QsciLexerPO_Event_Callback = bool (*)(QsciLexerPO*, QEvent*);
    using QsciLexerPO_EventFilter_Callback = bool (*)(QsciLexerPO*, QObject*, QEvent*);
    using QsciLexerPO_TimerEvent_Callback = void (*)(QsciLexerPO*, QTimerEvent*);
    using QsciLexerPO_ChildEvent_Callback = void (*)(QsciLexerPO*, QChildEvent*);
    using QsciLexerPO_CustomEvent_Callback = void (*)(QsciLexerPO*, QEvent*);
    using QsciLexerPO_ConnectNotify_Callback = void (*)(QsciLexerPO*, const QMetaMethod&);
    using QsciLexerPO_DisconnectNotify_Callback = void (*)(QsciLexerPO*, const QMetaMethod&);
    using QsciLexerPO_Sender_Callback = QObject* (*)();
    using QsciLexerPO_SenderSignalIndex_Callback = int (*)();
    using QsciLexerPO_Receivers_Callback = int (*)(const QsciLexerPO*, const char*);
    using QsciLexerPO_IsSignalConnected_Callback = bool (*)(const QsciLexerPO*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerPO_Metacall_Callback qscilexerpo_metacall_callback = nullptr;
    QsciLexerPO_SetFoldComments_Callback qscilexerpo_setfoldcomments_callback = nullptr;
    QsciLexerPO_SetFoldCompact_Callback qscilexerpo_setfoldcompact_callback = nullptr;
    QsciLexerPO_Language_Callback qscilexerpo_language_callback = nullptr;
    QsciLexerPO_Lexer_Callback qscilexerpo_lexer_callback = nullptr;
    QsciLexerPO_LexerId_Callback qscilexerpo_lexerid_callback = nullptr;
    QsciLexerPO_AutoCompletionFillups_Callback qscilexerpo_autocompletionfillups_callback = nullptr;
    QsciLexerPO_AutoCompletionWordSeparators_Callback qscilexerpo_autocompletionwordseparators_callback = nullptr;
    QsciLexerPO_BlockEnd_Callback qscilexerpo_blockend_callback = nullptr;
    QsciLexerPO_BlockLookback_Callback qscilexerpo_blocklookback_callback = nullptr;
    QsciLexerPO_BlockStart_Callback qscilexerpo_blockstart_callback = nullptr;
    QsciLexerPO_BlockStartKeyword_Callback qscilexerpo_blockstartkeyword_callback = nullptr;
    QsciLexerPO_BraceStyle_Callback qscilexerpo_bracestyle_callback = nullptr;
    QsciLexerPO_CaseSensitive_Callback qscilexerpo_casesensitive_callback = nullptr;
    QsciLexerPO_Color_Callback qscilexerpo_color_callback = nullptr;
    QsciLexerPO_EolFill_Callback qscilexerpo_eolfill_callback = nullptr;
    QsciLexerPO_Font_Callback qscilexerpo_font_callback = nullptr;
    QsciLexerPO_IndentationGuideView_Callback qscilexerpo_indentationguideview_callback = nullptr;
    QsciLexerPO_Keywords_Callback qscilexerpo_keywords_callback = nullptr;
    QsciLexerPO_DefaultStyle_Callback qscilexerpo_defaultstyle_callback = nullptr;
    QsciLexerPO_Description_Callback qscilexerpo_description_callback = nullptr;
    QsciLexerPO_Paper_Callback qscilexerpo_paper_callback = nullptr;
    QsciLexerPO_DefaultColorWithStyle_Callback qscilexerpo_defaultcolorwithstyle_callback = nullptr;
    QsciLexerPO_DefaultEolFill_Callback qscilexerpo_defaulteolfill_callback = nullptr;
    QsciLexerPO_DefaultFontWithStyle_Callback qscilexerpo_defaultfontwithstyle_callback = nullptr;
    QsciLexerPO_DefaultPaperWithStyle_Callback qscilexerpo_defaultpaperwithstyle_callback = nullptr;
    QsciLexerPO_SetEditor_Callback qscilexerpo_seteditor_callback = nullptr;
    QsciLexerPO_RefreshProperties_Callback qscilexerpo_refreshproperties_callback = nullptr;
    QsciLexerPO_StyleBitsNeeded_Callback qscilexerpo_stylebitsneeded_callback = nullptr;
    QsciLexerPO_WordCharacters_Callback qscilexerpo_wordcharacters_callback = nullptr;
    QsciLexerPO_SetAutoIndentStyle_Callback qscilexerpo_setautoindentstyle_callback = nullptr;
    QsciLexerPO_SetColor_Callback qscilexerpo_setcolor_callback = nullptr;
    QsciLexerPO_SetEolFill_Callback qscilexerpo_seteolfill_callback = nullptr;
    QsciLexerPO_SetFont_Callback qscilexerpo_setfont_callback = nullptr;
    QsciLexerPO_SetPaper_Callback qscilexerpo_setpaper_callback = nullptr;
    QsciLexerPO_ReadProperties_Callback qscilexerpo_readproperties_callback = nullptr;
    QsciLexerPO_WriteProperties_Callback qscilexerpo_writeproperties_callback = nullptr;
    QsciLexerPO_Event_Callback qscilexerpo_event_callback = nullptr;
    QsciLexerPO_EventFilter_Callback qscilexerpo_eventfilter_callback = nullptr;
    QsciLexerPO_TimerEvent_Callback qscilexerpo_timerevent_callback = nullptr;
    QsciLexerPO_ChildEvent_Callback qscilexerpo_childevent_callback = nullptr;
    QsciLexerPO_CustomEvent_Callback qscilexerpo_customevent_callback = nullptr;
    QsciLexerPO_ConnectNotify_Callback qscilexerpo_connectnotify_callback = nullptr;
    QsciLexerPO_DisconnectNotify_Callback qscilexerpo_disconnectnotify_callback = nullptr;
    QsciLexerPO_Sender_Callback qscilexerpo_sender_callback = nullptr;
    QsciLexerPO_SenderSignalIndex_Callback qscilexerpo_sendersignalindex_callback = nullptr;
    QsciLexerPO_Receivers_Callback qscilexerpo_receivers_callback = nullptr;
    QsciLexerPO_IsSignalConnected_Callback qscilexerpo_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerpo_metacall_isbase = false;
    mutable bool qscilexerpo_setfoldcomments_isbase = false;
    mutable bool qscilexerpo_setfoldcompact_isbase = false;
    mutable bool qscilexerpo_language_isbase = false;
    mutable bool qscilexerpo_lexer_isbase = false;
    mutable bool qscilexerpo_lexerid_isbase = false;
    mutable bool qscilexerpo_autocompletionfillups_isbase = false;
    mutable bool qscilexerpo_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerpo_blockend_isbase = false;
    mutable bool qscilexerpo_blocklookback_isbase = false;
    mutable bool qscilexerpo_blockstart_isbase = false;
    mutable bool qscilexerpo_blockstartkeyword_isbase = false;
    mutable bool qscilexerpo_bracestyle_isbase = false;
    mutable bool qscilexerpo_casesensitive_isbase = false;
    mutable bool qscilexerpo_color_isbase = false;
    mutable bool qscilexerpo_eolfill_isbase = false;
    mutable bool qscilexerpo_font_isbase = false;
    mutable bool qscilexerpo_indentationguideview_isbase = false;
    mutable bool qscilexerpo_keywords_isbase = false;
    mutable bool qscilexerpo_defaultstyle_isbase = false;
    mutable bool qscilexerpo_description_isbase = false;
    mutable bool qscilexerpo_paper_isbase = false;
    mutable bool qscilexerpo_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerpo_defaulteolfill_isbase = false;
    mutable bool qscilexerpo_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerpo_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerpo_seteditor_isbase = false;
    mutable bool qscilexerpo_refreshproperties_isbase = false;
    mutable bool qscilexerpo_stylebitsneeded_isbase = false;
    mutable bool qscilexerpo_wordcharacters_isbase = false;
    mutable bool qscilexerpo_setautoindentstyle_isbase = false;
    mutable bool qscilexerpo_setcolor_isbase = false;
    mutable bool qscilexerpo_seteolfill_isbase = false;
    mutable bool qscilexerpo_setfont_isbase = false;
    mutable bool qscilexerpo_setpaper_isbase = false;
    mutable bool qscilexerpo_readproperties_isbase = false;
    mutable bool qscilexerpo_writeproperties_isbase = false;
    mutable bool qscilexerpo_event_isbase = false;
    mutable bool qscilexerpo_eventfilter_isbase = false;
    mutable bool qscilexerpo_timerevent_isbase = false;
    mutable bool qscilexerpo_childevent_isbase = false;
    mutable bool qscilexerpo_customevent_isbase = false;
    mutable bool qscilexerpo_connectnotify_isbase = false;
    mutable bool qscilexerpo_disconnectnotify_isbase = false;
    mutable bool qscilexerpo_sender_isbase = false;
    mutable bool qscilexerpo_sendersignalindex_isbase = false;
    mutable bool qscilexerpo_receivers_isbase = false;
    mutable bool qscilexerpo_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerPO() : QsciLexerPO(){};
    VirtualQsciLexerPO(QObject* parent) : QsciLexerPO(parent){};

    ~VirtualQsciLexerPO() {
        qscilexerpo_metacall_callback = nullptr;
        qscilexerpo_setfoldcomments_callback = nullptr;
        qscilexerpo_setfoldcompact_callback = nullptr;
        qscilexerpo_language_callback = nullptr;
        qscilexerpo_lexer_callback = nullptr;
        qscilexerpo_lexerid_callback = nullptr;
        qscilexerpo_autocompletionfillups_callback = nullptr;
        qscilexerpo_autocompletionwordseparators_callback = nullptr;
        qscilexerpo_blockend_callback = nullptr;
        qscilexerpo_blocklookback_callback = nullptr;
        qscilexerpo_blockstart_callback = nullptr;
        qscilexerpo_blockstartkeyword_callback = nullptr;
        qscilexerpo_bracestyle_callback = nullptr;
        qscilexerpo_casesensitive_callback = nullptr;
        qscilexerpo_color_callback = nullptr;
        qscilexerpo_eolfill_callback = nullptr;
        qscilexerpo_font_callback = nullptr;
        qscilexerpo_indentationguideview_callback = nullptr;
        qscilexerpo_keywords_callback = nullptr;
        qscilexerpo_defaultstyle_callback = nullptr;
        qscilexerpo_description_callback = nullptr;
        qscilexerpo_paper_callback = nullptr;
        qscilexerpo_defaultcolorwithstyle_callback = nullptr;
        qscilexerpo_defaulteolfill_callback = nullptr;
        qscilexerpo_defaultfontwithstyle_callback = nullptr;
        qscilexerpo_defaultpaperwithstyle_callback = nullptr;
        qscilexerpo_seteditor_callback = nullptr;
        qscilexerpo_refreshproperties_callback = nullptr;
        qscilexerpo_stylebitsneeded_callback = nullptr;
        qscilexerpo_wordcharacters_callback = nullptr;
        qscilexerpo_setautoindentstyle_callback = nullptr;
        qscilexerpo_setcolor_callback = nullptr;
        qscilexerpo_seteolfill_callback = nullptr;
        qscilexerpo_setfont_callback = nullptr;
        qscilexerpo_setpaper_callback = nullptr;
        qscilexerpo_readproperties_callback = nullptr;
        qscilexerpo_writeproperties_callback = nullptr;
        qscilexerpo_event_callback = nullptr;
        qscilexerpo_eventfilter_callback = nullptr;
        qscilexerpo_timerevent_callback = nullptr;
        qscilexerpo_childevent_callback = nullptr;
        qscilexerpo_customevent_callback = nullptr;
        qscilexerpo_connectnotify_callback = nullptr;
        qscilexerpo_disconnectnotify_callback = nullptr;
        qscilexerpo_sender_callback = nullptr;
        qscilexerpo_sendersignalindex_callback = nullptr;
        qscilexerpo_receivers_callback = nullptr;
        qscilexerpo_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerPO_Metacall_Callback(QsciLexerPO_Metacall_Callback cb) { qscilexerpo_metacall_callback = cb; }
    void setQsciLexerPO_SetFoldComments_Callback(QsciLexerPO_SetFoldComments_Callback cb) { qscilexerpo_setfoldcomments_callback = cb; }
    void setQsciLexerPO_SetFoldCompact_Callback(QsciLexerPO_SetFoldCompact_Callback cb) { qscilexerpo_setfoldcompact_callback = cb; }
    void setQsciLexerPO_Language_Callback(QsciLexerPO_Language_Callback cb) { qscilexerpo_language_callback = cb; }
    void setQsciLexerPO_Lexer_Callback(QsciLexerPO_Lexer_Callback cb) { qscilexerpo_lexer_callback = cb; }
    void setQsciLexerPO_LexerId_Callback(QsciLexerPO_LexerId_Callback cb) { qscilexerpo_lexerid_callback = cb; }
    void setQsciLexerPO_AutoCompletionFillups_Callback(QsciLexerPO_AutoCompletionFillups_Callback cb) { qscilexerpo_autocompletionfillups_callback = cb; }
    void setQsciLexerPO_AutoCompletionWordSeparators_Callback(QsciLexerPO_AutoCompletionWordSeparators_Callback cb) { qscilexerpo_autocompletionwordseparators_callback = cb; }
    void setQsciLexerPO_BlockEnd_Callback(QsciLexerPO_BlockEnd_Callback cb) { qscilexerpo_blockend_callback = cb; }
    void setQsciLexerPO_BlockLookback_Callback(QsciLexerPO_BlockLookback_Callback cb) { qscilexerpo_blocklookback_callback = cb; }
    void setQsciLexerPO_BlockStart_Callback(QsciLexerPO_BlockStart_Callback cb) { qscilexerpo_blockstart_callback = cb; }
    void setQsciLexerPO_BlockStartKeyword_Callback(QsciLexerPO_BlockStartKeyword_Callback cb) { qscilexerpo_blockstartkeyword_callback = cb; }
    void setQsciLexerPO_BraceStyle_Callback(QsciLexerPO_BraceStyle_Callback cb) { qscilexerpo_bracestyle_callback = cb; }
    void setQsciLexerPO_CaseSensitive_Callback(QsciLexerPO_CaseSensitive_Callback cb) { qscilexerpo_casesensitive_callback = cb; }
    void setQsciLexerPO_Color_Callback(QsciLexerPO_Color_Callback cb) { qscilexerpo_color_callback = cb; }
    void setQsciLexerPO_EolFill_Callback(QsciLexerPO_EolFill_Callback cb) { qscilexerpo_eolfill_callback = cb; }
    void setQsciLexerPO_Font_Callback(QsciLexerPO_Font_Callback cb) { qscilexerpo_font_callback = cb; }
    void setQsciLexerPO_IndentationGuideView_Callback(QsciLexerPO_IndentationGuideView_Callback cb) { qscilexerpo_indentationguideview_callback = cb; }
    void setQsciLexerPO_Keywords_Callback(QsciLexerPO_Keywords_Callback cb) { qscilexerpo_keywords_callback = cb; }
    void setQsciLexerPO_DefaultStyle_Callback(QsciLexerPO_DefaultStyle_Callback cb) { qscilexerpo_defaultstyle_callback = cb; }
    void setQsciLexerPO_Description_Callback(QsciLexerPO_Description_Callback cb) { qscilexerpo_description_callback = cb; }
    void setQsciLexerPO_Paper_Callback(QsciLexerPO_Paper_Callback cb) { qscilexerpo_paper_callback = cb; }
    void setQsciLexerPO_DefaultColorWithStyle_Callback(QsciLexerPO_DefaultColorWithStyle_Callback cb) { qscilexerpo_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerPO_DefaultEolFill_Callback(QsciLexerPO_DefaultEolFill_Callback cb) { qscilexerpo_defaulteolfill_callback = cb; }
    void setQsciLexerPO_DefaultFontWithStyle_Callback(QsciLexerPO_DefaultFontWithStyle_Callback cb) { qscilexerpo_defaultfontwithstyle_callback = cb; }
    void setQsciLexerPO_DefaultPaperWithStyle_Callback(QsciLexerPO_DefaultPaperWithStyle_Callback cb) { qscilexerpo_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerPO_SetEditor_Callback(QsciLexerPO_SetEditor_Callback cb) { qscilexerpo_seteditor_callback = cb; }
    void setQsciLexerPO_RefreshProperties_Callback(QsciLexerPO_RefreshProperties_Callback cb) { qscilexerpo_refreshproperties_callback = cb; }
    void setQsciLexerPO_StyleBitsNeeded_Callback(QsciLexerPO_StyleBitsNeeded_Callback cb) { qscilexerpo_stylebitsneeded_callback = cb; }
    void setQsciLexerPO_WordCharacters_Callback(QsciLexerPO_WordCharacters_Callback cb) { qscilexerpo_wordcharacters_callback = cb; }
    void setQsciLexerPO_SetAutoIndentStyle_Callback(QsciLexerPO_SetAutoIndentStyle_Callback cb) { qscilexerpo_setautoindentstyle_callback = cb; }
    void setQsciLexerPO_SetColor_Callback(QsciLexerPO_SetColor_Callback cb) { qscilexerpo_setcolor_callback = cb; }
    void setQsciLexerPO_SetEolFill_Callback(QsciLexerPO_SetEolFill_Callback cb) { qscilexerpo_seteolfill_callback = cb; }
    void setQsciLexerPO_SetFont_Callback(QsciLexerPO_SetFont_Callback cb) { qscilexerpo_setfont_callback = cb; }
    void setQsciLexerPO_SetPaper_Callback(QsciLexerPO_SetPaper_Callback cb) { qscilexerpo_setpaper_callback = cb; }
    void setQsciLexerPO_ReadProperties_Callback(QsciLexerPO_ReadProperties_Callback cb) { qscilexerpo_readproperties_callback = cb; }
    void setQsciLexerPO_WriteProperties_Callback(QsciLexerPO_WriteProperties_Callback cb) { qscilexerpo_writeproperties_callback = cb; }
    void setQsciLexerPO_Event_Callback(QsciLexerPO_Event_Callback cb) { qscilexerpo_event_callback = cb; }
    void setQsciLexerPO_EventFilter_Callback(QsciLexerPO_EventFilter_Callback cb) { qscilexerpo_eventfilter_callback = cb; }
    void setQsciLexerPO_TimerEvent_Callback(QsciLexerPO_TimerEvent_Callback cb) { qscilexerpo_timerevent_callback = cb; }
    void setQsciLexerPO_ChildEvent_Callback(QsciLexerPO_ChildEvent_Callback cb) { qscilexerpo_childevent_callback = cb; }
    void setQsciLexerPO_CustomEvent_Callback(QsciLexerPO_CustomEvent_Callback cb) { qscilexerpo_customevent_callback = cb; }
    void setQsciLexerPO_ConnectNotify_Callback(QsciLexerPO_ConnectNotify_Callback cb) { qscilexerpo_connectnotify_callback = cb; }
    void setQsciLexerPO_DisconnectNotify_Callback(QsciLexerPO_DisconnectNotify_Callback cb) { qscilexerpo_disconnectnotify_callback = cb; }
    void setQsciLexerPO_Sender_Callback(QsciLexerPO_Sender_Callback cb) { qscilexerpo_sender_callback = cb; }
    void setQsciLexerPO_SenderSignalIndex_Callback(QsciLexerPO_SenderSignalIndex_Callback cb) { qscilexerpo_sendersignalindex_callback = cb; }
    void setQsciLexerPO_Receivers_Callback(QsciLexerPO_Receivers_Callback cb) { qscilexerpo_receivers_callback = cb; }
    void setQsciLexerPO_IsSignalConnected_Callback(QsciLexerPO_IsSignalConnected_Callback cb) { qscilexerpo_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerPO_Metacall_IsBase(bool value) const { qscilexerpo_metacall_isbase = value; }
    void setQsciLexerPO_SetFoldComments_IsBase(bool value) const { qscilexerpo_setfoldcomments_isbase = value; }
    void setQsciLexerPO_SetFoldCompact_IsBase(bool value) const { qscilexerpo_setfoldcompact_isbase = value; }
    void setQsciLexerPO_Language_IsBase(bool value) const { qscilexerpo_language_isbase = value; }
    void setQsciLexerPO_Lexer_IsBase(bool value) const { qscilexerpo_lexer_isbase = value; }
    void setQsciLexerPO_LexerId_IsBase(bool value) const { qscilexerpo_lexerid_isbase = value; }
    void setQsciLexerPO_AutoCompletionFillups_IsBase(bool value) const { qscilexerpo_autocompletionfillups_isbase = value; }
    void setQsciLexerPO_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerpo_autocompletionwordseparators_isbase = value; }
    void setQsciLexerPO_BlockEnd_IsBase(bool value) const { qscilexerpo_blockend_isbase = value; }
    void setQsciLexerPO_BlockLookback_IsBase(bool value) const { qscilexerpo_blocklookback_isbase = value; }
    void setQsciLexerPO_BlockStart_IsBase(bool value) const { qscilexerpo_blockstart_isbase = value; }
    void setQsciLexerPO_BlockStartKeyword_IsBase(bool value) const { qscilexerpo_blockstartkeyword_isbase = value; }
    void setQsciLexerPO_BraceStyle_IsBase(bool value) const { qscilexerpo_bracestyle_isbase = value; }
    void setQsciLexerPO_CaseSensitive_IsBase(bool value) const { qscilexerpo_casesensitive_isbase = value; }
    void setQsciLexerPO_Color_IsBase(bool value) const { qscilexerpo_color_isbase = value; }
    void setQsciLexerPO_EolFill_IsBase(bool value) const { qscilexerpo_eolfill_isbase = value; }
    void setQsciLexerPO_Font_IsBase(bool value) const { qscilexerpo_font_isbase = value; }
    void setQsciLexerPO_IndentationGuideView_IsBase(bool value) const { qscilexerpo_indentationguideview_isbase = value; }
    void setQsciLexerPO_Keywords_IsBase(bool value) const { qscilexerpo_keywords_isbase = value; }
    void setQsciLexerPO_DefaultStyle_IsBase(bool value) const { qscilexerpo_defaultstyle_isbase = value; }
    void setQsciLexerPO_Description_IsBase(bool value) const { qscilexerpo_description_isbase = value; }
    void setQsciLexerPO_Paper_IsBase(bool value) const { qscilexerpo_paper_isbase = value; }
    void setQsciLexerPO_DefaultColorWithStyle_IsBase(bool value) const { qscilexerpo_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerPO_DefaultEolFill_IsBase(bool value) const { qscilexerpo_defaulteolfill_isbase = value; }
    void setQsciLexerPO_DefaultFontWithStyle_IsBase(bool value) const { qscilexerpo_defaultfontwithstyle_isbase = value; }
    void setQsciLexerPO_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerpo_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerPO_SetEditor_IsBase(bool value) const { qscilexerpo_seteditor_isbase = value; }
    void setQsciLexerPO_RefreshProperties_IsBase(bool value) const { qscilexerpo_refreshproperties_isbase = value; }
    void setQsciLexerPO_StyleBitsNeeded_IsBase(bool value) const { qscilexerpo_stylebitsneeded_isbase = value; }
    void setQsciLexerPO_WordCharacters_IsBase(bool value) const { qscilexerpo_wordcharacters_isbase = value; }
    void setQsciLexerPO_SetAutoIndentStyle_IsBase(bool value) const { qscilexerpo_setautoindentstyle_isbase = value; }
    void setQsciLexerPO_SetColor_IsBase(bool value) const { qscilexerpo_setcolor_isbase = value; }
    void setQsciLexerPO_SetEolFill_IsBase(bool value) const { qscilexerpo_seteolfill_isbase = value; }
    void setQsciLexerPO_SetFont_IsBase(bool value) const { qscilexerpo_setfont_isbase = value; }
    void setQsciLexerPO_SetPaper_IsBase(bool value) const { qscilexerpo_setpaper_isbase = value; }
    void setQsciLexerPO_ReadProperties_IsBase(bool value) const { qscilexerpo_readproperties_isbase = value; }
    void setQsciLexerPO_WriteProperties_IsBase(bool value) const { qscilexerpo_writeproperties_isbase = value; }
    void setQsciLexerPO_Event_IsBase(bool value) const { qscilexerpo_event_isbase = value; }
    void setQsciLexerPO_EventFilter_IsBase(bool value) const { qscilexerpo_eventfilter_isbase = value; }
    void setQsciLexerPO_TimerEvent_IsBase(bool value) const { qscilexerpo_timerevent_isbase = value; }
    void setQsciLexerPO_ChildEvent_IsBase(bool value) const { qscilexerpo_childevent_isbase = value; }
    void setQsciLexerPO_CustomEvent_IsBase(bool value) const { qscilexerpo_customevent_isbase = value; }
    void setQsciLexerPO_ConnectNotify_IsBase(bool value) const { qscilexerpo_connectnotify_isbase = value; }
    void setQsciLexerPO_DisconnectNotify_IsBase(bool value) const { qscilexerpo_disconnectnotify_isbase = value; }
    void setQsciLexerPO_Sender_IsBase(bool value) const { qscilexerpo_sender_isbase = value; }
    void setQsciLexerPO_SenderSignalIndex_IsBase(bool value) const { qscilexerpo_sendersignalindex_isbase = value; }
    void setQsciLexerPO_Receivers_IsBase(bool value) const { qscilexerpo_receivers_isbase = value; }
    void setQsciLexerPO_IsSignalConnected_IsBase(bool value) const { qscilexerpo_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerpo_metacall_isbase) {
            qscilexerpo_metacall_isbase = false;
            return QsciLexerPO::qt_metacall(param1, param2, param3);
        } else if (qscilexerpo_metacall_callback != nullptr) {
            return qscilexerpo_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerPO::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerpo_setfoldcomments_isbase) {
            qscilexerpo_setfoldcomments_isbase = false;
            QsciLexerPO::setFoldComments(fold);
        } else if (qscilexerpo_setfoldcomments_callback != nullptr) {
            qscilexerpo_setfoldcomments_callback(this, fold);
        } else {
            QsciLexerPO::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerpo_setfoldcompact_isbase) {
            qscilexerpo_setfoldcompact_isbase = false;
            QsciLexerPO::setFoldCompact(fold);
        } else if (qscilexerpo_setfoldcompact_callback != nullptr) {
            qscilexerpo_setfoldcompact_callback(this, fold);
        } else {
            QsciLexerPO::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerpo_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerpo_lexer_isbase) {
            qscilexerpo_lexer_isbase = false;
            return QsciLexerPO::lexer();
        } else if (qscilexerpo_lexer_callback != nullptr) {
            return qscilexerpo_lexer_callback();
        } else {
            return QsciLexerPO::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerpo_lexerid_isbase) {
            qscilexerpo_lexerid_isbase = false;
            return QsciLexerPO::lexerId();
        } else if (qscilexerpo_lexerid_callback != nullptr) {
            return qscilexerpo_lexerid_callback();
        } else {
            return QsciLexerPO::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerpo_autocompletionfillups_isbase) {
            qscilexerpo_autocompletionfillups_isbase = false;
            return QsciLexerPO::autoCompletionFillups();
        } else if (qscilexerpo_autocompletionfillups_callback != nullptr) {
            return qscilexerpo_autocompletionfillups_callback();
        } else {
            return QsciLexerPO::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerpo_autocompletionwordseparators_isbase) {
            qscilexerpo_autocompletionwordseparators_isbase = false;
            return QsciLexerPO::autoCompletionWordSeparators();
        } else if (qscilexerpo_autocompletionwordseparators_callback != nullptr) {
            return qscilexerpo_autocompletionwordseparators_callback();
        } else {
            return QsciLexerPO::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerpo_blockend_isbase) {
            qscilexerpo_blockend_isbase = false;
            return QsciLexerPO::blockEnd(style);
        } else if (qscilexerpo_blockend_callback != nullptr) {
            return qscilexerpo_blockend_callback(this, style);
        } else {
            return QsciLexerPO::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerpo_blocklookback_isbase) {
            qscilexerpo_blocklookback_isbase = false;
            return QsciLexerPO::blockLookback();
        } else if (qscilexerpo_blocklookback_callback != nullptr) {
            return qscilexerpo_blocklookback_callback();
        } else {
            return QsciLexerPO::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerpo_blockstart_isbase) {
            qscilexerpo_blockstart_isbase = false;
            return QsciLexerPO::blockStart(style);
        } else if (qscilexerpo_blockstart_callback != nullptr) {
            return qscilexerpo_blockstart_callback(this, style);
        } else {
            return QsciLexerPO::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerpo_blockstartkeyword_isbase) {
            qscilexerpo_blockstartkeyword_isbase = false;
            return QsciLexerPO::blockStartKeyword(style);
        } else if (qscilexerpo_blockstartkeyword_callback != nullptr) {
            return qscilexerpo_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerPO::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerpo_bracestyle_isbase) {
            qscilexerpo_bracestyle_isbase = false;
            return QsciLexerPO::braceStyle();
        } else if (qscilexerpo_bracestyle_callback != nullptr) {
            return qscilexerpo_bracestyle_callback();
        } else {
            return QsciLexerPO::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerpo_casesensitive_isbase) {
            qscilexerpo_casesensitive_isbase = false;
            return QsciLexerPO::caseSensitive();
        } else if (qscilexerpo_casesensitive_callback != nullptr) {
            return qscilexerpo_casesensitive_callback();
        } else {
            return QsciLexerPO::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerpo_color_isbase) {
            qscilexerpo_color_isbase = false;
            return QsciLexerPO::color(style);
        } else if (qscilexerpo_color_callback != nullptr) {
            return qscilexerpo_color_callback(this, style);
        } else {
            return QsciLexerPO::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerpo_eolfill_isbase) {
            qscilexerpo_eolfill_isbase = false;
            return QsciLexerPO::eolFill(style);
        } else if (qscilexerpo_eolfill_callback != nullptr) {
            return qscilexerpo_eolfill_callback(this, style);
        } else {
            return QsciLexerPO::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerpo_font_isbase) {
            qscilexerpo_font_isbase = false;
            return QsciLexerPO::font(style);
        } else if (qscilexerpo_font_callback != nullptr) {
            return qscilexerpo_font_callback(this, style);
        } else {
            return QsciLexerPO::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerpo_indentationguideview_isbase) {
            qscilexerpo_indentationguideview_isbase = false;
            return QsciLexerPO::indentationGuideView();
        } else if (qscilexerpo_indentationguideview_callback != nullptr) {
            return qscilexerpo_indentationguideview_callback();
        } else {
            return QsciLexerPO::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerpo_keywords_isbase) {
            qscilexerpo_keywords_isbase = false;
            return QsciLexerPO::keywords(set);
        } else if (qscilexerpo_keywords_callback != nullptr) {
            return qscilexerpo_keywords_callback(this, set);
        } else {
            return QsciLexerPO::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerpo_defaultstyle_isbase) {
            qscilexerpo_defaultstyle_isbase = false;
            return QsciLexerPO::defaultStyle();
        } else if (qscilexerpo_defaultstyle_callback != nullptr) {
            return qscilexerpo_defaultstyle_callback();
        } else {
            return QsciLexerPO::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerpo_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerpo_paper_isbase) {
            qscilexerpo_paper_isbase = false;
            return QsciLexerPO::paper(style);
        } else if (qscilexerpo_paper_callback != nullptr) {
            return qscilexerpo_paper_callback(this, style);
        } else {
            return QsciLexerPO::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerpo_defaultcolorwithstyle_isbase) {
            qscilexerpo_defaultcolorwithstyle_isbase = false;
            return QsciLexerPO::defaultColor(style);
        } else if (qscilexerpo_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerpo_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerPO::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerpo_defaulteolfill_isbase) {
            qscilexerpo_defaulteolfill_isbase = false;
            return QsciLexerPO::defaultEolFill(style);
        } else if (qscilexerpo_defaulteolfill_callback != nullptr) {
            return qscilexerpo_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerPO::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerpo_defaultfontwithstyle_isbase) {
            qscilexerpo_defaultfontwithstyle_isbase = false;
            return QsciLexerPO::defaultFont(style);
        } else if (qscilexerpo_defaultfontwithstyle_callback != nullptr) {
            return qscilexerpo_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerPO::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerpo_defaultpaperwithstyle_isbase) {
            qscilexerpo_defaultpaperwithstyle_isbase = false;
            return QsciLexerPO::defaultPaper(style);
        } else if (qscilexerpo_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerpo_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerPO::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerpo_seteditor_isbase) {
            qscilexerpo_seteditor_isbase = false;
            QsciLexerPO::setEditor(editor);
        } else if (qscilexerpo_seteditor_callback != nullptr) {
            qscilexerpo_seteditor_callback(this, editor);
        } else {
            QsciLexerPO::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerpo_refreshproperties_isbase) {
            qscilexerpo_refreshproperties_isbase = false;
            QsciLexerPO::refreshProperties();
        } else if (qscilexerpo_refreshproperties_callback != nullptr) {
            qscilexerpo_refreshproperties_callback();
        } else {
            QsciLexerPO::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerpo_stylebitsneeded_isbase) {
            qscilexerpo_stylebitsneeded_isbase = false;
            return QsciLexerPO::styleBitsNeeded();
        } else if (qscilexerpo_stylebitsneeded_callback != nullptr) {
            return qscilexerpo_stylebitsneeded_callback();
        } else {
            return QsciLexerPO::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerpo_wordcharacters_isbase) {
            qscilexerpo_wordcharacters_isbase = false;
            return QsciLexerPO::wordCharacters();
        } else if (qscilexerpo_wordcharacters_callback != nullptr) {
            return qscilexerpo_wordcharacters_callback();
        } else {
            return QsciLexerPO::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerpo_setautoindentstyle_isbase) {
            qscilexerpo_setautoindentstyle_isbase = false;
            QsciLexerPO::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerpo_setautoindentstyle_callback != nullptr) {
            qscilexerpo_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerPO::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerpo_setcolor_isbase) {
            qscilexerpo_setcolor_isbase = false;
            QsciLexerPO::setColor(c, style);
        } else if (qscilexerpo_setcolor_callback != nullptr) {
            qscilexerpo_setcolor_callback(this, c, style);
        } else {
            QsciLexerPO::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerpo_seteolfill_isbase) {
            qscilexerpo_seteolfill_isbase = false;
            QsciLexerPO::setEolFill(eoffill, style);
        } else if (qscilexerpo_seteolfill_callback != nullptr) {
            qscilexerpo_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerPO::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerpo_setfont_isbase) {
            qscilexerpo_setfont_isbase = false;
            QsciLexerPO::setFont(f, style);
        } else if (qscilexerpo_setfont_callback != nullptr) {
            qscilexerpo_setfont_callback(this, f, style);
        } else {
            QsciLexerPO::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerpo_setpaper_isbase) {
            qscilexerpo_setpaper_isbase = false;
            QsciLexerPO::setPaper(c, style);
        } else if (qscilexerpo_setpaper_callback != nullptr) {
            qscilexerpo_setpaper_callback(this, c, style);
        } else {
            QsciLexerPO::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerpo_readproperties_isbase) {
            qscilexerpo_readproperties_isbase = false;
            return QsciLexerPO::readProperties(qs, prefix);
        } else if (qscilexerpo_readproperties_callback != nullptr) {
            return qscilexerpo_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerPO::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerpo_writeproperties_isbase) {
            qscilexerpo_writeproperties_isbase = false;
            return QsciLexerPO::writeProperties(qs, prefix);
        } else if (qscilexerpo_writeproperties_callback != nullptr) {
            return qscilexerpo_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerPO::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerpo_event_isbase) {
            qscilexerpo_event_isbase = false;
            return QsciLexerPO::event(event);
        } else if (qscilexerpo_event_callback != nullptr) {
            return qscilexerpo_event_callback(this, event);
        } else {
            return QsciLexerPO::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerpo_eventfilter_isbase) {
            qscilexerpo_eventfilter_isbase = false;
            return QsciLexerPO::eventFilter(watched, event);
        } else if (qscilexerpo_eventfilter_callback != nullptr) {
            return qscilexerpo_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerPO::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerpo_timerevent_isbase) {
            qscilexerpo_timerevent_isbase = false;
            QsciLexerPO::timerEvent(event);
        } else if (qscilexerpo_timerevent_callback != nullptr) {
            qscilexerpo_timerevent_callback(this, event);
        } else {
            QsciLexerPO::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerpo_childevent_isbase) {
            qscilexerpo_childevent_isbase = false;
            QsciLexerPO::childEvent(event);
        } else if (qscilexerpo_childevent_callback != nullptr) {
            qscilexerpo_childevent_callback(this, event);
        } else {
            QsciLexerPO::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerpo_customevent_isbase) {
            qscilexerpo_customevent_isbase = false;
            QsciLexerPO::customEvent(event);
        } else if (qscilexerpo_customevent_callback != nullptr) {
            qscilexerpo_customevent_callback(this, event);
        } else {
            QsciLexerPO::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerpo_connectnotify_isbase) {
            qscilexerpo_connectnotify_isbase = false;
            QsciLexerPO::connectNotify(signal);
        } else if (qscilexerpo_connectnotify_callback != nullptr) {
            qscilexerpo_connectnotify_callback(this, signal);
        } else {
            QsciLexerPO::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerpo_disconnectnotify_isbase) {
            qscilexerpo_disconnectnotify_isbase = false;
            QsciLexerPO::disconnectNotify(signal);
        } else if (qscilexerpo_disconnectnotify_callback != nullptr) {
            qscilexerpo_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerPO::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerpo_sender_isbase) {
            qscilexerpo_sender_isbase = false;
            return QsciLexerPO::sender();
        } else if (qscilexerpo_sender_callback != nullptr) {
            return qscilexerpo_sender_callback();
        } else {
            return QsciLexerPO::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerpo_sendersignalindex_isbase) {
            qscilexerpo_sendersignalindex_isbase = false;
            return QsciLexerPO::senderSignalIndex();
        } else if (qscilexerpo_sendersignalindex_callback != nullptr) {
            return qscilexerpo_sendersignalindex_callback();
        } else {
            return QsciLexerPO::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerpo_receivers_isbase) {
            qscilexerpo_receivers_isbase = false;
            return QsciLexerPO::receivers(signal);
        } else if (qscilexerpo_receivers_callback != nullptr) {
            return qscilexerpo_receivers_callback(this, signal);
        } else {
            return QsciLexerPO::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerpo_issignalconnected_isbase) {
            qscilexerpo_issignalconnected_isbase = false;
            return QsciLexerPO::isSignalConnected(signal);
        } else if (qscilexerpo_issignalconnected_callback != nullptr) {
            return qscilexerpo_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerPO::isSignalConnected(signal);
        }
    }
};

#endif
