//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface UserActionData : NSObject
{
    NSString *_picUrl;
    NSString *_bigPicUrl;
    NSString *_name;
    NSMutableArray *_list;
}

@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *bigPicUrl; // @synthesize bigPicUrl=_bigPicUrl;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end
