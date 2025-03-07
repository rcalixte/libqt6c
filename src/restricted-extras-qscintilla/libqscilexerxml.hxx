#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERXML_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERXML_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerXML so that we can call protected methods
class VirtualQsciLexerXML : public QsciLexerXML {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerXML_Metacall_Callback = int (*)(QsciLexerXML*, QMetaObject::Call, int, void**);
    using QsciLexerXML_SetFoldCompact_Callback = void (*)(QsciLexerXML*, bool);
    using QsciLexerXML_SetFoldPreprocessor_Callback = void (*)(QsciLexerXML*, bool);
    using QsciLexerXML_SetCaseSensitiveTags_Callback = void (*)(QsciLexerXML*, bool);
    using QsciLexerXML_Language_Callback = const char* (*)();
    using QsciLexerXML_Lexer_Callback = const char* (*)();
    using QsciLexerXML_LexerId_Callback = int (*)();
    using QsciLexerXML_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerXML_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerXML_BlockEnd_Callback = const char* (*)(const QsciLexerXML*, int*);
    using QsciLexerXML_BlockLookback_Callback = int (*)();
    using QsciLexerXML_BlockStart_Callback = const char* (*)(const QsciLexerXML*, int*);
    using QsciLexerXML_BlockStartKeyword_Callback = const char* (*)(const QsciLexerXML*, int*);
    using QsciLexerXML_BraceStyle_Callback = int (*)();
    using QsciLexerXML_CaseSensitive_Callback = bool (*)();
    using QsciLexerXML_Color_Callback = QColor (*)(const QsciLexerXML*, int);
    using QsciLexerXML_EolFill_Callback = bool (*)(const QsciLexerXML*, int);
    using QsciLexerXML_Font_Callback = QFont (*)(const QsciLexerXML*, int);
    using QsciLexerXML_IndentationGuideView_Callback = int (*)();
    using QsciLexerXML_Keywords_Callback = const char* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultStyle_Callback = int (*)();
    using QsciLexerXML_Description_Callback = QString (*)(const QsciLexerXML*, int);
    using QsciLexerXML_Paper_Callback = QColor (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultEolFill_Callback = bool (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerXML*, int);
    using QsciLexerXML_SetEditor_Callback = void (*)(QsciLexerXML*, QsciScintilla*);
    using QsciLexerXML_RefreshProperties_Callback = void (*)();
    using QsciLexerXML_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerXML_WordCharacters_Callback = const char* (*)();
    using QsciLexerXML_SetAutoIndentStyle_Callback = void (*)(QsciLexerXML*, int);
    using QsciLexerXML_SetColor_Callback = void (*)(QsciLexerXML*, const QColor&, int);
    using QsciLexerXML_SetEolFill_Callback = void (*)(QsciLexerXML*, bool, int);
    using QsciLexerXML_SetFont_Callback = void (*)(QsciLexerXML*, const QFont&, int);
    using QsciLexerXML_SetPaper_Callback = void (*)(QsciLexerXML*, const QColor&, int);
    using QsciLexerXML_ReadProperties_Callback = bool (*)(QsciLexerXML*, QSettings&, const QString&);
    using QsciLexerXML_WriteProperties_Callback = bool (*)(const QsciLexerXML*, QSettings&, const QString&);
    using QsciLexerXML_Event_Callback = bool (*)(QsciLexerXML*, QEvent*);
    using QsciLexerXML_EventFilter_Callback = bool (*)(QsciLexerXML*, QObject*, QEvent*);
    using QsciLexerXML_TimerEvent_Callback = void (*)(QsciLexerXML*, QTimerEvent*);
    using QsciLexerXML_ChildEvent_Callback = void (*)(QsciLexerXML*, QChildEvent*);
    using QsciLexerXML_CustomEvent_Callback = void (*)(QsciLexerXML*, QEvent*);
    using QsciLexerXML_ConnectNotify_Callback = void (*)(QsciLexerXML*, const QMetaMethod&);
    using QsciLexerXML_DisconnectNotify_Callback = void (*)(QsciLexerXML*, const QMetaMethod&);
    using QsciLexerXML_Sender_Callback = QObject* (*)();
    using QsciLexerXML_SenderSignalIndex_Callback = int (*)();
    using QsciLexerXML_Receivers_Callback = int (*)(const QsciLexerXML*, const char*);
    using QsciLexerXML_IsSignalConnected_Callback = bool (*)(const QsciLexerXML*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerXML_Metacall_Callback qscilexerxml_metacall_callback = nullptr;
    QsciLexerXML_SetFoldCompact_Callback qscilexerxml_setfoldcompact_callback = nullptr;
    QsciLexerXML_SetFoldPreprocessor_Callback qscilexerxml_setfoldpreprocessor_callback = nullptr;
    QsciLexerXML_SetCaseSensitiveTags_Callback qscilexerxml_setcasesensitivetags_callback = nullptr;
    QsciLexerXML_Language_Callback qscilexerxml_language_callback = nullptr;
    QsciLexerXML_Lexer_Callback qscilexerxml_lexer_callback = nullptr;
    QsciLexerXML_LexerId_Callback qscilexerxml_lexerid_callback = nullptr;
    QsciLexerXML_AutoCompletionFillups_Callback qscilexerxml_autocompletionfillups_callback = nullptr;
    QsciLexerXML_AutoCompletionWordSeparators_Callback qscilexerxml_autocompletionwordseparators_callback = nullptr;
    QsciLexerXML_BlockEnd_Callback qscilexerxml_blockend_callback = nullptr;
    QsciLexerXML_BlockLookback_Callback qscilexerxml_blocklookback_callback = nullptr;
    QsciLexerXML_BlockStart_Callback qscilexerxml_blockstart_callback = nullptr;
    QsciLexerXML_BlockStartKeyword_Callback qscilexerxml_blockstartkeyword_callback = nullptr;
    QsciLexerXML_BraceStyle_Callback qscilexerxml_bracestyle_callback = nullptr;
    QsciLexerXML_CaseSensitive_Callback qscilexerxml_casesensitive_callback = nullptr;
    QsciLexerXML_Color_Callback qscilexerxml_color_callback = nullptr;
    QsciLexerXML_EolFill_Callback qscilexerxml_eolfill_callback = nullptr;
    QsciLexerXML_Font_Callback qscilexerxml_font_callback = nullptr;
    QsciLexerXML_IndentationGuideView_Callback qscilexerxml_indentationguideview_callback = nullptr;
    QsciLexerXML_Keywords_Callback qscilexerxml_keywords_callback = nullptr;
    QsciLexerXML_DefaultStyle_Callback qscilexerxml_defaultstyle_callback = nullptr;
    QsciLexerXML_Description_Callback qscilexerxml_description_callback = nullptr;
    QsciLexerXML_Paper_Callback qscilexerxml_paper_callback = nullptr;
    QsciLexerXML_DefaultColorWithStyle_Callback qscilexerxml_defaultcolorwithstyle_callback = nullptr;
    QsciLexerXML_DefaultEolFill_Callback qscilexerxml_defaulteolfill_callback = nullptr;
    QsciLexerXML_DefaultFontWithStyle_Callback qscilexerxml_defaultfontwithstyle_callback = nullptr;
    QsciLexerXML_DefaultPaperWithStyle_Callback qscilexerxml_defaultpaperwithstyle_callback = nullptr;
    QsciLexerXML_SetEditor_Callback qscilexerxml_seteditor_callback = nullptr;
    QsciLexerXML_RefreshProperties_Callback qscilexerxml_refreshproperties_callback = nullptr;
    QsciLexerXML_StyleBitsNeeded_Callback qscilexerxml_stylebitsneeded_callback = nullptr;
    QsciLexerXML_WordCharacters_Callback qscilexerxml_wordcharacters_callback = nullptr;
    QsciLexerXML_SetAutoIndentStyle_Callback qscilexerxml_setautoindentstyle_callback = nullptr;
    QsciLexerXML_SetColor_Callback qscilexerxml_setcolor_callback = nullptr;
    QsciLexerXML_SetEolFill_Callback qscilexerxml_seteolfill_callback = nullptr;
    QsciLexerXML_SetFont_Callback qscilexerxml_setfont_callback = nullptr;
    QsciLexerXML_SetPaper_Callback qscilexerxml_setpaper_callback = nullptr;
    QsciLexerXML_ReadProperties_Callback qscilexerxml_readproperties_callback = nullptr;
    QsciLexerXML_WriteProperties_Callback qscilexerxml_writeproperties_callback = nullptr;
    QsciLexerXML_Event_Callback qscilexerxml_event_callback = nullptr;
    QsciLexerXML_EventFilter_Callback qscilexerxml_eventfilter_callback = nullptr;
    QsciLexerXML_TimerEvent_Callback qscilexerxml_timerevent_callback = nullptr;
    QsciLexerXML_ChildEvent_Callback qscilexerxml_childevent_callback = nullptr;
    QsciLexerXML_CustomEvent_Callback qscilexerxml_customevent_callback = nullptr;
    QsciLexerXML_ConnectNotify_Callback qscilexerxml_connectnotify_callback = nullptr;
    QsciLexerXML_DisconnectNotify_Callback qscilexerxml_disconnectnotify_callback = nullptr;
    QsciLexerXML_Sender_Callback qscilexerxml_sender_callback = nullptr;
    QsciLexerXML_SenderSignalIndex_Callback qscilexerxml_sendersignalindex_callback = nullptr;
    QsciLexerXML_Receivers_Callback qscilexerxml_receivers_callback = nullptr;
    QsciLexerXML_IsSignalConnected_Callback qscilexerxml_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerxml_metacall_isbase = false;
    mutable bool qscilexerxml_setfoldcompact_isbase = false;
    mutable bool qscilexerxml_setfoldpreprocessor_isbase = false;
    mutable bool qscilexerxml_setcasesensitivetags_isbase = false;
    mutable bool qscilexerxml_language_isbase = false;
    mutable bool qscilexerxml_lexer_isbase = false;
    mutable bool qscilexerxml_lexerid_isbase = false;
    mutable bool qscilexerxml_autocompletionfillups_isbase = false;
    mutable bool qscilexerxml_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerxml_blockend_isbase = false;
    mutable bool qscilexerxml_blocklookback_isbase = false;
    mutable bool qscilexerxml_blockstart_isbase = false;
    mutable bool qscilexerxml_blockstartkeyword_isbase = false;
    mutable bool qscilexerxml_bracestyle_isbase = false;
    mutable bool qscilexerxml_casesensitive_isbase = false;
    mutable bool qscilexerxml_color_isbase = false;
    mutable bool qscilexerxml_eolfill_isbase = false;
    mutable bool qscilexerxml_font_isbase = false;
    mutable bool qscilexerxml_indentationguideview_isbase = false;
    mutable bool qscilexerxml_keywords_isbase = false;
    mutable bool qscilexerxml_defaultstyle_isbase = false;
    mutable bool qscilexerxml_description_isbase = false;
    mutable bool qscilexerxml_paper_isbase = false;
    mutable bool qscilexerxml_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerxml_defaulteolfill_isbase = false;
    mutable bool qscilexerxml_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerxml_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerxml_seteditor_isbase = false;
    mutable bool qscilexerxml_refreshproperties_isbase = false;
    mutable bool qscilexerxml_stylebitsneeded_isbase = false;
    mutable bool qscilexerxml_wordcharacters_isbase = false;
    mutable bool qscilexerxml_setautoindentstyle_isbase = false;
    mutable bool qscilexerxml_setcolor_isbase = false;
    mutable bool qscilexerxml_seteolfill_isbase = false;
    mutable bool qscilexerxml_setfont_isbase = false;
    mutable bool qscilexerxml_setpaper_isbase = false;
    mutable bool qscilexerxml_readproperties_isbase = false;
    mutable bool qscilexerxml_writeproperties_isbase = false;
    mutable bool qscilexerxml_event_isbase = false;
    mutable bool qscilexerxml_eventfilter_isbase = false;
    mutable bool qscilexerxml_timerevent_isbase = false;
    mutable bool qscilexerxml_childevent_isbase = false;
    mutable bool qscilexerxml_customevent_isbase = false;
    mutable bool qscilexerxml_connectnotify_isbase = false;
    mutable bool qscilexerxml_disconnectnotify_isbase = false;
    mutable bool qscilexerxml_sender_isbase = false;
    mutable bool qscilexerxml_sendersignalindex_isbase = false;
    mutable bool qscilexerxml_receivers_isbase = false;
    mutable bool qscilexerxml_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerXML() : QsciLexerXML(){};
    VirtualQsciLexerXML(QObject* parent) : QsciLexerXML(parent){};

    ~VirtualQsciLexerXML() {
        qscilexerxml_metacall_callback = nullptr;
        qscilexerxml_setfoldcompact_callback = nullptr;
        qscilexerxml_setfoldpreprocessor_callback = nullptr;
        qscilexerxml_setcasesensitivetags_callback = nullptr;
        qscilexerxml_language_callback = nullptr;
        qscilexerxml_lexer_callback = nullptr;
        qscilexerxml_lexerid_callback = nullptr;
        qscilexerxml_autocompletionfillups_callback = nullptr;
        qscilexerxml_autocompletionwordseparators_callback = nullptr;
        qscilexerxml_blockend_callback = nullptr;
        qscilexerxml_blocklookback_callback = nullptr;
        qscilexerxml_blockstart_callback = nullptr;
        qscilexerxml_blockstartkeyword_callback = nullptr;
        qscilexerxml_bracestyle_callback = nullptr;
        qscilexerxml_casesensitive_callback = nullptr;
        qscilexerxml_color_callback = nullptr;
        qscilexerxml_eolfill_callback = nullptr;
        qscilexerxml_font_callback = nullptr;
        qscilexerxml_indentationguideview_callback = nullptr;
        qscilexerxml_keywords_callback = nullptr;
        qscilexerxml_defaultstyle_callback = nullptr;
        qscilexerxml_description_callback = nullptr;
        qscilexerxml_paper_callback = nullptr;
        qscilexerxml_defaultcolorwithstyle_callback = nullptr;
        qscilexerxml_defaulteolfill_callback = nullptr;
        qscilexerxml_defaultfontwithstyle_callback = nullptr;
        qscilexerxml_defaultpaperwithstyle_callback = nullptr;
        qscilexerxml_seteditor_callback = nullptr;
        qscilexerxml_refreshproperties_callback = nullptr;
        qscilexerxml_stylebitsneeded_callback = nullptr;
        qscilexerxml_wordcharacters_callback = nullptr;
        qscilexerxml_setautoindentstyle_callback = nullptr;
        qscilexerxml_setcolor_callback = nullptr;
        qscilexerxml_seteolfill_callback = nullptr;
        qscilexerxml_setfont_callback = nullptr;
        qscilexerxml_setpaper_callback = nullptr;
        qscilexerxml_readproperties_callback = nullptr;
        qscilexerxml_writeproperties_callback = nullptr;
        qscilexerxml_event_callback = nullptr;
        qscilexerxml_eventfilter_callback = nullptr;
        qscilexerxml_timerevent_callback = nullptr;
        qscilexerxml_childevent_callback = nullptr;
        qscilexerxml_customevent_callback = nullptr;
        qscilexerxml_connectnotify_callback = nullptr;
        qscilexerxml_disconnectnotify_callback = nullptr;
        qscilexerxml_sender_callback = nullptr;
        qscilexerxml_sendersignalindex_callback = nullptr;
        qscilexerxml_receivers_callback = nullptr;
        qscilexerxml_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerXML_Metacall_Callback(QsciLexerXML_Metacall_Callback cb) { qscilexerxml_metacall_callback = cb; }
    void setQsciLexerXML_SetFoldCompact_Callback(QsciLexerXML_SetFoldCompact_Callback cb) { qscilexerxml_setfoldcompact_callback = cb; }
    void setQsciLexerXML_SetFoldPreprocessor_Callback(QsciLexerXML_SetFoldPreprocessor_Callback cb) { qscilexerxml_setfoldpreprocessor_callback = cb; }
    void setQsciLexerXML_SetCaseSensitiveTags_Callback(QsciLexerXML_SetCaseSensitiveTags_Callback cb) { qscilexerxml_setcasesensitivetags_callback = cb; }
    void setQsciLexerXML_Language_Callback(QsciLexerXML_Language_Callback cb) { qscilexerxml_language_callback = cb; }
    void setQsciLexerXML_Lexer_Callback(QsciLexerXML_Lexer_Callback cb) { qscilexerxml_lexer_callback = cb; }
    void setQsciLexerXML_LexerId_Callback(QsciLexerXML_LexerId_Callback cb) { qscilexerxml_lexerid_callback = cb; }
    void setQsciLexerXML_AutoCompletionFillups_Callback(QsciLexerXML_AutoCompletionFillups_Callback cb) { qscilexerxml_autocompletionfillups_callback = cb; }
    void setQsciLexerXML_AutoCompletionWordSeparators_Callback(QsciLexerXML_AutoCompletionWordSeparators_Callback cb) { qscilexerxml_autocompletionwordseparators_callback = cb; }
    void setQsciLexerXML_BlockEnd_Callback(QsciLexerXML_BlockEnd_Callback cb) { qscilexerxml_blockend_callback = cb; }
    void setQsciLexerXML_BlockLookback_Callback(QsciLexerXML_BlockLookback_Callback cb) { qscilexerxml_blocklookback_callback = cb; }
    void setQsciLexerXML_BlockStart_Callback(QsciLexerXML_BlockStart_Callback cb) { qscilexerxml_blockstart_callback = cb; }
    void setQsciLexerXML_BlockStartKeyword_Callback(QsciLexerXML_BlockStartKeyword_Callback cb) { qscilexerxml_blockstartkeyword_callback = cb; }
    void setQsciLexerXML_BraceStyle_Callback(QsciLexerXML_BraceStyle_Callback cb) { qscilexerxml_bracestyle_callback = cb; }
    void setQsciLexerXML_CaseSensitive_Callback(QsciLexerXML_CaseSensitive_Callback cb) { qscilexerxml_casesensitive_callback = cb; }
    void setQsciLexerXML_Color_Callback(QsciLexerXML_Color_Callback cb) { qscilexerxml_color_callback = cb; }
    void setQsciLexerXML_EolFill_Callback(QsciLexerXML_EolFill_Callback cb) { qscilexerxml_eolfill_callback = cb; }
    void setQsciLexerXML_Font_Callback(QsciLexerXML_Font_Callback cb) { qscilexerxml_font_callback = cb; }
    void setQsciLexerXML_IndentationGuideView_Callback(QsciLexerXML_IndentationGuideView_Callback cb) { qscilexerxml_indentationguideview_callback = cb; }
    void setQsciLexerXML_Keywords_Callback(QsciLexerXML_Keywords_Callback cb) { qscilexerxml_keywords_callback = cb; }
    void setQsciLexerXML_DefaultStyle_Callback(QsciLexerXML_DefaultStyle_Callback cb) { qscilexerxml_defaultstyle_callback = cb; }
    void setQsciLexerXML_Description_Callback(QsciLexerXML_Description_Callback cb) { qscilexerxml_description_callback = cb; }
    void setQsciLexerXML_Paper_Callback(QsciLexerXML_Paper_Callback cb) { qscilexerxml_paper_callback = cb; }
    void setQsciLexerXML_DefaultColorWithStyle_Callback(QsciLexerXML_DefaultColorWithStyle_Callback cb) { qscilexerxml_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerXML_DefaultEolFill_Callback(QsciLexerXML_DefaultEolFill_Callback cb) { qscilexerxml_defaulteolfill_callback = cb; }
    void setQsciLexerXML_DefaultFontWithStyle_Callback(QsciLexerXML_DefaultFontWithStyle_Callback cb) { qscilexerxml_defaultfontwithstyle_callback = cb; }
    void setQsciLexerXML_DefaultPaperWithStyle_Callback(QsciLexerXML_DefaultPaperWithStyle_Callback cb) { qscilexerxml_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerXML_SetEditor_Callback(QsciLexerXML_SetEditor_Callback cb) { qscilexerxml_seteditor_callback = cb; }
    void setQsciLexerXML_RefreshProperties_Callback(QsciLexerXML_RefreshProperties_Callback cb) { qscilexerxml_refreshproperties_callback = cb; }
    void setQsciLexerXML_StyleBitsNeeded_Callback(QsciLexerXML_StyleBitsNeeded_Callback cb) { qscilexerxml_stylebitsneeded_callback = cb; }
    void setQsciLexerXML_WordCharacters_Callback(QsciLexerXML_WordCharacters_Callback cb) { qscilexerxml_wordcharacters_callback = cb; }
    void setQsciLexerXML_SetAutoIndentStyle_Callback(QsciLexerXML_SetAutoIndentStyle_Callback cb) { qscilexerxml_setautoindentstyle_callback = cb; }
    void setQsciLexerXML_SetColor_Callback(QsciLexerXML_SetColor_Callback cb) { qscilexerxml_setcolor_callback = cb; }
    void setQsciLexerXML_SetEolFill_Callback(QsciLexerXML_SetEolFill_Callback cb) { qscilexerxml_seteolfill_callback = cb; }
    void setQsciLexerXML_SetFont_Callback(QsciLexerXML_SetFont_Callback cb) { qscilexerxml_setfont_callback = cb; }
    void setQsciLexerXML_SetPaper_Callback(QsciLexerXML_SetPaper_Callback cb) { qscilexerxml_setpaper_callback = cb; }
    void setQsciLexerXML_ReadProperties_Callback(QsciLexerXML_ReadProperties_Callback cb) { qscilexerxml_readproperties_callback = cb; }
    void setQsciLexerXML_WriteProperties_Callback(QsciLexerXML_WriteProperties_Callback cb) { qscilexerxml_writeproperties_callback = cb; }
    void setQsciLexerXML_Event_Callback(QsciLexerXML_Event_Callback cb) { qscilexerxml_event_callback = cb; }
    void setQsciLexerXML_EventFilter_Callback(QsciLexerXML_EventFilter_Callback cb) { qscilexerxml_eventfilter_callback = cb; }
    void setQsciLexerXML_TimerEvent_Callback(QsciLexerXML_TimerEvent_Callback cb) { qscilexerxml_timerevent_callback = cb; }
    void setQsciLexerXML_ChildEvent_Callback(QsciLexerXML_ChildEvent_Callback cb) { qscilexerxml_childevent_callback = cb; }
    void setQsciLexerXML_CustomEvent_Callback(QsciLexerXML_CustomEvent_Callback cb) { qscilexerxml_customevent_callback = cb; }
    void setQsciLexerXML_ConnectNotify_Callback(QsciLexerXML_ConnectNotify_Callback cb) { qscilexerxml_connectnotify_callback = cb; }
    void setQsciLexerXML_DisconnectNotify_Callback(QsciLexerXML_DisconnectNotify_Callback cb) { qscilexerxml_disconnectnotify_callback = cb; }
    void setQsciLexerXML_Sender_Callback(QsciLexerXML_Sender_Callback cb) { qscilexerxml_sender_callback = cb; }
    void setQsciLexerXML_SenderSignalIndex_Callback(QsciLexerXML_SenderSignalIndex_Callback cb) { qscilexerxml_sendersignalindex_callback = cb; }
    void setQsciLexerXML_Receivers_Callback(QsciLexerXML_Receivers_Callback cb) { qscilexerxml_receivers_callback = cb; }
    void setQsciLexerXML_IsSignalConnected_Callback(QsciLexerXML_IsSignalConnected_Callback cb) { qscilexerxml_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerXML_Metacall_IsBase(bool value) const { qscilexerxml_metacall_isbase = value; }
    void setQsciLexerXML_SetFoldCompact_IsBase(bool value) const { qscilexerxml_setfoldcompact_isbase = value; }
    void setQsciLexerXML_SetFoldPreprocessor_IsBase(bool value) const { qscilexerxml_setfoldpreprocessor_isbase = value; }
    void setQsciLexerXML_SetCaseSensitiveTags_IsBase(bool value) const { qscilexerxml_setcasesensitivetags_isbase = value; }
    void setQsciLexerXML_Language_IsBase(bool value) const { qscilexerxml_language_isbase = value; }
    void setQsciLexerXML_Lexer_IsBase(bool value) const { qscilexerxml_lexer_isbase = value; }
    void setQsciLexerXML_LexerId_IsBase(bool value) const { qscilexerxml_lexerid_isbase = value; }
    void setQsciLexerXML_AutoCompletionFillups_IsBase(bool value) const { qscilexerxml_autocompletionfillups_isbase = value; }
    void setQsciLexerXML_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerxml_autocompletionwordseparators_isbase = value; }
    void setQsciLexerXML_BlockEnd_IsBase(bool value) const { qscilexerxml_blockend_isbase = value; }
    void setQsciLexerXML_BlockLookback_IsBase(bool value) const { qscilexerxml_blocklookback_isbase = value; }
    void setQsciLexerXML_BlockStart_IsBase(bool value) const { qscilexerxml_blockstart_isbase = value; }
    void setQsciLexerXML_BlockStartKeyword_IsBase(bool value) const { qscilexerxml_blockstartkeyword_isbase = value; }
    void setQsciLexerXML_BraceStyle_IsBase(bool value) const { qscilexerxml_bracestyle_isbase = value; }
    void setQsciLexerXML_CaseSensitive_IsBase(bool value) const { qscilexerxml_casesensitive_isbase = value; }
    void setQsciLexerXML_Color_IsBase(bool value) const { qscilexerxml_color_isbase = value; }
    void setQsciLexerXML_EolFill_IsBase(bool value) const { qscilexerxml_eolfill_isbase = value; }
    void setQsciLexerXML_Font_IsBase(bool value) const { qscilexerxml_font_isbase = value; }
    void setQsciLexerXML_IndentationGuideView_IsBase(bool value) const { qscilexerxml_indentationguideview_isbase = value; }
    void setQsciLexerXML_Keywords_IsBase(bool value) const { qscilexerxml_keywords_isbase = value; }
    void setQsciLexerXML_DefaultStyle_IsBase(bool value) const { qscilexerxml_defaultstyle_isbase = value; }
    void setQsciLexerXML_Description_IsBase(bool value) const { qscilexerxml_description_isbase = value; }
    void setQsciLexerXML_Paper_IsBase(bool value) const { qscilexerxml_paper_isbase = value; }
    void setQsciLexerXML_DefaultColorWithStyle_IsBase(bool value) const { qscilexerxml_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerXML_DefaultEolFill_IsBase(bool value) const { qscilexerxml_defaulteolfill_isbase = value; }
    void setQsciLexerXML_DefaultFontWithStyle_IsBase(bool value) const { qscilexerxml_defaultfontwithstyle_isbase = value; }
    void setQsciLexerXML_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerxml_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerXML_SetEditor_IsBase(bool value) const { qscilexerxml_seteditor_isbase = value; }
    void setQsciLexerXML_RefreshProperties_IsBase(bool value) const { qscilexerxml_refreshproperties_isbase = value; }
    void setQsciLexerXML_StyleBitsNeeded_IsBase(bool value) const { qscilexerxml_stylebitsneeded_isbase = value; }
    void setQsciLexerXML_WordCharacters_IsBase(bool value) const { qscilexerxml_wordcharacters_isbase = value; }
    void setQsciLexerXML_SetAutoIndentStyle_IsBase(bool value) const { qscilexerxml_setautoindentstyle_isbase = value; }
    void setQsciLexerXML_SetColor_IsBase(bool value) const { qscilexerxml_setcolor_isbase = value; }
    void setQsciLexerXML_SetEolFill_IsBase(bool value) const { qscilexerxml_seteolfill_isbase = value; }
    void setQsciLexerXML_SetFont_IsBase(bool value) const { qscilexerxml_setfont_isbase = value; }
    void setQsciLexerXML_SetPaper_IsBase(bool value) const { qscilexerxml_setpaper_isbase = value; }
    void setQsciLexerXML_ReadProperties_IsBase(bool value) const { qscilexerxml_readproperties_isbase = value; }
    void setQsciLexerXML_WriteProperties_IsBase(bool value) const { qscilexerxml_writeproperties_isbase = value; }
    void setQsciLexerXML_Event_IsBase(bool value) const { qscilexerxml_event_isbase = value; }
    void setQsciLexerXML_EventFilter_IsBase(bool value) const { qscilexerxml_eventfilter_isbase = value; }
    void setQsciLexerXML_TimerEvent_IsBase(bool value) const { qscilexerxml_timerevent_isbase = value; }
    void setQsciLexerXML_ChildEvent_IsBase(bool value) const { qscilexerxml_childevent_isbase = value; }
    void setQsciLexerXML_CustomEvent_IsBase(bool value) const { qscilexerxml_customevent_isbase = value; }
    void setQsciLexerXML_ConnectNotify_IsBase(bool value) const { qscilexerxml_connectnotify_isbase = value; }
    void setQsciLexerXML_DisconnectNotify_IsBase(bool value) const { qscilexerxml_disconnectnotify_isbase = value; }
    void setQsciLexerXML_Sender_IsBase(bool value) const { qscilexerxml_sender_isbase = value; }
    void setQsciLexerXML_SenderSignalIndex_IsBase(bool value) const { qscilexerxml_sendersignalindex_isbase = value; }
    void setQsciLexerXML_Receivers_IsBase(bool value) const { qscilexerxml_receivers_isbase = value; }
    void setQsciLexerXML_IsSignalConnected_IsBase(bool value) const { qscilexerxml_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerxml_metacall_isbase) {
            qscilexerxml_metacall_isbase = false;
            return QsciLexerXML::qt_metacall(param1, param2, param3);
        } else if (qscilexerxml_metacall_callback != nullptr) {
            return qscilexerxml_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerXML::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerxml_setfoldcompact_isbase) {
            qscilexerxml_setfoldcompact_isbase = false;
            QsciLexerXML::setFoldCompact(fold);
        } else if (qscilexerxml_setfoldcompact_callback != nullptr) {
            qscilexerxml_setfoldcompact_callback(this, fold);
        } else {
            QsciLexerXML::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexerxml_setfoldpreprocessor_isbase) {
            qscilexerxml_setfoldpreprocessor_isbase = false;
            QsciLexerXML::setFoldPreprocessor(fold);
        } else if (qscilexerxml_setfoldpreprocessor_callback != nullptr) {
            qscilexerxml_setfoldpreprocessor_callback(this, fold);
        } else {
            QsciLexerXML::setFoldPreprocessor(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaseSensitiveTags(bool sens) override {
        if (qscilexerxml_setcasesensitivetags_isbase) {
            qscilexerxml_setcasesensitivetags_isbase = false;
            QsciLexerXML::setCaseSensitiveTags(sens);
        } else if (qscilexerxml_setcasesensitivetags_callback != nullptr) {
            qscilexerxml_setcasesensitivetags_callback(this, sens);
        } else {
            QsciLexerXML::setCaseSensitiveTags(sens);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerxml_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerxml_lexer_isbase) {
            qscilexerxml_lexer_isbase = false;
            return QsciLexerXML::lexer();
        } else if (qscilexerxml_lexer_callback != nullptr) {
            return qscilexerxml_lexer_callback();
        } else {
            return QsciLexerXML::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerxml_lexerid_isbase) {
            qscilexerxml_lexerid_isbase = false;
            return QsciLexerXML::lexerId();
        } else if (qscilexerxml_lexerid_callback != nullptr) {
            return qscilexerxml_lexerid_callback();
        } else {
            return QsciLexerXML::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerxml_autocompletionfillups_isbase) {
            qscilexerxml_autocompletionfillups_isbase = false;
            return QsciLexerXML::autoCompletionFillups();
        } else if (qscilexerxml_autocompletionfillups_callback != nullptr) {
            return qscilexerxml_autocompletionfillups_callback();
        } else {
            return QsciLexerXML::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerxml_autocompletionwordseparators_isbase) {
            qscilexerxml_autocompletionwordseparators_isbase = false;
            return QsciLexerXML::autoCompletionWordSeparators();
        } else if (qscilexerxml_autocompletionwordseparators_callback != nullptr) {
            return qscilexerxml_autocompletionwordseparators_callback();
        } else {
            return QsciLexerXML::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerxml_blockend_isbase) {
            qscilexerxml_blockend_isbase = false;
            return QsciLexerXML::blockEnd(style);
        } else if (qscilexerxml_blockend_callback != nullptr) {
            return qscilexerxml_blockend_callback(this, style);
        } else {
            return QsciLexerXML::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerxml_blocklookback_isbase) {
            qscilexerxml_blocklookback_isbase = false;
            return QsciLexerXML::blockLookback();
        } else if (qscilexerxml_blocklookback_callback != nullptr) {
            return qscilexerxml_blocklookback_callback();
        } else {
            return QsciLexerXML::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerxml_blockstart_isbase) {
            qscilexerxml_blockstart_isbase = false;
            return QsciLexerXML::blockStart(style);
        } else if (qscilexerxml_blockstart_callback != nullptr) {
            return qscilexerxml_blockstart_callback(this, style);
        } else {
            return QsciLexerXML::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerxml_blockstartkeyword_isbase) {
            qscilexerxml_blockstartkeyword_isbase = false;
            return QsciLexerXML::blockStartKeyword(style);
        } else if (qscilexerxml_blockstartkeyword_callback != nullptr) {
            return qscilexerxml_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerXML::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerxml_bracestyle_isbase) {
            qscilexerxml_bracestyle_isbase = false;
            return QsciLexerXML::braceStyle();
        } else if (qscilexerxml_bracestyle_callback != nullptr) {
            return qscilexerxml_bracestyle_callback();
        } else {
            return QsciLexerXML::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerxml_casesensitive_isbase) {
            qscilexerxml_casesensitive_isbase = false;
            return QsciLexerXML::caseSensitive();
        } else if (qscilexerxml_casesensitive_callback != nullptr) {
            return qscilexerxml_casesensitive_callback();
        } else {
            return QsciLexerXML::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerxml_color_isbase) {
            qscilexerxml_color_isbase = false;
            return QsciLexerXML::color(style);
        } else if (qscilexerxml_color_callback != nullptr) {
            return qscilexerxml_color_callback(this, style);
        } else {
            return QsciLexerXML::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerxml_eolfill_isbase) {
            qscilexerxml_eolfill_isbase = false;
            return QsciLexerXML::eolFill(style);
        } else if (qscilexerxml_eolfill_callback != nullptr) {
            return qscilexerxml_eolfill_callback(this, style);
        } else {
            return QsciLexerXML::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerxml_font_isbase) {
            qscilexerxml_font_isbase = false;
            return QsciLexerXML::font(style);
        } else if (qscilexerxml_font_callback != nullptr) {
            return qscilexerxml_font_callback(this, style);
        } else {
            return QsciLexerXML::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerxml_indentationguideview_isbase) {
            qscilexerxml_indentationguideview_isbase = false;
            return QsciLexerXML::indentationGuideView();
        } else if (qscilexerxml_indentationguideview_callback != nullptr) {
            return qscilexerxml_indentationguideview_callback();
        } else {
            return QsciLexerXML::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerxml_keywords_isbase) {
            qscilexerxml_keywords_isbase = false;
            return QsciLexerXML::keywords(set);
        } else if (qscilexerxml_keywords_callback != nullptr) {
            return qscilexerxml_keywords_callback(this, set);
        } else {
            return QsciLexerXML::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerxml_defaultstyle_isbase) {
            qscilexerxml_defaultstyle_isbase = false;
            return QsciLexerXML::defaultStyle();
        } else if (qscilexerxml_defaultstyle_callback != nullptr) {
            return qscilexerxml_defaultstyle_callback();
        } else {
            return QsciLexerXML::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerxml_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerxml_paper_isbase) {
            qscilexerxml_paper_isbase = false;
            return QsciLexerXML::paper(style);
        } else if (qscilexerxml_paper_callback != nullptr) {
            return qscilexerxml_paper_callback(this, style);
        } else {
            return QsciLexerXML::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerxml_defaultcolorwithstyle_isbase) {
            qscilexerxml_defaultcolorwithstyle_isbase = false;
            return QsciLexerXML::defaultColor(style);
        } else if (qscilexerxml_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerxml_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerXML::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerxml_defaulteolfill_isbase) {
            qscilexerxml_defaulteolfill_isbase = false;
            return QsciLexerXML::defaultEolFill(style);
        } else if (qscilexerxml_defaulteolfill_callback != nullptr) {
            return qscilexerxml_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerXML::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerxml_defaultfontwithstyle_isbase) {
            qscilexerxml_defaultfontwithstyle_isbase = false;
            return QsciLexerXML::defaultFont(style);
        } else if (qscilexerxml_defaultfontwithstyle_callback != nullptr) {
            return qscilexerxml_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerXML::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerxml_defaultpaperwithstyle_isbase) {
            qscilexerxml_defaultpaperwithstyle_isbase = false;
            return QsciLexerXML::defaultPaper(style);
        } else if (qscilexerxml_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerxml_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerXML::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerxml_seteditor_isbase) {
            qscilexerxml_seteditor_isbase = false;
            QsciLexerXML::setEditor(editor);
        } else if (qscilexerxml_seteditor_callback != nullptr) {
            qscilexerxml_seteditor_callback(this, editor);
        } else {
            QsciLexerXML::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerxml_refreshproperties_isbase) {
            qscilexerxml_refreshproperties_isbase = false;
            QsciLexerXML::refreshProperties();
        } else if (qscilexerxml_refreshproperties_callback != nullptr) {
            qscilexerxml_refreshproperties_callback();
        } else {
            QsciLexerXML::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerxml_stylebitsneeded_isbase) {
            qscilexerxml_stylebitsneeded_isbase = false;
            return QsciLexerXML::styleBitsNeeded();
        } else if (qscilexerxml_stylebitsneeded_callback != nullptr) {
            return qscilexerxml_stylebitsneeded_callback();
        } else {
            return QsciLexerXML::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerxml_wordcharacters_isbase) {
            qscilexerxml_wordcharacters_isbase = false;
            return QsciLexerXML::wordCharacters();
        } else if (qscilexerxml_wordcharacters_callback != nullptr) {
            return qscilexerxml_wordcharacters_callback();
        } else {
            return QsciLexerXML::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerxml_setautoindentstyle_isbase) {
            qscilexerxml_setautoindentstyle_isbase = false;
            QsciLexerXML::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerxml_setautoindentstyle_callback != nullptr) {
            qscilexerxml_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerXML::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerxml_setcolor_isbase) {
            qscilexerxml_setcolor_isbase = false;
            QsciLexerXML::setColor(c, style);
        } else if (qscilexerxml_setcolor_callback != nullptr) {
            qscilexerxml_setcolor_callback(this, c, style);
        } else {
            QsciLexerXML::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerxml_seteolfill_isbase) {
            qscilexerxml_seteolfill_isbase = false;
            QsciLexerXML::setEolFill(eoffill, style);
        } else if (qscilexerxml_seteolfill_callback != nullptr) {
            qscilexerxml_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerXML::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerxml_setfont_isbase) {
            qscilexerxml_setfont_isbase = false;
            QsciLexerXML::setFont(f, style);
        } else if (qscilexerxml_setfont_callback != nullptr) {
            qscilexerxml_setfont_callback(this, f, style);
        } else {
            QsciLexerXML::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerxml_setpaper_isbase) {
            qscilexerxml_setpaper_isbase = false;
            QsciLexerXML::setPaper(c, style);
        } else if (qscilexerxml_setpaper_callback != nullptr) {
            qscilexerxml_setpaper_callback(this, c, style);
        } else {
            QsciLexerXML::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerxml_readproperties_isbase) {
            qscilexerxml_readproperties_isbase = false;
            return QsciLexerXML::readProperties(qs, prefix);
        } else if (qscilexerxml_readproperties_callback != nullptr) {
            return qscilexerxml_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerXML::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerxml_writeproperties_isbase) {
            qscilexerxml_writeproperties_isbase = false;
            return QsciLexerXML::writeProperties(qs, prefix);
        } else if (qscilexerxml_writeproperties_callback != nullptr) {
            return qscilexerxml_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerXML::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerxml_event_isbase) {
            qscilexerxml_event_isbase = false;
            return QsciLexerXML::event(event);
        } else if (qscilexerxml_event_callback != nullptr) {
            return qscilexerxml_event_callback(this, event);
        } else {
            return QsciLexerXML::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerxml_eventfilter_isbase) {
            qscilexerxml_eventfilter_isbase = false;
            return QsciLexerXML::eventFilter(watched, event);
        } else if (qscilexerxml_eventfilter_callback != nullptr) {
            return qscilexerxml_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerXML::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerxml_timerevent_isbase) {
            qscilexerxml_timerevent_isbase = false;
            QsciLexerXML::timerEvent(event);
        } else if (qscilexerxml_timerevent_callback != nullptr) {
            qscilexerxml_timerevent_callback(this, event);
        } else {
            QsciLexerXML::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerxml_childevent_isbase) {
            qscilexerxml_childevent_isbase = false;
            QsciLexerXML::childEvent(event);
        } else if (qscilexerxml_childevent_callback != nullptr) {
            qscilexerxml_childevent_callback(this, event);
        } else {
            QsciLexerXML::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerxml_customevent_isbase) {
            qscilexerxml_customevent_isbase = false;
            QsciLexerXML::customEvent(event);
        } else if (qscilexerxml_customevent_callback != nullptr) {
            qscilexerxml_customevent_callback(this, event);
        } else {
            QsciLexerXML::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerxml_connectnotify_isbase) {
            qscilexerxml_connectnotify_isbase = false;
            QsciLexerXML::connectNotify(signal);
        } else if (qscilexerxml_connectnotify_callback != nullptr) {
            qscilexerxml_connectnotify_callback(this, signal);
        } else {
            QsciLexerXML::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerxml_disconnectnotify_isbase) {
            qscilexerxml_disconnectnotify_isbase = false;
            QsciLexerXML::disconnectNotify(signal);
        } else if (qscilexerxml_disconnectnotify_callback != nullptr) {
            qscilexerxml_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerXML::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerxml_sender_isbase) {
            qscilexerxml_sender_isbase = false;
            return QsciLexerXML::sender();
        } else if (qscilexerxml_sender_callback != nullptr) {
            return qscilexerxml_sender_callback();
        } else {
            return QsciLexerXML::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerxml_sendersignalindex_isbase) {
            qscilexerxml_sendersignalindex_isbase = false;
            return QsciLexerXML::senderSignalIndex();
        } else if (qscilexerxml_sendersignalindex_callback != nullptr) {
            return qscilexerxml_sendersignalindex_callback();
        } else {
            return QsciLexerXML::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerxml_receivers_isbase) {
            qscilexerxml_receivers_isbase = false;
            return QsciLexerXML::receivers(signal);
        } else if (qscilexerxml_receivers_callback != nullptr) {
            return qscilexerxml_receivers_callback(this, signal);
        } else {
            return QsciLexerXML::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerxml_issignalconnected_isbase) {
            qscilexerxml_issignalconnected_isbase = false;
            return QsciLexerXML::isSignalConnected(signal);
        } else if (qscilexerxml_issignalconnected_callback != nullptr) {
            return qscilexerxml_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerXML::isSignalConnected(signal);
        }
    }
};

#endif
