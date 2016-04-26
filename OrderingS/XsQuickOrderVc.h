//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDetailVc.h"

#import "CSXsMainSuggestPanelDelegate.h"

@class CSXsMainSuggestPanel, NSString, SuggestResultData;

@interface XsQuickOrderVc : BaseDetailVc <CSXsMainSuggestPanelDelegate>
{
    CSXsMainSuggestPanel *_ctrlSuggestPanel;
    SuggestResultData *_dto;
}

@property(retain, nonatomic) SuggestResultData *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) CSXsMainSuggestPanel *ctrlSuggestPanel; // @synthesize ctrlSuggestPanel=_ctrlSuggestPanel;
- (void)suggestPanelDidEndContract:(id)arg1;
- (void)suggestPanelDidBeginContract:(id)arg1;
- (void)suggestPanelDidEndExpand:(id)arg1;
- (void)suggestPanelDidBeginExpand:(id)arg1;
- (void)alertHintViewOnClickTryAgainBtn;
- (void)completeQueryParams;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)completeLoadData;
- (void)onGetDataForQuickOrder:(id)arg1 fromCache:(_Bool)arg2;
- (void)onHttpRequestSuccess:(id)arg1 tag:(long long)arg2;
- (void)loadData;
- (void)topViewBackBtnClicked:(id)arg1;
- (void)onPopFromNavStack;
- (void)onHide;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)onShow;
- (void)onWillShow;
- (void)onParsePageParams:(id)arg1;
- (void)onClose;
- (void)onCleanData;
- (void)onCreate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

