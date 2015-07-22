/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileMail/MailboxContentSelectionModelDataSource.h>
#import <MobileMail/MFSearchTextParserDelegate.h>
#import <MobileMail/MessageMegaMallObserver.h>
#import <MobileMail/MFAddressBookClient.h>
#import <MobileMail/MFMailboxTableViewDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <MobileMail/TransferMailboxPickerDelegate.h>
#import <MobileMail/AutoFetchControllerDataSource.h>

@protocol MFRelationshipAnnotationStrategy;
@class MessageMegaMall, MFMessageViewingContext, UIBarButtonItem, UITableViewCell, NSArray, UISearchDisplayController, UISearchBar, SearchScopeControl, MFSearchTextParser, MFMessageCriterion, MFActivityMonitor, UIView, UINavigationController, MailboxContentSelectionModel, MFMailMessage, NSMutableDictionary, MFMessageContentProgressLayer, SGSuggestionsService, NSTimer, UITableView, MessageViewController, NSString, _UINavigationControllerPalette, SourceSearchContext, NSUndoManager, MailDetailViewController;

@interface MailboxContentViewController : UIViewController <MailboxContentSelectionModelDataSource, MFSearchTextParserDelegate, MessageMegaMallObserver, MFAddressBookClient, MFMailboxTableViewDelegate, UIPopoverPresentationControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate, TransferMailboxPickerDelegate, AutoFetchControllerDataSource> {

	MessageMegaMall* _mall;
	MessageMegaMall* _searchMall;
	MFMessageViewingContext* _viewingContext;
	float _savedContentOffset;
	MailboxContentViewController* _threadViewController;
	long long _currentConversationID;
	unsigned _currentSection;
	UIBarButtonItem* _multiEditButtonItem;
	UIBarButtonItem* _searchEditButtonItem;
	UIBarButtonItem* _deleteButtonItem;
	UIBarButtonItem* _moveButtonItem;
	UIBarButtonItem* _markButtonItem;
	UIBarButtonItem* _composeButton;
	UITableViewCell* _cellDimmedDuringCompose;
	NSArray* _defaultToolbarItems;
	NSArray* _multiEditBarButtonItems;
	NSArray* _searchBarButtonItems;
	NSArray* _searchMultiEditBarButtonItems;
	UISearchDisplayController* _searchController;
	UISearchBar* _searchBar;
	SearchScopeControl* _searchScopeControl;
	MFSearchTextParser* _searchTextParser;
	MFMessageCriterion* _dateCriterion;
	CFDictionaryRef _commentCache;
	NSArray* _myAddresses;
	MFActivityMonitor* _fetchActivityMonitor;
	UIView* _deleteButtonView;
	UINavigationController* _disabledNavigationController;
	MailboxContentSelectionModel* _selectionModel;
	MFMailMessage* _messageToSelectAfterDeletion;
	unsigned _deleteOrArchive;
	id<MFRelationshipAnnotationStrategy> _relationshipAnnotationStrategy;
	CGPoint _lastScrolledContentOffset;
	double _nextAvailableLoadMoreInterval;
	int _addingSourcesCount;
	NSArray* _originalAbbreviatedBackButtonTitles;
	NSMutableDictionary* _mailboxBrowseActivityPayload;
	MFMessageContentProgressLayer* _progressView;
	SGSuggestionsService* _suggestions;
	NSTimer* _fetchResumptionTimer;
	unsigned _isSearchActive : 1;
	unsigned _wasSearchActive : 1;
	unsigned _wasSearchBarFirstResponder : 1;
	unsigned _isOutgoingMailbox : 1;
	unsigned _isDraftsMailbox : 1;
	unsigned _isEditableMailbox : 1;
	unsigned _isInbox : 1;
	unsigned _isOutbox : 1;
	unsigned _inEditMode : 1;
	unsigned _messageLayerShouldPurge : 1;
	unsigned _isShowingSwipeDeleteConfirmation : 1;
	unsigned _settingSearchText : 1;
	unsigned _isDismissing : 1;
	unsigned _shouldSelectInitialMessage : 1;
	unsigned _shouldKeepSelectionVisible : 2;
	unsigned _searchResultsTableViewIsLoaded : 1;
	unsigned _currentMessageOutsideSearchResults : 1;
	unsigned _savedContentOffsetIsValid : 1;
	unsigned _isDeletingMessages : 1;
	unsigned _isDeletingAllMessages : 1;
	unsigned _anySourceSupportsSearch : 1;
	unsigned _isMovingAllMessages : 1;
	unsigned _shouldBlockRowReloads : 1;
	unsigned _isThreadedMCVC : 1;
	unsigned _willPop : 1;
	unsigned _shouldFadeOutSelectionOnDisappear : 1;
	unsigned _didFadeOutSelectionOnDisappear : 1;
	unsigned _preventNextScrollbarFlash : 1;
	unsigned _preventScrollOnNextAppear : 1;
	unsigned _preventMessageSelection : 1;
	unsigned _ignoringUserInteractionForDelete : 1;
	unsigned _ignoringUserInteractionForDraftRefresh : 1;
	unsigned _useSpecialDeleteAnimation : 1;
	unsigned _deselectingDeletedRow : 1;
	unsigned _viewIsVisible : 1;
	unsigned _isRefreshing : 1;
	unsigned _localMailboxSearchOnly : 1;
	unsigned _startedSearch : 1;
	unsigned _cancellingSearch : 1;
	unsigned _finishedPrimarySearch : 1;
	unsigned _primarySearchHadResults : 1;
	unsigned _initiatedSecondarySearch : 1;
	unsigned _finishedSecondarySearch : 1;
	unsigned _allowLoadingMoreMessages : 1;
	unsigned _loadingMoreMessages : 1;
	unsigned _shouldClearCurrentMessage : 1;
	unsigned _backButtonIncludesUnreadCount : 1;
	unsigned _shouldFetchAfterFinishLaunching : 1;
	unsigned _isPerformingInteractiveDelete : 1;
	unsigned _splitViewScheduledDetailPresentation : 1;
	char _displayFavoriteToggle;
	char _showRelatedMessages;
	char _shouldResetSources;
	UITableViewCell* _quasiSelectedCell;
	UITableView* _tableView;
	MessageViewController* _messageViewController;
	NSString* _searchText;
	_UINavigationControllerPalette* _searchPalette;
	SourceSearchContext* _searchContext;
	MFMailMessage* _initialMessageToDisplay;
	MFMailMessage* _quasiSelectedMessage;
	unsigned _sourceType;

}

