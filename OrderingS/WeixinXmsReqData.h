//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDto.h"

@class NSString;

@interface WeixinXmsReqData : BaseDto
{
    unsigned int _timeStamp;
    NSString *_partnerId;
    NSString *_prepayId;
    NSString *_nonceStr;
    NSString *_packageValue;
    NSString *_sign;
}

@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSString *packageValue; // @synthesize packageValue=_packageValue;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr=_nonceStr;
@property(retain, nonatomic) NSString *prepayId; // @synthesize prepayId=_prepayId;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end
