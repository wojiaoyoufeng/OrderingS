//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ChatMsgSelectTime : NSObject
{
    NSString *title;
    NSString *selectTime;
}

@property(retain, nonatomic) NSString *selectTime; // @synthesize selectTime;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void)dealloc;
- (id)postJsonString;
- (id)jsonString;
- (id)localText;
- (id)text:(_Bool)arg1;
- (id)initWithObj:(id)arg1;

@end
