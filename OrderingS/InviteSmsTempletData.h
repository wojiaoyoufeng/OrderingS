//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface InviteSmsTempletData : NSObject
{
    NSString *uuid;
    NSString *name;
    NSString *detail;
}

@property(retain, nonatomic) NSString *detail; // @synthesize detail;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
- (void)dealloc;
- (id)initWithUUID:(id)arg1 name:(id)arg2 detail:(id)arg3;
- (id)initWithObj:(id)arg1;

@end

