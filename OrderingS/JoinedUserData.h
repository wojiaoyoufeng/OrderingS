//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JoinedUserData : NSObject
{
    NSString *_uuid;
    NSString *_userId;
    NSString *_picUrl;
}

@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

