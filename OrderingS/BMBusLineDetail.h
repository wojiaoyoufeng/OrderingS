//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface BMBusLineDetail : NSObject
{
    _Bool _isMonTicket;
    int _maxPrice;
    NSString *_company;
    NSString *_linePath;
    NSString *_busLineName;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_busLineUid;
    NSMutableArray *_busStations;
}

@property(nonatomic) int maxPrice; // @synthesize maxPrice=_maxPrice;
@property(nonatomic) _Bool isMonTicket; // @synthesize isMonTicket=_isMonTicket;
@property(retain, nonatomic) NSMutableArray *busStations; // @synthesize busStations=_busStations;
@property(retain, nonatomic) NSString *busLineUid; // @synthesize busLineUid=_busLineUid;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *busLineName; // @synthesize busLineName=_busLineName;
@property(retain, nonatomic) NSString *linePath; // @synthesize linePath=_linePath;
@property(retain, nonatomic) NSString *company; // @synthesize company=_company;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

