//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RoomState;

@interface RealTimeTableRestData : NSObject
{
    NSString *restId;
    NSString *restName;
    NSString *picUrl;
    NSString *avgPrice;
    NSString *likePct;
    NSString *distanceMeter;
    NSString *discount;
    RoomState *roomState;
}

@property(retain, nonatomic) RoomState *roomState; // @synthesize roomState;
@property(retain, nonatomic) NSString *discount; // @synthesize discount;
@property(retain, nonatomic) NSString *distanceMeter; // @synthesize distanceMeter;
@property(retain, nonatomic) NSString *likePct; // @synthesize likePct;
@property(retain, nonatomic) NSString *avgPrice; // @synthesize avgPrice;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl;
@property(retain, nonatomic) NSString *restName; // @synthesize restName;
@property(retain, nonatomic) NSString *restId; // @synthesize restId;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

