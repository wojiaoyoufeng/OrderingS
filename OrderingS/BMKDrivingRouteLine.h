//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMKRouteLine.h"

@class NSArray;

@interface BMKDrivingRouteLine : BMKRouteLine
{
    _Bool _isSupportTraffic;
    NSArray *_wayPoints;
}

@property(retain, nonatomic) NSArray *wayPoints; // @synthesize wayPoints=_wayPoints;
@property(nonatomic) _Bool isSupportTraffic; // @synthesize isSupportTraffic=_isSupportTraffic;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

