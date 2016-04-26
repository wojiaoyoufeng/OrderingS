//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface CouponPostTransData : NSObject
{
    NSString *_uuid;
    long long _buyNum;
    NSString *_userTel;
    double _usedRemainMoney;
    long long _usedPointNum;
    double _actualPay;
    NSString *_cardId;
    NSString *_receiverName;
    NSString *_receiverTel;
    NSString *_receiverAddress;
    NSString *_receiverMemo;
    NSMutableArray *_payTypeList;
    NSString *_rePageKey;
}

@property(retain, nonatomic) NSString *rePageKey; // @synthesize rePageKey=_rePageKey;
@property(retain, nonatomic) NSMutableArray *payTypeList; // @synthesize payTypeList=_payTypeList;
@property(retain, nonatomic) NSString *receiverMemo; // @synthesize receiverMemo=_receiverMemo;
@property(retain, nonatomic) NSString *receiverAddress; // @synthesize receiverAddress=_receiverAddress;
@property(retain, nonatomic) NSString *receiverTel; // @synthesize receiverTel=_receiverTel;
@property(retain, nonatomic) NSString *receiverName; // @synthesize receiverName=_receiverName;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(nonatomic) double actualPay; // @synthesize actualPay=_actualPay;
@property(nonatomic) long long usedPointNum; // @synthesize usedPointNum=_usedPointNum;
@property(nonatomic) double usedRemainMoney; // @synthesize usedRemainMoney=_usedRemainMoney;
@property(retain, nonatomic) NSString *userTel; // @synthesize userTel=_userTel;
@property(nonatomic) long long buyNum; // @synthesize buyNum=_buyNum;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)dealloc;
- (id)init;

@end

