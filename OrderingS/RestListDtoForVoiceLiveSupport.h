//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RestListDtoForVoice.h"

@class NSString;

@interface RestListDtoForVoiceLiveSupport : RestListDtoForVoice
{
    _Bool _isIntrusive;
    _Bool _hasPrompted;
    int _liveSupportInterval;
    NSString *_suggestionReason;
}

@property(nonatomic) _Bool hasPrompted; // @synthesize hasPrompted=_hasPrompted;
@property(nonatomic) _Bool isIntrusive; // @synthesize isIntrusive=_isIntrusive;
@property(retain, nonatomic) NSString *suggestionReason; // @synthesize suggestionReason=_suggestionReason;
@property(nonatomic) int liveSupportInterval; // @synthesize liveSupportInterval=_liveSupportInterval;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

