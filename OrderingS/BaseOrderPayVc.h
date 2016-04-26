//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSectionListVc.h"

#import "CSOnlinePayDelegate.h"

@class CSOnlinePay, CommonPostPayResultData, NSMutableArray, NSString;

@interface BaseOrderPayVc : BaseSectionListVc <CSOnlinePayDelegate>
{
    int _payTypeTag;
    CSOnlinePay *_ctrlOnlinePay;
    NSMutableArray *_payTypeList;
    CommonPostPayResultData *_resultData;
    NSString *_postOrderQueryName;
    NSString *_orderId;
}

@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NSString *postOrderQueryName; // @synthesize postOrderQueryName=_postOrderQueryName;
@property(retain, nonatomic) CommonPostPayResultData *resultData; // @synthesize resultData=_resultData;
@property(nonatomic) int payTypeTag; // @synthesize payTypeTag=_payTypeTag;
@property(retain, nonatomic) NSMutableArray *payTypeList; // @synthesize payTypeList=_payTypeList;
@property(retain, nonatomic) CSOnlinePay *ctrlOnlinePay; // @synthesize ctrlOnlinePay=_ctrlOnlinePay;
- (void)processPostUseRemainMoneySucc;
- (void)payResult:(int)arg1 selfController:(id)arg2;
- (void)onOnlinePayNeedOpenWapUrl:(id)arg1;
- (void)onOnlinePaySucc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)completeQueryParamsWithTag:(long long)arg1;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)completePostData;
- (void)completeLoadData;
- (void)onHttpRequestSuccess:(id)arg1 tag:(long long)arg2;
- (void)postData;
- (void)loadDataForGetTakeoutPayTypeList;
- (void)topViewBackBtnClicked:(id)arg1;
- (void)_onCloseBegin;
- (void)_onCleanDataBegin;
- (void)_onCreateBegin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

