#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERIDL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERIDL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerIDL so that we can call protected methods
class VirtualQsciLexerIDL : public QsciLexerIDL {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerIDL_Metacall_Callback = int (*)(QsciLexerIDL*, QMetaObject::Call, int, void**);
    using QsciLexerIDL_SetFoldAtElse_Callback = void (*)(QsciLexerIDL*, bool);
    using QsciLexerIDL_SetFoldComments_Callback = void (*)(QsciLexerIDL*, bool);
    using QsciLexerIDL_SetFoldCompact_Callback = void (*)(QsciLexerIDL*, bool);
    using QsciLexerIDL_SetFoldPreprocessor_Callback = void (*)(QsciLexerIDL*, bool);
    using QsciLexerIDL_SetStylePreprocessor_Callback = void (*)(QsciLexerIDL*, bool);
    using QsciLexerIDL_Language_Callback = const char* (*)();
    using QsciLexerIDL_Lexer_Callback = const char* (*)();
    using QsciLexerIDL_LexerId_Callback = int (*)();
    using QsciLexerIDL_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerIDL_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerIDL_BlockEnd_Callback = const char* (*)(const QsciLexerIDL*, int*);
    using QsciLexerIDL_BlockLookback_Callback = int (*)();
    using QsciLexerIDL_BlockStart_Callback = const char* (*)(const QsciLexerIDL*, int*);
    using QsciLexerIDL_BlockStartKeyword_Callback = const char* (*)(const QsciLexerIDL*, int*);
    using QsciLexerIDL_BraceStyle_Callback = int (*)();
    using QsciLexerIDL_CaseSensitive_Callback = bool (*)();
    using QsciLexerIDL_Color_Callback = QColor (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_EolFill_Callback = bool (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_Font_Callback = QFont (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_IndentationGuideView_Callback = int (*)();
    using QsciLexerIDL_Keywords_Callback = const char* (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_DefaultStyle_Callback = int (*)();
    using QsciLexerIDL_Description_Callback = QString (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_Paper_Callback = QColor (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_DefaultEolFill_Callback = bool (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_SetEditor_Callback = void (*)(QsciLexerIDL*, QsciScintilla*);
    using QsciLexerIDL_RefreshProperties_Callback = void (*)();
    using QsciLexerIDL_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerIDL_WordCharacters_Callback = const char* (*)();
    using QsciLexerIDL_SetAutoIndentStyle_Callback = void (*)(QsciLexerIDL*, int);
    using QsciLexerIDL_SetColor_Callback = void (*)(QsciLexerIDL*, const QColor&, int);
    using QsciLexerIDL_SetEolFill_Callback = void (*)(QsciLexerIDL*, bool, int);
    using QsciLexerIDL_SetFont_Callback = void (*)(QsciLexerIDL*, const QFont&, int);
    using QsciLexerIDL_SetPaper_Callback = void (*)(QsciLexerIDL*, const QColor&, int);
    using QsciLexerIDL_ReadProperties_Callback = bool (*)(QsciLexerIDL*, QSettings&, const QString&);
    using QsciLexerIDL_WriteProperties_Callback = bool (*)(const QsciLexerIDL*, QSettings&, const QString&);
    using QsciLexerIDL_Event_Callback = bool (*)(QsciLexerIDL*, QEvent*);
    using QsciLexerIDL_EventFilter_Callback = bool (*)(QsciLexerIDL*, QObject*, QEvent*);
    using QsciLexerIDL_TimerEvent_Callback = void (*)(QsciLexerIDL*, QTimerEvent*);
    using QsciLexerIDL_ChildEvent_Callback = void (*)(QsciLexerIDL*, QChildEvent*);
    using QsciLexerIDL_CustomEvent_Callback = void (*)(QsciLexerIDL*, QEvent*);
    using QsciLexerIDL_ConnectNotify_Callback = void (*)(QsciLexerIDL*, const QMetaMethod&);
    using QsciLexerIDL_DisconnectNotify_Callback = void (*)(QsciLexerIDL*, const QMetaMethod&);
    using QsciLexerIDL_Sender_Callback = QObject* (*)();
    using QsciLexerIDL_SenderSignalIndex_Callback = int (*)();
    using QsciLexerIDL_Receivers_Callback = int (*)(const QsciLexerIDL*, const char*);
    using QsciLexerIDL_IsSignalConnected_Callback = bool (*)(const QsciLexerIDL*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerIDL_Metacall_Callback qscilexeridl_metacall_callback = nullptr;
    QsciLexerIDL_SetFoldAtElse_Callback qscilexeridl_setfoldatelse_callback = nullptr;
    QsciLexerIDL_SetFoldComments_Callback qscilexeridl_setfoldcomments_callback = nullptr;
    QsciLexerIDL_SetFoldCompact_Callback qscilexeridl_setfoldcompact_callback = nullptr;
    QsciLexerIDL_SetFoldPreprocessor_Callback qscilexeridl_setfoldpreprocessor_callback = nullptr;
    QsciLexerIDL_SetStylePreprocessor_Callback qscilexeridl_setstylepreprocessor_callback = nullptr;
    QsciLexerIDL_Language_Callback qscilexeridl_language_callback = nullptr;
    QsciLexerIDL_Lexer_Callback qscilexeridl_lexer_callback = nullptr;
    QsciLexerIDL_LexerId_Callback qscilexeridl_lexerid_callback = nullptr;
    QsciLexerIDL_AutoCompletionFillups_Callback qscilexeridl_autocompletionfillups_callback = nullptr;
    QsciLexerIDL_AutoCompletionWordSeparators_Callback qscilexeridl_autocompletionwordseparators_callback = nullptr;
    QsciLexerIDL_BlockEnd_Callback qscilexeridl_blockend_callback = nullptr;
    QsciLexerIDL_BlockLookback_Callback qscilexeridl_blocklookback_callback = nullptr;
    QsciLexerIDL_BlockStart_Callback qscilexeridl_blockstart_callback = nullptr;
    QsciLexerIDL_BlockStartKeyword_Callback qscilexeridl_blockstartkeyword_callback = nullptr;
    QsciLexerIDL_BraceStyle_Callback qscilexeridl_bracestyle_callback = nullptr;
    QsciLexerIDL_CaseSensitive_Callback qscilexeridl_casesensitive_callback = nullptr;
    QsciLexerIDL_Color_Callback qscilexeridl_color_callback = nullptr;
    QsciLexerIDL_EolFill_Callback qscilexeridl_eolfill_callback = nullptr;
    QsciLexerIDL_Font_Callback qscilexeridl_font_callback = nullptr;
    QsciLexerIDL_IndentationGuideView_Callback qscilexeridl_indentationguideview_callback = nullptr;
    QsciLexerIDL_Keywords_Callback qscilexeridl_keywords_callback = nullptr;
    QsciLexerIDL_DefaultStyle_Callback qscilexeridl_defaultstyle_callback = nullptr;
    QsciLexerIDL_Description_Callback qscilexeridl_description_callback = nullptr;
    QsciLexerIDL_Paper_Callback qscilexeridl_paper_callback = nullptr;
    QsciLexerIDL_DefaultColorWithStyle_Callback qscilexeridl_defaultcolorwithstyle_callback = nullptr;
    QsciLexerIDL_DefaultEolFill_Callback qscilexeridl_defaulteolfill_callback = nullptr;
    QsciLexerIDL_DefaultFontWithStyle_Callback qscilexeridl_defaultfontwithstyle_callback = nullptr;
    QsciLexerIDL_DefaultPaperWithStyle_Callback qscilexeridl_defaultpaperwithstyle_callback = nullptr;
    QsciLexerIDL_SetEditor_Callback qscilexeridl_seteditor_callback = nullptr;
    QsciLexerIDL_RefreshProperties_Callback qscilexeridl_refreshproperties_callback = nullptr;
    QsciLexerIDL_StyleBitsNeeded_Callback qscilexeridl_stylebitsneeded_callback = nullptr;
    QsciLexerIDL_WordCharacters_Callback qscilexeridl_wordcharacters_callback = nullptr;
    QsciLexerIDL_SetAutoIndentStyle_Callback qscilexeridl_setautoindentstyle_callback = nullptr;
    QsciLexerIDL_SetColor_Callback qscilexeridl_setcolor_callback = nullptr;
    QsciLexerIDL_SetEolFill_Callback qscilexeridl_seteolfill_callback = nullptr;
    QsciLexerIDL_SetFont_Callback qscilexeridl_setfont_callback = nullptr;
    QsciLexerIDL_SetPaper_Callback qscilexeridl_setpaper_callback = nullptr;
    QsciLexerIDL_ReadProperties_Callback qscilexeridl_readproperties_callback = nullptr;
    QsciLexerIDL_WriteProperties_Callback qscilexeridl_writeproperties_callback = nullptr;
    QsciLexerIDL_Event_Callback qscilexeridl_event_callback = nullptr;
    QsciLexerIDL_EventFilter_Callback qscilexeridl_eventfilter_callback = nullptr;
    QsciLexerIDL_TimerEvent_Callback qscilexeridl_timerevent_callback = nullptr;
    QsciLexerIDL_ChildEvent_Callback qscilexeridl_childevent_callback = nullptr;
    QsciLexerIDL_CustomEvent_Callback qscilexeridl_customevent_callback = nullptr;
    QsciLexerIDL_ConnectNotify_Callback qscilexeridl_connectnotify_callback = nullptr;
    QsciLexerIDL_DisconnectNotify_Callback qscilexeridl_disconnectnotify_callback = nullptr;
    QsciLexerIDL_Sender_Callback qscilexeridl_sender_callback = nullptr;
    QsciLexerIDL_SenderSignalIndex_Callback qscilexeridl_sendersignalindex_callback = nullptr;
    QsciLexerIDL_Receivers_Callback qscilexeridl_receivers_callback = nullptr;
    QsciLexerIDL_IsSignalConnected_Callback qscilexeridl_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexeridl_metacall_isbase = false;
    mutable bool qscilexeridl_setfoldatelse_isbase = false;
    mutable bool qscilexeridl_setfoldcomments_isbase = false;
    mutable bool qscilexeridl_setfoldcompact_isbase = false;
    mutable bool qscilexeridl_setfoldpreprocessor_isbase = false;
    mutable bool qscilexeridl_setstylepreprocessor_isbase = false;
    mutable bool qscilexeridl_language_isbase = false;
    mutable bool qscilexeridl_lexer_isbase = false;
    mutable bool qscilexeridl_lexerid_isbase = false;
    mutable bool qscilexeridl_autocompletionfillups_isbase = false;
    mutable bool qscilexeridl_autocompletionwordseparators_isbase = false;
    mutable bool qscilexeridl_blockend_isbase = false;
    mutable bool qscilexeridl_blocklookback_isbase = false;
    mutable bool qscilexeridl_blockstart_isbase = false;
    mutable bool qscilexeridl_blockstartkeyword_isbase = false;
    mutable bool qscilexeridl_bracestyle_isbase = false;
    mutable bool qscilexeridl_casesensitive_isbase = false;
    mutable bool qscilexeridl_color_isbase = false;
    mutable bool qscilexeridl_eolfill_isbase = false;
    mutable bool qscilexeridl_font_isbase = false;
    mutable bool qscilexeridl_indentationguideview_isbase = false;
    mutable bool qscilexeridl_keywords_isbase = false;
    mutable bool qscilexeridl_defaultstyle_isbase = false;
    mutable bool qscilexeridl_description_isbase = false;
    mutable bool qscilexeridl_paper_isbase = false;
    mutable bool qscilexeridl_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexeridl_defaulteolfill_isbase = false;
    mutable bool qscilexeridl_defaultfontwithstyle_isbase = false;
    mutable bool qscilexeridl_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexeridl_seteditor_isbase = false;
    mutable bool qscilexeridl_refreshproperties_isbase = false;
    mutable bool qscilexeridl_stylebitsneeded_isbase = false;
    mutable bool qscilexeridl_wordcharacters_isbase = false;
    mutable bool qscilexeridl_setautoindentstyle_isbase = false;
    mutable bool qscilexeridl_setcolor_isbase = false;
    mutable bool qscilexeridl_seteolfill_isbase = false;
    mutable bool qscilexeridl_setfont_isbase = false;
    mutable bool qscilexeridl_setpaper_isbase = false;
    mutable bool qscilexeridl_readproperties_isbase = false;
    mutable bool qscilexeridl_writeproperties_isbase = false;
    mutable bool qscilexeridl_event_isbase = false;
    mutable bool qscilexeridl_eventfilter_isbase = false;
    mutable bool qscilexeridl_timerevent_isbase = false;
    mutable bool qscilexeridl_childevent_isbase = false;
    mutable bool qscilexeridl_customevent_isbase = false;
    mutable bool qscilexeridl_connectnotify_isbase = false;
    mutable bool qscilexeridl_disconnectnotify_isbase = false;
    mutable bool qscilexeridl_sender_isbase = false;
    mutable bool qscilexeridl_sendersignalindex_isbase = false;
    mutable bool qscilexeridl_receivers_isbase = false;
    mutable bool qscilexeridl_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerIDL() : QsciLexerIDL(){};
    VirtualQsciLexerIDL(QObject* parent) : QsciLexerIDL(parent){};

    ~VirtualQsciLexerIDL() {
        qscilexeridl_metacall_callback = nullptr;
        qscilexeridl_setfoldatelse_callback = nullptr;
        qscilexeridl_setfoldcomments_callback = nullptr;
        qscilexeridl_setfoldcompact_callback = nullptr;
        qscilexeridl_setfoldpreprocessor_callback = nullptr;
        qscilexeridl_setstylepreprocessor_callback = nullptr;
        qscilexeridl_language_callback = nullptr;
        qscilexeridl_lexer_callback = nullptr;
        qscilexeridl_lexerid_callback = nullptr;
        qscilexeridl_autocompletionfillups_callback = nullptr;
        qscilexeridl_autocompletionwordseparators_callback = nullptr;
        qscilexeridl_blockend_callback = nullptr;
        qscilexeridl_blocklookback_callback = nullptr;
        qscilexeridl_blockstart_callback = nullptr;
        qscilexeridl_blockstartkeyword_callback = nullptr;
        qscilexeridl_bracestyle_callback = nullptr;
        qscilexeridl_casesensitive_callback = nullptr;
        qscilexeridl_color_callback = nullptr;
        qscilexeridl_eolfill_callback = nullptr;
        qscilexeridl_font_callback = nullptr;
        qscilexeridl_indentationguideview_callback = nullptr;
        qscilexeridl_keywords_callback = nullptr;
        qscilexeridl_defaultstyle_callback = nullptr;
        qscilexeridl_description_callback = nullptr;
        qscilexeridl_paper_callback = nullptr;
        qscilexeridl_defaultcolorwithstyle_callback = nullptr;
        qscilexeridl_defaulteolfill_callback = nullptr;
        qscilexeridl_defaultfontwithstyle_callback = nullptr;
        qscilexeridl_defaultpaperwithstyle_callback = nullptr;
        qscilexeridl_seteditor_callback = nullptr;
        qscilexeridl_refreshproperties_callback = nullptr;
        qscilexeridl_stylebitsneeded_callback = nullptr;
        qscilexeridl_wordcharacters_callback = nullptr;
        qscilexeridl_setautoindentstyle_callback = nullptr;
        qscilexeridl_setcolor_callback = nullptr;
        qscilexeridl_seteolfill_callback = nullptr;
        qscilexeridl_setfont_callback = nullptr;
        qscilexeridl_setpaper_callback = nullptr;
        qscilexeridl_readproperties_callback = nullptr;
        qscilexeridl_writeproperties_callback = nullptr;
        qscilexeridl_event_callback = nullptr;
        qscilexeridl_eventfilter_callback = nullptr;
        qscilexeridl_timerevent_callback = nullptr;
        qscilexeridl_childevent_callback = nullptr;
        qscilexeridl_customevent_callback = nullptr;
        qscilexeridl_connectnotify_callback = nullptr;
        qscilexeridl_disconnectnotify_callback = nullptr;
        qscilexeridl_sender_callback = nullptr;
        qscilexeridl_sendersignalindex_callback = nullptr;
        qscilexeridl_receivers_callback = nullptr;
        qscilexeridl_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerIDL_Metacall_Callback(QsciLexerIDL_Metacall_Callback cb) { qscilexeridl_metacall_callback = cb; }
    void setQsciLexerIDL_SetFoldAtElse_Callback(QsciLexerIDL_SetFoldAtElse_Callback cb) { qscilexeridl_setfoldatelse_callback = cb; }
    void setQsciLexerIDL_SetFoldComments_Callback(QsciLexerIDL_SetFoldComments_Callback cb) { qscilexeridl_setfoldcomments_callback = cb; }
    void setQsciLexerIDL_SetFoldCompact_Callback(QsciLexerIDL_SetFoldCompact_Callback cb) { qscilexeridl_setfoldcompact_callback = cb; }
    void setQsciLexerIDL_SetFoldPreprocessor_Callback(QsciLexerIDL_SetFoldPreprocessor_Callback cb) { qscilexeridl_setfoldpreprocessor_callback = cb; }
    void setQsciLexerIDL_SetStylePreprocessor_Callback(QsciLexerIDL_SetStylePreprocessor_Callback cb) { qscilexeridl_setstylepreprocessor_callback = cb; }
    void setQsciLexerIDL_Language_Callback(QsciLexerIDL_Language_Callback cb) { qscilexeridl_language_callback = cb; }
    void setQsciLexerIDL_Lexer_Callback(QsciLexerIDL_Lexer_Callback cb) { qscilexeridl_lexer_callback = cb; }
    void setQsciLexerIDL_LexerId_Callback(QsciLexerIDL_LexerId_Callback cb) { qscilexeridl_lexerid_callback = cb; }
    void setQsciLexerIDL_AutoCompletionFillups_Callback(QsciLexerIDL_AutoCompletionFillups_Callback cb) { qscilexeridl_autocompletionfillups_callback = cb; }
    void setQsciLexerIDL_AutoCompletionWordSeparators_Callback(QsciLexerIDL_AutoCompletionWordSeparators_Callback cb) { qscilexeridl_autocompletionwordseparators_callback = cb; }
    void setQsciLexerIDL_BlockEnd_Callback(QsciLexerIDL_BlockEnd_Callback cb) { qscilexeridl_blockend_callback = cb; }
    void setQsciLexerIDL_BlockLookback_Callback(QsciLexerIDL_BlockLookback_Callback cb) { qscilexeridl_blocklookback_callback = cb; }
    void setQsciLexerIDL_BlockStart_Callback(QsciLexerIDL_BlockStart_Callback cb) { qscilexeridl_blockstart_callback = cb; }
    void setQsciLexerIDL_BlockStartKeyword_Callback(QsciLexerIDL_BlockStartKeyword_Callback cb) { qscilexeridl_blockstartkeyword_callback = cb; }
    void setQsciLexerIDL_BraceStyle_Callback(QsciLexerIDL_BraceStyle_Callback cb) { qscilexeridl_bracestyle_callback = cb; }
    void setQsciLexerIDL_CaseSensitive_Callback(QsciLexerIDL_CaseSensitive_Callback cb) { qscilexeridl_casesensitive_callback = cb; }
    void setQsciLexerIDL_Color_Callback(QsciLexerIDL_Color_Callback cb) { qscilexeridl_color_callback = cb; }
    void setQsciLexerIDL_EolFill_Callback(QsciLexerIDL_EolFill_Callback cb) { qscilexeridl_eolfill_callback = cb; }
    void setQsciLexerIDL_Font_Callback(QsciLexerIDL_Font_Callback cb) { qscilexeridl_font_callback = cb; }
    void setQsciLexerIDL_IndentationGuideView_Callback(QsciLexerIDL_IndentationGuideView_Callback cb) { qscilexeridl_indentationguideview_callback = cb; }
    void setQsciLexerIDL_Keywords_Callback(QsciLexerIDL_Keywords_Callback cb) { qscilexeridl_keywords_callback = cb; }
    void setQsciLexerIDL_DefaultStyle_Callback(QsciLexerIDL_DefaultStyle_Callback cb) { qscilexeridl_defaultstyle_callback = cb; }
    void setQsciLexerIDL_Description_Callback(QsciLexerIDL_Description_Callback cb) { qscilexeridl_description_callback = cb; }
    void setQsciLexerIDL_Paper_Callback(QsciLexerIDL_Paper_Callback cb) { qscilexeridl_paper_callback = cb; }
    void setQsciLexerIDL_DefaultColorWithStyle_Callback(QsciLexerIDL_DefaultColorWithStyle_Callback cb) { qscilexeridl_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerIDL_DefaultEolFill_Callback(QsciLexerIDL_DefaultEolFill_Callback cb) { qscilexeridl_defaulteolfill_callback = cb; }
    void setQsciLexerIDL_DefaultFontWithStyle_Callback(QsciLexerIDL_DefaultFontWithStyle_Callback cb) { qscilexeridl_defaultfontwithstyle_callback = cb; }
    void setQsciLexerIDL_DefaultPaperWithStyle_Callback(QsciLexerIDL_DefaultPaperWithStyle_Callback cb) { qscilexeridl_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerIDL_SetEditor_Callback(QsciLexerIDL_SetEditor_Callback cb) { qscilexeridl_seteditor_callback = cb; }
    void setQsciLexerIDL_RefreshProperties_Callback(QsciLexerIDL_RefreshProperties_Callback cb) { qscilexeridl_refreshproperties_callback = cb; }
    void setQsciLexerIDL_StyleBitsNeeded_Callback(QsciLexerIDL_StyleBitsNeeded_Callback cb) { qscilexeridl_stylebitsneeded_callback = cb; }
    void setQsciLexerIDL_WordCharacters_Callback(QsciLexerIDL_WordCharacters_Callback cb) { qscilexeridl_wordcharacters_callback = cb; }
    void setQsciLexerIDL_SetAutoIndentStyle_Callback(QsciLexerIDL_SetAutoIndentStyle_Callback cb) { qscilexeridl_setautoindentstyle_callback = cb; }
    void setQsciLexerIDL_SetColor_Callback(QsciLexerIDL_SetColor_Callback cb) { qscilexeridl_setcolor_callback = cb; }
    void setQsciLexerIDL_SetEolFill_Callback(QsciLexerIDL_SetEolFill_Callback cb) { qscilexeridl_seteolfill_callback = cb; }
    void setQsciLexerIDL_SetFont_Callback(QsciLexerIDL_SetFont_Callback cb) { qscilexeridl_setfont_callback = cb; }
    void setQsciLexerIDL_SetPaper_Callback(QsciLexerIDL_SetPaper_Callback cb) { qscilexeridl_setpaper_callback = cb; }
    void setQsciLexerIDL_ReadProperties_Callback(QsciLexerIDL_ReadProperties_Callback cb) { qscilexeridl_readproperties_callback = cb; }
    void setQsciLexerIDL_WriteProperties_Callback(QsciLexerIDL_WriteProperties_Callback cb) { qscilexeridl_writeproperties_callback = cb; }
    void setQsciLexerIDL_Event_Callback(QsciLexerIDL_Event_Callback cb) { qscilexeridl_event_callback = cb; }
    void setQsciLexerIDL_EventFilter_Callback(QsciLexerIDL_EventFilter_Callback cb) { qscilexeridl_eventfilter_callback = cb; }
    void setQsciLexerIDL_TimerEvent_Callback(QsciLexerIDL_TimerEvent_Callback cb) { qscilexeridl_timerevent_callback = cb; }
    void setQsciLexerIDL_ChildEvent_Callback(QsciLexerIDL_ChildEvent_Callback cb) { qscilexeridl_childevent_callback = cb; }
    void setQsciLexerIDL_CustomEvent_Callback(QsciLexerIDL_CustomEvent_Callback cb) { qscilexeridl_customevent_callback = cb; }
    void setQsciLexerIDL_ConnectNotify_Callback(QsciLexerIDL_ConnectNotify_Callback cb) { qscilexeridl_connectnotify_callback = cb; }
    void setQsciLexerIDL_DisconnectNotify_Callback(QsciLexerIDL_DisconnectNotify_Callback cb) { qscilexeridl_disconnectnotify_callback = cb; }
    void setQsciLexerIDL_Sender_Callback(QsciLexerIDL_Sender_Callback cb) { qscilexeridl_sender_callback = cb; }
    void setQsciLexerIDL_SenderSignalIndex_Callback(QsciLexerIDL_SenderSignalIndex_Callback cb) { qscilexeridl_sendersignalindex_callback = cb; }
    void setQsciLexerIDL_Receivers_Callback(QsciLexerIDL_Receivers_Callback cb) { qscilexeridl_receivers_callback = cb; }
    void setQsciLexerIDL_IsSignalConnected_Callback(QsciLexerIDL_IsSignalConnected_Callback cb) { qscilexeridl_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerIDL_Metacall_IsBase(bool value) const { qscilexeridl_metacall_isbase = value; }
    void setQsciLexerIDL_SetFoldAtElse_IsBase(bool value) const { qscilexeridl_setfoldatelse_isbase = value; }
    void setQsciLexerIDL_SetFoldComments_IsBase(bool value) const { qscilexeridl_setfoldcomments_isbase = value; }
    void setQsciLexerIDL_SetFoldCompact_IsBase(bool value) const { qscilexeridl_setfoldcompact_isbase = value; }
    void setQsciLexerIDL_SetFoldPreprocessor_IsBase(bool value) const { qscilexeridl_setfoldpreprocessor_isbase = value; }
    void setQsciLexerIDL_SetStylePreprocessor_IsBase(bool value) const { qscilexeridl_setstylepreprocessor_isbase = value; }
    void setQsciLexerIDL_Language_IsBase(bool value) const { qscilexeridl_language_isbase = value; }
    void setQsciLexerIDL_Lexer_IsBase(bool value) const { qscilexeridl_lexer_isbase = value; }
    void setQsciLexerIDL_LexerId_IsBase(bool value) const { qscilexeridl_lexerid_isbase = value; }
    void setQsciLexerIDL_AutoCompletionFillups_IsBase(bool value) const { qscilexeridl_autocompletionfillups_isbase = value; }
    void setQsciLexerIDL_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexeridl_autocompletionwordseparators_isbase = value; }
    void setQsciLexerIDL_BlockEnd_IsBase(bool value) const { qscilexeridl_blockend_isbase = value; }
    void setQsciLexerIDL_BlockLookback_IsBase(bool value) const { qscilexeridl_blocklookback_isbase = value; }
    void setQsciLexerIDL_BlockStart_IsBase(bool value) const { qscilexeridl_blockstart_isbase = value; }
    void setQsciLexerIDL_BlockStartKeyword_IsBase(bool value) const { qscilexeridl_blockstartkeyword_isbase = value; }
    void setQsciLexerIDL_BraceStyle_IsBase(bool value) const { qscilexeridl_bracestyle_isbase = value; }
    void setQsciLexerIDL_CaseSensitive_IsBase(bool value) const { qscilexeridl_casesensitive_isbase = value; }
    void setQsciLexerIDL_Color_IsBase(bool value) const { qscilexeridl_color_isbase = value; }
    void setQsciLexerIDL_EolFill_IsBase(bool value) const { qscilexeridl_eolfill_isbase = value; }
    void setQsciLexerIDL_Font_IsBase(bool value) const { qscilexeridl_font_isbase = value; }
    void setQsciLexerIDL_IndentationGuideView_IsBase(bool value) const { qscilexeridl_indentationguideview_isbase = value; }
    void setQsciLexerIDL_Keywords_IsBase(bool value) const { qscilexeridl_keywords_isbase = value; }
    void setQsciLexerIDL_DefaultStyle_IsBase(bool value) const { qscilexeridl_defaultstyle_isbase = value; }
    void setQsciLexerIDL_Description_IsBase(bool value) const { qscilexeridl_description_isbase = value; }
    void setQsciLexerIDL_Paper_IsBase(bool value) const { qscilexeridl_paper_isbase = value; }
    void setQsciLexerIDL_DefaultColorWithStyle_IsBase(bool value) const { qscilexeridl_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerIDL_DefaultEolFill_IsBase(bool value) const { qscilexeridl_defaulteolfill_isbase = value; }
    void setQsciLexerIDL_DefaultFontWithStyle_IsBase(bool value) const { qscilexeridl_defaultfontwithstyle_isbase = value; }
    void setQsciLexerIDL_DefaultPaperWithStyle_IsBase(bool value) const { qscilexeridl_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerIDL_SetEditor_IsBase(bool value) const { qscilexeridl_seteditor_isbase = value; }
    void setQsciLexerIDL_RefreshProperties_IsBase(bool value) const { qscilexeridl_refreshproperties_isbase = value; }
    void setQsciLexerIDL_StyleBitsNeeded_IsBase(bool value) const { qscilexeridl_stylebitsneeded_isbase = value; }
    void setQsciLexerIDL_WordCharacters_IsBase(bool value) const { qscilexeridl_wordcharacters_isbase = value; }
    void setQsciLexerIDL_SetAutoIndentStyle_IsBase(bool value) const { qscilexeridl_setautoindentstyle_isbase = value; }
    void setQsciLexerIDL_SetColor_IsBase(bool value) const { qscilexeridl_setcolor_isbase = value; }
    void setQsciLexerIDL_SetEolFill_IsBase(bool value) const { qscilexeridl_seteolfill_isbase = value; }
    void setQsciLexerIDL_SetFont_IsBase(bool value) const { qscilexeridl_setfont_isbase = value; }
    void setQsciLexerIDL_SetPaper_IsBase(bool value) const { qscilexeridl_setpaper_isbase = value; }
    void setQsciLexerIDL_ReadProperties_IsBase(bool value) const { qscilexeridl_readproperties_isbase = value; }
    void setQsciLexerIDL_WriteProperties_IsBase(bool value) const { qscilexeridl_writeproperties_isbase = value; }
    void setQsciLexerIDL_Event_IsBase(bool value) const { qscilexeridl_event_isbase = value; }
    void setQsciLexerIDL_EventFilter_IsBase(bool value) const { qscilexeridl_eventfilter_isbase = value; }
    void setQsciLexerIDL_TimerEvent_IsBase(bool value) const { qscilexeridl_timerevent_isbase = value; }
    void setQsciLexerIDL_ChildEvent_IsBase(bool value) const { qscilexeridl_childevent_isbase = value; }
    void setQsciLexerIDL_CustomEvent_IsBase(bool value) const { qscilexeridl_customevent_isbase = value; }
    void setQsciLexerIDL_ConnectNotify_IsBase(bool value) const { qscilexeridl_connectnotify_isbase = value; }
    void setQsciLexerIDL_DisconnectNotify_IsBase(bool value) const { qscilexeridl_disconnectnotify_isbase = value; }
    void setQsciLexerIDL_Sender_IsBase(bool value) const { qscilexeridl_sender_isbase = value; }
    void setQsciLexerIDL_SenderSignalIndex_IsBase(bool value) const { qscilexeridl_sendersignalindex_isbase = value; }
    void setQsciLexerIDL_Receivers_IsBase(bool value) const { qscilexeridl_receivers_isbase = value; }
    void setQsciLexerIDL_IsSignalConnected_IsBase(bool value) const { qscilexeridl_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexeridl_metacall_isbase) {
            qscilexeridl_metacall_isbase = false;
            return QsciLexerIDL::qt_metacall(param1, param2, param3);
        } else if (qscilexeridl_metacall_callback != nullptr) {
            return qscilexeridl_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerIDL::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexeridl_setfoldatelse_isbase) {
            qscilexeridl_setfoldatelse_isbase = false;
            QsciLexerIDL::setFoldAtElse(fold);
        } else if (qscilexeridl_setfoldatelse_callback != nullptr) {
            qscilexeridl_setfoldatelse_callback(this, fold);
        } else {
            QsciLexerIDL::setFoldAtElse(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexeridl_setfoldcomments_isbase) {
            qscilexeridl_setfoldcomments_isbase = false;
            QsciLexerIDL::setFoldComments(fold);
        } else if (qscilexeridl_setfoldcomments_callback != nullptr) {
            qscilexeridl_setfoldcomments_callback(this, fold);
        } else {
            QsciLexerIDL::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexeridl_setfoldcompact_isbase) {
            qscilexeridl_setfoldcompact_isbase = false;
            QsciLexerIDL::setFoldCompact(fold);
        } else if (qscilexeridl_setfoldcompact_callback != nullptr) {
            qscilexeridl_setfoldcompact_callback(this, fold);
        } else {
            QsciLexerIDL::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexeridl_setfoldpreprocessor_isbase) {
            qscilexeridl_setfoldpreprocessor_isbase = false;
            QsciLexerIDL::setFoldPreprocessor(fold);
        } else if (qscilexeridl_setfoldpreprocessor_callback != nullptr) {
            qscilexeridl_setfoldpreprocessor_callback(this, fold);
        } else {
            QsciLexerIDL::setFoldPreprocessor(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setStylePreprocessor(bool style) override {
        if (qscilexeridl_setstylepreprocessor_isbase) {
            qscilexeridl_setstylepreprocessor_isbase = false;
            QsciLexerIDL::setStylePreprocessor(style);
        } else if (qscilexeridl_setstylepreprocessor_callback != nullptr) {
            qscilexeridl_setstylepreprocessor_callback(this, style);
        } else {
            QsciLexerIDL::setStylePreprocessor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexeridl_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexeridl_lexer_isbase) {
            qscilexeridl_lexer_isbase = false;
            return QsciLexerIDL::lexer();
        } else if (qscilexeridl_lexer_callback != nullptr) {
            return qscilexeridl_lexer_callback();
        } else {
            return QsciLexerIDL::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexeridl_lexerid_isbase) {
            qscilexeridl_lexerid_isbase = false;
            return QsciLexerIDL::lexerId();
        } else if (qscilexeridl_lexerid_callback != nullptr) {
            return qscilexeridl_lexerid_callback();
        } else {
            return QsciLexerIDL::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexeridl_autocompletionfillups_isbase) {
            qscilexeridl_autocompletionfillups_isbase = false;
            return QsciLexerIDL::autoCompletionFillups();
        } else if (qscilexeridl_autocompletionfillups_callback != nullptr) {
            return qscilexeridl_autocompletionfillups_callback();
        } else {
            return QsciLexerIDL::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexeridl_autocompletionwordseparators_isbase) {
            qscilexeridl_autocompletionwordseparators_isbase = false;
            return QsciLexerIDL::autoCompletionWordSeparators();
        } else if (qscilexeridl_autocompletionwordseparators_callback != nullptr) {
            return qscilexeridl_autocompletionwordseparators_callback();
        } else {
            return QsciLexerIDL::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexeridl_blockend_isbase) {
            qscilexeridl_blockend_isbase = false;
            return QsciLexerIDL::blockEnd(style);
        } else if (qscilexeridl_blockend_callback != nullptr) {
            return qscilexeridl_blockend_callback(this, style);
        } else {
            return QsciLexerIDL::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexeridl_blocklookback_isbase) {
            qscilexeridl_blocklookback_isbase = false;
            return QsciLexerIDL::blockLookback();
        } else if (qscilexeridl_blocklookback_callback != nullptr) {
            return qscilexeridl_blocklookback_callback();
        } else {
            return QsciLexerIDL::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexeridl_blockstart_isbase) {
            qscilexeridl_blockstart_isbase = false;
            return QsciLexerIDL::blockStart(style);
        } else if (qscilexeridl_blockstart_callback != nullptr) {
            return qscilexeridl_blockstart_callback(this, style);
        } else {
            return QsciLexerIDL::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexeridl_blockstartkeyword_isbase) {
            qscilexeridl_blockstartkeyword_isbase = false;
            return QsciLexerIDL::blockStartKeyword(style);
        } else if (qscilexeridl_blockstartkeyword_callback != nullptr) {
            return qscilexeridl_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerIDL::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexeridl_bracestyle_isbase) {
            qscilexeridl_bracestyle_isbase = false;
            return QsciLexerIDL::braceStyle();
        } else if (qscilexeridl_bracestyle_callback != nullptr) {
            return qscilexeridl_bracestyle_callback();
        } else {
            return QsciLexerIDL::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexeridl_casesensitive_isbase) {
            qscilexeridl_casesensitive_isbase = false;
            return QsciLexerIDL::caseSensitive();
        } else if (qscilexeridl_casesensitive_callback != nullptr) {
            return qscilexeridl_casesensitive_callback();
        } else {
            return QsciLexerIDL::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexeridl_color_isbase) {
            qscilexeridl_color_isbase = false;
            return QsciLexerIDL::color(style);
        } else if (qscilexeridl_color_callback != nullptr) {
            return qscilexeridl_color_callback(this, style);
        } else {
            return QsciLexerIDL::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexeridl_eolfill_isbase) {
            qscilexeridl_eolfill_isbase = false;
            return QsciLexerIDL::eolFill(style);
        } else if (qscilexeridl_eolfill_callback != nullptr) {
            return qscilexeridl_eolfill_callback(this, style);
        } else {
            return QsciLexerIDL::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexeridl_font_isbase) {
            qscilexeridl_font_isbase = false;
            return QsciLexerIDL::font(style);
        } else if (qscilexeridl_font_callback != nullptr) {
            return qscilexeridl_font_callback(this, style);
        } else {
            return QsciLexerIDL::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexeridl_indentationguideview_isbase) {
            qscilexeridl_indentationguideview_isbase = false;
            return QsciLexerIDL::indentationGuideView();
        } else if (qscilexeridl_indentationguideview_callback != nullptr) {
            return qscilexeridl_indentationguideview_callback();
        } else {
            return QsciLexerIDL::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexeridl_keywords_isbase) {
            qscilexeridl_keywords_isbase = false;
            return QsciLexerIDL::keywords(set);
        } else if (qscilexeridl_keywords_callback != nullptr) {
            return qscilexeridl_keywords_callback(this, set);
        } else {
            return QsciLexerIDL::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexeridl_defaultstyle_isbase) {
            qscilexeridl_defaultstyle_isbase = false;
            return QsciLexerIDL::defaultStyle();
        } else if (qscilexeridl_defaultstyle_callback != nullptr) {
            return qscilexeridl_defaultstyle_callback();
        } else {
            return QsciLexerIDL::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexeridl_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexeridl_paper_isbase) {
            qscilexeridl_paper_isbase = false;
            return QsciLexerIDL::paper(style);
        } else if (qscilexeridl_paper_callback != nullptr) {
            return qscilexeridl_paper_callback(this, style);
        } else {
            return QsciLexerIDL::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexeridl_defaultcolorwithstyle_isbase) {
            qscilexeridl_defaultcolorwithstyle_isbase = false;
            return QsciLexerIDL::defaultColor(style);
        } else if (qscilexeridl_defaultcolorwithstyle_callback != nullptr) {
            return qscilexeridl_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerIDL::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexeridl_defaulteolfill_isbase) {
            qscilexeridl_defaulteolfill_isbase = false;
            return QsciLexerIDL::defaultEolFill(style);
        } else if (qscilexeridl_defaulteolfill_callback != nullptr) {
            return qscilexeridl_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerIDL::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexeridl_defaultfontwithstyle_isbase) {
            qscilexeridl_defaultfontwithstyle_isbase = false;
            return QsciLexerIDL::defaultFont(style);
        } else if (qscilexeridl_defaultfontwithstyle_callback != nullptr) {
            return qscilexeridl_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerIDL::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexeridl_defaultpaperwithstyle_isbase) {
            qscilexeridl_defaultpaperwithstyle_isbase = false;
            return QsciLexerIDL::defaultPaper(style);
        } else if (qscilexeridl_defaultpaperwithstyle_callback != nullptr) {
            return qscilexeridl_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerIDL::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexeridl_seteditor_isbase) {
            qscilexeridl_seteditor_isbase = false;
            QsciLexerIDL::setEditor(editor);
        } else if (qscilexeridl_seteditor_callback != nullptr) {
            qscilexeridl_seteditor_callback(this, editor);
        } else {
            QsciLexerIDL::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexeridl_refreshproperties_isbase) {
            qscilexeridl_refreshproperties_isbase = false;
            QsciLexerIDL::refreshProperties();
        } else if (qscilexeridl_refreshproperties_callback != nullptr) {
            qscilexeridl_refreshproperties_callback();
        } else {
            QsciLexerIDL::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexeridl_stylebitsneeded_isbase) {
            qscilexeridl_stylebitsneeded_isbase = false;
            return QsciLexerIDL::styleBitsNeeded();
        } else if (qscilexeridl_stylebitsneeded_callback != nullptr) {
            return qscilexeridl_stylebitsneeded_callback();
        } else {
            return QsciLexerIDL::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexeridl_wordcharacters_isbase) {
            qscilexeridl_wordcharacters_isbase = false;
            return QsciLexerIDL::wordCharacters();
        } else if (qscilexeridl_wordcharacters_callback != nullptr) {
            return qscilexeridl_wordcharacters_callback();
        } else {
            return QsciLexerIDL::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexeridl_setautoindentstyle_isbase) {
            qscilexeridl_setautoindentstyle_isbase = false;
            QsciLexerIDL::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexeridl_setautoindentstyle_callback != nullptr) {
            qscilexeridl_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerIDL::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexeridl_setcolor_isbase) {
            qscilexeridl_setcolor_isbase = false;
            QsciLexerIDL::setColor(c, style);
        } else if (qscilexeridl_setcolor_callback != nullptr) {
            qscilexeridl_setcolor_callback(this, c, style);
        } else {
            QsciLexerIDL::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexeridl_seteolfill_isbase) {
            qscilexeridl_seteolfill_isbase = false;
            QsciLexerIDL::setEolFill(eoffill, style);
        } else if (qscilexeridl_seteolfill_callback != nullptr) {
            qscilexeridl_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerIDL::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexeridl_setfont_isbase) {
            qscilexeridl_setfont_isbase = false;
            QsciLexerIDL::setFont(f, style);
        } else if (qscilexeridl_setfont_callback != nullptr) {
            qscilexeridl_setfont_callback(this, f, style);
        } else {
            QsciLexerIDL::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexeridl_setpaper_isbase) {
            qscilexeridl_setpaper_isbase = false;
            QsciLexerIDL::setPaper(c, style);
        } else if (qscilexeridl_setpaper_callback != nullptr) {
            qscilexeridl_setpaper_callback(this, c, style);
        } else {
            QsciLexerIDL::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexeridl_readproperties_isbase) {
            qscilexeridl_readproperties_isbase = false;
            return QsciLexerIDL::readProperties(qs, prefix);
        } else if (qscilexeridl_readproperties_callback != nullptr) {
            return qscilexeridl_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerIDL::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexeridl_writeproperties_isbase) {
            qscilexeridl_writeproperties_isbase = false;
            return QsciLexerIDL::writeProperties(qs, prefix);
        } else if (qscilexeridl_writeproperties_callback != nullptr) {
            return qscilexeridl_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerIDL::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexeridl_event_isbase) {
            qscilexeridl_event_isbase = false;
            return QsciLexerIDL::event(event);
        } else if (qscilexeridl_event_callback != nullptr) {
            return qscilexeridl_event_callback(this, event);
        } else {
            return QsciLexerIDL::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexeridl_eventfilter_isbase) {
            qscilexeridl_eventfilter_isbase = false;
            return QsciLexerIDL::eventFilter(watched, event);
        } else if (qscilexeridl_eventfilter_callback != nullptr) {
            return qscilexeridl_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerIDL::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexeridl_timerevent_isbase) {
            qscilexeridl_timerevent_isbase = false;
            QsciLexerIDL::timerEvent(event);
        } else if (qscilexeridl_timerevent_callback != nullptr) {
            qscilexeridl_timerevent_callback(this, event);
        } else {
            QsciLexerIDL::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexeridl_childevent_isbase) {
            qscilexeridl_childevent_isbase = false;
            QsciLexerIDL::childEvent(event);
        } else if (qscilexeridl_childevent_callback != nullptr) {
            qscilexeridl_childevent_callback(this, event);
        } else {
            QsciLexerIDL::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexeridl_customevent_isbase) {
            qscilexeridl_customevent_isbase = false;
            QsciLexerIDL::customEvent(event);
        } else if (qscilexeridl_customevent_callback != nullptr) {
            qscilexeridl_customevent_callback(this, event);
        } else {
            QsciLexerIDL::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexeridl_connectnotify_isbase) {
            qscilexeridl_connectnotify_isbase = false;
            QsciLexerIDL::connectNotify(signal);
        } else if (qscilexeridl_connectnotify_callback != nullptr) {
            qscilexeridl_connectnotify_callback(this, signal);
        } else {
            QsciLexerIDL::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexeridl_disconnectnotify_isbase) {
            qscilexeridl_disconnectnotify_isbase = false;
            QsciLexerIDL::disconnectNotify(signal);
        } else if (qscilexeridl_disconnectnotify_callback != nullptr) {
            qscilexeridl_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerIDL::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexeridl_sender_isbase) {
            qscilexeridl_sender_isbase = false;
            return QsciLexerIDL::sender();
        } else if (qscilexeridl_sender_callback != nullptr) {
            return qscilexeridl_sender_callback();
        } else {
            return QsciLexerIDL::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexeridl_sendersignalindex_isbase) {
            qscilexeridl_sendersignalindex_isbase = false;
            return QsciLexerIDL::senderSignalIndex();
        } else if (qscilexeridl_sendersignalindex_callback != nullptr) {
            return qscilexeridl_sendersignalindex_callback();
        } else {
            return QsciLexerIDL::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexeridl_receivers_isbase) {
            qscilexeridl_receivers_isbase = false;
            return QsciLexerIDL::receivers(signal);
        } else if (qscilexeridl_receivers_callback != nullptr) {
            return qscilexeridl_receivers_callback(this, signal);
        } else {
            return QsciLexerIDL::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexeridl_issignalconnected_isbase) {
            qscilexeridl_issignalconnected_isbase = false;
            return QsciLexerIDL::isSignalConnected(signal);
        } else if (qscilexeridl_issignalconnected_callback != nullptr) {
            return qscilexeridl_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerIDL::isSignalConnected(signal);
        }
    }
};

#endif
