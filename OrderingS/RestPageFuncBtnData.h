//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RestPageFuncBtnData : NSObject
{
    int _actionTypeTag;
    NSString *_iconUrl;
    NSString *_name;
    NSString *_actionXmsUrl;
    NSString *_tel;
}

@property(retain, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(retain, nonatomic) NSString *actionXmsUrl; // @synthesize actionXmsUrl=_actionXmsUrl;
@property(nonatomic) int actionTypeTag; // @synthesize actionTypeTag=_actionTypeTag;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end
