//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface XsAppVar : NSObject
{
    _Bool _isInAppTutorialTag;
    int _weixinWxTypeTag;
    int _weixinShareTypeTag;
    NSString *_deviceToken;
    NSString *_weixinShareUuid;
    NSMutableDictionary *_chatQuestionListDTO;
}

+ (id)i;
@property(retain, nonatomic) NSMutableDictionary *chatQuestionListDTO; // @synthesize chatQuestionListDTO=_chatQuestionListDTO;
@property(retain, nonatomic) NSString *weixinShareUuid; // @synthesize weixinShareUuid=_weixinShareUuid;
@property(nonatomic) int weixinShareTypeTag; // @synthesize weixinShareTypeTag=_weixinShareTypeTag;
@property(nonatomic) int weixinWxTypeTag; // @synthesize weixinWxTypeTag=_weixinWxTypeTag;
@property(retain, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(nonatomic) _Bool isInAppTutorialTag; // @synthesize isInAppTutorialTag=_isInAppTutorialTag;
- (void)dealloc;
- (id)init;

@end
