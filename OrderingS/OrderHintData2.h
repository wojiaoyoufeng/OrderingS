//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OrderHintData2 : NSObject
{
    NSString *_orderId;
    NSString *_statusIconUrl;
    NSString *_statusName;
    NSString *_restId;
    NSString *_restName;
    NSString *_reserveInfo;
}

@property(retain, nonatomic) NSString *reserveInfo; // @synthesize reserveInfo=_reserveInfo;
@property(retain, nonatomic) NSString *restName; // @synthesize restName=_restName;
@property(retain, nonatomic) NSString *restId; // @synthesize restId=_restId;
@property(retain, nonatomic) NSString *statusName; // @synthesize statusName=_statusName;
@property(retain, nonatomic) NSString *statusIconUrl; // @synthesize statusIconUrl=_statusIconUrl;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

