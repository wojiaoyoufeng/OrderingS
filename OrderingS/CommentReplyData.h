//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CommentReplyData : NSObject
{
    NSString *uuid;
    NSString *userName;
    NSString *userSmallPicUrl;
    NSString *userPicUrl;
    double createTime;
    NSString *detail;
}

@property(retain, nonatomic) NSString *detail; // @synthesize detail;
@property(nonatomic) double createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *userPicUrl; // @synthesize userPicUrl;
@property(retain, nonatomic) NSString *userSmallPicUrl; // @synthesize userSmallPicUrl;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

