//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSingleListVc.h"

#import "CSDropRefreshPanelDelegate.h"
#import "CSPickBtnDelegate.h"
#import "CSXsTryLocDelegate.h"
#import "CurrentLocationPanelDelegate.h"

@class CSCurrentLocationPanel, CSDropRefreshPanel, CSPicAdvPanel, CSPickBtn, CSXsTryLoc, CashCouponList2DTO, NSString;

@interface XsCashCouponListVc : BaseSingleListVc <CSXsTryLocDelegate, CSPickBtnDelegate, CurrentLocationPanelDelegate, CSDropRefreshPanelDelegate>
{
    CSPickBtn *_ctrlLeftBtn;
    CSPickBtn *_ctrlMiddleBtn;
    CSPickBtn *_ctrlRightBtn;
    CSDropRefreshPanel *_ctrlDropRp;
    CSCurrentLocationPanel *_ctrlLocationPanel;
    CSXsTryLoc *_ctrlTryLoc;
    CSPicAdvPanel *_ctrlAdvPanel;
    CashCouponList2DTO *_dto;
    NSString *_distanceMeter;
    NSString *_regionId;
    NSString *_menuId;
    NSString *_sortTypeTag;
    NSString *_lastChannelCityId;
}

@property(retain, nonatomic) NSString *lastChannelCityId; // @synthesize lastChannelCityId=_lastChannelCityId;
@property(retain, nonatomic) NSString *sortTypeTag; // @synthesize sortTypeTag=_sortTypeTag;
@property(retain, nonatomic) NSString *menuId; // @synthesize menuId=_menuId;
@property(retain, nonatomic) NSString *regionId; // @synthesize regionId=_regionId;
@property(retain, nonatomic) NSString *distanceMeter; // @synthesize distanceMeter=_distanceMeter;
@property(retain, nonatomic) CashCouponList2DTO *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) CSPicAdvPanel *ctrlAdvPanel; // @synthesize ctrlAdvPanel=_ctrlAdvPanel;
@property(retain, nonatomic) CSXsTryLoc *ctrlTryLoc; // @synthesize ctrlTryLoc=_ctrlTryLoc;
@property(retain, nonatomic) CSCurrentLocationPanel *ctrlLocationPanel; // @synthesize ctrlLocationPanel=_ctrlLocationPanel;
@property(retain, nonatomic) CSDropRefreshPanel *ctrlDropRp; // @synthesize ctrlDropRp=_ctrlDropRp;
@property(retain, nonatomic) CSPickBtn *ctrlRightBtn; // @synthesize ctrlRightBtn=_ctrlRightBtn;
@property(retain, nonatomic) CSPickBtn *ctrlMiddleBtn; // @synthesize ctrlMiddleBtn=_ctrlMiddleBtn;
@property(retain, nonatomic) CSPickBtn *ctrlLeftBtn; // @synthesize ctrlLeftBtn=_ctrlLeftBtn;
- (void)refreshWithForWillShow:(_Bool)arg1 needTabelToTop:(_Bool)arg2;
- (void)alertHintViewOnClickTryAgainBtn;
- (void)makeComboBox;
- (void)onXsTryLocSuccessWithTag:(int)arg1;
- (void)currentLocationPanelNeedReloadList;
- (void)pickBtn:(id)arg1 leftSelectRow:(long long)arg2 leftSelectId:(id)arg3 leftSelectName:(id)arg4 rightSelectRow:(long long)arg5 rightSelectId:(id)arg6 rightSelectName:(id)arg7;
- (void)pickBtnBeforeShowPicker:(id)arg1;
- (void)onDropRefreshPanelShowLoading:(id)arg1;
- (void)onTableViewEndDragging;
- (void)onTableViewDidScroll;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 indexPath:(id)arg2;
- (void)createCell:(id)arg1;
- (void)completeQueryParams;
- (void)processWhenRequestErrorEnd;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2 tag:(long long)arg3;
- (void)completeLoadData;
- (void)onHttpRequestSuccess:(id)arg1 tag:(long long)arg2;
- (void)loadData;
- (void)topViewBackBtnClicked:(id)arg1;
- (void)onPopFromNavStack;
- (void)onHide;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)onChannelTabFocus;
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

