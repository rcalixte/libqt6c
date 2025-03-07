#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPASCAL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPASCAL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerPascal so that we can call protected methods
class VirtualQsciLexerPascal : public QsciLexerPascal {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerPascal_Metacall_Callback = int (*)(QsciLexerPascal*, QMetaObject::Call, int, void**);
    using QsciLexerPascal_SetFoldComments_Callback = void (*)(QsciLexerPascal*, bool);
    using QsciLexerPascal_SetFoldCompact_Callback = void (*)(QsciLexerPascal*, bool);
    using QsciLexerPascal_SetFoldPreprocessor_Callback = void (*)(QsciLexerPascal*, bool);
    using QsciLexerPascal_Language_Callback = const char* (*)();
    using QsciLexerPascal_Lexer_Callback = const char* (*)();
    using QsciLexerPascal_LexerId_Callback = int (*)();
    using QsciLexerPascal_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerPascal_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerPascal_BlockEnd_Callback = const char* (*)(const QsciLexerPascal*, int*);
    using QsciLexerPascal_BlockLookback_Callback = int (*)();
    using QsciLexerPascal_BlockStart_Callback = const char* (*)(const QsciLexerPascal*, int*);
    using QsciLexerPascal_BlockStartKeyword_Callback = const char* (*)(const QsciLexerPascal*, int*);
    using QsciLexerPascal_BraceStyle_Callback = int (*)();
    using QsciLexerPascal_CaseSensitive_Callback = bool (*)();
    using QsciLexerPascal_Color_Callback = QColor (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_EolFill_Callback = bool (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_Font_Callback = QFont (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_IndentationGuideView_Callback = int (*)();
    using QsciLexerPascal_Keywords_Callback = const char* (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_DefaultStyle_Callback = int (*)();
    using QsciLexerPascal_Description_Callback = QString (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_Paper_Callback = QColor (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_DefaultEolFill_Callback = bool (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_SetEditor_Callback = void (*)(QsciLexerPascal*, QsciScintilla*);
    using QsciLexerPascal_RefreshProperties_Callback = void (*)();
    using QsciLexerPascal_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerPascal_WordCharacters_Callback = const char* (*)();
    using QsciLexerPascal_SetAutoIndentStyle_Callback = void (*)(QsciLexerPascal*, int);
    using QsciLexerPascal_SetColor_Callback = void (*)(QsciLexerPascal*, const QColor&, int);
    using QsciLexerPascal_SetEolFill_Callback = void (*)(QsciLexerPascal*, bool, int);
    using QsciLexerPascal_SetFont_Callback = void (*)(QsciLexerPascal*, const QFont&, int);
    using QsciLexerPascal_SetPaper_Callback = void (*)(QsciLexerPascal*, const QColor&, int);
    using QsciLexerPascal_ReadProperties_Callback = bool (*)(QsciLexerPascal*, QSettings&, const QString&);
    using QsciLexerPascal_WriteProperties_Callback = bool (*)(const QsciLexerPascal*, QSettings&, const QString&);
    using QsciLexerPascal_Event_Callback = bool (*)(QsciLexerPascal*, QEvent*);
    using QsciLexerPascal_EventFilter_Callback = bool (*)(QsciLexerPascal*, QObject*, QEvent*);
    using QsciLexerPascal_TimerEvent_Callback = void (*)(QsciLexerPascal*, QTimerEvent*);
    using QsciLexerPascal_ChildEvent_Callback = void (*)(QsciLexerPascal*, QChildEvent*);
    using QsciLexerPascal_CustomEvent_Callback = void (*)(QsciLexerPascal*, QEvent*);
    using QsciLexerPascal_ConnectNotify_Callback = void (*)(QsciLexerPascal*, const QMetaMethod&);
    using QsciLexerPascal_DisconnectNotify_Callback = void (*)(QsciLexerPascal*, const QMetaMethod&);
    using QsciLexerPascal_Sender_Callback = QObject* (*)();
    using QsciLexerPascal_SenderSignalIndex_Callback = int (*)();
    using QsciLexerPascal_Receivers_Callback = int (*)(const QsciLexerPascal*, const char*);
    using QsciLexerPascal_IsSignalConnected_Callback = bool (*)(const QsciLexerPascal*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerPascal_Metacall_Callback qscilexerpascal_metacall_callback = nullptr;
    QsciLexerPascal_SetFoldComments_Callback qscilexerpascal_setfoldcomments_callback = nullptr;
    QsciLexerPascal_SetFoldCompact_Callback qscilexerpascal_setfoldcompact_callback = nullptr;
    QsciLexerPascal_SetFoldPreprocessor_Callback qscilexerpascal_setfoldpreprocessor_callback = nullptr;
    QsciLexerPascal_Language_Callback qscilexerpascal_language_callback = nullptr;
    QsciLexerPascal_Lexer_Callback qscilexerpascal_lexer_callback = nullptr;
    QsciLexerPascal_LexerId_Callback qscilexerpascal_lexerid_callback = nullptr;
    QsciLexerPascal_AutoCompletionFillups_Callback qscilexerpascal_autocompletionfillups_callback = nullptr;
    QsciLexerPascal_AutoCompletionWordSeparators_Callback qscilexerpascal_autocompletionwordseparators_callback = nullptr;
    QsciLexerPascal_BlockEnd_Callback qscilexerpascal_blockend_callback = nullptr;
    QsciLexerPascal_BlockLookback_Callback qscilexerpascal_blocklookback_callback = nullptr;
    QsciLexerPascal_BlockStart_Callback qscilexerpascal_blockstart_callback = nullptr;
    QsciLexerPascal_BlockStartKeyword_Callback qscilexerpascal_blockstartkeyword_callback = nullptr;
    QsciLexerPascal_BraceStyle_Callback qscilexerpascal_bracestyle_callback = nullptr;
    QsciLexerPascal_CaseSensitive_Callback qscilexerpascal_casesensitive_callback = nullptr;
    QsciLexerPascal_Color_Callback qscilexerpascal_color_callback = nullptr;
    QsciLexerPascal_EolFill_Callback qscilexerpascal_eolfill_callback = nullptr;
    QsciLexerPascal_Font_Callback qscilexerpascal_font_callback = nullptr;
    QsciLexerPascal_IndentationGuideView_Callback qscilexerpascal_indentationguideview_callback = nullptr;
    QsciLexerPascal_Keywords_Callback qscilexerpascal_keywords_callback = nullptr;
    QsciLexerPascal_DefaultStyle_Callback qscilexerpascal_defaultstyle_callback = nullptr;
    QsciLexerPascal_Description_Callback qscilexerpascal_description_callback = nullptr;
    QsciLexerPascal_Paper_Callback qscilexerpascal_paper_callback = nullptr;
    QsciLexerPascal_DefaultColorWithStyle_Callback qscilexerpascal_defaultcolorwithstyle_callback = nullptr;
    QsciLexerPascal_DefaultEolFill_Callback qscilexerpascal_defaulteolfill_callback = nullptr;
    QsciLexerPascal_DefaultFontWithStyle_Callback qscilexerpascal_defaultfontwithstyle_callback = nullptr;
    QsciLexerPascal_DefaultPaperWithStyle_Callback qscilexerpascal_defaultpaperwithstyle_callback = nullptr;
    QsciLexerPascal_SetEditor_Callback qscilexerpascal_seteditor_callback = nullptr;
    QsciLexerPascal_RefreshProperties_Callback qscilexerpascal_refreshproperties_callback = nullptr;
    QsciLexerPascal_StyleBitsNeeded_Callback qscilexerpascal_stylebitsneeded_callback = nullptr;
    QsciLexerPascal_WordCharacters_Callback qscilexerpascal_wordcharacters_callback = nullptr;
    QsciLexerPascal_SetAutoIndentStyle_Callback qscilexerpascal_setautoindentstyle_callback = nullptr;
    QsciLexerPascal_SetColor_Callback qscilexerpascal_setcolor_callback = nullptr;
    QsciLexerPascal_SetEolFill_Callback qscilexerpascal_seteolfill_callback = nullptr;
    QsciLexerPascal_SetFont_Callback qscilexerpascal_setfont_callback = nullptr;
    QsciLexerPascal_SetPaper_Callback qscilexerpascal_setpaper_callback = nullptr;
    QsciLexerPascal_ReadProperties_Callback qscilexerpascal_readproperties_callback = nullptr;
    QsciLexerPascal_WriteProperties_Callback qscilexerpascal_writeproperties_callback = nullptr;
    QsciLexerPascal_Event_Callback qscilexerpascal_event_callback = nullptr;
    QsciLexerPascal_EventFilter_Callback qscilexerpascal_eventfilter_callback = nullptr;
    QsciLexerPascal_TimerEvent_Callback qscilexerpascal_timerevent_callback = nullptr;
    QsciLexerPascal_ChildEvent_Callback qscilexerpascal_childevent_callback = nullptr;
    QsciLexerPascal_CustomEvent_Callback qscilexerpascal_customevent_callback = nullptr;
    QsciLexerPascal_ConnectNotify_Callback qscilexerpascal_connectnotify_callback = nullptr;
    QsciLexerPascal_DisconnectNotify_Callback qscilexerpascal_disconnectnotify_callback = nullptr;
    QsciLexerPascal_Sender_Callback qscilexerpascal_sender_callback = nullptr;
    QsciLexerPascal_SenderSignalIndex_Callback qscilexerpascal_sendersignalindex_callback = nullptr;
    QsciLexerPascal_Receivers_Callback qscilexerpascal_receivers_callback = nullptr;
    QsciLexerPascal_IsSignalConnected_Callback qscilexerpascal_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerpascal_metacall_isbase = false;
    mutable bool qscilexerpascal_setfoldcomments_isbase = false;
    mutable bool qscilexerpascal_setfoldcompact_isbase = false;
    mutable bool qscilexerpascal_setfoldpreprocessor_isbase = false;
    mutable bool qscilexerpascal_language_isbase = false;
    mutable bool qscilexerpascal_lexer_isbase = false;
    mutable bool qscilexerpascal_lexerid_isbase = false;
    mutable bool qscilexerpascal_autocompletionfillups_isbase = false;
    mutable bool qscilexerpascal_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerpascal_blockend_isbase = false;
    mutable bool qscilexerpascal_blocklookback_isbase = false;
    mutable bool qscilexerpascal_blockstart_isbase = false;
    mutable bool qscilexerpascal_blockstartkeyword_isbase = false;
    mutable bool qscilexerpascal_bracestyle_isbase = false;
    mutable bool qscilexerpascal_casesensitive_isbase = false;
    mutable bool qscilexerpascal_color_isbase = false;
    mutable bool qscilexerpascal_eolfill_isbase = false;
    mutable bool qscilexerpascal_font_isbase = false;
    mutable bool qscilexerpascal_indentationguideview_isbase = false;
    mutable bool qscilexerpascal_keywords_isbase = false;
    mutable bool qscilexerpascal_defaultstyle_isbase = false;
    mutable bool qscilexerpascal_description_isbase = false;
    mutable bool qscilexerpascal_paper_isbase = false;
    mutable bool qscilexerpascal_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerpascal_defaulteolfill_isbase = false;
    mutable bool qscilexerpascal_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerpascal_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerpascal_seteditor_isbase = false;
    mutable bool qscilexerpascal_refreshproperties_isbase = false;
    mutable bool qscilexerpascal_stylebitsneeded_isbase = false;
    mutable bool qscilexerpascal_wordcharacters_isbase = false;
    mutable bool qscilexerpascal_setautoindentstyle_isbase = false;
    mutable bool qscilexerpascal_setcolor_isbase = false;
    mutable bool qscilexerpascal_seteolfill_isbase = false;
    mutable bool qscilexerpascal_setfont_isbase = false;
    mutable bool qscilexerpascal_setpaper_isbase = false;
    mutable bool qscilexerpascal_readproperties_isbase = false;
    mutable bool qscilexerpascal_writeproperties_isbase = false;
    mutable bool qscilexerpascal_event_isbase = false;
    mutable bool qscilexerpascal_eventfilter_isbase = false;
    mutable bool qscilexerpascal_timerevent_isbase = false;
    mutable bool qscilexerpascal_childevent_isbase = false;
    mutable bool qscilexerpascal_customevent_isbase = false;
    mutable bool qscilexerpascal_connectnotify_isbase = false;
    mutable bool qscilexerpascal_disconnectnotify_isbase = false;
    mutable bool qscilexerpascal_sender_isbase = false;
    mutable bool qscilexerpascal_sendersignalindex_isbase = false;
    mutable bool qscilexerpascal_receivers_isbase = false;
    mutable bool qscilexerpascal_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerPascal() : QsciLexerPascal(){};
    VirtualQsciLexerPascal(QObject* parent) : QsciLexerPascal(parent){};

    ~VirtualQsciLexerPascal() {
        qscilexerpascal_metacall_callback = nullptr;
        qscilexerpascal_setfoldcomments_callback = nullptr;
        qscilexerpascal_setfoldcompact_callback = nullptr;
        qscilexerpascal_setfoldpreprocessor_callback = nullptr;
        qscilexerpascal_language_callback = nullptr;
        qscilexerpascal_lexer_callback = nullptr;
        qscilexerpascal_lexerid_callback = nullptr;
        qscilexerpascal_autocompletionfillups_callback = nullptr;
        qscilexerpascal_autocompletionwordseparators_callback = nullptr;
        qscilexerpascal_blockend_callback = nullptr;
        qscilexerpascal_blocklookback_callback = nullptr;
        qscilexerpascal_blockstart_callback = nullptr;
        qscilexerpascal_blockstartkeyword_callback = nullptr;
        qscilexerpascal_bracestyle_callback = nullptr;
        qscilexerpascal_casesensitive_callback = nullptr;
        qscilexerpascal_color_callback = nullptr;
        qscilexerpascal_eolfill_callback = nullptr;
        qscilexerpascal_font_callback = nullptr;
        qscilexerpascal_indentationguideview_callback = nullptr;
        qscilexerpascal_keywords_callback = nullptr;
        qscilexerpascal_defaultstyle_callback = nullptr;
        qscilexerpascal_description_callback = nullptr;
        qscilexerpascal_paper_callback = nullptr;
        qscilexerpascal_defaultcolorwithstyle_callback = nullptr;
        qscilexerpascal_defaulteolfill_callback = nullptr;
        qscilexerpascal_defaultfontwithstyle_callback = nullptr;
        qscilexerpascal_defaultpaperwithstyle_callback = nullptr;
        qscilexerpascal_seteditor_callback = nullptr;
        qscilexerpascal_refreshproperties_callback = nullptr;
        qscilexerpascal_stylebitsneeded_callback = nullptr;
        qscilexerpascal_wordcharacters_callback = nullptr;
        qscilexerpascal_setautoindentstyle_callback = nullptr;
        qscilexerpascal_setcolor_callback = nullptr;
        qscilexerpascal_seteolfill_callback = nullptr;
        qscilexerpascal_setfont_callback = nullptr;
        qscilexerpascal_setpaper_callback = nullptr;
        qscilexerpascal_readproperties_callback = nullptr;
        qscilexerpascal_writeproperties_callback = nullptr;
        qscilexerpascal_event_callback = nullptr;
        qscilexerpascal_eventfilter_callback = nullptr;
        qscilexerpascal_timerevent_callback = nullptr;
        qscilexerpascal_childevent_callback = nullptr;
        qscilexerpascal_customevent_callback = nullptr;
        qscilexerpascal_connectnotify_callback = nullptr;
        qscilexerpascal_disconnectnotify_callback = nullptr;
        qscilexerpascal_sender_callback = nullptr;
        qscilexerpascal_sendersignalindex_callback = nullptr;
        qscilexerpascal_receivers_callback = nullptr;
        qscilexerpascal_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerPascal_Metacall_Callback(QsciLexerPascal_Metacall_Callback cb) { qscilexerpascal_metacall_callback = cb; }
    void setQsciLexerPascal_SetFoldComments_Callback(QsciLexerPascal_SetFoldComments_Callback cb) { qscilexerpascal_setfoldcomments_callback = cb; }
    void setQsciLexerPascal_SetFoldCompact_Callback(QsciLexerPascal_SetFoldCompact_Callback cb) { qscilexerpascal_setfoldcompact_callback = cb; }
    void setQsciLexerPascal_SetFoldPreprocessor_Callback(QsciLexerPascal_SetFoldPreprocessor_Callback cb) { qscilexerpascal_setfoldpreprocessor_callback = cb; }
    void setQsciLexerPascal_Language_Callback(QsciLexerPascal_Language_Callback cb) { qscilexerpascal_language_callback = cb; }
    void setQsciLexerPascal_Lexer_Callback(QsciLexerPascal_Lexer_Callback cb) { qscilexerpascal_lexer_callback = cb; }
    void setQsciLexerPascal_LexerId_Callback(QsciLexerPascal_LexerId_Callback cb) { qscilexerpascal_lexerid_callback = cb; }
    void setQsciLexerPascal_AutoCompletionFillups_Callback(QsciLexerPascal_AutoCompletionFillups_Callback cb) { qscilexerpascal_autocompletionfillups_callback = cb; }
    void setQsciLexerPascal_AutoCompletionWordSeparators_Callback(QsciLexerPascal_AutoCompletionWordSeparators_Callback cb) { qscilexerpascal_autocompletionwordseparators_callback = cb; }
    void setQsciLexerPascal_BlockEnd_Callback(QsciLexerPascal_BlockEnd_Callback cb) { qscilexerpascal_blockend_callback = cb; }
    void setQsciLexerPascal_BlockLookback_Callback(QsciLexerPascal_BlockLookback_Callback cb) { qscilexerpascal_blocklookback_callback = cb; }
    void setQsciLexerPascal_BlockStart_Callback(QsciLexerPascal_BlockStart_Callback cb) { qscilexerpascal_blockstart_callback = cb; }
    void setQsciLexerPascal_BlockStartKeyword_Callback(QsciLexerPascal_BlockStartKeyword_Callback cb) { qscilexerpascal_blockstartkeyword_callback = cb; }
    void setQsciLexerPascal_BraceStyle_Callback(QsciLexerPascal_BraceStyle_Callback cb) { qscilexerpascal_bracestyle_callback = cb; }
    void setQsciLexerPascal_CaseSensitive_Callback(QsciLexerPascal_CaseSensitive_Callback cb) { qscilexerpascal_casesensitive_callback = cb; }
    void setQsciLexerPascal_Color_Callback(QsciLexerPascal_Color_Callback cb) { qscilexerpascal_color_callback = cb; }
    void setQsciLexerPascal_EolFill_Callback(QsciLexerPascal_EolFill_Callback cb) { qscilexerpascal_eolfill_callback = cb; }
    void setQsciLexerPascal_Font_Callback(QsciLexerPascal_Font_Callback cb) { qscilexerpascal_font_callback = cb; }
    void setQsciLexerPascal_IndentationGuideView_Callback(QsciLexerPascal_IndentationGuideView_Callback cb) { qscilexerpascal_indentationguideview_callback = cb; }
    void setQsciLexerPascal_Keywords_Callback(QsciLexerPascal_Keywords_Callback cb) { qscilexerpascal_keywords_callback = cb; }
    void setQsciLexerPascal_DefaultStyle_Callback(QsciLexerPascal_DefaultStyle_Callback cb) { qscilexerpascal_defaultstyle_callback = cb; }
    void setQsciLexerPascal_Description_Callback(QsciLexerPascal_Description_Callback cb) { qscilexerpascal_description_callback = cb; }
    void setQsciLexerPascal_Paper_Callback(QsciLexerPascal_Paper_Callback cb) { qscilexerpascal_paper_callback = cb; }
    void setQsciLexerPascal_DefaultColorWithStyle_Callback(QsciLexerPascal_DefaultColorWithStyle_Callback cb) { qscilexerpascal_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerPascal_DefaultEolFill_Callback(QsciLexerPascal_DefaultEolFill_Callback cb) { qscilexerpascal_defaulteolfill_callback = cb; }
    void setQsciLexerPascal_DefaultFontWithStyle_Callback(QsciLexerPascal_DefaultFontWithStyle_Callback cb) { qscilexerpascal_defaultfontwithstyle_callback = cb; }
    void setQsciLexerPascal_DefaultPaperWithStyle_Callback(QsciLexerPascal_DefaultPaperWithStyle_Callback cb) { qscilexerpascal_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerPascal_SetEditor_Callback(QsciLexerPascal_SetEditor_Callback cb) { qscilexerpascal_seteditor_callback = cb; }
    void setQsciLexerPascal_RefreshProperties_Callback(QsciLexerPascal_RefreshProperties_Callback cb) { qscilexerpascal_refreshproperties_callback = cb; }
    void setQsciLexerPascal_StyleBitsNeeded_Callback(QsciLexerPascal_StyleBitsNeeded_Callback cb) { qscilexerpascal_stylebitsneeded_callback = cb; }
    void setQsciLexerPascal_WordCharacters_Callback(QsciLexerPascal_WordCharacters_Callback cb) { qscilexerpascal_wordcharacters_callback = cb; }
    void setQsciLexerPascal_SetAutoIndentStyle_Callback(QsciLexerPascal_SetAutoIndentStyle_Callback cb) { qscilexerpascal_setautoindentstyle_callback = cb; }
    void setQsciLexerPascal_SetColor_Callback(QsciLexerPascal_SetColor_Callback cb) { qscilexerpascal_setcolor_callback = cb; }
    void setQsciLexerPascal_SetEolFill_Callback(QsciLexerPascal_SetEolFill_Callback cb) { qscilexerpascal_seteolfill_callback = cb; }
    void setQsciLexerPascal_SetFont_Callback(QsciLexerPascal_SetFont_Callback cb) { qscilexerpascal_setfont_callback = cb; }
    void setQsciLexerPascal_SetPaper_Callback(QsciLexerPascal_SetPaper_Callback cb) { qscilexerpascal_setpaper_callback = cb; }
    void setQsciLexerPascal_ReadProperties_Callback(QsciLexerPascal_ReadProperties_Callback cb) { qscilexerpascal_readproperties_callback = cb; }
    void setQsciLexerPascal_WriteProperties_Callback(QsciLexerPascal_WriteProperties_Callback cb) { qscilexerpascal_writeproperties_callback = cb; }
    void setQsciLexerPascal_Event_Callback(QsciLexerPascal_Event_Callback cb) { qscilexerpascal_event_callback = cb; }
    void setQsciLexerPascal_EventFilter_Callback(QsciLexerPascal_EventFilter_Callback cb) { qscilexerpascal_eventfilter_callback = cb; }
    void setQsciLexerPascal_TimerEvent_Callback(QsciLexerPascal_TimerEvent_Callback cb) { qscilexerpascal_timerevent_callback = cb; }
    void setQsciLexerPascal_ChildEvent_Callback(QsciLexerPascal_ChildEvent_Callback cb) { qscilexerpascal_childevent_callback = cb; }
    void setQsciLexerPascal_CustomEvent_Callback(QsciLexerPascal_CustomEvent_Callback cb) { qscilexerpascal_customevent_callback = cb; }
    void setQsciLexerPascal_ConnectNotify_Callback(QsciLexerPascal_ConnectNotify_Callback cb) { qscilexerpascal_connectnotify_callback = cb; }
    void setQsciLexerPascal_DisconnectNotify_Callback(QsciLexerPascal_DisconnectNotify_Callback cb) { qscilexerpascal_disconnectnotify_callback = cb; }
    void setQsciLexerPascal_Sender_Callback(QsciLexerPascal_Sender_Callback cb) { qscilexerpascal_sender_callback = cb; }
    void setQsciLexerPascal_SenderSignalIndex_Callback(QsciLexerPascal_SenderSignalIndex_Callback cb) { qscilexerpascal_sendersignalindex_callback = cb; }
    void setQsciLexerPascal_Receivers_Callback(QsciLexerPascal_Receivers_Callback cb) { qscilexerpascal_receivers_callback = cb; }
    void setQsciLexerPascal_IsSignalConnected_Callback(QsciLexerPascal_IsSignalConnected_Callback cb) { qscilexerpascal_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerPascal_Metacall_IsBase(bool value) const { qscilexerpascal_metacall_isbase = value; }
    void setQsciLexerPascal_SetFoldComments_IsBase(bool value) const { qscilexerpascal_setfoldcomments_isbase = value; }
    void setQsciLexerPascal_SetFoldCompact_IsBase(bool value) const { qscilexerpascal_setfoldcompact_isbase = value; }
    void setQsciLexerPascal_SetFoldPreprocessor_IsBase(bool value) const { qscilexerpascal_setfoldpreprocessor_isbase = value; }
    void setQsciLexerPascal_Language_IsBase(bool value) const { qscilexerpascal_language_isbase = value; }
    void setQsciLexerPascal_Lexer_IsBase(bool value) const { qscilexerpascal_lexer_isbase = value; }
    void setQsciLexerPascal_LexerId_IsBase(bool value) const { qscilexerpascal_lexerid_isbase = value; }
    void setQsciLexerPascal_AutoCompletionFillups_IsBase(bool value) const { qscilexerpascal_autocompletionfillups_isbase = value; }
    void setQsciLexerPascal_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerpascal_autocompletionwordseparators_isbase = value; }
    void setQsciLexerPascal_BlockEnd_IsBase(bool value) const { qscilexerpascal_blockend_isbase = value; }
    void setQsciLexerPascal_BlockLookback_IsBase(bool value) const { qscilexerpascal_blocklookback_isbase = value; }
    void setQsciLexerPascal_BlockStart_IsBase(bool value) const { qscilexerpascal_blockstart_isbase = value; }
    void setQsciLexerPascal_BlockStartKeyword_IsBase(bool value) const { qscilexerpascal_blockstartkeyword_isbase = value; }
    void setQsciLexerPascal_BraceStyle_IsBase(bool value) const { qscilexerpascal_bracestyle_isbase = value; }
    void setQsciLexerPascal_CaseSensitive_IsBase(bool value) const { qscilexerpascal_casesensitive_isbase = value; }
    void setQsciLexerPascal_Color_IsBase(bool value) const { qscilexerpascal_color_isbase = value; }
    void setQsciLexerPascal_EolFill_IsBase(bool value) const { qscilexerpascal_eolfill_isbase = value; }
    void setQsciLexerPascal_Font_IsBase(bool value) const { qscilexerpascal_font_isbase = value; }
    void setQsciLexerPascal_IndentationGuideView_IsBase(bool value) const { qscilexerpascal_indentationguideview_isbase = value; }
    void setQsciLexerPascal_Keywords_IsBase(bool value) const { qscilexerpascal_keywords_isbase = value; }
    void setQsciLexerPascal_DefaultStyle_IsBase(bool value) const { qscilexerpascal_defaultstyle_isbase = value; }
    void setQsciLexerPascal_Description_IsBase(bool value) const { qscilexerpascal_description_isbase = value; }
    void setQsciLexerPascal_Paper_IsBase(bool value) const { qscilexerpascal_paper_isbase = value; }
    void setQsciLexerPascal_DefaultColorWithStyle_IsBase(bool value) const { qscilexerpascal_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerPascal_DefaultEolFill_IsBase(bool value) const { qscilexerpascal_defaulteolfill_isbase = value; }
    void setQsciLexerPascal_DefaultFontWithStyle_IsBase(bool value) const { qscilexerpascal_defaultfontwithstyle_isbase = value; }
    void setQsciLexerPascal_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerpascal_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerPascal_SetEditor_IsBase(bool value) const { qscilexerpascal_seteditor_isbase = value; }
    void setQsciLexerPascal_RefreshProperties_IsBase(bool value) const { qscilexerpascal_refreshproperties_isbase = value; }
    void setQsciLexerPascal_StyleBitsNeeded_IsBase(bool value) const { qscilexerpascal_stylebitsneeded_isbase = value; }
    void setQsciLexerPascal_WordCharacters_IsBase(bool value) const { qscilexerpascal_wordcharacters_isbase = value; }
    void setQsciLexerPascal_SetAutoIndentStyle_IsBase(bool value) const { qscilexerpascal_setautoindentstyle_isbase = value; }
    void setQsciLexerPascal_SetColor_IsBase(bool value) const { qscilexerpascal_setcolor_isbase = value; }
    void setQsciLexerPascal_SetEolFill_IsBase(bool value) const { qscilexerpascal_seteolfill_isbase = value; }
    void setQsciLexerPascal_SetFont_IsBase(bool value) const { qscilexerpascal_setfont_isbase = value; }
    void setQsciLexerPascal_SetPaper_IsBase(bool value) const { qscilexerpascal_setpaper_isbase = value; }
    void setQsciLexerPascal_ReadProperties_IsBase(bool value) const { qscilexerpascal_readproperties_isbase = value; }
    void setQsciLexerPascal_WriteProperties_IsBase(bool value) const { qscilexerpascal_writeproperties_isbase = value; }
    void setQsciLexerPascal_Event_IsBase(bool value) const { qscilexerpascal_event_isbase = value; }
    void setQsciLexerPascal_EventFilter_IsBase(bool value) const { qscilexerpascal_eventfilter_isbase = value; }
    void setQsciLexerPascal_TimerEvent_IsBase(bool value) const { qscilexerpascal_timerevent_isbase = value; }
    void setQsciLexerPascal_ChildEvent_IsBase(bool value) const { qscilexerpascal_childevent_isbase = value; }
    void setQsciLexerPascal_CustomEvent_IsBase(bool value) const { qscilexerpascal_customevent_isbase = value; }
    void setQsciLexerPascal_ConnectNotify_IsBase(bool value) const { qscilexerpascal_connectnotify_isbase = value; }
    void setQsciLexerPascal_DisconnectNotify_IsBase(bool value) const { qscilexerpascal_disconnectnotify_isbase = value; }
    void setQsciLexerPascal_Sender_IsBase(bool value) const { qscilexerpascal_sender_isbase = value; }
    void setQsciLexerPascal_SenderSignalIndex_IsBase(bool value) const { qscilexerpascal_sendersignalindex_isbase = value; }
    void setQsciLexerPascal_Receivers_IsBase(bool value) const { qscilexerpascal_receivers_isbase = value; }
    void setQsciLexerPascal_IsSignalConnected_IsBase(bool value) const { qscilexerpascal_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerpascal_metacall_isbase) {
            qscilexerpascal_metacall_isbase = false;
            return QsciLexerPascal::qt_metacall(param1, param2, param3);
        } else if (qscilexerpascal_metacall_callback != nullptr) {
            return qscilexerpascal_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerPascal::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerpascal_setfoldcomments_isbase) {
            qscilexerpascal_setfoldcomments_isbase = false;
            QsciLexerPascal::setFoldComments(fold);
        } else if (qscilexerpascal_setfoldcomments_callback != nullptr) {
            qscilexerpascal_setfoldcomments_callback(this, fold);
        } else {
            QsciLexerPascal::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerpascal_setfoldcompact_isbase) {
            qscilexerpascal_setfoldcompact_isbase = false;
            QsciLexerPascal::setFoldCompact(fold);
        } else if (qscilexerpascal_setfoldcompact_callback != nullptr) {
            qscilexerpascal_setfoldcompact_callback(this, fold);
        } else {
            QsciLexerPascal::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexerpascal_setfoldpreprocessor_isbase) {
            qscilexerpascal_setfoldpreprocessor_isbase = false;
            QsciLexerPascal::setFoldPreprocessor(fold);
        } else if (qscilexerpascal_setfoldpreprocessor_callback != nullptr) {
            qscilexerpascal_setfoldpreprocessor_callback(this, fold);
        } else {
            QsciLexerPascal::setFoldPreprocessor(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerpascal_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerpascal_lexer_isbase) {
            qscilexerpascal_lexer_isbase = false;
            return QsciLexerPascal::lexer();
        } else if (qscilexerpascal_lexer_callback != nullptr) {
            return qscilexerpascal_lexer_callback();
        } else {
            return QsciLexerPascal::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerpascal_lexerid_isbase) {
            qscilexerpascal_lexerid_isbase = false;
            return QsciLexerPascal::lexerId();
        } else if (qscilexerpascal_lexerid_callback != nullptr) {
            return qscilexerpascal_lexerid_callback();
        } else {
            return QsciLexerPascal::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerpascal_autocompletionfillups_isbase) {
            qscilexerpascal_autocompletionfillups_isbase = false;
            return QsciLexerPascal::autoCompletionFillups();
        } else if (qscilexerpascal_autocompletionfillups_callback != nullptr) {
            return qscilexerpascal_autocompletionfillups_callback();
        } else {
            return QsciLexerPascal::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerpascal_autocompletionwordseparators_isbase) {
            qscilexerpascal_autocompletionwordseparators_isbase = false;
            return QsciLexerPascal::autoCompletionWordSeparators();
        } else if (qscilexerpascal_autocompletionwordseparators_callback != nullptr) {
            return qscilexerpascal_autocompletionwordseparators_callback();
        } else {
            return QsciLexerPascal::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerpascal_blockend_isbase) {
            qscilexerpascal_blockend_isbase = false;
            return QsciLexerPascal::blockEnd(style);
        } else if (qscilexerpascal_blockend_callback != nullptr) {
            return qscilexerpascal_blockend_callback(this, style);
        } else {
            return QsciLexerPascal::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerpascal_blocklookback_isbase) {
            qscilexerpascal_blocklookback_isbase = false;
            return QsciLexerPascal::blockLookback();
        } else if (qscilexerpascal_blocklookback_callback != nullptr) {
            return qscilexerpascal_blocklookback_callback();
        } else {
            return QsciLexerPascal::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerpascal_blockstart_isbase) {
            qscilexerpascal_blockstart_isbase = false;
            return QsciLexerPascal::blockStart(style);
        } else if (qscilexerpascal_blockstart_callback != nullptr) {
            return qscilexerpascal_blockstart_callback(this, style);
        } else {
            return QsciLexerPascal::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerpascal_blockstartkeyword_isbase) {
            qscilexerpascal_blockstartkeyword_isbase = false;
            return QsciLexerPascal::blockStartKeyword(style);
        } else if (qscilexerpascal_blockstartkeyword_callback != nullptr) {
            return qscilexerpascal_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerPascal::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerpascal_bracestyle_isbase) {
            qscilexerpascal_bracestyle_isbase = false;
            return QsciLexerPascal::braceStyle();
        } else if (qscilexerpascal_bracestyle_callback != nullptr) {
            return qscilexerpascal_bracestyle_callback();
        } else {
            return QsciLexerPascal::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerpascal_casesensitive_isbase) {
            qscilexerpascal_casesensitive_isbase = false;
            return QsciLexerPascal::caseSensitive();
        } else if (qscilexerpascal_casesensitive_callback != nullptr) {
            return qscilexerpascal_casesensitive_callback();
        } else {
            return QsciLexerPascal::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerpascal_color_isbase) {
            qscilexerpascal_color_isbase = false;
            return QsciLexerPascal::color(style);
        } else if (qscilexerpascal_color_callback != nullptr) {
            return qscilexerpascal_color_callback(this, style);
        } else {
            return QsciLexerPascal::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerpascal_eolfill_isbase) {
            qscilexerpascal_eolfill_isbase = false;
            return QsciLexerPascal::eolFill(style);
        } else if (qscilexerpascal_eolfill_callback != nullptr) {
            return qscilexerpascal_eolfill_callback(this, style);
        } else {
            return QsciLexerPascal::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerpascal_font_isbase) {
            qscilexerpascal_font_isbase = false;
            return QsciLexerPascal::font(style);
        } else if (qscilexerpascal_font_callback != nullptr) {
            return qscilexerpascal_font_callback(this, style);
        } else {
            return QsciLexerPascal::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerpascal_indentationguideview_isbase) {
            qscilexerpascal_indentationguideview_isbase = false;
            return QsciLexerPascal::indentationGuideView();
        } else if (qscilexerpascal_indentationguideview_callback != nullptr) {
            return qscilexerpascal_indentationguideview_callback();
        } else {
            return QsciLexerPascal::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerpascal_keywords_isbase) {
            qscilexerpascal_keywords_isbase = false;
            return QsciLexerPascal::keywords(set);
        } else if (qscilexerpascal_keywords_callback != nullptr) {
            return qscilexerpascal_keywords_callback(this, set);
        } else {
            return QsciLexerPascal::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerpascal_defaultstyle_isbase) {
            qscilexerpascal_defaultstyle_isbase = false;
            return QsciLexerPascal::defaultStyle();
        } else if (qscilexerpascal_defaultstyle_callback != nullptr) {
            return qscilexerpascal_defaultstyle_callback();
        } else {
            return QsciLexerPascal::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerpascal_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerpascal_paper_isbase) {
            qscilexerpascal_paper_isbase = false;
            return QsciLexerPascal::paper(style);
        } else if (qscilexerpascal_paper_callback != nullptr) {
            return qscilexerpascal_paper_callback(this, style);
        } else {
            return QsciLexerPascal::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerpascal_defaultcolorwithstyle_isbase) {
            qscilexerpascal_defaultcolorwithstyle_isbase = false;
            return QsciLexerPascal::defaultColor(style);
        } else if (qscilexerpascal_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerpascal_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerPascal::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerpascal_defaulteolfill_isbase) {
            qscilexerpascal_defaulteolfill_isbase = false;
            return QsciLexerPascal::defaultEolFill(style);
        } else if (qscilexerpascal_defaulteolfill_callback != nullptr) {
            return qscilexerpascal_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerPascal::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerpascal_defaultfontwithstyle_isbase) {
            qscilexerpascal_defaultfontwithstyle_isbase = false;
            return QsciLexerPascal::defaultFont(style);
        } else if (qscilexerpascal_defaultfontwithstyle_callback != nullptr) {
            return qscilexerpascal_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerPascal::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerpascal_defaultpaperwithstyle_isbase) {
            qscilexerpascal_defaultpaperwithstyle_isbase = false;
            return QsciLexerPascal::defaultPaper(style);
        } else if (qscilexerpascal_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerpascal_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerPascal::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerpascal_seteditor_isbase) {
            qscilexerpascal_seteditor_isbase = false;
            QsciLexerPascal::setEditor(editor);
        } else if (qscilexerpascal_seteditor_callback != nullptr) {
            qscilexerpascal_seteditor_callback(this, editor);
        } else {
            QsciLexerPascal::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerpascal_refreshproperties_isbase) {
            qscilexerpascal_refreshproperties_isbase = false;
            QsciLexerPascal::refreshProperties();
        } else if (qscilexerpascal_refreshproperties_callback != nullptr) {
            qscilexerpascal_refreshproperties_callback();
        } else {
            QsciLexerPascal::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerpascal_stylebitsneeded_isbase) {
            qscilexerpascal_stylebitsneeded_isbase = false;
            return QsciLexerPascal::styleBitsNeeded();
        } else if (qscilexerpascal_stylebitsneeded_callback != nullptr) {
            return qscilexerpascal_stylebitsneeded_callback();
        } else {
            return QsciLexerPascal::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerpascal_wordcharacters_isbase) {
            qscilexerpascal_wordcharacters_isbase = false;
            return QsciLexerPascal::wordCharacters();
        } else if (qscilexerpascal_wordcharacters_callback != nullptr) {
            return qscilexerpascal_wordcharacters_callback();
        } else {
            return QsciLexerPascal::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerpascal_setautoindentstyle_isbase) {
            qscilexerpascal_setautoindentstyle_isbase = false;
            QsciLexerPascal::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerpascal_setautoindentstyle_callback != nullptr) {
            qscilexerpascal_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerPascal::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerpascal_setcolor_isbase) {
            qscilexerpascal_setcolor_isbase = false;
            QsciLexerPascal::setColor(c, style);
        } else if (qscilexerpascal_setcolor_callback != nullptr) {
            qscilexerpascal_setcolor_callback(this, c, style);
        } else {
            QsciLexerPascal::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerpascal_seteolfill_isbase) {
            qscilexerpascal_seteolfill_isbase = false;
            QsciLexerPascal::setEolFill(eoffill, style);
        } else if (qscilexerpascal_seteolfill_callback != nullptr) {
            qscilexerpascal_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerPascal::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerpascal_setfont_isbase) {
            qscilexerpascal_setfont_isbase = false;
            QsciLexerPascal::setFont(f, style);
        } else if (qscilexerpascal_setfont_callback != nullptr) {
            qscilexerpascal_setfont_callback(this, f, style);
        } else {
            QsciLexerPascal::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerpascal_setpaper_isbase) {
            qscilexerpascal_setpaper_isbase = false;
            QsciLexerPascal::setPaper(c, style);
        } else if (qscilexerpascal_setpaper_callback != nullptr) {
            qscilexerpascal_setpaper_callback(this, c, style);
        } else {
            QsciLexerPascal::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerpascal_readproperties_isbase) {
            qscilexerpascal_readproperties_isbase = false;
            return QsciLexerPascal::readProperties(qs, prefix);
        } else if (qscilexerpascal_readproperties_callback != nullptr) {
            return qscilexerpascal_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerPascal::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerpascal_writeproperties_isbase) {
            qscilexerpascal_writeproperties_isbase = false;
            return QsciLexerPascal::writeProperties(qs, prefix);
        } else if (qscilexerpascal_writeproperties_callback != nullptr) {
            return qscilexerpascal_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerPascal::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerpascal_event_isbase) {
            qscilexerpascal_event_isbase = false;
            return QsciLexerPascal::event(event);
        } else if (qscilexerpascal_event_callback != nullptr) {
            return qscilexerpascal_event_callback(this, event);
        } else {
            return QsciLexerPascal::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerpascal_eventfilter_isbase) {
            qscilexerpascal_eventfilter_isbase = false;
            return QsciLexerPascal::eventFilter(watched, event);
        } else if (qscilexerpascal_eventfilter_callback != nullptr) {
            return qscilexerpascal_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerPascal::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerpascal_timerevent_isbase) {
            qscilexerpascal_timerevent_isbase = false;
            QsciLexerPascal::timerEvent(event);
        } else if (qscilexerpascal_timerevent_callback != nullptr) {
            qscilexerpascal_timerevent_callback(this, event);
        } else {
            QsciLexerPascal::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerpascal_childevent_isbase) {
            qscilexerpascal_childevent_isbase = false;
            QsciLexerPascal::childEvent(event);
        } else if (qscilexerpascal_childevent_callback != nullptr) {
            qscilexerpascal_childevent_callback(this, event);
        } else {
            QsciLexerPascal::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerpascal_customevent_isbase) {
            qscilexerpascal_customevent_isbase = false;
            QsciLexerPascal::customEvent(event);
        } else if (qscilexerpascal_customevent_callback != nullptr) {
            qscilexerpascal_customevent_callback(this, event);
        } else {
            QsciLexerPascal::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerpascal_connectnotify_isbase) {
            qscilexerpascal_connectnotify_isbase = false;
            QsciLexerPascal::connectNotify(signal);
        } else if (qscilexerpascal_connectnotify_callback != nullptr) {
            qscilexerpascal_connectnotify_callback(this, signal);
        } else {
            QsciLexerPascal::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerpascal_disconnectnotify_isbase) {
            qscilexerpascal_disconnectnotify_isbase = false;
            QsciLexerPascal::disconnectNotify(signal);
        } else if (qscilexerpascal_disconnectnotify_callback != nullptr) {
            qscilexerpascal_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerPascal::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerpascal_sender_isbase) {
            qscilexerpascal_sender_isbase = false;
            return QsciLexerPascal::sender();
        } else if (qscilexerpascal_sender_callback != nullptr) {
            return qscilexerpascal_sender_callback();
        } else {
            return QsciLexerPascal::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerpascal_sendersignalindex_isbase) {
            qscilexerpascal_sendersignalindex_isbase = false;
            return QsciLexerPascal::senderSignalIndex();
        } else if (qscilexerpascal_sendersignalindex_callback != nullptr) {
            return qscilexerpascal_sendersignalindex_callback();
        } else {
            return QsciLexerPascal::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerpascal_receivers_isbase) {
            qscilexerpascal_receivers_isbase = false;
            return QsciLexerPascal::receivers(signal);
        } else if (qscilexerpascal_receivers_callback != nullptr) {
            return qscilexerpascal_receivers_callback(this, signal);
        } else {
            return QsciLexerPascal::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerpascal_issignalconnected_isbase) {
            qscilexerpascal_issignalconnected_isbase = false;
            return QsciLexerPascal::isSignalConnected(signal);
        } else if (qscilexerpascal_issignalconnected_callback != nullptr) {
            return qscilexerpascal_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerPascal::isSignalConnected(signal);
        }
    }
};

#endif
