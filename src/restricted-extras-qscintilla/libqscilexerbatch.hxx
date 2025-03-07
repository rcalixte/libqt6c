#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERBATCH_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERBATCH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerBatch so that we can call protected methods
class VirtualQsciLexerBatch : public QsciLexerBatch {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerBatch_Metacall_Callback = int (*)(QsciLexerBatch*, QMetaObject::Call, int, void**);
    using QsciLexerBatch_Language_Callback = const char* (*)();
    using QsciLexerBatch_Lexer_Callback = const char* (*)();
    using QsciLexerBatch_LexerId_Callback = int (*)();
    using QsciLexerBatch_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerBatch_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerBatch_BlockEnd_Callback = const char* (*)(const QsciLexerBatch*, int*);
    using QsciLexerBatch_BlockLookback_Callback = int (*)();
    using QsciLexerBatch_BlockStart_Callback = const char* (*)(const QsciLexerBatch*, int*);
    using QsciLexerBatch_BlockStartKeyword_Callback = const char* (*)(const QsciLexerBatch*, int*);
    using QsciLexerBatch_BraceStyle_Callback = int (*)();
    using QsciLexerBatch_CaseSensitive_Callback = bool (*)();
    using QsciLexerBatch_Color_Callback = QColor (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_EolFill_Callback = bool (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_Font_Callback = QFont (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_IndentationGuideView_Callback = int (*)();
    using QsciLexerBatch_Keywords_Callback = const char* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultStyle_Callback = int (*)();
    using QsciLexerBatch_Description_Callback = QString (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_Paper_Callback = QColor (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultEolFill_Callback = bool (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_SetEditor_Callback = void (*)(QsciLexerBatch*, QsciScintilla*);
    using QsciLexerBatch_RefreshProperties_Callback = void (*)();
    using QsciLexerBatch_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerBatch_WordCharacters_Callback = const char* (*)();
    using QsciLexerBatch_SetAutoIndentStyle_Callback = void (*)(QsciLexerBatch*, int);
    using QsciLexerBatch_SetColor_Callback = void (*)(QsciLexerBatch*, const QColor&, int);
    using QsciLexerBatch_SetEolFill_Callback = void (*)(QsciLexerBatch*, bool, int);
    using QsciLexerBatch_SetFont_Callback = void (*)(QsciLexerBatch*, const QFont&, int);
    using QsciLexerBatch_SetPaper_Callback = void (*)(QsciLexerBatch*, const QColor&, int);
    using QsciLexerBatch_ReadProperties_Callback = bool (*)(QsciLexerBatch*, QSettings&, const QString&);
    using QsciLexerBatch_WriteProperties_Callback = bool (*)(const QsciLexerBatch*, QSettings&, const QString&);
    using QsciLexerBatch_Event_Callback = bool (*)(QsciLexerBatch*, QEvent*);
    using QsciLexerBatch_EventFilter_Callback = bool (*)(QsciLexerBatch*, QObject*, QEvent*);
    using QsciLexerBatch_TimerEvent_Callback = void (*)(QsciLexerBatch*, QTimerEvent*);
    using QsciLexerBatch_ChildEvent_Callback = void (*)(QsciLexerBatch*, QChildEvent*);
    using QsciLexerBatch_CustomEvent_Callback = void (*)(QsciLexerBatch*, QEvent*);
    using QsciLexerBatch_ConnectNotify_Callback = void (*)(QsciLexerBatch*, const QMetaMethod&);
    using QsciLexerBatch_DisconnectNotify_Callback = void (*)(QsciLexerBatch*, const QMetaMethod&);
    using QsciLexerBatch_Sender_Callback = QObject* (*)();
    using QsciLexerBatch_SenderSignalIndex_Callback = int (*)();
    using QsciLexerBatch_Receivers_Callback = int (*)(const QsciLexerBatch*, const char*);
    using QsciLexerBatch_IsSignalConnected_Callback = bool (*)(const QsciLexerBatch*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerBatch_Metacall_Callback qscilexerbatch_metacall_callback = nullptr;
    QsciLexerBatch_Language_Callback qscilexerbatch_language_callback = nullptr;
    QsciLexerBatch_Lexer_Callback qscilexerbatch_lexer_callback = nullptr;
    QsciLexerBatch_LexerId_Callback qscilexerbatch_lexerid_callback = nullptr;
    QsciLexerBatch_AutoCompletionFillups_Callback qscilexerbatch_autocompletionfillups_callback = nullptr;
    QsciLexerBatch_AutoCompletionWordSeparators_Callback qscilexerbatch_autocompletionwordseparators_callback = nullptr;
    QsciLexerBatch_BlockEnd_Callback qscilexerbatch_blockend_callback = nullptr;
    QsciLexerBatch_BlockLookback_Callback qscilexerbatch_blocklookback_callback = nullptr;
    QsciLexerBatch_BlockStart_Callback qscilexerbatch_blockstart_callback = nullptr;
    QsciLexerBatch_BlockStartKeyword_Callback qscilexerbatch_blockstartkeyword_callback = nullptr;
    QsciLexerBatch_BraceStyle_Callback qscilexerbatch_bracestyle_callback = nullptr;
    QsciLexerBatch_CaseSensitive_Callback qscilexerbatch_casesensitive_callback = nullptr;
    QsciLexerBatch_Color_Callback qscilexerbatch_color_callback = nullptr;
    QsciLexerBatch_EolFill_Callback qscilexerbatch_eolfill_callback = nullptr;
    QsciLexerBatch_Font_Callback qscilexerbatch_font_callback = nullptr;
    QsciLexerBatch_IndentationGuideView_Callback qscilexerbatch_indentationguideview_callback = nullptr;
    QsciLexerBatch_Keywords_Callback qscilexerbatch_keywords_callback = nullptr;
    QsciLexerBatch_DefaultStyle_Callback qscilexerbatch_defaultstyle_callback = nullptr;
    QsciLexerBatch_Description_Callback qscilexerbatch_description_callback = nullptr;
    QsciLexerBatch_Paper_Callback qscilexerbatch_paper_callback = nullptr;
    QsciLexerBatch_DefaultColorWithStyle_Callback qscilexerbatch_defaultcolorwithstyle_callback = nullptr;
    QsciLexerBatch_DefaultEolFill_Callback qscilexerbatch_defaulteolfill_callback = nullptr;
    QsciLexerBatch_DefaultFontWithStyle_Callback qscilexerbatch_defaultfontwithstyle_callback = nullptr;
    QsciLexerBatch_DefaultPaperWithStyle_Callback qscilexerbatch_defaultpaperwithstyle_callback = nullptr;
    QsciLexerBatch_SetEditor_Callback qscilexerbatch_seteditor_callback = nullptr;
    QsciLexerBatch_RefreshProperties_Callback qscilexerbatch_refreshproperties_callback = nullptr;
    QsciLexerBatch_StyleBitsNeeded_Callback qscilexerbatch_stylebitsneeded_callback = nullptr;
    QsciLexerBatch_WordCharacters_Callback qscilexerbatch_wordcharacters_callback = nullptr;
    QsciLexerBatch_SetAutoIndentStyle_Callback qscilexerbatch_setautoindentstyle_callback = nullptr;
    QsciLexerBatch_SetColor_Callback qscilexerbatch_setcolor_callback = nullptr;
    QsciLexerBatch_SetEolFill_Callback qscilexerbatch_seteolfill_callback = nullptr;
    QsciLexerBatch_SetFont_Callback qscilexerbatch_setfont_callback = nullptr;
    QsciLexerBatch_SetPaper_Callback qscilexerbatch_setpaper_callback = nullptr;
    QsciLexerBatch_ReadProperties_Callback qscilexerbatch_readproperties_callback = nullptr;
    QsciLexerBatch_WriteProperties_Callback qscilexerbatch_writeproperties_callback = nullptr;
    QsciLexerBatch_Event_Callback qscilexerbatch_event_callback = nullptr;
    QsciLexerBatch_EventFilter_Callback qscilexerbatch_eventfilter_callback = nullptr;
    QsciLexerBatch_TimerEvent_Callback qscilexerbatch_timerevent_callback = nullptr;
    QsciLexerBatch_ChildEvent_Callback qscilexerbatch_childevent_callback = nullptr;
    QsciLexerBatch_CustomEvent_Callback qscilexerbatch_customevent_callback = nullptr;
    QsciLexerBatch_ConnectNotify_Callback qscilexerbatch_connectnotify_callback = nullptr;
    QsciLexerBatch_DisconnectNotify_Callback qscilexerbatch_disconnectnotify_callback = nullptr;
    QsciLexerBatch_Sender_Callback qscilexerbatch_sender_callback = nullptr;
    QsciLexerBatch_SenderSignalIndex_Callback qscilexerbatch_sendersignalindex_callback = nullptr;
    QsciLexerBatch_Receivers_Callback qscilexerbatch_receivers_callback = nullptr;
    QsciLexerBatch_IsSignalConnected_Callback qscilexerbatch_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerbatch_metacall_isbase = false;
    mutable bool qscilexerbatch_language_isbase = false;
    mutable bool qscilexerbatch_lexer_isbase = false;
    mutable bool qscilexerbatch_lexerid_isbase = false;
    mutable bool qscilexerbatch_autocompletionfillups_isbase = false;
    mutable bool qscilexerbatch_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerbatch_blockend_isbase = false;
    mutable bool qscilexerbatch_blocklookback_isbase = false;
    mutable bool qscilexerbatch_blockstart_isbase = false;
    mutable bool qscilexerbatch_blockstartkeyword_isbase = false;
    mutable bool qscilexerbatch_bracestyle_isbase = false;
    mutable bool qscilexerbatch_casesensitive_isbase = false;
    mutable bool qscilexerbatch_color_isbase = false;
    mutable bool qscilexerbatch_eolfill_isbase = false;
    mutable bool qscilexerbatch_font_isbase = false;
    mutable bool qscilexerbatch_indentationguideview_isbase = false;
    mutable bool qscilexerbatch_keywords_isbase = false;
    mutable bool qscilexerbatch_defaultstyle_isbase = false;
    mutable bool qscilexerbatch_description_isbase = false;
    mutable bool qscilexerbatch_paper_isbase = false;
    mutable bool qscilexerbatch_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerbatch_defaulteolfill_isbase = false;
    mutable bool qscilexerbatch_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerbatch_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerbatch_seteditor_isbase = false;
    mutable bool qscilexerbatch_refreshproperties_isbase = false;
    mutable bool qscilexerbatch_stylebitsneeded_isbase = false;
    mutable bool qscilexerbatch_wordcharacters_isbase = false;
    mutable bool qscilexerbatch_setautoindentstyle_isbase = false;
    mutable bool qscilexerbatch_setcolor_isbase = false;
    mutable bool qscilexerbatch_seteolfill_isbase = false;
    mutable bool qscilexerbatch_setfont_isbase = false;
    mutable bool qscilexerbatch_setpaper_isbase = false;
    mutable bool qscilexerbatch_readproperties_isbase = false;
    mutable bool qscilexerbatch_writeproperties_isbase = false;
    mutable bool qscilexerbatch_event_isbase = false;
    mutable bool qscilexerbatch_eventfilter_isbase = false;
    mutable bool qscilexerbatch_timerevent_isbase = false;
    mutable bool qscilexerbatch_childevent_isbase = false;
    mutable bool qscilexerbatch_customevent_isbase = false;
    mutable bool qscilexerbatch_connectnotify_isbase = false;
    mutable bool qscilexerbatch_disconnectnotify_isbase = false;
    mutable bool qscilexerbatch_sender_isbase = false;
    mutable bool qscilexerbatch_sendersignalindex_isbase = false;
    mutable bool qscilexerbatch_receivers_isbase = false;
    mutable bool qscilexerbatch_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerBatch() : QsciLexerBatch(){};
    VirtualQsciLexerBatch(QObject* parent) : QsciLexerBatch(parent){};

    ~VirtualQsciLexerBatch() {
        qscilexerbatch_metacall_callback = nullptr;
        qscilexerbatch_language_callback = nullptr;
        qscilexerbatch_lexer_callback = nullptr;
        qscilexerbatch_lexerid_callback = nullptr;
        qscilexerbatch_autocompletionfillups_callback = nullptr;
        qscilexerbatch_autocompletionwordseparators_callback = nullptr;
        qscilexerbatch_blockend_callback = nullptr;
        qscilexerbatch_blocklookback_callback = nullptr;
        qscilexerbatch_blockstart_callback = nullptr;
        qscilexerbatch_blockstartkeyword_callback = nullptr;
        qscilexerbatch_bracestyle_callback = nullptr;
        qscilexerbatch_casesensitive_callback = nullptr;
        qscilexerbatch_color_callback = nullptr;
        qscilexerbatch_eolfill_callback = nullptr;
        qscilexerbatch_font_callback = nullptr;
        qscilexerbatch_indentationguideview_callback = nullptr;
        qscilexerbatch_keywords_callback = nullptr;
        qscilexerbatch_defaultstyle_callback = nullptr;
        qscilexerbatch_description_callback = nullptr;
        qscilexerbatch_paper_callback = nullptr;
        qscilexerbatch_defaultcolorwithstyle_callback = nullptr;
        qscilexerbatch_defaulteolfill_callback = nullptr;
        qscilexerbatch_defaultfontwithstyle_callback = nullptr;
        qscilexerbatch_defaultpaperwithstyle_callback = nullptr;
        qscilexerbatch_seteditor_callback = nullptr;
        qscilexerbatch_refreshproperties_callback = nullptr;
        qscilexerbatch_stylebitsneeded_callback = nullptr;
        qscilexerbatch_wordcharacters_callback = nullptr;
        qscilexerbatch_setautoindentstyle_callback = nullptr;
        qscilexerbatch_setcolor_callback = nullptr;
        qscilexerbatch_seteolfill_callback = nullptr;
        qscilexerbatch_setfont_callback = nullptr;
        qscilexerbatch_setpaper_callback = nullptr;
        qscilexerbatch_readproperties_callback = nullptr;
        qscilexerbatch_writeproperties_callback = nullptr;
        qscilexerbatch_event_callback = nullptr;
        qscilexerbatch_eventfilter_callback = nullptr;
        qscilexerbatch_timerevent_callback = nullptr;
        qscilexerbatch_childevent_callback = nullptr;
        qscilexerbatch_customevent_callback = nullptr;
        qscilexerbatch_connectnotify_callback = nullptr;
        qscilexerbatch_disconnectnotify_callback = nullptr;
        qscilexerbatch_sender_callback = nullptr;
        qscilexerbatch_sendersignalindex_callback = nullptr;
        qscilexerbatch_receivers_callback = nullptr;
        qscilexerbatch_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerBatch_Metacall_Callback(QsciLexerBatch_Metacall_Callback cb) { qscilexerbatch_metacall_callback = cb; }
    void setQsciLexerBatch_Language_Callback(QsciLexerBatch_Language_Callback cb) { qscilexerbatch_language_callback = cb; }
    void setQsciLexerBatch_Lexer_Callback(QsciLexerBatch_Lexer_Callback cb) { qscilexerbatch_lexer_callback = cb; }
    void setQsciLexerBatch_LexerId_Callback(QsciLexerBatch_LexerId_Callback cb) { qscilexerbatch_lexerid_callback = cb; }
    void setQsciLexerBatch_AutoCompletionFillups_Callback(QsciLexerBatch_AutoCompletionFillups_Callback cb) { qscilexerbatch_autocompletionfillups_callback = cb; }
    void setQsciLexerBatch_AutoCompletionWordSeparators_Callback(QsciLexerBatch_AutoCompletionWordSeparators_Callback cb) { qscilexerbatch_autocompletionwordseparators_callback = cb; }
    void setQsciLexerBatch_BlockEnd_Callback(QsciLexerBatch_BlockEnd_Callback cb) { qscilexerbatch_blockend_callback = cb; }
    void setQsciLexerBatch_BlockLookback_Callback(QsciLexerBatch_BlockLookback_Callback cb) { qscilexerbatch_blocklookback_callback = cb; }
    void setQsciLexerBatch_BlockStart_Callback(QsciLexerBatch_BlockStart_Callback cb) { qscilexerbatch_blockstart_callback = cb; }
    void setQsciLexerBatch_BlockStartKeyword_Callback(QsciLexerBatch_BlockStartKeyword_Callback cb) { qscilexerbatch_blockstartkeyword_callback = cb; }
    void setQsciLexerBatch_BraceStyle_Callback(QsciLexerBatch_BraceStyle_Callback cb) { qscilexerbatch_bracestyle_callback = cb; }
    void setQsciLexerBatch_CaseSensitive_Callback(QsciLexerBatch_CaseSensitive_Callback cb) { qscilexerbatch_casesensitive_callback = cb; }
    void setQsciLexerBatch_Color_Callback(QsciLexerBatch_Color_Callback cb) { qscilexerbatch_color_callback = cb; }
    void setQsciLexerBatch_EolFill_Callback(QsciLexerBatch_EolFill_Callback cb) { qscilexerbatch_eolfill_callback = cb; }
    void setQsciLexerBatch_Font_Callback(QsciLexerBatch_Font_Callback cb) { qscilexerbatch_font_callback = cb; }
    void setQsciLexerBatch_IndentationGuideView_Callback(QsciLexerBatch_IndentationGuideView_Callback cb) { qscilexerbatch_indentationguideview_callback = cb; }
    void setQsciLexerBatch_Keywords_Callback(QsciLexerBatch_Keywords_Callback cb) { qscilexerbatch_keywords_callback = cb; }
    void setQsciLexerBatch_DefaultStyle_Callback(QsciLexerBatch_DefaultStyle_Callback cb) { qscilexerbatch_defaultstyle_callback = cb; }
    void setQsciLexerBatch_Description_Callback(QsciLexerBatch_Description_Callback cb) { qscilexerbatch_description_callback = cb; }
    void setQsciLexerBatch_Paper_Callback(QsciLexerBatch_Paper_Callback cb) { qscilexerbatch_paper_callback = cb; }
    void setQsciLexerBatch_DefaultColorWithStyle_Callback(QsciLexerBatch_DefaultColorWithStyle_Callback cb) { qscilexerbatch_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerBatch_DefaultEolFill_Callback(QsciLexerBatch_DefaultEolFill_Callback cb) { qscilexerbatch_defaulteolfill_callback = cb; }
    void setQsciLexerBatch_DefaultFontWithStyle_Callback(QsciLexerBatch_DefaultFontWithStyle_Callback cb) { qscilexerbatch_defaultfontwithstyle_callback = cb; }
    void setQsciLexerBatch_DefaultPaperWithStyle_Callback(QsciLexerBatch_DefaultPaperWithStyle_Callback cb) { qscilexerbatch_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerBatch_SetEditor_Callback(QsciLexerBatch_SetEditor_Callback cb) { qscilexerbatch_seteditor_callback = cb; }
    void setQsciLexerBatch_RefreshProperties_Callback(QsciLexerBatch_RefreshProperties_Callback cb) { qscilexerbatch_refreshproperties_callback = cb; }
    void setQsciLexerBatch_StyleBitsNeeded_Callback(QsciLexerBatch_StyleBitsNeeded_Callback cb) { qscilexerbatch_stylebitsneeded_callback = cb; }
    void setQsciLexerBatch_WordCharacters_Callback(QsciLexerBatch_WordCharacters_Callback cb) { qscilexerbatch_wordcharacters_callback = cb; }
    void setQsciLexerBatch_SetAutoIndentStyle_Callback(QsciLexerBatch_SetAutoIndentStyle_Callback cb) { qscilexerbatch_setautoindentstyle_callback = cb; }
    void setQsciLexerBatch_SetColor_Callback(QsciLexerBatch_SetColor_Callback cb) { qscilexerbatch_setcolor_callback = cb; }
    void setQsciLexerBatch_SetEolFill_Callback(QsciLexerBatch_SetEolFill_Callback cb) { qscilexerbatch_seteolfill_callback = cb; }
    void setQsciLexerBatch_SetFont_Callback(QsciLexerBatch_SetFont_Callback cb) { qscilexerbatch_setfont_callback = cb; }
    void setQsciLexerBatch_SetPaper_Callback(QsciLexerBatch_SetPaper_Callback cb) { qscilexerbatch_setpaper_callback = cb; }
    void setQsciLexerBatch_ReadProperties_Callback(QsciLexerBatch_ReadProperties_Callback cb) { qscilexerbatch_readproperties_callback = cb; }
    void setQsciLexerBatch_WriteProperties_Callback(QsciLexerBatch_WriteProperties_Callback cb) { qscilexerbatch_writeproperties_callback = cb; }
    void setQsciLexerBatch_Event_Callback(QsciLexerBatch_Event_Callback cb) { qscilexerbatch_event_callback = cb; }
    void setQsciLexerBatch_EventFilter_Callback(QsciLexerBatch_EventFilter_Callback cb) { qscilexerbatch_eventfilter_callback = cb; }
    void setQsciLexerBatch_TimerEvent_Callback(QsciLexerBatch_TimerEvent_Callback cb) { qscilexerbatch_timerevent_callback = cb; }
    void setQsciLexerBatch_ChildEvent_Callback(QsciLexerBatch_ChildEvent_Callback cb) { qscilexerbatch_childevent_callback = cb; }
    void setQsciLexerBatch_CustomEvent_Callback(QsciLexerBatch_CustomEvent_Callback cb) { qscilexerbatch_customevent_callback = cb; }
    void setQsciLexerBatch_ConnectNotify_Callback(QsciLexerBatch_ConnectNotify_Callback cb) { qscilexerbatch_connectnotify_callback = cb; }
    void setQsciLexerBatch_DisconnectNotify_Callback(QsciLexerBatch_DisconnectNotify_Callback cb) { qscilexerbatch_disconnectnotify_callback = cb; }
    void setQsciLexerBatch_Sender_Callback(QsciLexerBatch_Sender_Callback cb) { qscilexerbatch_sender_callback = cb; }
    void setQsciLexerBatch_SenderSignalIndex_Callback(QsciLexerBatch_SenderSignalIndex_Callback cb) { qscilexerbatch_sendersignalindex_callback = cb; }
    void setQsciLexerBatch_Receivers_Callback(QsciLexerBatch_Receivers_Callback cb) { qscilexerbatch_receivers_callback = cb; }
    void setQsciLexerBatch_IsSignalConnected_Callback(QsciLexerBatch_IsSignalConnected_Callback cb) { qscilexerbatch_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerBatch_Metacall_IsBase(bool value) const { qscilexerbatch_metacall_isbase = value; }
    void setQsciLexerBatch_Language_IsBase(bool value) const { qscilexerbatch_language_isbase = value; }
    void setQsciLexerBatch_Lexer_IsBase(bool value) const { qscilexerbatch_lexer_isbase = value; }
    void setQsciLexerBatch_LexerId_IsBase(bool value) const { qscilexerbatch_lexerid_isbase = value; }
    void setQsciLexerBatch_AutoCompletionFillups_IsBase(bool value) const { qscilexerbatch_autocompletionfillups_isbase = value; }
    void setQsciLexerBatch_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerbatch_autocompletionwordseparators_isbase = value; }
    void setQsciLexerBatch_BlockEnd_IsBase(bool value) const { qscilexerbatch_blockend_isbase = value; }
    void setQsciLexerBatch_BlockLookback_IsBase(bool value) const { qscilexerbatch_blocklookback_isbase = value; }
    void setQsciLexerBatch_BlockStart_IsBase(bool value) const { qscilexerbatch_blockstart_isbase = value; }
    void setQsciLexerBatch_BlockStartKeyword_IsBase(bool value) const { qscilexerbatch_blockstartkeyword_isbase = value; }
    void setQsciLexerBatch_BraceStyle_IsBase(bool value) const { qscilexerbatch_bracestyle_isbase = value; }
    void setQsciLexerBatch_CaseSensitive_IsBase(bool value) const { qscilexerbatch_casesensitive_isbase = value; }
    void setQsciLexerBatch_Color_IsBase(bool value) const { qscilexerbatch_color_isbase = value; }
    void setQsciLexerBatch_EolFill_IsBase(bool value) const { qscilexerbatch_eolfill_isbase = value; }
    void setQsciLexerBatch_Font_IsBase(bool value) const { qscilexerbatch_font_isbase = value; }
    void setQsciLexerBatch_IndentationGuideView_IsBase(bool value) const { qscilexerbatch_indentationguideview_isbase = value; }
    void setQsciLexerBatch_Keywords_IsBase(bool value) const { qscilexerbatch_keywords_isbase = value; }
    void setQsciLexerBatch_DefaultStyle_IsBase(bool value) const { qscilexerbatch_defaultstyle_isbase = value; }
    void setQsciLexerBatch_Description_IsBase(bool value) const { qscilexerbatch_description_isbase = value; }
    void setQsciLexerBatch_Paper_IsBase(bool value) const { qscilexerbatch_paper_isbase = value; }
    void setQsciLexerBatch_DefaultColorWithStyle_IsBase(bool value) const { qscilexerbatch_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerBatch_DefaultEolFill_IsBase(bool value) const { qscilexerbatch_defaulteolfill_isbase = value; }
    void setQsciLexerBatch_DefaultFontWithStyle_IsBase(bool value) const { qscilexerbatch_defaultfontwithstyle_isbase = value; }
    void setQsciLexerBatch_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerbatch_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerBatch_SetEditor_IsBase(bool value) const { qscilexerbatch_seteditor_isbase = value; }
    void setQsciLexerBatch_RefreshProperties_IsBase(bool value) const { qscilexerbatch_refreshproperties_isbase = value; }
    void setQsciLexerBatch_StyleBitsNeeded_IsBase(bool value) const { qscilexerbatch_stylebitsneeded_isbase = value; }
    void setQsciLexerBatch_WordCharacters_IsBase(bool value) const { qscilexerbatch_wordcharacters_isbase = value; }
    void setQsciLexerBatch_SetAutoIndentStyle_IsBase(bool value) const { qscilexerbatch_setautoindentstyle_isbase = value; }
    void setQsciLexerBatch_SetColor_IsBase(bool value) const { qscilexerbatch_setcolor_isbase = value; }
    void setQsciLexerBatch_SetEolFill_IsBase(bool value) const { qscilexerbatch_seteolfill_isbase = value; }
    void setQsciLexerBatch_SetFont_IsBase(bool value) const { qscilexerbatch_setfont_isbase = value; }
    void setQsciLexerBatch_SetPaper_IsBase(bool value) const { qscilexerbatch_setpaper_isbase = value; }
    void setQsciLexerBatch_ReadProperties_IsBase(bool value) const { qscilexerbatch_readproperties_isbase = value; }
    void setQsciLexerBatch_WriteProperties_IsBase(bool value) const { qscilexerbatch_writeproperties_isbase = value; }
    void setQsciLexerBatch_Event_IsBase(bool value) const { qscilexerbatch_event_isbase = value; }
    void setQsciLexerBatch_EventFilter_IsBase(bool value) const { qscilexerbatch_eventfilter_isbase = value; }
    void setQsciLexerBatch_TimerEvent_IsBase(bool value) const { qscilexerbatch_timerevent_isbase = value; }
    void setQsciLexerBatch_ChildEvent_IsBase(bool value) const { qscilexerbatch_childevent_isbase = value; }
    void setQsciLexerBatch_CustomEvent_IsBase(bool value) const { qscilexerbatch_customevent_isbase = value; }
    void setQsciLexerBatch_ConnectNotify_IsBase(bool value) const { qscilexerbatch_connectnotify_isbase = value; }
    void setQsciLexerBatch_DisconnectNotify_IsBase(bool value) const { qscilexerbatch_disconnectnotify_isbase = value; }
    void setQsciLexerBatch_Sender_IsBase(bool value) const { qscilexerbatch_sender_isbase = value; }
    void setQsciLexerBatch_SenderSignalIndex_IsBase(bool value) const { qscilexerbatch_sendersignalindex_isbase = value; }
    void setQsciLexerBatch_Receivers_IsBase(bool value) const { qscilexerbatch_receivers_isbase = value; }
    void setQsciLexerBatch_IsSignalConnected_IsBase(bool value) const { qscilexerbatch_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerbatch_metacall_isbase) {
            qscilexerbatch_metacall_isbase = false;
            return QsciLexerBatch::qt_metacall(param1, param2, param3);
        } else if (qscilexerbatch_metacall_callback != nullptr) {
            return qscilexerbatch_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerBatch::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerbatch_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerbatch_lexer_isbase) {
            qscilexerbatch_lexer_isbase = false;
            return QsciLexerBatch::lexer();
        } else if (qscilexerbatch_lexer_callback != nullptr) {
            return qscilexerbatch_lexer_callback();
        } else {
            return QsciLexerBatch::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerbatch_lexerid_isbase) {
            qscilexerbatch_lexerid_isbase = false;
            return QsciLexerBatch::lexerId();
        } else if (qscilexerbatch_lexerid_callback != nullptr) {
            return qscilexerbatch_lexerid_callback();
        } else {
            return QsciLexerBatch::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerbatch_autocompletionfillups_isbase) {
            qscilexerbatch_autocompletionfillups_isbase = false;
            return QsciLexerBatch::autoCompletionFillups();
        } else if (qscilexerbatch_autocompletionfillups_callback != nullptr) {
            return qscilexerbatch_autocompletionfillups_callback();
        } else {
            return QsciLexerBatch::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerbatch_autocompletionwordseparators_isbase) {
            qscilexerbatch_autocompletionwordseparators_isbase = false;
            return QsciLexerBatch::autoCompletionWordSeparators();
        } else if (qscilexerbatch_autocompletionwordseparators_callback != nullptr) {
            return qscilexerbatch_autocompletionwordseparators_callback();
        } else {
            return QsciLexerBatch::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerbatch_blockend_isbase) {
            qscilexerbatch_blockend_isbase = false;
            return QsciLexerBatch::blockEnd(style);
        } else if (qscilexerbatch_blockend_callback != nullptr) {
            return qscilexerbatch_blockend_callback(this, style);
        } else {
            return QsciLexerBatch::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerbatch_blocklookback_isbase) {
            qscilexerbatch_blocklookback_isbase = false;
            return QsciLexerBatch::blockLookback();
        } else if (qscilexerbatch_blocklookback_callback != nullptr) {
            return qscilexerbatch_blocklookback_callback();
        } else {
            return QsciLexerBatch::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerbatch_blockstart_isbase) {
            qscilexerbatch_blockstart_isbase = false;
            return QsciLexerBatch::blockStart(style);
        } else if (qscilexerbatch_blockstart_callback != nullptr) {
            return qscilexerbatch_blockstart_callback(this, style);
        } else {
            return QsciLexerBatch::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerbatch_blockstartkeyword_isbase) {
            qscilexerbatch_blockstartkeyword_isbase = false;
            return QsciLexerBatch::blockStartKeyword(style);
        } else if (qscilexerbatch_blockstartkeyword_callback != nullptr) {
            return qscilexerbatch_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerBatch::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerbatch_bracestyle_isbase) {
            qscilexerbatch_bracestyle_isbase = false;
            return QsciLexerBatch::braceStyle();
        } else if (qscilexerbatch_bracestyle_callback != nullptr) {
            return qscilexerbatch_bracestyle_callback();
        } else {
            return QsciLexerBatch::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerbatch_casesensitive_isbase) {
            qscilexerbatch_casesensitive_isbase = false;
            return QsciLexerBatch::caseSensitive();
        } else if (qscilexerbatch_casesensitive_callback != nullptr) {
            return qscilexerbatch_casesensitive_callback();
        } else {
            return QsciLexerBatch::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerbatch_color_isbase) {
            qscilexerbatch_color_isbase = false;
            return QsciLexerBatch::color(style);
        } else if (qscilexerbatch_color_callback != nullptr) {
            return qscilexerbatch_color_callback(this, style);
        } else {
            return QsciLexerBatch::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerbatch_eolfill_isbase) {
            qscilexerbatch_eolfill_isbase = false;
            return QsciLexerBatch::eolFill(style);
        } else if (qscilexerbatch_eolfill_callback != nullptr) {
            return qscilexerbatch_eolfill_callback(this, style);
        } else {
            return QsciLexerBatch::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerbatch_font_isbase) {
            qscilexerbatch_font_isbase = false;
            return QsciLexerBatch::font(style);
        } else if (qscilexerbatch_font_callback != nullptr) {
            return qscilexerbatch_font_callback(this, style);
        } else {
            return QsciLexerBatch::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerbatch_indentationguideview_isbase) {
            qscilexerbatch_indentationguideview_isbase = false;
            return QsciLexerBatch::indentationGuideView();
        } else if (qscilexerbatch_indentationguideview_callback != nullptr) {
            return qscilexerbatch_indentationguideview_callback();
        } else {
            return QsciLexerBatch::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerbatch_keywords_isbase) {
            qscilexerbatch_keywords_isbase = false;
            return QsciLexerBatch::keywords(set);
        } else if (qscilexerbatch_keywords_callback != nullptr) {
            return qscilexerbatch_keywords_callback(this, set);
        } else {
            return QsciLexerBatch::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerbatch_defaultstyle_isbase) {
            qscilexerbatch_defaultstyle_isbase = false;
            return QsciLexerBatch::defaultStyle();
        } else if (qscilexerbatch_defaultstyle_callback != nullptr) {
            return qscilexerbatch_defaultstyle_callback();
        } else {
            return QsciLexerBatch::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerbatch_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerbatch_paper_isbase) {
            qscilexerbatch_paper_isbase = false;
            return QsciLexerBatch::paper(style);
        } else if (qscilexerbatch_paper_callback != nullptr) {
            return qscilexerbatch_paper_callback(this, style);
        } else {
            return QsciLexerBatch::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerbatch_defaultcolorwithstyle_isbase) {
            qscilexerbatch_defaultcolorwithstyle_isbase = false;
            return QsciLexerBatch::defaultColor(style);
        } else if (qscilexerbatch_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerbatch_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerBatch::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerbatch_defaulteolfill_isbase) {
            qscilexerbatch_defaulteolfill_isbase = false;
            return QsciLexerBatch::defaultEolFill(style);
        } else if (qscilexerbatch_defaulteolfill_callback != nullptr) {
            return qscilexerbatch_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerBatch::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerbatch_defaultfontwithstyle_isbase) {
            qscilexerbatch_defaultfontwithstyle_isbase = false;
            return QsciLexerBatch::defaultFont(style);
        } else if (qscilexerbatch_defaultfontwithstyle_callback != nullptr) {
            return qscilexerbatch_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerBatch::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerbatch_defaultpaperwithstyle_isbase) {
            qscilexerbatch_defaultpaperwithstyle_isbase = false;
            return QsciLexerBatch::defaultPaper(style);
        } else if (qscilexerbatch_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerbatch_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerBatch::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerbatch_seteditor_isbase) {
            qscilexerbatch_seteditor_isbase = false;
            QsciLexerBatch::setEditor(editor);
        } else if (qscilexerbatch_seteditor_callback != nullptr) {
            qscilexerbatch_seteditor_callback(this, editor);
        } else {
            QsciLexerBatch::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerbatch_refreshproperties_isbase) {
            qscilexerbatch_refreshproperties_isbase = false;
            QsciLexerBatch::refreshProperties();
        } else if (qscilexerbatch_refreshproperties_callback != nullptr) {
            qscilexerbatch_refreshproperties_callback();
        } else {
            QsciLexerBatch::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerbatch_stylebitsneeded_isbase) {
            qscilexerbatch_stylebitsneeded_isbase = false;
            return QsciLexerBatch::styleBitsNeeded();
        } else if (qscilexerbatch_stylebitsneeded_callback != nullptr) {
            return qscilexerbatch_stylebitsneeded_callback();
        } else {
            return QsciLexerBatch::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerbatch_wordcharacters_isbase) {
            qscilexerbatch_wordcharacters_isbase = false;
            return QsciLexerBatch::wordCharacters();
        } else if (qscilexerbatch_wordcharacters_callback != nullptr) {
            return qscilexerbatch_wordcharacters_callback();
        } else {
            return QsciLexerBatch::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerbatch_setautoindentstyle_isbase) {
            qscilexerbatch_setautoindentstyle_isbase = false;
            QsciLexerBatch::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerbatch_setautoindentstyle_callback != nullptr) {
            qscilexerbatch_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerBatch::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerbatch_setcolor_isbase) {
            qscilexerbatch_setcolor_isbase = false;
            QsciLexerBatch::setColor(c, style);
        } else if (qscilexerbatch_setcolor_callback != nullptr) {
            qscilexerbatch_setcolor_callback(this, c, style);
        } else {
            QsciLexerBatch::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerbatch_seteolfill_isbase) {
            qscilexerbatch_seteolfill_isbase = false;
            QsciLexerBatch::setEolFill(eoffill, style);
        } else if (qscilexerbatch_seteolfill_callback != nullptr) {
            qscilexerbatch_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerBatch::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerbatch_setfont_isbase) {
            qscilexerbatch_setfont_isbase = false;
            QsciLexerBatch::setFont(f, style);
        } else if (qscilexerbatch_setfont_callback != nullptr) {
            qscilexerbatch_setfont_callback(this, f, style);
        } else {
            QsciLexerBatch::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerbatch_setpaper_isbase) {
            qscilexerbatch_setpaper_isbase = false;
            QsciLexerBatch::setPaper(c, style);
        } else if (qscilexerbatch_setpaper_callback != nullptr) {
            qscilexerbatch_setpaper_callback(this, c, style);
        } else {
            QsciLexerBatch::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerbatch_readproperties_isbase) {
            qscilexerbatch_readproperties_isbase = false;
            return QsciLexerBatch::readProperties(qs, prefix);
        } else if (qscilexerbatch_readproperties_callback != nullptr) {
            return qscilexerbatch_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerBatch::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerbatch_writeproperties_isbase) {
            qscilexerbatch_writeproperties_isbase = false;
            return QsciLexerBatch::writeProperties(qs, prefix);
        } else if (qscilexerbatch_writeproperties_callback != nullptr) {
            return qscilexerbatch_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerBatch::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerbatch_event_isbase) {
            qscilexerbatch_event_isbase = false;
            return QsciLexerBatch::event(event);
        } else if (qscilexerbatch_event_callback != nullptr) {
            return qscilexerbatch_event_callback(this, event);
        } else {
            return QsciLexerBatch::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerbatch_eventfilter_isbase) {
            qscilexerbatch_eventfilter_isbase = false;
            return QsciLexerBatch::eventFilter(watched, event);
        } else if (qscilexerbatch_eventfilter_callback != nullptr) {
            return qscilexerbatch_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerBatch::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerbatch_timerevent_isbase) {
            qscilexerbatch_timerevent_isbase = false;
            QsciLexerBatch::timerEvent(event);
        } else if (qscilexerbatch_timerevent_callback != nullptr) {
            qscilexerbatch_timerevent_callback(this, event);
        } else {
            QsciLexerBatch::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerbatch_childevent_isbase) {
            qscilexerbatch_childevent_isbase = false;
            QsciLexerBatch::childEvent(event);
        } else if (qscilexerbatch_childevent_callback != nullptr) {
            qscilexerbatch_childevent_callback(this, event);
        } else {
            QsciLexerBatch::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerbatch_customevent_isbase) {
            qscilexerbatch_customevent_isbase = false;
            QsciLexerBatch::customEvent(event);
        } else if (qscilexerbatch_customevent_callback != nullptr) {
            qscilexerbatch_customevent_callback(this, event);
        } else {
            QsciLexerBatch::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerbatch_connectnotify_isbase) {
            qscilexerbatch_connectnotify_isbase = false;
            QsciLexerBatch::connectNotify(signal);
        } else if (qscilexerbatch_connectnotify_callback != nullptr) {
            qscilexerbatch_connectnotify_callback(this, signal);
        } else {
            QsciLexerBatch::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerbatch_disconnectnotify_isbase) {
            qscilexerbatch_disconnectnotify_isbase = false;
            QsciLexerBatch::disconnectNotify(signal);
        } else if (qscilexerbatch_disconnectnotify_callback != nullptr) {
            qscilexerbatch_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerBatch::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerbatch_sender_isbase) {
            qscilexerbatch_sender_isbase = false;
            return QsciLexerBatch::sender();
        } else if (qscilexerbatch_sender_callback != nullptr) {
            return qscilexerbatch_sender_callback();
        } else {
            return QsciLexerBatch::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerbatch_sendersignalindex_isbase) {
            qscilexerbatch_sendersignalindex_isbase = false;
            return QsciLexerBatch::senderSignalIndex();
        } else if (qscilexerbatch_sendersignalindex_callback != nullptr) {
            return qscilexerbatch_sendersignalindex_callback();
        } else {
            return QsciLexerBatch::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerbatch_receivers_isbase) {
            qscilexerbatch_receivers_isbase = false;
            return QsciLexerBatch::receivers(signal);
        } else if (qscilexerbatch_receivers_callback != nullptr) {
            return qscilexerbatch_receivers_callback(this, signal);
        } else {
            return QsciLexerBatch::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerbatch_issignalconnected_isbase) {
            qscilexerbatch_issignalconnected_isbase = false;
            return QsciLexerBatch::isSignalConnected(signal);
        } else if (qscilexerbatch_issignalconnected_callback != nullptr) {
            return qscilexerbatch_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerBatch::isSignalConnected(signal);
        }
    }
};

#endif