@property (nonatomic,retain) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MessageViewController * messageViewController;                      //@synthesize messageViewController=_messageViewController - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,readonly) char isEditableMailbox; 
@property (nonatomic,readonly) char isDeletingMessages; 
@property (nonatomic,readonly) char viewIsVisible; 
@property (nonatomic,readonly) char displayFavoriteToggle;                                       //@synthesize displayFavoriteToggle=_displayFavoriteToggle - In the implementation block
@property (assign,nonatomic) char showRelatedMessages;                                           //@synthesize showRelatedMessages=_showRelatedMessages - In the implementation block
@property (readonly) NSUndoManager * undoManager; 
@property (nonatomic,readonly) MailDetailViewController * mailDetailViewController; 
@property (nonatomic,retain) _UINavigationControllerPalette * searchPalette;                     //@synthesize searchPalette=_searchPalette - In the implementation block
@property (nonatomic,copy) SourceSearchContext * searchContext;                                  //@synthesize searchContext=_searchContext - In the implementation block
@property (nonatomic,retain) MFMailMessage * initialMessageToDisplay;                            //@synthesize initialMessageToDisplay=_initialMessageToDisplay - In the implementation block
@property (nonatomic,retain) UITableViewCell * quasiSelectedCell;                                //@synthesize quasiSelectedCell=_quasiSelectedCell - In the implementation block
@property (nonatomic,retain) MFMailMessage * quasiSelectedMessage;                               //@synthesize quasiSelectedMessage=_quasiSelectedMessage - In the implementation block
@property (assign,nonatomic) unsigned sourceType;                                                //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) char shouldResetSources;                                            //@synthesize shouldResetSources=_shouldResetSources - In the implementation block
@property (assign,nonatomic) char isRefreshing; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)selectInitialMessageWhenAvailable;
-(void)selectInitialMessageASAP;
-(void)preventScrollOnNextAppear;
-(int)propagateChangeDownwards:(id)arg1 ;
-(void)displayMessageFromSpotlight:(id)arg1 ;
-(void)handleFailureToContinueDisplayingMessage;
-(void)scrollToMessageVisible:(id)arg1 ;
-(void)prepareToContinueDisplayingMessage;
-(char)snapshotOnTermination;
-(void)willPerformVisibleStoreFetch:(id)arg1 ;
-(char)isEditableMailbox;
-(void)displayMessage:(id)arg1 animated:(char)arg2 ;
-(void)_beginIgnoringUserInteractionForDraftRefresh;
-(void)displayMessage:(id)arg1 options:(unsigned)arg2 animated:(char)arg3 ;
-(id)mall;
-(id)copySourcesCurrentlyVisible;
-(void)pulledToRefresh:(id)arg1 ;
-(void)_unreadCountChanged:(id)arg1 ;
-(void)_focusedMessageChanged:(id)arg1 ;
-(void)_updateTableForSettingsOrTimeChange:(id)arg1 ;
-(void)_deliveryQueueProcessingStart:(id)arg1 ;
-(void)_deliveryQueueProcessingStop:(id)arg1 ;
-(void)mailboxUpdatedWithNoChanges:(id)arg1 ;
-(void)_didFinishLaunching:(id)arg1 ;
-(void)detailViewControllerConfigurationChanged:(id)arg1 ;
-(void)setMailboxes:(id)arg1 sourceType:(unsigned)arg2 ;
-(char)shouldResetSources;
-(void)_removeAllSources;
-(void)setShouldResetSources:(char)arg1 ;
-(void)_beginAddingSources;
-(void)_addSource:(id)arg1 toSection:(unsigned)arg2 ;
-(void)_endAddingSources;
-(void)_initializeMailboxBrowseUserActivityWithMailboxes:(id)arg1 ;
-(void)_clearSuspendedSearchState;
-(char)_isInExpandedEnvironment;
-(float)_rowHeightForCurrentConfiguration;
-(void)_updateMarginWidthWithTableView:(id)arg1 ;
-(id)_searchFieldFont;
-(void)_resumeSearchControllerAnimated:(char)arg1 ;
-(void)_changeSetHadError:(id)arg1 ;
-(id)mf_statusBarSubtitleString;
-(void)updateIsRefreshing;
-(void)tickleSuggestionsService;
-(void)statusBarProgressDidChange:(id)arg1 ;
-(id)newSearchPalette;
-(void)displaySearchPalette;
-(void)updateBarButtons;
-(void)_updateStatusBarWithOurSources;
-(char)_hasSearchText;
-(void)_updateLandscapeThreadNavigation;
-(void)_fetchDelayedIfNecessary;
-(void)updateNoMessagesCellForTableView:(id)arg1 updatingRows:(char)arg2 ;
-(void)restoreContentOffset;
-(void)setQuasiSelectedCell:(UITableViewCell *)arg1 ;
-(char)_isDisplayingSearchResults;
-(void)updateNoMessagesCellForTableView:(id)arg1 ;
-(id)_displayedMessage;
-(void)_selectRowOfMessage:(id)arg1 inTableView:(id)arg2 scrollToVisible:(char)arg3 selectionFadeDuration:(float)arg4 ;
-(void)_selectRowOfDisplayedMessageInTableView:(id)arg1 scrollToVisible:(char)arg2 animated:(char)arg3 ;
-(void)_reloadTableData:(id)arg1 ;
-(void)_ensureIndexPathVisible:(id)arg1 withTableView:(id)arg2 animated:(char)arg3 ;
-(void)_updateMailboxPositionUserActivity;
-(MFMailMessage *)initialMessageToDisplay;
-(void)setInitialMessageToDisplay:(MFMailMessage *)arg1 ;
-(void)_deselectRowOfDisplayedMessageInTableView:(id)arg1 selectionFadeDuration:(float)arg2 ;
-(void)_cancelEditModeAnimated:(char)arg1 ;
-(void)_invalidateFetchResumptionTimerShouldFire:(char)arg1 ;
-(void)_endBlockingBackgroundOperations;
-(void)removedFromMailNavigationController:(id)arg1 ;
-(void)_resetSearchUsingSearchContext:(id)arg1 ;
-(void)updateSearchProgressForTableView:(id)arg1 ;
-(void)_suspendSearchController;
-(void)_popIfNecessaryWithDelay:(double)arg1 ;
-(id)_mallForTableView:(id)arg1 ;
-(char)_isShowingSpinnerInSection:(int)arg1 forTableView:(id)arg2 ;
-(char)_isExpandedSection:(int)arg1 forTableView:(id)arg2 ;
-(char)_shouldCollapseSection:(int)arg1 forTableView:(id)arg2 ;
-(char)_isShowingSearchProgressForTableView:(id)arg1 ;
-(void)_setShowingSearchProgress:(char)arg1 forTableView:(id)arg2 ;
-(id)searchProgressCellPathForTableView:(id)arg1 ;
-(char)_isShowingNoMessagesCellForTableView:(id)arg1 ;
-(char)_shouldShowNoMessagesCellForTableView:(id)arg1 ;
-(void)_setShowingNoMessagesCell:(char)arg1 forTableView:(id)arg2 ;
-(id)_tableViewForMall:(id)arg1 ;
-(void)deleteButtonLongPressed:(id)arg1 ;
-(void)transferButtonClicked:(id)arg1 ;
-(void)bulkMarkButtonClicked:(id)arg1 ;
-(char)shouldDisplaySearchEditButtons;
-(void)editButtonClicked:(id)arg1 ;
-(char)allowDeleteAll;
-(id)deleteButtonItem;
-(id)moveButtonItem;
-(id)markButtonItem;
-(void)updateToolbarButtonTitles;
-(void)updateNavigationBarButtons;
-(void)_updateCurrentMessageOutsideSearchResultsAnimated:(char)arg1 ;
-(void)_setInEditMode:(char)arg1 animated:(char)arg2 ;
-(void)setRowDeletionEnabled:(char)arg1 animated:(char)arg2 ;
-(void)deleteShortcutInvoked:(id)arg1 ;
-(MessageViewController *)messageViewController;
-(MFMailMessage *)quasiSelectedMessage;
-(void)_reallyDeleteMessages:(id)arg1 deleteOrArchive:(unsigned)arg2 ;
-(void)_messageCellDeletionAnimationsDidStopForTableView:(id)arg1 animated:(char)arg2 ;
-(void)deleteAction:(id)arg1 showChoices:(char)arg2 ;
-(void)_beginMessageDeletionAnimation;
-(void)_deleteSelectedMessages;
-(MailDetailViewController *)mailDetailViewController;
-(void)_finishedAnimatingMessageToDeleteButton:(void*)arg1 ;
-(void)_reallyDeleteMessages:(id)arg1 inSection:(unsigned)arg2 deleteOrArchive:(unsigned)arg3 ;
-(int)_stackViewTransferOptions;
-(void)_transferSelection:(id)arg1 ;
-(void)_pauseReloadingMessagesForMall:(id)arg1 ;
-(void)_reloadPendingMessagesForMall:(id)arg1 ;
-(void)_bulkMarkSelection:(id)arg1 asFlagged:(char)arg2 ;
-(void)_finishBulkMarkWhilePausingReloadingMessagesForMall:(id)arg1 shouldPause:(char)arg2 ;
-(void)_bulkMarkSelection:(id)arg1 asRead:(char)arg2 ;
-(void)_bulkMarkSelection:(id)arg1 asJunk:(char)arg2 ;
-(void)willDismiss:(char)arg1 ;
-(void)didDismiss:(char)arg1 ;
-(void)_clearIsDismissing;
-(void)_selectInitialMessageNowWithOptions:(unsigned)arg1 ;
-(void)_selectInitialMessageIfNecessaryAndDisplayImmediately:(char)arg1 withOptions:(unsigned)arg2 ;
-(void)_statusBarProgressDidHide:(id)arg1 ;
-(void)prepareForSpecialDeleteAnimation;
-(void)commitSpecialDeleteAnimationWithMessages:(id)arg1 deleteOrArchive:(unsigned)arg2 ;
-(void)invalidateCommentCache;
-(id)addressCommentForAddressList:(id)arg1 ;
-(void)setMessageViewController:(MessageViewController *)arg1 ;
-(void)_updateViewingContextToMessage:(id)arg1 ;
-(void)_setBackButtonIncludesUnreadCount:(char)arg1 ;
-(void)_makeSplitViewControllerShowMessageViewController;
-(void)_setCurrentMessageOutsideSearchResults:(char)arg1 ;
-(void)_setIsThreadedMCVC:(char)arg1 ;
-(void)setShowRelatedMessages:(char)arg1 ;
-(id)mf_unreadCountForDisplay;
-(id)_statusBarSubtitleStringWithBadgeCount:(unsigned)arg1 ;
-(id)_subtitleFormatWithBadgeCount:(unsigned)arg1 ;
-(char)_shouldShowSearchProgressAtIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(char)_shouldShowExpandSectionCellAtIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(char)_wantsCompactMessageListRows;
-(char)_isNotifyThread;
-(id)_firstMessageSubject;
-(id)noMessagesCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(char)_shouldShowSpinnerAtIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(id)searchProgressCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)expandSectionCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(Class)_tableViewCellClass;
-(void)prepareRelationshipAnnotationStrategyGivenCount:(/*^block*/id)arg1 ;
-(id)cachedAddressCommentForAddressList:(id)arg1 ;
-(char)shouldAnnotateRelationshipsGivenCount:(/*^block*/id)arg1 ;
-(void)_setExpanded:(char)arg1 forSection:(int)arg2 tableView:(id)arg3 ;
-(void)_setRowOfDisplayedMessageQuasiSelected:(char)arg1 ;
-(void)restoreDraftOrOutboxMessage:(id)arg1 ;
-(id)displayThreadedViewForMessage:(id)arg1 mall:(id)arg2 animate:(char)arg3 includeRelatedSources:(char)arg4 ;
-(void)_suspendMalls:(id)arg1 ;
-(void)_createFetchResumptionTimer;
-(void)_resumeMalls:(id)arg1 ;
-(char)_messageMayHaveRelatedMessages:(id)arg1 ;
-(void)_markConversationContainingMessage:(id)arg1 shouldNotify:(char)arg2 ;
-(void)_reloadTableData:(id)arg1 sections:(id)arg2 ;
-(void)updateSearchProgressForTableView:(id)arg1 updatingRows:(char)arg2 ;
-(char)getContentOfffset:(CGPoint*)arg1 ensuringIndexPathVisible:(id)arg2 inTableView:(id)arg3 ;
-(void)setQuasiSelectedMessage:(MFMailMessage *)arg1 ;
-(void)_connectionEstablished:(id)arg1 ;
-(void)handleMallStartedFetch:(id)arg1 ;
-(void)_setShowingSpinner:(char)arg1 inSection:(int)arg2 forTableView:(id)arg3 ;
-(void)_deselectRowOfDisplayedMessageInTableView:(id)arg1 animated:(char)arg2 ;
-(void)_endIgnoringUserInteractionForDraftRefresh;
-(void)beginSecondarySearch;
-(char)collapsedRangeContainsIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)_beginBlockingBackgroundOperations;
-(void)_initiateSecondarySearchIfAppropriateForMall:(id)arg1 ;
-(void)_configureSearchMallSources;
-(unsigned)searchOrderOptions;
-(void)searchScopeChanged:(id)arg1 ;
-(char)_primaryMallHasEditableMessages;
-(char)_messagesAreEditableInSource:(id)arg1 ;
-(id)_favoritesMailboxSources;
-(void)dismissSearchResultsAnimated:(char)arg1 ;
-(void)_dumpAndReloadSourcesForMall:(id)arg1 shouldThread:(char)arg2 ;
-(id)_focusedMessageAtNormalizedFocalPoint:(CGPoint)arg1 ;
-(void)_performDestructiveSwipeAction:(unsigned)arg1 atIndexPath:(id)arg2 inTableView:(id)arg3 ;
-(void)_performFlagToggleSwipeAction:(unsigned)arg1 atIndexPath:(id)arg2 inTableView:(id)arg3 ;
-(id)messagesForIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(id)_titleForDestructiveAction:(unsigned)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)sourcesForSelectionModel:(id)arg1 ;
-(id)selectionModel:(id)arg1 sourceForMessageInfo:(id)arg2 ;
-(id)selectionModel:(id)arg1 indexPathForMessageInfo:(id)arg2 ;
-(id)selectionModel:(id)arg1 messagesForMessageInfos:(id)arg2 ;
-(id)selectionModel:(id)arg1 messageInfosAtTableIndexPath:(id)arg2 ;
-(char)selectionModel:(id)arg1 deleteMovesToTrashForTableIndexPath:(id)arg2 ;
-(char)selectionModel:(id)arg1 supportsArchivingForTableIndexPath:(id)arg2 ;
-(char)selectionModel:(id)arg1 shouldArchiveByDefaultForTableIndexPath:(id)arg2 ;
-(void)selectionModel:(id)arg1 getConversationStateAtTableIndexPath:(id)arg2 hasUnread:(char*)arg3 hasUnflagged:(char*)arg4 ;
-(void)selectionModel:(id)arg1 getSourceStateHasUnread:(char*)arg2 hasUnflagged:(char*)arg3 ;
-(void)searchTextParser:(id)arg1 searchContextChanged:(id)arg2 ;
-(void)megaMallMessageCountChanged:(id)arg1 ;
-(void)megaMallMessagesAtIndexesChanged:(id)arg1 ;
-(void)megaMallStartFetch:(id)arg1 ;
-(void)megaMallFinishedFetch:(id)arg1 ;
-(void)megaMallCurrentMessageRemoved:(id)arg1 ;
-(void)megaMallDidLoadMessages:(id)arg1 ;
-(void)megaMallGrowingMailboxesChanged:(id)arg1 ;
-(void)megaMallDidFinishSearch:(id)arg1 ;
-(unsigned)tableView:(id)arg1 primaryActionForCellEdge:(unsigned)arg2 atIndexPath:(id)arg3 ;
-(unsigned)tableView:(id)arg1 secondaryActionForCellEdge:(unsigned)arg2 atIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 titleForSwipeAction:(unsigned)arg2 atIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willPerformSwipeAction:(unsigned)arg2 atIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 performSwipeAction:(unsigned)arg2 atIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 tappedSwipeAction:(unsigned)arg2 atIndexPath:(id)arg3 ;
-(void)transferMailboxPickerController:(id)arg1 didSelectMailbox:(id)arg2 withMessages:(id)arg3 ;
-(void)transferMailboxPickerControllerDidFinish:(id)arg1 animated:(char)arg2 ;
-(void)setMailboxes:(id)arg1 ;
-(char)isDeletingMessages;
-(id)mf_applicationContexts;
-(void)setShouldFadeOutSelectionOnDisappear:(char)arg1 ;
-(char)containsMessageOrConversation:(id)arg1 ;
-(char)canResignFocus;
-(void)becomePreparedForTransferOfMessages:(id)arg1 options:(int)arg2 animated:(char)arg3 ;
-(void)resignPreparedForTransferOfMessages:(char)arg1 ;
-(id)messageToSelectAfterDeletedMessages:(id)arg1 mall:(id*)arg2 ;
-(void)updateSelectionAnimated:(char)arg1 ;
-(void)_displayNameChanged:(id)arg1 ;
-(UITableViewCell *)quasiSelectedCell;
-(char)shouldHideWhenRotatingToPortraitOrientation;
-(char)allowBackNavigationForSplitViewController:(id)arg1 ;
-(char)displayFavoriteToggle;
-(char)showRelatedMessages;
-(void)selectMessageAtIndex:(int)arg1 ;
-(void)_updateBadgeCount;
-(char)isSearching;
-(id)currentTableView;
-(void)deleteButtonClicked:(id)arg1 ;
-(char)viewIsVisible;
-(void)setProgressUIVisible:(char)arg1 animated:(char)arg2 ;
-(void)_popoverWillBePresented:(id)arg1 ;
-(void)addressBookManager:(id)arg1 addressBookDidChange:(void*)arg2 ;
-(void)addressBookPreferencesChangedForAddressBookManager:(id)arg1 ;
-(void)updateTitle;
-(void)setSearchText:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)applicationWillSuspend;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(NSUndoManager *)undoManager;
-(void)didReceiveMemoryWarning;
-(void)updateUserActivityState:(id)arg1 ;
-(void)applicationDidResume;
-(char)shouldAutorotate;
-(id)keyCommands;
-(char)canBecomeFirstResponder;
-(id)tableView:(id)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(id)contentScrollView;
-(void)viewDidUnload;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)rotatingHeaderView;
-(void)_getRotationContentSettings:(SCD_Struct_Ma3*)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(char)canDismiss;
-(UITableView *)tableView;
-(unsigned)sourceType;
-(void)setSourceType:(unsigned)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(NSString *)searchText;
-(CGPoint)tableView:(id)arg1 newContentOffsetAfterUpdate:(CGPoint)arg2 context:(id)arg3 ;
-(void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(char)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(Class)_resultsTableViewClass;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2 ;
-(void)setSearchPalette:(_UINavigationControllerPalette *)arg1 ;
-(_UINavigationControllerPalette *)searchPalette;
-(char)isRefreshing;
-(void)viewWillReappear:(char)arg1 ;
-(void)viewWillFirstAppear:(char)arg1 ;
-(void)preventNextScrollbarFlash;
-(id)currentEditButtonItem;
-(void)updateCurrentEditButton;
-(void)setIsRefreshing:(char)arg1 ;
-(id)sources;
-(void)setSearchContext:(SourceSearchContext *)arg1 ;
-(SourceSearchContext *)searchContext;
-(void)updateToolbarButtons;
-(void)_accountsChanged:(id)arg1 ;
-(void)_popIfNecessary;
-(id)myEmailAddresses;
-(void)_cancelSearch;
@end
