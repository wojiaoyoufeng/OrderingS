//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, ShareInfoData;

@interface RestRecomInfoData : NSObject
{
    _Bool _favTag;
    _Bool _userIsVipTag;
    _Bool _likedTag;
    int _totalLikeNum;
    NSString *_uuid;
    ShareInfoData *_shareInfo;
    NSString *_title;
    NSString *_createTime;
    NSString *_restId;
    NSString *_restName;
    NSString *_userId;
    NSString *_userNickName;
    NSString *_userPicUrl;
    NSMutableArray *_picList;
    NSString *_tryRecomHint;
    NSMutableArray *_relateRecomList;
}

@property(retain, nonatomic) NSMutableArray *relateRecomList; // @synthesize relateRecomList=_relateRecomList;
@property(retain, nonatomic) NSString *tryRecomHint; // @synthesize tryRecomHint=_tryRecomHint;
@property(nonatomic) _Bool likedTag; // @synthesize likedTag=_likedTag;
@property(nonatomic) int totalLikeNum; // @synthesize totalLikeNum=_totalLikeNum;
@property(retain, nonatomic) NSMutableArray *picList; // @synthesize picList=_picList;
@property(nonatomic) _Bool userIsVipTag; // @synthesize userIsVipTag=_userIsVipTag;
@property(retain, nonatomic) NSString *userPicUrl; // @synthesize userPicUrl=_userPicUrl;
@property(retain, nonatomic) NSString *userNickName; // @synthesize userNickName=_userNickName;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *restName; // @synthesize restName=_restName;
@property(retain, nonatomic) NSString *restId; // @synthesize restId=_restId;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool favTag; // @synthesize favTag=_favTag;
@property(retain, nonatomic) ShareInfoData *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end
