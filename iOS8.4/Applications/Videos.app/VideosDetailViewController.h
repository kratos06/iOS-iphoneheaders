/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUDataSourceViewController.h>
#import <Videos/MPStoreDownloadManagerObserver.h>

@class MPUNotificationObserver, MPMediaItem, NSMutableArray, NSLayoutConstraint, MPUItemOfferButton, VideosArtworkView, VideosDetailHeaderView, UIView, UISegmentedControl, MPUKeyValueObserver, MPUMediaDownloadObserver, VideosQueryDataSource, UIScrollView, NSString;

@interface VideosDetailViewController : MPUDataSourceViewController <MPStoreDownloadManagerObserver> {

	MPUNotificationObserver* _cloudButtonNotification;
	MPMediaItem* _item;
	NSMutableArray* _layoutConditionalConstraints;
	NSLayoutConstraint* _headerContainmentViewLeadingConstraint;
	NSLayoutConstraint* _headerContainmentViewTrailingConstraint;
	NSLayoutConstraint* _childViewControllerViewLeadingConstraint;
	NSLayoutConstraint* _childViewControllerViewTrailingConstraint;
	MPUItemOfferButton* _rightBarButtonCloudButton;
	char _shouldFloatHeader;
	VideosArtworkView* _artworkView;
	VideosDetailHeaderView* _headerView;
	unsigned _selectedSection;
	unsigned _layoutMode;
	UIView* _containmentView;
	UIView* _headerContainmentView;
	UISegmentedControl* _segmentedControl;
	MPUKeyValueObserver* _artworkObserver;
	MPUMediaDownloadObserver* _downloadObserver;

}

@property (nonatomic,retain) VideosArtworkView * artworkView;                          //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,retain) VideosDetailHeaderView * headerView;                      //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) char shouldFloatHeader;                                   //@synthesize shouldFloatHeader=_shouldFloatHeader - In the implementation block
@property (nonatomic,readonly) VideosQueryDataSource * queryDataSource; 
@property (nonatomic,retain) MPMediaItem * item;                                       //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) unsigned selectedSection;                                 //@synthesize selectedSection=_selectedSection - In the implementation block
@property (nonatomic,readonly) unsigned numberOfSegments; 
@property (assign,nonatomic) unsigned layoutMode;                                      //@synthesize layoutMode=_layoutMode - In the implementation block
@property (nonatomic,retain) UIView * containmentView;                                 //@synthesize containmentView=_containmentView - In the implementation block
@property (nonatomic,retain) UIView * headerContainmentView;                           //@synthesize headerContainmentView=_headerContainmentView - In the implementation block
@property (nonatomic,retain) UISegmentedControl * segmentedControl;                    //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) MPUKeyValueObserver * artworkObserver;                    //@synthesize artworkObserver=_artworkObserver - In the implementation block
@property (nonatomic,readonly) UIScrollView * childContentScrollView; 
@property (nonatomic,retain) MPUMediaDownloadObserver * downloadObserver;              //@synthesize downloadObserver=_downloadObserver - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)canShowPlayButton;
+(char)shouldShowDownloadProgress;
-(void)setLayoutMode:(unsigned)arg1 ;
-(MPUMediaDownloadObserver *)downloadObserver;
-(void)reloadSegments;
-(id)localizedTitleForSegment:(unsigned)arg1 ;
-(id)viewControllerForSegment:(unsigned)arg1 ;
-(void)_updateDownload;
-(void)setContainmentView:(UIView *)arg1 ;
-(UIView *)containmentView;
-(void)setHeaderContainmentView:(UIView *)arg1 ;
-(UIView *)headerContainmentView;
-(void)_cloudButtonPressed:(id)arg1 ;
-(void)_segmentValueChanged:(id)arg1 ;
-(void)setArtworkObserver:(MPUKeyValueObserver *)arg1 ;
-(void)_configurePlayButton;
-(char)_setupDownloadObserver;
-(void)_configureViewsForOneColumnDisplay;
-(void)_configureViewsForTwoColumnDisplay;
-(void)_configureContainedScrollView;
-(UIScrollView *)childContentScrollView;
-(float)_contentViewHorizontalInset;
-(char)shouldFloatHeader;
-(void)_clearDownloadObserver;
-(void)_installArtworkIntoHeaderIfNeeded;
-(void)setShouldFloatHeader:(char)arg1 ;
-(void)setDownloadObserver:(MPUMediaDownloadObserver *)arg1 ;
-(char)_mediaItemIsDownloadable:(id)arg1 ;
-(void)_updateForChangedDownloads:(id)arg1 ;
-(MPUKeyValueObserver *)artworkObserver;
-(void)_canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(void)dealloc;
-(void)reloadData;
-(MPMediaItem *)item;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_updateContentInsets;
-(unsigned)selectedSection;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)updateViewConstraints;
-(void)setItem:(MPMediaItem *)arg1 ;
-(unsigned)numberOfSegments;
-(VideosDetailHeaderView *)headerView;
-(void)setHeaderView:(VideosDetailHeaderView *)arg1 ;
-(UISegmentedControl *)segmentedControl;
-(VideosArtworkView *)artworkView;
-(void)setArtworkView:(VideosArtworkView *)arg1 ;
-(unsigned)layoutMode;
-(id)initWithDataSource:(id)arg1 ;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)setSelectedSection:(unsigned)arg1 ;
@end
