//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TkLocationData : NSObject
{
    NSString *_name;
    NSString *_addr;
    NSString *_coord;
}

@property(retain, nonatomic) NSString *coord; // @synthesize coord=_coord;
@property(retain, nonatomic) NSString *addr; // @synthesize addr=_addr;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

