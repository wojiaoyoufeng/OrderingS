//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseOrderPayVc.h"

@class CouponPostTransData;

@interface XsPostCouponOrderVc : BaseOrderPayVc
{
    CouponPostTransData *_transData;
}

@property(retain, nonatomic) CouponPostTransData *transData; // @synthesize transData=_transData;
- (void)toCouponOrderStatePage;
- (void)processPostUseRemainMoneySucc;
- (void)onOnlinePayNeedOpenWapUrl:(id)arg1;
- (void)onOnlinePaySucc;
- (void)completeQueryParamsWithTag:(long long)arg1;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)handelOnlyUseRemainMoney;
- (void)onShow;
- (void)onWillShow;
- (void)onParsePageParams:(id)arg1;
- (void)onClose;
- (void)onCleanData;

@end

