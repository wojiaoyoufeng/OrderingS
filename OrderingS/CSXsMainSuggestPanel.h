//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSingleListView.h"

#import "CSOrderPanelDelegate.h"
#import "CSXsMainSuggestPanelTopDelegate.h"

@class CSOrderPanel, CSXsMainSuggestPanelTop, NSMutableArray, NSObject<CSXsMainSuggestPanelDelegate>, NSString, NSTimer, SearchSuggestListDTO, SuggestResultData, UILabel, UIView;

@interface CSXsMainSuggestPanel : BaseSingleListView <CSXsMainSuggestPanelTopDelegate, CSOrderPanelDelegate>
{
    _Bool _isExpandedTag;
    _Bool _shouldReloadLocalKwHist;
    _Bool _isExpandingOrContrasting;
    int _listTag;
    int _currentRotateRestIdx;
    NSObject<CSXsMainSuggestPanelDelegate> *_delegate;
    NSString *_keywords;
    SearchSuggestListDTO *_dto;
    SearchSuggestListDTO *_cachedUserHistory;
    SuggestResultData *_defaultSuggestData;
    double _savedOriginalTop;
    CSXsMainSuggestPanelTop *_ctrlSugInput;
    CSOrderPanel *_ctrlOrderPanel;
    UIView *_ctrlWaitingView;
    double _currentTime;
    NSMutableArray *_reqTimeSpentAudit;
    UILabel *_ctrlAuditLog;
    NSMutableArray *_arrPreloadedRests;
    NSTimer *_timerRotateRests;
}

@property(nonatomic) _Bool isExpandingOrContrasting; // @synthesize isExpandingOrContrasting=_isExpandingOrContrasting;
@property(nonatomic) int currentRotateRestIdx; // @synthesize currentRotateRestIdx=_currentRotateRestIdx;
@property(retain, nonatomic) NSTimer *timerRotateRests; // @synthesize timerRotateRests=_timerRotateRests;
@property(retain, nonatomic) NSMutableArray *arrPreloadedRests; // @synthesize arrPreloadedRests=_arrPreloadedRests;
@property(retain, nonatomic) UILabel *ctrlAuditLog; // @synthesize ctrlAuditLog=_ctrlAuditLog;
@property(retain, nonatomic) NSMutableArray *reqTimeSpentAudit; // @synthesize reqTimeSpentAudit=_reqTimeSpentAudit;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool shouldReloadLocalKwHist; // @synthesize shouldReloadLocalKwHist=_shouldReloadLocalKwHist;
@property(retain, nonatomic) UIView *ctrlWaitingView; // @synthesize ctrlWaitingView=_ctrlWaitingView;
@property(retain, nonatomic) CSOrderPanel *ctrlOrderPanel; // @synthesize ctrlOrderPanel=_ctrlOrderPanel;
@property(retain, nonatomic) CSXsMainSuggestPanelTop *ctrlSugInput; // @synthesize ctrlSugInput=_ctrlSugInput;
@property(nonatomic) int listTag; // @synthesize listTag=_listTag;
@property(nonatomic) _Bool isExpandedTag; // @synthesize isExpandedTag=_isExpandedTag;
@property(nonatomic) double savedOriginalTop; // @synthesize savedOriginalTop=_savedOriginalTop;
@property(retain, nonatomic) SuggestResultData *defaultSuggestData; // @synthesize defaultSuggestData=_defaultSuggestData;
@property(retain, nonatomic) SearchSuggestListDTO *cachedUserHistory; // @synthesize cachedUserHistory=_cachedUserHistory;
@property(retain, nonatomic) SearchSuggestListDTO *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property NSObject<CSXsMainSuggestPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)resetDefaultRestSugData;
- (void)storeLatestSelectRest:(id)arg1;
- (id)findDefaultSuggestData;
- (void)alertHintViewOnClickTryAgainBtn;
- (void)animTableViewFlipFromLeft:(_Bool)arg1;
- (void)cancelAsynCall;
- (void)cancelKwSearch;
- (void)fireKwSearch:(id)arg1;
- (void)orderPanelTel:(id)arg1;
- (void)orderPanelSubmitOrder:(id)arg1 reserveTime:(double)arg2 peopleNum:(long long)arg3 roomType:(long long)arg4;
- (void)carryOnLoadingForUserHistory;
- (void)carryOnLoadingForKeywordHistory;
- (void)suggestPanelTopSelHistRestBtnClicked:(id)arg1;
- (void)suggestPanelTopSelRestBtnClicked:(id)arg1;
- (void)suggestPanelTopCancelBtnClicked:(id)arg1;
- (void)loadDataAccordingToTextInput:(id)arg1;
- (void)keywordsTextFieldDidChangedTo:(id)arg1;
- (void)commonFinale;
- (void)contractDidStop:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)safeGuardSelfTopPostion;
- (void)contractStep1DidStop:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)contract;
- (void)expandDidStop:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)expand;
- (void)scrollTableToTop;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 indexPath:(id)arg2;
- (void)createCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)heightForRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)completeQueryParams;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)completeLoadData;
- (void)onHttpRequestSuccess:(id)arg1 tag:(long long)arg2;
- (void)postDataForRestSearch:(id)arg1;
- (void)loadDataKwHistFromCache;
- (void)onGetData:(id)arg1 fromMemCache:(_Bool)arg2;
- (void)onGetRestSuggestData:(id)arg1 fromMemCache:(_Bool)arg2;
- (id)makeMemCacheKeyForRestSuggest;
- (id)makeCSCacheKeyForUserHistory;
- (id)makeCSCacheKeyForLatestSelectRest;
- (void)loadDataForUserHistory;
- (void)doRemotelyLoadDataForUserHistory;
- (void)loadData;
- (_Bool)chkIsLastSelRest:(id)arg1;
- (void)storeLastSelRestToCacheForOrderPanel:(id)arg1;
- (id)makeKeyOfLastSelRestForOrderPanelRefresh;
- (_Bool)chkShouldReloadBookingUI:(id)arg1;
- (void)displayDefaultSuggestDataAndForceReloadOrderPanel:(_Bool)arg1;
- (void)reloadWithRestSugData:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
