//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSingleListView.h"

#import "CSMainTpCityPanelDelegate.h"
#import "CSMainTpKwPanelDelegate.h"
#import "CSXsMainTopBtnDelegate.h"

@class CSMainTpKwPanel, CSXsMainTopBtn, CommonTypeListDto, NSObject<CSXsMainTopPanelDelegate>, NSString, UIView;

@interface CSXsMainTopPanel : BaseSingleListView <CSXsMainTopBtnDelegate, CSMainTpKwPanelDelegate, CSMainTpCityPanelDelegate>
{
    _Bool _fromCacheTag;
    NSObject<CSXsMainTopPanelDelegate> *_delegate;
    CSXsMainTopBtn *_ctrlTpBtn;
    CSMainTpKwPanel *_ctrlKw;
    UIView *_ctrlYyPanel;
    CommonTypeListDto *_dto;
    NSString *_keywords;
    long long _styleTag;
}

@property(nonatomic) long long styleTag; // @synthesize styleTag=_styleTag;
@property(nonatomic) _Bool fromCacheTag; // @synthesize fromCacheTag=_fromCacheTag;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) CommonTypeListDto *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) UIView *ctrlYyPanel; // @synthesize ctrlYyPanel=_ctrlYyPanel;
@property(retain, nonatomic) CSMainTpKwPanel *ctrlKw; // @synthesize ctrlKw=_ctrlKw;
@property(retain, nonatomic) CSXsMainTopBtn *ctrlTpBtn; // @synthesize ctrlTpBtn=_ctrlTpBtn;
@property NSObject<CSXsMainTopPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)hideKeyboard;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)clearCache;
- (void)toRestListPage:(id)arg1;
- (void)stopQueryTimer;
- (id)newMemCacheKey;
- (void)onMainTpKwPanelBeginYy;
- (void)onMainTpKwPanelCancel;
- (void)onMainTpKwPanelNeedQuery;
- (void)handleQueryTimer;
- (void)onMainTpKwPanelKwChanged;
- (void)onMainTpKwPanelBeginEdit;
- (void)onXsMainTopBtnQueryBtnClicked;
- (void)yyBtnClick;
- (void)keyboardChangeFrame:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)heightForRowAtIndexPath:(id)arg1;
- (void)makeCell:(id)arg1 indexPath:(id)arg2;
- (void)createCell:(id)arg1;
- (void)completeQueryParams;
- (void)processWhenRequestErrorEnd;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)completeLoadData;
- (void)onGetData:(id)arg1 fromMemCache:(_Bool)arg2;
- (void)onHttpRequestSuccess:(id)arg1;
- (void)loadData;
- (void)loadDataFromCache;
- (void)openForRestListPageWithKw:(id)arg1 needYy:(_Bool)arg2;
- (void)refresh;
- (void)openCityPage;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
