//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface TakeoutMenuData2 : NSObject
{
    _Bool _favTag;
    int _bigPicWidth;
    int _bigPicHeight;
    NSString *_uuid;
    NSString *_picUrl;
    NSString *_bigPicUrl;
    NSString *_name;
    NSString *_pinyin;
    NSString *_pinyinCap;
    double _price;
    double _overallNum;
    NSString *_detail;
    NSMutableArray *_propertyTypeList;
}

@property(retain, nonatomic) NSMutableArray *propertyTypeList; // @synthesize propertyTypeList=_propertyTypeList;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) double overallNum; // @synthesize overallNum=_overallNum;
@property(nonatomic) double price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *pinyinCap; // @synthesize pinyinCap=_pinyinCap;
@property(retain, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int bigPicHeight; // @synthesize bigPicHeight=_bigPicHeight;
@property(nonatomic) int bigPicWidth; // @synthesize bigPicWidth=_bigPicWidth;
@property(retain, nonatomic) NSString *bigPicUrl; // @synthesize bigPicUrl=_bigPicUrl;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic) _Bool favTag; // @synthesize favTag=_favTag;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)unitTest;
- (double)priceWithProperty;
- (void)cleanPropertySelect;
- (id)newSelDataWithNum:(long long)arg1;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

