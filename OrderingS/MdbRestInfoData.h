//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, ShareInfoData;

@interface MdbRestInfoData : NSObject
{
    _Bool _favTag;
    int _totalSpecialFoodNum;
    NSString *_uuid;
    NSString *_restName;
    NSMutableArray *_picList;
    NSString *_orderBtnName;
    NSString *_freeNotice;
    NSString *_freeNoticeWapUrl;
    NSString *_hintTitle;
    NSString *_hintDetail;
    NSMutableArray *_specialFoodList;
    double _longitude;
    double _latitude;
    NSString *_address;
    NSMutableArray *_telList;
    NSString *_restDetail;
    ShareInfoData *_shareInfo;
}

@property(retain, nonatomic) ShareInfoData *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) NSString *restDetail; // @synthesize restDetail=_restDetail;
@property(retain, nonatomic) NSMutableArray *telList; // @synthesize telList=_telList;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSMutableArray *specialFoodList; // @synthesize specialFoodList=_specialFoodList;
@property(nonatomic) int totalSpecialFoodNum; // @synthesize totalSpecialFoodNum=_totalSpecialFoodNum;
@property(retain, nonatomic) NSString *hintDetail; // @synthesize hintDetail=_hintDetail;
@property(retain, nonatomic) NSString *hintTitle; // @synthesize hintTitle=_hintTitle;
@property(retain, nonatomic) NSString *freeNoticeWapUrl; // @synthesize freeNoticeWapUrl=_freeNoticeWapUrl;
@property(retain, nonatomic) NSString *freeNotice; // @synthesize freeNotice=_freeNotice;
@property(retain, nonatomic) NSString *orderBtnName; // @synthesize orderBtnName=_orderBtnName;
@property(retain, nonatomic) NSMutableArray *picList; // @synthesize picList=_picList;
@property(nonatomic) _Bool favTag; // @synthesize favTag=_favTag;
@property(retain, nonatomic) NSString *restName; // @synthesize restName=_restName;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end
