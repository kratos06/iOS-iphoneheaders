/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMObject.h>
#import <WebCore/DOMEventTarget.h>
#import <UIKit/UIKeyboardInput.h>
#import <UIKit/UITextInputPrivate.h>
#import <UIKit/UIKeyInput.h>
#import <UIKit/UITextInputTokenizer.h>
#import <UIKit/UIWebSelectionBlock.h>
#import <UIKit/UITextInput_Internal.h>

@class UITextInteractionAssistant, UITextRange, NSDictionary, UITextPosition, UIView, UIColor, UIImage, NSString, DOMNodeList, DOMDocument, DOMNamedNodeMap, DOMElement;

@interface DOMNode : DOMObject <DOMEventTarget, UIKeyboardInput, UITextInputPrivate, UIKeyInput, UITextInputTokenizer, UIWebSelectionBlock, UITextInput_Internal>

@property (readonly) bool mf_isBody; 
@property (readonly) bool mf_isAttachment; 
@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder<UITextInput> * __content; 
@property (nonatomic,readonly) UIView<UITextInputPrivate> * _textSelectingContainer; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) bool enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) bool secureTextEntry; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic) <UITextInputDelegate> * inputDelegate; 
@property (nonatomic,readonly) <UITextInputTokenizer> * tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic) unsigned long long insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) bool isSingleLineDocument; 
@property (assign,nonatomic) bool contentsIsSingleValue; 
@property (assign,nonatomic) bool acceptsEmoji; 
@property (assign,nonatomic) bool forceEnableDictation; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) bool returnKeyGoesToNextResponder; 
@property (assign,nonatomic) bool acceptsFloatingKeyboard; 
@property (assign,nonatomic) bool acceptsSplitKeyboard; 
@property (assign,nonatomic) bool displaySecureTextUsingPlainText; 
@property (assign,nonatomic) bool learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) bool suppressReturnKeyStyling; 
@property (assign,nonatomic) bool useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) bool deferBecomingResponder; 
@property (assign,nonatomic) bool enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) long long selectionGranularity; 
@property (readonly) NSString * nodeName; 
@property (copy) NSString * nodeValue; 
@property (readonly) unsigned short nodeType; 
@property (readonly) DOMNode * parentNode; 
@property (readonly) DOMNodeList * childNodes; 
@property (readonly) DOMNode * firstChild; 
@property (readonly) DOMNode * lastChild; 
@property (readonly) DOMNode * previousSibling; 
@property (readonly) DOMNode * nextSibling; 
@property (readonly) DOMDocument * ownerDocument; 
@property (readonly) NSString * namespaceURI; 
@property (copy) NSString * prefix; 
@property (readonly) NSString * localName; 
@property (readonly) DOMNamedNodeMap * attributes; 
@property (readonly) NSString * baseURI; 
@property (copy) NSString * textContent; 
@property (readonly) DOMElement * parentElement; 
@property (readonly) bool isContentEditable; 
+(id)_nodeFromJSWrapper:(OpaqueJSValueRef)arg1 ;
-(id)mf_childNodeAtIndex:(int)arg1 ;
-(id)mf_lastSibling;
-(id)mf_firstSibling;
-(bool)mf_isQuoteOrWithinQuote;
-(id)mf_findElementWithTag:(id)arg1 className:(id)arg2 andIdName:(id)arg3 ;
-(bool)mf_isDescendantOfNode:(id)arg1 ;
-(id)mf_traverseNextNodeStayingWithin:(id)arg1 ;
-(id)mf_traverseNextSiblingStayingWithin:(id)arg1 ;
-(id)mf_blockNodeAncestor;
-(id)mf_containingBlockQuote;
-(bool)mf_isAtBeginningOfContainerNode:(id)arg1 ;
-(bool)mf_isAtEndOfContainerNode:(id)arg1 ;
-(bool)mf_containsOnlySelectionMarkers;
-(id)mf_appendBlockPlaceholder;
-(id)mf_nextSiblingOrAunt;
-(id)mf_highestContainingBlockQuote;
-(id)mf_firstDescendantBlockQuote;
-(bool)mf_containsRichText;
-(void)recursivelyRemoveMailAttributes;
-(int)mf_quoteLevelDelta;
-(void)_fixParagraphsAndQuotesFromMicrosoftNodesToRemove:(id)arg1 ;
-(bool)mf_isBody;
-(bool)mf_isAttachment;
-(id)mf_commonAncestorWithNode:(id)arg1 ;
-(void)mf_fixParagraphsAndQuotesFromMicrosoft;
-(id)mf_traversePreviousNode;
-(id)mf_topmostContainingNodeWithNameInArray:(id)arg1 ;
-(bool)dd_searchForLinkEndNode:(id)arg1 ;
-(void)dd_removeResultLinks;
-(void)_startAssistingDocumentView:(id)arg1 ;
-(void)_stopAssistingDocumentView:(id)arg1 ;
-(bool)_requiresAccessoryView;
-(bool)_requiresInputView;
-(bool)_supportsAutoFill;
-(bool)_supportsAccessoryClear;
-(void)_accessoryClear;
-(id)_nextAssistedNode;
-(id)_previousAssistedNode;
-(id)_textFormElement;
-(id)textInputView;
-(CGRect)_selectionClipRect;
-(id)_proxyTextInput;
-(NSRange)_selectedNSRange;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1 ;
-(void)_extendCurrentSelection:(int)arg1 ;
-(void)_setCaretSelectionAtEndOfSelection;
-(id)_moveToEndOfWord:(bool)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfLine:(bool)arg1 withHistory:(id)arg2 ;
-(id)_moveRight:(bool)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfWord:(bool)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfLine:(bool)arg1 withHistory:(id)arg2 ;
-(id)_moveLeft:(bool)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfParagraph:(bool)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfDocument:(bool)arg1 withHistory:(id)arg2 ;
-(id)_moveDown:(bool)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfParagraph:(bool)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfDocument:(bool)arg1 withHistory:(id)arg2 ;
-(id)_moveUp:(bool)arg1 withHistory:(id)arg2 ;
-(void)_deleteByWord;
-(void)_deleteToStartOfLine;
-(void)_deleteToEndOfLine;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)_unmarkText;
-(void)_setGestureRecognizers;
-(unsigned)_characterBeforeCaretSelection;
-(unsigned)_characterInRelationToRangedSelection:(int)arg1 ;
-(void)_moveCurrentSelection:(int)arg1 ;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_deleteBackwardAndNotify:(bool)arg1 ;
-(void)_deleteForwardAndNotify:(bool)arg1 ;
-(unsigned)_characterInRelationToCaretSelection:(int)arg1 ;
-(id)_wordContainingCaretSelection;
-(unsigned)_characterAfterCaretSelection;
-(id)_rangeOfEnclosingWord:(id)arg1 ;
-(id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2 ;
-(id)_fullText;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2 ;
-(void)_replaceCurrentWordWithText:(id)arg1 ;
-(void)_selectAll;
-(bool)_selectionAtDocumentStart;
-(NSRange)_nsrangeForTextRange:(id)arg1 ;
-(bool)_selectionAtDocumentEnd;
-(id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(bool)arg4 ;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(bool)arg2 ;
-(long long)_selectionAffinity;
-(id)_fontForCaretSelection;
-(id)_textColorForCaretSelection;
-(id)_newPhraseBoundaryGestureRecognizer;
-(id)_selectableText;
-(id)_fullRange;
-(int)_indexForTextPosition:(id)arg1 ;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2 ;
-(id)_keyInput;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(bool)arg2 ;
-(void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(bool)arg2 ;
-(bool)_isEmptySelection;
-(id)_setHistory:(id)arg1 withExtending:(bool)arg2 withAnchor:(int)arg3 withAffinityDownstream:(bool)arg4 ;
-(id)_setSelectionRangeWithHistory:(id)arg1 ;
-(void)_phraseBoundaryGesture:(id)arg1 ;
-(bool)_selectionAtWordStart;
-(bool)_hasMarkedTextOrRangedSelection;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(id)_rangeOfLineEnclosingPosition:(id)arg1 ;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1 ;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1 ;
-(id)webFrame;
-(CGRect)boundingRect;
-(CGRect)boundingRectAndInsideFixedPosition:(int*)arg1 ;
-(id)asDomNode;
-(bool)selectable;
-(id)parentBlock;
-(bool)canShrinkDirectlyToTextOnly;
-(id)enclosingDocument;
-(id)asDomRange;
-(bool)hasCustomLineHeight;
-(id)rangeOfContents;
-(bool)isSameBlock:(id)arg1 ;
-(bool)containsBlock:(id)arg1 ;
-(id)firstDescendantOfAboutTheSameWidthOrHeight;
-(id)lastDescendantOfAboutTheSameWidthOrHeight;
-(bool)strictlyContainsBlock:(id)arg1 ;
-(id)largerParent;
-(bool)rendersAsBlock;
-(bool)containsRange:(id)arg1 ;
-(bool)containsNode:(id)arg1 ;
-(id)asElement;
-(id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(CGRect)arg1 withDescentDirection:(int)arg2 ;
-(bool)strictlyContainsNode:(id)arg1 ;
-(id)enclosingElementIncludingSelf;
-(bool)touchCalloutEnabled;
-(bool)alwaysAttemptToShowTapHighlight;
-(bool)showsTapHighlight;
-(bool)nodeCanBecomeFirstResponder;
-(bool)isLikelyToBeginPageLoad;
-(id)absoluteQuadsAtPoint:(CGPoint)arg1 ;
-(id)tapHighlightColor;
-(id)_realNode;
-(id)itemTitle;
-(id)createSelectedItem;
-(id)createPickerCell;
-(void)populateCell:(id)arg1 ;
-(id)delegate;
-(bool)isEditable;
-(id)text;
-(void)setText:(id)arg1 ;
-(bool)editing;
-(bool)isEditing;
-(id)interactionAssistant;
-(id)selectionView;
-(id)textInputTraits;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(void)takeTraitsFrom:(id)arg1 ;
-(id)beginningOfDocument;
-(id)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)textInRange:(id)arg1 ;
-(id)inputDelegate;
-(void)setSelectedTextRange:(id)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(bool)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(id)selectedTextRange;
-(id)markedTextRange;
-(id)markedTextStyle;
-(void)setMarkedTextStyle:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setInputDelegate:(id)arg1 ;
-(id)tokenizer;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)insertDictationResultPlaceholder;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2 ;
-(id)metadataDictionariesForDictationResults;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(long long)selectionAffinity;
-(void)setSelectionAffinity:(long long)arg1 ;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(void)selectAll;
-(id)_textSelectingContainer;
-(id)textColorForCaretSelection;
-(void)updateAutoscroll:(id)arg1 ;
-(NSRange)selectionRange;
-(bool)hasSelection;
-(CFCharacterSetRef)textTrimmingSet;
-(bool)hasContent;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(void)updateSelection;
-(bool)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(bool)arg1 ;
-(id)automaticallySelectedOverlay;
-(bool)requiresKeyEvents;
-(void)handleKeyWebEvent:(id)arg1 ;
-(void)acceptedAutoFillWord:(id)arg1 ;
-(bool)isAutoFillMode;
-(id)fontForCaretSelection;
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3 ;
-(bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(void)setTextTrimmingSet:(CFCharacterSetRef)arg1 ;
-(int)textLoupeVisibility;
-(void)setTextLoupeVisibility:(int)arg1 ;
-(id)textSuggestionDelegate;
-(void)setTextSuggestionDelegate:(id)arg1 ;
-(bool)contentsIsSingleValue;
-(void)setContentsIsSingleValue:(bool)arg1 ;
-(CGRect)_lastRectForRange:(id)arg1 ;
-(CGRect)caretRect;
-(void)replaceCurrentWordWithText:(id)arg1 ;
-(void)confirmMarkedText:(id)arg1 ;
-(unsigned short)characterInRelationToCaretSelection:(int)arg1 ;
-(unsigned short)characterAfterCaretSelection;
-(id)rectsForNSRange:(NSRange)arg1 ;
-(int)wordOffsetInRange:(id)arg1 ;
-(int)selectionState;
-(bool)selectionAtDocumentStart;
-(bool)selectionAtWordStart;
-(id)rangeByMovingCurrentSelection:(int)arg1 ;
-(id)rangeByExtendingCurrentSelection:(int)arg1 ;
-(void)extendCurrentSelection:(int)arg1 ;
-(CGRect)convertCaretRect:(CGRect)arg1 ;
-(bool)isShowingPlaceholder;
-(void)setupPlaceholderTextIfNeeded;
-(void)setSecure:(bool)arg1 ;
-(void)clearMarkedText;
-(void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(bool)arg2 ;
-(id)rangeOfEnclosingWord:(id)arg1 ;
-(id)uiWebDocumentView;
-(CGPoint)constrainedPoint:(CGPoint)arg1 withInset:(double)arg2 ;
-(void)setSelectionWithPoint:(CGPoint)arg1 inset:(double)arg2 ;
-(void)replaceRange:(id)arg1 withText:(id)arg2 closeTyping:(bool)arg3 ;
-(int)initialSelectionBehavior;
-(void)setInitialSelectionBehavior:(int)arg1 ;
-(id)content;
-(void)moveRight;
-(void)moveLeft;
-(void)moveUp;
-(void)moveDown;
-(bool)editable;
-(id)textDocument;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(long long)keyboardType;
-(bool)isSecure;
-(bool)isTextControl;
-(id)tagName;
-(id)urlScheme;
-(id)createPeripheral;
-(id)startPosition;
-(id)endPosition;
-(id)rangeOfContents;
-(void)hidePlaceholder;
-(void)showPlaceholderIfNecessary;
-(bool)isHorizontalWritingMode;
-(id)webArchiveByFilteringSubframes:(/*^block*/ id)arg1 ;
-(id)markupString;
-(CGRect)_renderRect:(bool*)arg1 ;
-(id)webArchive;
-(id)borderRadii;
-(id)absoluteQuads;
-(double)textHeight;
-(id)findExplodedTextNodeAtPoint:(CGPoint)arg1 ;
-(id)rangeOfContainingParagraph;
-(bool)isSelectableBlock;
-(bool)containsOnlyInlineObjects;
-(id)boundingBoxes;
-(id)textRects;
-(CGRect)boundingBoxUsingTransforms;
-(WKQuad)innerFrameQuad;
-(id)hrefLabel;
-(CGRect)boundingFrame;
-(WKQuad)absoluteQuad;
-(id)hrefURL;
-(CGRect)boundingBox;
-(WKQuad)absoluteQuadAndInsideFixedPosition:(bool*)arg1 ;
-(id)nextFocusNode;
-(id)previousFocusNode;
-(float)computedFontSize;
-(Element*)_linkElement;
-(id)lineBoxRects;
-(id)lineBoxQuads;
-(id)hrefTarget;
-(CGRect)hrefFrame;
-(id)hrefTitle;
-(id)description;
-(RootObjectRef)_rootObject;
-(void)dealloc;
-(id)ownerDocument;
-(id)childNodes;
-(id)lastChild;
-(id)firstChild;
-(bool)isContentEditable;
-(id)parentNode;
-(id)previousSibling;
-(id)removeChild:(id)arg1 ;
-(bool)isSameNode:(id)arg1 ;
-(void)inspect;
-(unsigned short)nodeType;
-(id)parentElement;
-(id)nextSibling;
-(id)attributes;
-(id)nodeValue;
-(id)nodeName;
-(void)finalize;
-(id)lookupNamespaceURI:(id)arg1 ;
-(bool)contains:(id)arg1 ;
-(void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(bool)arg3 ;
-(void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(bool)arg3 ;
-(bool)dispatchEvent:(id)arg1 ;
-(void)addEventListener:(id)arg1 :(id)arg2 :(bool)arg3 ;
-(void)removeEventListener:(id)arg1 :(id)arg2 :(bool)arg3 ;
-(void)setNodeValue:(id)arg1 ;
-(id)namespaceURI;
-(id)prefix;
-(void)setPrefix:(id)arg1 ;
-(id)localName;
-(id)baseURI;
-(id)textContent;
-(void)setTextContent:(id)arg1 ;
-(id)insertBefore:(id)arg1 refChild:(id)arg2 ;
-(id)insertBefore:(id)arg1 :(id)arg2 ;
-(id)replaceChild:(id)arg1 oldChild:(id)arg2 ;
-(id)replaceChild:(id)arg1 :(id)arg2 ;
-(id)appendChild:(id)arg1 ;
-(bool)hasChildNodes;
-(id)cloneNode:(bool)arg1 ;
-(void)normalize;
-(bool)isSupported:(id)arg1 version:(id)arg2 ;
-(bool)isSupported:(id)arg1 :(id)arg2 ;
-(bool)hasAttributes;
-(bool)isEqualNode:(id)arg1 ;
-(id)lookupPrefix:(id)arg1 ;
-(bool)isDefaultNamespace:(id)arg1 ;
-(unsigned short)compareDocumentPosition:(id)arg1 ;
@end

