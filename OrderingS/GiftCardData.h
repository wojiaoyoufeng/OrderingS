//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GiftCardData : NSObject
{
    NSString *uuid;
    NSString *name;
    double price;
}

@property(nonatomic) double price; // @synthesize price;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

