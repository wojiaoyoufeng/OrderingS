//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TakeoutTypeData : NSObject
{
    NSString *_uuid;
    NSString *_name;
    NSString *_iconUrl;
}

@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)unitTest;
- (id)newDic;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

