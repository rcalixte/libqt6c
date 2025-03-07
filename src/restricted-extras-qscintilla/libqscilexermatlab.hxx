#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERMATLAB_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERMATLAB_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerMatlab so that we can call protected methods
class VirtualQsciLexerMatlab : public QsciLexerMatlab {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerMatlab_Metacall_Callback = int (*)(QsciLexerMatlab*, QMetaObject::Call, int, void**);
    using QsciLexerMatlab_Language_Callback = const char* (*)();
    using QsciLexerMatlab_Lexer_Callback = const char* (*)();
    using QsciLexerMatlab_LexerId_Callback = int (*)();
    using QsciLexerMatlab_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerMatlab_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerMatlab_BlockEnd_Callback = const char* (*)(const QsciLexerMatlab*, int*);
    using QsciLexerMatlab_BlockLookback_Callback = int (*)();
    using QsciLexerMatlab_BlockStart_Callback = const char* (*)(const QsciLexerMatlab*, int*);
    using QsciLexerMatlab_BlockStartKeyword_Callback = const char* (*)(const QsciLexerMatlab*, int*);
    using QsciLexerMatlab_BraceStyle_Callback = int (*)();
    using QsciLexerMatlab_CaseSensitive_Callback = bool (*)();
    using QsciLexerMatlab_Color_Callback = QColor (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_EolFill_Callback = bool (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_Font_Callback = QFont (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_IndentationGuideView_Callback = int (*)();
    using QsciLexerMatlab_Keywords_Callback = const char* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultStyle_Callback = int (*)();
    using QsciLexerMatlab_Description_Callback = QString (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_Paper_Callback = QColor (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultEolFill_Callback = bool (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_SetEditor_Callback = void (*)(QsciLexerMatlab*, QsciScintilla*);
    using QsciLexerMatlab_RefreshProperties_Callback = void (*)();
    using QsciLexerMatlab_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerMatlab_WordCharacters_Callback = const char* (*)();
    using QsciLexerMatlab_SetAutoIndentStyle_Callback = void (*)(QsciLexerMatlab*, int);
    using QsciLexerMatlab_SetColor_Callback = void (*)(QsciLexerMatlab*, const QColor&, int);
    using QsciLexerMatlab_SetEolFill_Callback = void (*)(QsciLexerMatlab*, bool, int);
    using QsciLexerMatlab_SetFont_Callback = void (*)(QsciLexerMatlab*, const QFont&, int);
    using QsciLexerMatlab_SetPaper_Callback = void (*)(QsciLexerMatlab*, const QColor&, int);
    using QsciLexerMatlab_ReadProperties_Callback = bool (*)(QsciLexerMatlab*, QSettings&, const QString&);
    using QsciLexerMatlab_WriteProperties_Callback = bool (*)(const QsciLexerMatlab*, QSettings&, const QString&);
    using QsciLexerMatlab_Event_Callback = bool (*)(QsciLexerMatlab*, QEvent*);
    using QsciLexerMatlab_EventFilter_Callback = bool (*)(QsciLexerMatlab*, QObject*, QEvent*);
    using QsciLexerMatlab_TimerEvent_Callback = void (*)(QsciLexerMatlab*, QTimerEvent*);
    using QsciLexerMatlab_ChildEvent_Callback = void (*)(QsciLexerMatlab*, QChildEvent*);
    using QsciLexerMatlab_CustomEvent_Callback = void (*)(QsciLexerMatlab*, QEvent*);
    using QsciLexerMatlab_ConnectNotify_Callback = void (*)(QsciLexerMatlab*, const QMetaMethod&);
    using QsciLexerMatlab_DisconnectNotify_Callback = void (*)(QsciLexerMatlab*, const QMetaMethod&);
    using QsciLexerMatlab_Sender_Callback = QObject* (*)();
    using QsciLexerMatlab_SenderSignalIndex_Callback = int (*)();
    using QsciLexerMatlab_Receivers_Callback = int (*)(const QsciLexerMatlab*, const char*);
    using QsciLexerMatlab_IsSignalConnected_Callback = bool (*)(const QsciLexerMatlab*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerMatlab_Metacall_Callback qscilexermatlab_metacall_callback = nullptr;
    QsciLexerMatlab_Language_Callback qscilexermatlab_language_callback = nullptr;
    QsciLexerMatlab_Lexer_Callback qscilexermatlab_lexer_callback = nullptr;
    QsciLexerMatlab_LexerId_Callback qscilexermatlab_lexerid_callback = nullptr;
    QsciLexerMatlab_AutoCompletionFillups_Callback qscilexermatlab_autocompletionfillups_callback = nullptr;
    QsciLexerMatlab_AutoCompletionWordSeparators_Callback qscilexermatlab_autocompletionwordseparators_callback = nullptr;
    QsciLexerMatlab_BlockEnd_Callback qscilexermatlab_blockend_callback = nullptr;
    QsciLexerMatlab_BlockLookback_Callback qscilexermatlab_blocklookback_callback = nullptr;
    QsciLexerMatlab_BlockStart_Callback qscilexermatlab_blockstart_callback = nullptr;
    QsciLexerMatlab_BlockStartKeyword_Callback qscilexermatlab_blockstartkeyword_callback = nullptr;
    QsciLexerMatlab_BraceStyle_Callback qscilexermatlab_bracestyle_callback = nullptr;
    QsciLexerMatlab_CaseSensitive_Callback qscilexermatlab_casesensitive_callback = nullptr;
    QsciLexerMatlab_Color_Callback qscilexermatlab_color_callback = nullptr;
    QsciLexerMatlab_EolFill_Callback qscilexermatlab_eolfill_callback = nullptr;
    QsciLexerMatlab_Font_Callback qscilexermatlab_font_callback = nullptr;
    QsciLexerMatlab_IndentationGuideView_Callback qscilexermatlab_indentationguideview_callback = nullptr;
    QsciLexerMatlab_Keywords_Callback qscilexermatlab_keywords_callback = nullptr;
    QsciLexerMatlab_DefaultStyle_Callback qscilexermatlab_defaultstyle_callback = nullptr;
    QsciLexerMatlab_Description_Callback qscilexermatlab_description_callback = nullptr;
    QsciLexerMatlab_Paper_Callback qscilexermatlab_paper_callback = nullptr;
    QsciLexerMatlab_DefaultColorWithStyle_Callback qscilexermatlab_defaultcolorwithstyle_callback = nullptr;
    QsciLexerMatlab_DefaultEolFill_Callback qscilexermatlab_defaulteolfill_callback = nullptr;
    QsciLexerMatlab_DefaultFontWithStyle_Callback qscilexermatlab_defaultfontwithstyle_callback = nullptr;
    QsciLexerMatlab_DefaultPaperWithStyle_Callback qscilexermatlab_defaultpaperwithstyle_callback = nullptr;
    QsciLexerMatlab_SetEditor_Callback qscilexermatlab_seteditor_callback = nullptr;
    QsciLexerMatlab_RefreshProperties_Callback qscilexermatlab_refreshproperties_callback = nullptr;
    QsciLexerMatlab_StyleBitsNeeded_Callback qscilexermatlab_stylebitsneeded_callback = nullptr;
    QsciLexerMatlab_WordCharacters_Callback qscilexermatlab_wordcharacters_callback = nullptr;
    QsciLexerMatlab_SetAutoIndentStyle_Callback qscilexermatlab_setautoindentstyle_callback = nullptr;
    QsciLexerMatlab_SetColor_Callback qscilexermatlab_setcolor_callback = nullptr;
    QsciLexerMatlab_SetEolFill_Callback qscilexermatlab_seteolfill_callback = nullptr;
    QsciLexerMatlab_SetFont_Callback qscilexermatlab_setfont_callback = nullptr;
    QsciLexerMatlab_SetPaper_Callback qscilexermatlab_setpaper_callback = nullptr;
    QsciLexerMatlab_ReadProperties_Callback qscilexermatlab_readproperties_callback = nullptr;
    QsciLexerMatlab_WriteProperties_Callback qscilexermatlab_writeproperties_callback = nullptr;
    QsciLexerMatlab_Event_Callback qscilexermatlab_event_callback = nullptr;
    QsciLexerMatlab_EventFilter_Callback qscilexermatlab_eventfilter_callback = nullptr;
    QsciLexerMatlab_TimerEvent_Callback qscilexermatlab_timerevent_callback = nullptr;
    QsciLexerMatlab_ChildEvent_Callback qscilexermatlab_childevent_callback = nullptr;
    QsciLexerMatlab_CustomEvent_Callback qscilexermatlab_customevent_callback = nullptr;
    QsciLexerMatlab_ConnectNotify_Callback qscilexermatlab_connectnotify_callback = nullptr;
    QsciLexerMatlab_DisconnectNotify_Callback qscilexermatlab_disconnectnotify_callback = nullptr;
    QsciLexerMatlab_Sender_Callback qscilexermatlab_sender_callback = nullptr;
    QsciLexerMatlab_SenderSignalIndex_Callback qscilexermatlab_sendersignalindex_callback = nullptr;
    QsciLexerMatlab_Receivers_Callback qscilexermatlab_receivers_callback = nullptr;
    QsciLexerMatlab_IsSignalConnected_Callback qscilexermatlab_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexermatlab_metacall_isbase = false;
    mutable bool qscilexermatlab_language_isbase = false;
    mutable bool qscilexermatlab_lexer_isbase = false;
    mutable bool qscilexermatlab_lexerid_isbase = false;
    mutable bool qscilexermatlab_autocompletionfillups_isbase = false;
    mutable bool qscilexermatlab_autocompletionwordseparators_isbase = false;
    mutable bool qscilexermatlab_blockend_isbase = false;
    mutable bool qscilexermatlab_blocklookback_isbase = false;
    mutable bool qscilexermatlab_blockstart_isbase = false;
    mutable bool qscilexermatlab_blockstartkeyword_isbase = false;
    mutable bool qscilexermatlab_bracestyle_isbase = false;
    mutable bool qscilexermatlab_casesensitive_isbase = false;
    mutable bool qscilexermatlab_color_isbase = false;
    mutable bool qscilexermatlab_eolfill_isbase = false;
    mutable bool qscilexermatlab_font_isbase = false;
    mutable bool qscilexermatlab_indentationguideview_isbase = false;
    mutable bool qscilexermatlab_keywords_isbase = false;
    mutable bool qscilexermatlab_defaultstyle_isbase = false;
    mutable bool qscilexermatlab_description_isbase = false;
    mutable bool qscilexermatlab_paper_isbase = false;
    mutable bool qscilexermatlab_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexermatlab_defaulteolfill_isbase = false;
    mutable bool qscilexermatlab_defaultfontwithstyle_isbase = false;
    mutable bool qscilexermatlab_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexermatlab_seteditor_isbase = false;
    mutable bool qscilexermatlab_refreshproperties_isbase = false;
    mutable bool qscilexermatlab_stylebitsneeded_isbase = false;
    mutable bool qscilexermatlab_wordcharacters_isbase = false;
    mutable bool qscilexermatlab_setautoindentstyle_isbase = false;
    mutable bool qscilexermatlab_setcolor_isbase = false;
    mutable bool qscilexermatlab_seteolfill_isbase = false;
    mutable bool qscilexermatlab_setfont_isbase = false;
    mutable bool qscilexermatlab_setpaper_isbase = false;
    mutable bool qscilexermatlab_readproperties_isbase = false;
    mutable bool qscilexermatlab_writeproperties_isbase = false;
    mutable bool qscilexermatlab_event_isbase = false;
    mutable bool qscilexermatlab_eventfilter_isbase = false;
    mutable bool qscilexermatlab_timerevent_isbase = false;
    mutable bool qscilexermatlab_childevent_isbase = false;
    mutable bool qscilexermatlab_customevent_isbase = false;
    mutable bool qscilexermatlab_connectnotify_isbase = false;
    mutable bool qscilexermatlab_disconnectnotify_isbase = false;
    mutable bool qscilexermatlab_sender_isbase = false;
    mutable bool qscilexermatlab_sendersignalindex_isbase = false;
    mutable bool qscilexermatlab_receivers_isbase = false;
    mutable bool qscilexermatlab_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerMatlab() : QsciLexerMatlab(){};
    VirtualQsciLexerMatlab(QObject* parent) : QsciLexerMatlab(parent){};

    ~VirtualQsciLexerMatlab() {
        qscilexermatlab_metacall_callback = nullptr;
        qscilexermatlab_language_callback = nullptr;
        qscilexermatlab_lexer_callback = nullptr;
        qscilexermatlab_lexerid_callback = nullptr;
        qscilexermatlab_autocompletionfillups_callback = nullptr;
        qscilexermatlab_autocompletionwordseparators_callback = nullptr;
        qscilexermatlab_blockend_callback = nullptr;
        qscilexermatlab_blocklookback_callback = nullptr;
        qscilexermatlab_blockstart_callback = nullptr;
        qscilexermatlab_blockstartkeyword_callback = nullptr;
        qscilexermatlab_bracestyle_callback = nullptr;
        qscilexermatlab_casesensitive_callback = nullptr;
        qscilexermatlab_color_callback = nullptr;
        qscilexermatlab_eolfill_callback = nullptr;
        qscilexermatlab_font_callback = nullptr;
        qscilexermatlab_indentationguideview_callback = nullptr;
        qscilexermatlab_keywords_callback = nullptr;
        qscilexermatlab_defaultstyle_callback = nullptr;
        qscilexermatlab_description_callback = nullptr;
        qscilexermatlab_paper_callback = nullptr;
        qscilexermatlab_defaultcolorwithstyle_callback = nullptr;
        qscilexermatlab_defaulteolfill_callback = nullptr;
        qscilexermatlab_defaultfontwithstyle_callback = nullptr;
        qscilexermatlab_defaultpaperwithstyle_callback = nullptr;
        qscilexermatlab_seteditor_callback = nullptr;
        qscilexermatlab_refreshproperties_callback = nullptr;
        qscilexermatlab_stylebitsneeded_callback = nullptr;
        qscilexermatlab_wordcharacters_callback = nullptr;
        qscilexermatlab_setautoindentstyle_callback = nullptr;
        qscilexermatlab_setcolor_callback = nullptr;
        qscilexermatlab_seteolfill_callback = nullptr;
        qscilexermatlab_setfont_callback = nullptr;
        qscilexermatlab_setpaper_callback = nullptr;
        qscilexermatlab_readproperties_callback = nullptr;
        qscilexermatlab_writeproperties_callback = nullptr;
        qscilexermatlab_event_callback = nullptr;
        qscilexermatlab_eventfilter_callback = nullptr;
        qscilexermatlab_timerevent_callback = nullptr;
        qscilexermatlab_childevent_callback = nullptr;
        qscilexermatlab_customevent_callback = nullptr;
        qscilexermatlab_connectnotify_callback = nullptr;
        qscilexermatlab_disconnectnotify_callback = nullptr;
        qscilexermatlab_sender_callback = nullptr;
        qscilexermatlab_sendersignalindex_callback = nullptr;
        qscilexermatlab_receivers_callback = nullptr;
        qscilexermatlab_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerMatlab_Metacall_Callback(QsciLexerMatlab_Metacall_Callback cb) { qscilexermatlab_metacall_callback = cb; }
    void setQsciLexerMatlab_Language_Callback(QsciLexerMatlab_Language_Callback cb) { qscilexermatlab_language_callback = cb; }
    void setQsciLexerMatlab_Lexer_Callback(QsciLexerMatlab_Lexer_Callback cb) { qscilexermatlab_lexer_callback = cb; }
    void setQsciLexerMatlab_LexerId_Callback(QsciLexerMatlab_LexerId_Callback cb) { qscilexermatlab_lexerid_callback = cb; }
    void setQsciLexerMatlab_AutoCompletionFillups_Callback(QsciLexerMatlab_AutoCompletionFillups_Callback cb) { qscilexermatlab_autocompletionfillups_callback = cb; }
    void setQsciLexerMatlab_AutoCompletionWordSeparators_Callback(QsciLexerMatlab_AutoCompletionWordSeparators_Callback cb) { qscilexermatlab_autocompletionwordseparators_callback = cb; }
    void setQsciLexerMatlab_BlockEnd_Callback(QsciLexerMatlab_BlockEnd_Callback cb) { qscilexermatlab_blockend_callback = cb; }
    void setQsciLexerMatlab_BlockLookback_Callback(QsciLexerMatlab_BlockLookback_Callback cb) { qscilexermatlab_blocklookback_callback = cb; }
    void setQsciLexerMatlab_BlockStart_Callback(QsciLexerMatlab_BlockStart_Callback cb) { qscilexermatlab_blockstart_callback = cb; }
    void setQsciLexerMatlab_BlockStartKeyword_Callback(QsciLexerMatlab_BlockStartKeyword_Callback cb) { qscilexermatlab_blockstartkeyword_callback = cb; }
    void setQsciLexerMatlab_BraceStyle_Callback(QsciLexerMatlab_BraceStyle_Callback cb) { qscilexermatlab_bracestyle_callback = cb; }
    void setQsciLexerMatlab_CaseSensitive_Callback(QsciLexerMatlab_CaseSensitive_Callback cb) { qscilexermatlab_casesensitive_callback = cb; }
    void setQsciLexerMatlab_Color_Callback(QsciLexerMatlab_Color_Callback cb) { qscilexermatlab_color_callback = cb; }
    void setQsciLexerMatlab_EolFill_Callback(QsciLexerMatlab_EolFill_Callback cb) { qscilexermatlab_eolfill_callback = cb; }
    void setQsciLexerMatlab_Font_Callback(QsciLexerMatlab_Font_Callback cb) { qscilexermatlab_font_callback = cb; }
    void setQsciLexerMatlab_IndentationGuideView_Callback(QsciLexerMatlab_IndentationGuideView_Callback cb) { qscilexermatlab_indentationguideview_callback = cb; }
    void setQsciLexerMatlab_Keywords_Callback(QsciLexerMatlab_Keywords_Callback cb) { qscilexermatlab_keywords_callback = cb; }
    void setQsciLexerMatlab_DefaultStyle_Callback(QsciLexerMatlab_DefaultStyle_Callback cb) { qscilexermatlab_defaultstyle_callback = cb; }
    void setQsciLexerMatlab_Description_Callback(QsciLexerMatlab_Description_Callback cb) { qscilexermatlab_description_callback = cb; }
    void setQsciLexerMatlab_Paper_Callback(QsciLexerMatlab_Paper_Callback cb) { qscilexermatlab_paper_callback = cb; }
    void setQsciLexerMatlab_DefaultColorWithStyle_Callback(QsciLexerMatlab_DefaultColorWithStyle_Callback cb) { qscilexermatlab_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerMatlab_DefaultEolFill_Callback(QsciLexerMatlab_DefaultEolFill_Callback cb) { qscilexermatlab_defaulteolfill_callback = cb; }
    void setQsciLexerMatlab_DefaultFontWithStyle_Callback(QsciLexerMatlab_DefaultFontWithStyle_Callback cb) { qscilexermatlab_defaultfontwithstyle_callback = cb; }
    void setQsciLexerMatlab_DefaultPaperWithStyle_Callback(QsciLexerMatlab_DefaultPaperWithStyle_Callback cb) { qscilexermatlab_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerMatlab_SetEditor_Callback(QsciLexerMatlab_SetEditor_Callback cb) { qscilexermatlab_seteditor_callback = cb; }
    void setQsciLexerMatlab_RefreshProperties_Callback(QsciLexerMatlab_RefreshProperties_Callback cb) { qscilexermatlab_refreshproperties_callback = cb; }
    void setQsciLexerMatlab_StyleBitsNeeded_Callback(QsciLexerMatlab_StyleBitsNeeded_Callback cb) { qscilexermatlab_stylebitsneeded_callback = cb; }
    void setQsciLexerMatlab_WordCharacters_Callback(QsciLexerMatlab_WordCharacters_Callback cb) { qscilexermatlab_wordcharacters_callback = cb; }
    void setQsciLexerMatlab_SetAutoIndentStyle_Callback(QsciLexerMatlab_SetAutoIndentStyle_Callback cb) { qscilexermatlab_setautoindentstyle_callback = cb; }
    void setQsciLexerMatlab_SetColor_Callback(QsciLexerMatlab_SetColor_Callback cb) { qscilexermatlab_setcolor_callback = cb; }
    void setQsciLexerMatlab_SetEolFill_Callback(QsciLexerMatlab_SetEolFill_Callback cb) { qscilexermatlab_seteolfill_callback = cb; }
    void setQsciLexerMatlab_SetFont_Callback(QsciLexerMatlab_SetFont_Callback cb) { qscilexermatlab_setfont_callback = cb; }
    void setQsciLexerMatlab_SetPaper_Callback(QsciLexerMatlab_SetPaper_Callback cb) { qscilexermatlab_setpaper_callback = cb; }
    void setQsciLexerMatlab_ReadProperties_Callback(QsciLexerMatlab_ReadProperties_Callback cb) { qscilexermatlab_readproperties_callback = cb; }
    void setQsciLexerMatlab_WriteProperties_Callback(QsciLexerMatlab_WriteProperties_Callback cb) { qscilexermatlab_writeproperties_callback = cb; }
    void setQsciLexerMatlab_Event_Callback(QsciLexerMatlab_Event_Callback cb) { qscilexermatlab_event_callback = cb; }
    void setQsciLexerMatlab_EventFilter_Callback(QsciLexerMatlab_EventFilter_Callback cb) { qscilexermatlab_eventfilter_callback = cb; }
    void setQsciLexerMatlab_TimerEvent_Callback(QsciLexerMatlab_TimerEvent_Callback cb) { qscilexermatlab_timerevent_callback = cb; }
    void setQsciLexerMatlab_ChildEvent_Callback(QsciLexerMatlab_ChildEvent_Callback cb) { qscilexermatlab_childevent_callback = cb; }
    void setQsciLexerMatlab_CustomEvent_Callback(QsciLexerMatlab_CustomEvent_Callback cb) { qscilexermatlab_customevent_callback = cb; }
    void setQsciLexerMatlab_ConnectNotify_Callback(QsciLexerMatlab_ConnectNotify_Callback cb) { qscilexermatlab_connectnotify_callback = cb; }
    void setQsciLexerMatlab_DisconnectNotify_Callback(QsciLexerMatlab_DisconnectNotify_Callback cb) { qscilexermatlab_disconnectnotify_callback = cb; }
    void setQsciLexerMatlab_Sender_Callback(QsciLexerMatlab_Sender_Callback cb) { qscilexermatlab_sender_callback = cb; }
    void setQsciLexerMatlab_SenderSignalIndex_Callback(QsciLexerMatlab_SenderSignalIndex_Callback cb) { qscilexermatlab_sendersignalindex_callback = cb; }
    void setQsciLexerMatlab_Receivers_Callback(QsciLexerMatlab_Receivers_Callback cb) { qscilexermatlab_receivers_callback = cb; }
    void setQsciLexerMatlab_IsSignalConnected_Callback(QsciLexerMatlab_IsSignalConnected_Callback cb) { qscilexermatlab_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerMatlab_Metacall_IsBase(bool value) const { qscilexermatlab_metacall_isbase = value; }
    void setQsciLexerMatlab_Language_IsBase(bool value) const { qscilexermatlab_language_isbase = value; }
    void setQsciLexerMatlab_Lexer_IsBase(bool value) const { qscilexermatlab_lexer_isbase = value; }
    void setQsciLexerMatlab_LexerId_IsBase(bool value) const { qscilexermatlab_lexerid_isbase = value; }
    void setQsciLexerMatlab_AutoCompletionFillups_IsBase(bool value) const { qscilexermatlab_autocompletionfillups_isbase = value; }
    void setQsciLexerMatlab_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexermatlab_autocompletionwordseparators_isbase = value; }
    void setQsciLexerMatlab_BlockEnd_IsBase(bool value) const { qscilexermatlab_blockend_isbase = value; }
    void setQsciLexerMatlab_BlockLookback_IsBase(bool value) const { qscilexermatlab_blocklookback_isbase = value; }
    void setQsciLexerMatlab_BlockStart_IsBase(bool value) const { qscilexermatlab_blockstart_isbase = value; }
    void setQsciLexerMatlab_BlockStartKeyword_IsBase(bool value) const { qscilexermatlab_blockstartkeyword_isbase = value; }
    void setQsciLexerMatlab_BraceStyle_IsBase(bool value) const { qscilexermatlab_bracestyle_isbase = value; }
    void setQsciLexerMatlab_CaseSensitive_IsBase(bool value) const { qscilexermatlab_casesensitive_isbase = value; }
    void setQsciLexerMatlab_Color_IsBase(bool value) const { qscilexermatlab_color_isbase = value; }
    void setQsciLexerMatlab_EolFill_IsBase(bool value) const { qscilexermatlab_eolfill_isbase = value; }
    void setQsciLexerMatlab_Font_IsBase(bool value) const { qscilexermatlab_font_isbase = value; }
    void setQsciLexerMatlab_IndentationGuideView_IsBase(bool value) const { qscilexermatlab_indentationguideview_isbase = value; }
    void setQsciLexerMatlab_Keywords_IsBase(bool value) const { qscilexermatlab_keywords_isbase = value; }
    void setQsciLexerMatlab_DefaultStyle_IsBase(bool value) const { qscilexermatlab_defaultstyle_isbase = value; }
    void setQsciLexerMatlab_Description_IsBase(bool value) const { qscilexermatlab_description_isbase = value; }
    void setQsciLexerMatlab_Paper_IsBase(bool value) const { qscilexermatlab_paper_isbase = value; }
    void setQsciLexerMatlab_DefaultColorWithStyle_IsBase(bool value) const { qscilexermatlab_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerMatlab_DefaultEolFill_IsBase(bool value) const { qscilexermatlab_defaulteolfill_isbase = value; }
    void setQsciLexerMatlab_DefaultFontWithStyle_IsBase(bool value) const { qscilexermatlab_defaultfontwithstyle_isbase = value; }
    void setQsciLexerMatlab_DefaultPaperWithStyle_IsBase(bool value) const { qscilexermatlab_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerMatlab_SetEditor_IsBase(bool value) const { qscilexermatlab_seteditor_isbase = value; }
    void setQsciLexerMatlab_RefreshProperties_IsBase(bool value) const { qscilexermatlab_refreshproperties_isbase = value; }
    void setQsciLexerMatlab_StyleBitsNeeded_IsBase(bool value) const { qscilexermatlab_stylebitsneeded_isbase = value; }
    void setQsciLexerMatlab_WordCharacters_IsBase(bool value) const { qscilexermatlab_wordcharacters_isbase = value; }
    void setQsciLexerMatlab_SetAutoIndentStyle_IsBase(bool value) const { qscilexermatlab_setautoindentstyle_isbase = value; }
    void setQsciLexerMatlab_SetColor_IsBase(bool value) const { qscilexermatlab_setcolor_isbase = value; }
    void setQsciLexerMatlab_SetEolFill_IsBase(bool value) const { qscilexermatlab_seteolfill_isbase = value; }
    void setQsciLexerMatlab_SetFont_IsBase(bool value) const { qscilexermatlab_setfont_isbase = value; }
    void setQsciLexerMatlab_SetPaper_IsBase(bool value) const { qscilexermatlab_setpaper_isbase = value; }
    void setQsciLexerMatlab_ReadProperties_IsBase(bool value) const { qscilexermatlab_readproperties_isbase = value; }
    void setQsciLexerMatlab_WriteProperties_IsBase(bool value) const { qscilexermatlab_writeproperties_isbase = value; }
    void setQsciLexerMatlab_Event_IsBase(bool value) const { qscilexermatlab_event_isbase = value; }
    void setQsciLexerMatlab_EventFilter_IsBase(bool value) const { qscilexermatlab_eventfilter_isbase = value; }
    void setQsciLexerMatlab_TimerEvent_IsBase(bool value) const { qscilexermatlab_timerevent_isbase = value; }
    void setQsciLexerMatlab_ChildEvent_IsBase(bool value) const { qscilexermatlab_childevent_isbase = value; }
    void setQsciLexerMatlab_CustomEvent_IsBase(bool value) const { qscilexermatlab_customevent_isbase = value; }
    void setQsciLexerMatlab_ConnectNotify_IsBase(bool value) const { qscilexermatlab_connectnotify_isbase = value; }
    void setQsciLexerMatlab_DisconnectNotify_IsBase(bool value) const { qscilexermatlab_disconnectnotify_isbase = value; }
    void setQsciLexerMatlab_Sender_IsBase(bool value) const { qscilexermatlab_sender_isbase = value; }
    void setQsciLexerMatlab_SenderSignalIndex_IsBase(bool value) const { qscilexermatlab_sendersignalindex_isbase = value; }
    void setQsciLexerMatlab_Receivers_IsBase(bool value) const { qscilexermatlab_receivers_isbase = value; }
    void setQsciLexerMatlab_IsSignalConnected_IsBase(bool value) const { qscilexermatlab_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexermatlab_metacall_isbase) {
            qscilexermatlab_metacall_isbase = false;
            return QsciLexerMatlab::qt_metacall(param1, param2, param3);
        } else if (qscilexermatlab_metacall_callback != nullptr) {
            return qscilexermatlab_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerMatlab::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexermatlab_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexermatlab_lexer_isbase) {
            qscilexermatlab_lexer_isbase = false;
            return QsciLexerMatlab::lexer();
        } else if (qscilexermatlab_lexer_callback != nullptr) {
            return qscilexermatlab_lexer_callback();
        } else {
            return QsciLexerMatlab::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexermatlab_lexerid_isbase) {
            qscilexermatlab_lexerid_isbase = false;
            return QsciLexerMatlab::lexerId();
        } else if (qscilexermatlab_lexerid_callback != nullptr) {
            return qscilexermatlab_lexerid_callback();
        } else {
            return QsciLexerMatlab::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexermatlab_autocompletionfillups_isbase) {
            qscilexermatlab_autocompletionfillups_isbase = false;
            return QsciLexerMatlab::autoCompletionFillups();
        } else if (qscilexermatlab_autocompletionfillups_callback != nullptr) {
            return qscilexermatlab_autocompletionfillups_callback();
        } else {
            return QsciLexerMatlab::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexermatlab_autocompletionwordseparators_isbase) {
            qscilexermatlab_autocompletionwordseparators_isbase = false;
            return QsciLexerMatlab::autoCompletionWordSeparators();
        } else if (qscilexermatlab_autocompletionwordseparators_callback != nullptr) {
            return qscilexermatlab_autocompletionwordseparators_callback();
        } else {
            return QsciLexerMatlab::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexermatlab_blockend_isbase) {
            qscilexermatlab_blockend_isbase = false;
            return QsciLexerMatlab::blockEnd(style);
        } else if (qscilexermatlab_blockend_callback != nullptr) {
            return qscilexermatlab_blockend_callback(this, style);
        } else {
            return QsciLexerMatlab::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexermatlab_blocklookback_isbase) {
            qscilexermatlab_blocklookback_isbase = false;
            return QsciLexerMatlab::blockLookback();
        } else if (qscilexermatlab_blocklookback_callback != nullptr) {
            return qscilexermatlab_blocklookback_callback();
        } else {
            return QsciLexerMatlab::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexermatlab_blockstart_isbase) {
            qscilexermatlab_blockstart_isbase = false;
            return QsciLexerMatlab::blockStart(style);
        } else if (qscilexermatlab_blockstart_callback != nullptr) {
            return qscilexermatlab_blockstart_callback(this, style);
        } else {
            return QsciLexerMatlab::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexermatlab_blockstartkeyword_isbase) {
            qscilexermatlab_blockstartkeyword_isbase = false;
            return QsciLexerMatlab::blockStartKeyword(style);
        } else if (qscilexermatlab_blockstartkeyword_callback != nullptr) {
            return qscilexermatlab_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerMatlab::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexermatlab_bracestyle_isbase) {
            qscilexermatlab_bracestyle_isbase = false;
            return QsciLexerMatlab::braceStyle();
        } else if (qscilexermatlab_bracestyle_callback != nullptr) {
            return qscilexermatlab_bracestyle_callback();
        } else {
            return QsciLexerMatlab::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexermatlab_casesensitive_isbase) {
            qscilexermatlab_casesensitive_isbase = false;
            return QsciLexerMatlab::caseSensitive();
        } else if (qscilexermatlab_casesensitive_callback != nullptr) {
            return qscilexermatlab_casesensitive_callback();
        } else {
            return QsciLexerMatlab::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexermatlab_color_isbase) {
            qscilexermatlab_color_isbase = false;
            return QsciLexerMatlab::color(style);
        } else if (qscilexermatlab_color_callback != nullptr) {
            return qscilexermatlab_color_callback(this, style);
        } else {
            return QsciLexerMatlab::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexermatlab_eolfill_isbase) {
            qscilexermatlab_eolfill_isbase = false;
            return QsciLexerMatlab::eolFill(style);
        } else if (qscilexermatlab_eolfill_callback != nullptr) {
            return qscilexermatlab_eolfill_callback(this, style);
        } else {
            return QsciLexerMatlab::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexermatlab_font_isbase) {
            qscilexermatlab_font_isbase = false;
            return QsciLexerMatlab::font(style);
        } else if (qscilexermatlab_font_callback != nullptr) {
            return qscilexermatlab_font_callback(this, style);
        } else {
            return QsciLexerMatlab::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexermatlab_indentationguideview_isbase) {
            qscilexermatlab_indentationguideview_isbase = false;
            return QsciLexerMatlab::indentationGuideView();
        } else if (qscilexermatlab_indentationguideview_callback != nullptr) {
            return qscilexermatlab_indentationguideview_callback();
        } else {
            return QsciLexerMatlab::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexermatlab_keywords_isbase) {
            qscilexermatlab_keywords_isbase = false;
            return QsciLexerMatlab::keywords(set);
        } else if (qscilexermatlab_keywords_callback != nullptr) {
            return qscilexermatlab_keywords_callback(this, set);
        } else {
            return QsciLexerMatlab::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexermatlab_defaultstyle_isbase) {
            qscilexermatlab_defaultstyle_isbase = false;
            return QsciLexerMatlab::defaultStyle();
        } else if (qscilexermatlab_defaultstyle_callback != nullptr) {
            return qscilexermatlab_defaultstyle_callback();
        } else {
            return QsciLexerMatlab::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexermatlab_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexermatlab_paper_isbase) {
            qscilexermatlab_paper_isbase = false;
            return QsciLexerMatlab::paper(style);
        } else if (qscilexermatlab_paper_callback != nullptr) {
            return qscilexermatlab_paper_callback(this, style);
        } else {
            return QsciLexerMatlab::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexermatlab_defaultcolorwithstyle_isbase) {
            qscilexermatlab_defaultcolorwithstyle_isbase = false;
            return QsciLexerMatlab::defaultColor(style);
        } else if (qscilexermatlab_defaultcolorwithstyle_callback != nullptr) {
            return qscilexermatlab_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerMatlab::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexermatlab_defaulteolfill_isbase) {
            qscilexermatlab_defaulteolfill_isbase = false;
            return QsciLexerMatlab::defaultEolFill(style);
        } else if (qscilexermatlab_defaulteolfill_callback != nullptr) {
            return qscilexermatlab_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerMatlab::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexermatlab_defaultfontwithstyle_isbase) {
            qscilexermatlab_defaultfontwithstyle_isbase = false;
            return QsciLexerMatlab::defaultFont(style);
        } else if (qscilexermatlab_defaultfontwithstyle_callback != nullptr) {
            return qscilexermatlab_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerMatlab::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexermatlab_defaultpaperwithstyle_isbase) {
            qscilexermatlab_defaultpaperwithstyle_isbase = false;
            return QsciLexerMatlab::defaultPaper(style);
        } else if (qscilexermatlab_defaultpaperwithstyle_callback != nullptr) {
            return qscilexermatlab_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerMatlab::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexermatlab_seteditor_isbase) {
            qscilexermatlab_seteditor_isbase = false;
            QsciLexerMatlab::setEditor(editor);
        } else if (qscilexermatlab_seteditor_callback != nullptr) {
            qscilexermatlab_seteditor_callback(this, editor);
        } else {
            QsciLexerMatlab::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexermatlab_refreshproperties_isbase) {
            qscilexermatlab_refreshproperties_isbase = false;
            QsciLexerMatlab::refreshProperties();
        } else if (qscilexermatlab_refreshproperties_callback != nullptr) {
            qscilexermatlab_refreshproperties_callback();
        } else {
            QsciLexerMatlab::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexermatlab_stylebitsneeded_isbase) {
            qscilexermatlab_stylebitsneeded_isbase = false;
            return QsciLexerMatlab::styleBitsNeeded();
        } else if (qscilexermatlab_stylebitsneeded_callback != nullptr) {
            return qscilexermatlab_stylebitsneeded_callback();
        } else {
            return QsciLexerMatlab::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexermatlab_wordcharacters_isbase) {
            qscilexermatlab_wordcharacters_isbase = false;
            return QsciLexerMatlab::wordCharacters();
        } else if (qscilexermatlab_wordcharacters_callback != nullptr) {
            return qscilexermatlab_wordcharacters_callback();
        } else {
            return QsciLexerMatlab::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexermatlab_setautoindentstyle_isbase) {
            qscilexermatlab_setautoindentstyle_isbase = false;
            QsciLexerMatlab::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexermatlab_setautoindentstyle_callback != nullptr) {
            qscilexermatlab_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerMatlab::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexermatlab_setcolor_isbase) {
            qscilexermatlab_setcolor_isbase = false;
            QsciLexerMatlab::setColor(c, style);
        } else if (qscilexermatlab_setcolor_callback != nullptr) {
            qscilexermatlab_setcolor_callback(this, c, style);
        } else {
            QsciLexerMatlab::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexermatlab_seteolfill_isbase) {
            qscilexermatlab_seteolfill_isbase = false;
            QsciLexerMatlab::setEolFill(eoffill, style);
        } else if (qscilexermatlab_seteolfill_callback != nullptr) {
            qscilexermatlab_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerMatlab::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexermatlab_setfont_isbase) {
            qscilexermatlab_setfont_isbase = false;
            QsciLexerMatlab::setFont(f, style);
        } else if (qscilexermatlab_setfont_callback != nullptr) {
            qscilexermatlab_setfont_callback(this, f, style);
        } else {
            QsciLexerMatlab::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexermatlab_setpaper_isbase) {
            qscilexermatlab_setpaper_isbase = false;
            QsciLexerMatlab::setPaper(c, style);
        } else if (qscilexermatlab_setpaper_callback != nullptr) {
            qscilexermatlab_setpaper_callback(this, c, style);
        } else {
            QsciLexerMatlab::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexermatlab_readproperties_isbase) {
            qscilexermatlab_readproperties_isbase = false;
            return QsciLexerMatlab::readProperties(qs, prefix);
        } else if (qscilexermatlab_readproperties_callback != nullptr) {
            return qscilexermatlab_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerMatlab::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexermatlab_writeproperties_isbase) {
            qscilexermatlab_writeproperties_isbase = false;
            return QsciLexerMatlab::writeProperties(qs, prefix);
        } else if (qscilexermatlab_writeproperties_callback != nullptr) {
            return qscilexermatlab_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerMatlab::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexermatlab_event_isbase) {
            qscilexermatlab_event_isbase = false;
            return QsciLexerMatlab::event(event);
        } else if (qscilexermatlab_event_callback != nullptr) {
            return qscilexermatlab_event_callback(this, event);
        } else {
            return QsciLexerMatlab::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexermatlab_eventfilter_isbase) {
            qscilexermatlab_eventfilter_isbase = false;
            return QsciLexerMatlab::eventFilter(watched, event);
        } else if (qscilexermatlab_eventfilter_callback != nullptr) {
            return qscilexermatlab_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerMatlab::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexermatlab_timerevent_isbase) {
            qscilexermatlab_timerevent_isbase = false;
            QsciLexerMatlab::timerEvent(event);
        } else if (qscilexermatlab_timerevent_callback != nullptr) {
            qscilexermatlab_timerevent_callback(this, event);
        } else {
            QsciLexerMatlab::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexermatlab_childevent_isbase) {
            qscilexermatlab_childevent_isbase = false;
            QsciLexerMatlab::childEvent(event);
        } else if (qscilexermatlab_childevent_callback != nullptr) {
            qscilexermatlab_childevent_callback(this, event);
        } else {
            QsciLexerMatlab::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexermatlab_customevent_isbase) {
            qscilexermatlab_customevent_isbase = false;
            QsciLexerMatlab::customEvent(event);
        } else if (qscilexermatlab_customevent_callback != nullptr) {
            qscilexermatlab_customevent_callback(this, event);
        } else {
            QsciLexerMatlab::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexermatlab_connectnotify_isbase) {
            qscilexermatlab_connectnotify_isbase = false;
            QsciLexerMatlab::connectNotify(signal);
        } else if (qscilexermatlab_connectnotify_callback != nullptr) {
            qscilexermatlab_connectnotify_callback(this, signal);
        } else {
            QsciLexerMatlab::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexermatlab_disconnectnotify_isbase) {
            qscilexermatlab_disconnectnotify_isbase = false;
            QsciLexerMatlab::disconnectNotify(signal);
        } else if (qscilexermatlab_disconnectnotify_callback != nullptr) {
            qscilexermatlab_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerMatlab::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexermatlab_sender_isbase) {
            qscilexermatlab_sender_isbase = false;
            return QsciLexerMatlab::sender();
        } else if (qscilexermatlab_sender_callback != nullptr) {
            return qscilexermatlab_sender_callback();
        } else {
            return QsciLexerMatlab::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexermatlab_sendersignalindex_isbase) {
            qscilexermatlab_sendersignalindex_isbase = false;
            return QsciLexerMatlab::senderSignalIndex();
        } else if (qscilexermatlab_sendersignalindex_callback != nullptr) {
            return qscilexermatlab_sendersignalindex_callback();
        } else {
            return QsciLexerMatlab::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexermatlab_receivers_isbase) {
            qscilexermatlab_receivers_isbase = false;
            return QsciLexerMatlab::receivers(signal);
        } else if (qscilexermatlab_receivers_callback != nullptr) {
            return qscilexermatlab_receivers_callback(this, signal);
        } else {
            return QsciLexerMatlab::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexermatlab_issignalconnected_isbase) {
            qscilexermatlab_issignalconnected_isbase = false;
            return QsciLexerMatlab::isSignalConnected(signal);
        } else if (qscilexermatlab_issignalconnected_callback != nullptr) {
            return qscilexermatlab_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerMatlab::isSignalConnected(signal);
        }
    }
};

#endif
