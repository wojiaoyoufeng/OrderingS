//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CashCouponPostResultData : NSObject
{
    NSString *unionPayXml;
    NSString *aliPayInfo;
    NSString *wapAliPayUrl;
    NSString *wapAliPayCreditCardUrl;
    NSString *weixinInfo;
    _Bool chkPassTag;
    NSString *errorHint;
    NSString *cashCouponOrderId;
}

@property(retain, nonatomic) NSString *cashCouponOrderId; // @synthesize cashCouponOrderId;
@property(retain, nonatomic) NSString *errorHint; // @synthesize errorHint;
@property(nonatomic) _Bool chkPassTag; // @synthesize chkPassTag;
@property(retain, nonatomic) NSString *weixinInfo; // @synthesize weixinInfo;
@property(retain, nonatomic) NSString *wapAliPayCreditCardUrl; // @synthesize wapAliPayCreditCardUrl;
@property(retain, nonatomic) NSString *wapAliPayUrl; // @synthesize wapAliPayUrl;
@property(retain, nonatomic) NSString *aliPayInfo; // @synthesize aliPayInfo;
@property(retain, nonatomic) NSString *unionPayXml; // @synthesize unionPayXml;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

