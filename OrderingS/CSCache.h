//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase, NSMutableArray, NSMutableDictionary, UIImage;

@interface CSCache : NSObject
{
    FMDatabase *db;
    NSMutableDictionary *imgCacheDic;
    NSMutableArray *imgCacheKeyList;
    NSMutableDictionary *valueCacheDic;
    NSMutableArray *valueCacheKeyList;
    UIImage *imgForNoSecondCache;
}

+ (id)instance;
@property(retain, nonatomic) UIImage *imgForNoSecondCache; // @synthesize imgForNoSecondCache;
@property(retain, nonatomic) NSMutableArray *valueCacheKeyList; // @synthesize valueCacheKeyList;
@property(retain, nonatomic) NSMutableDictionary *valueCacheDic; // @synthesize valueCacheDic;
@property(retain, nonatomic) NSMutableArray *imgCacheKeyList; // @synthesize imgCacheKeyList;
@property(retain, nonatomic) NSMutableDictionary *imgCacheDic; // @synthesize imgCacheDic;
@property(retain, nonatomic) FMDatabase *db; // @synthesize db;
- (void)adjustCacheFields:(id)arg1;
- (void)removeCacheFieldsFromValueDic:(id)arg1;
- (void)saveCacheFieldsToValueDic:(id)arg1 dicKey:(id)arg2;
- (id)fileNameByUrl:(id)arg1;
- (id)imagePathWithDir:(id)arg1 url:(id)arg2;
- (void)saveImgToImgDic:(id)arg1 dicKey:(id)arg2;
- (id)makeSecondDicKey:(id)arg1 key:(id)arg2;
- (id)cleanStr:(id)arg1;
- (id)readImageWithDir:(id)arg1 url:(id)arg2 useSecondCache:(_Bool)arg3;
- (id)readImageWithDir:(id)arg1 url:(id)arg2;
- (_Bool)chkExistImageWithDir:(id)arg1 url:(id)arg2;
- (_Bool)storeImageWithDir:(id)arg1 maxFileNum:(int)arg2 url:(id)arg3 data:(id)arg4 useSecondCache:(_Bool)arg5;
- (_Bool)storeImageWithDir:(id)arg1 maxFileNum:(int)arg2 url:(id)arg3 data:(id)arg4;
- (id)readDicFiledsWithDir:(id)arg1 key:(id)arg2;
- (void)removeWithDir:(id)arg1 key:(id)arg2;
- (void)updateSaveTimeWithDir:(id)arg1 key:(id)arg2 expireMinute:(int)arg3;
- (void)updateExpireMinute:(int)arg1 dir:(id)arg2 key:(id)arg3;
- (void)updateSaveTimeWithDir:(id)arg1 key:(id)arg2;
- (void)storeWithDir:(id)arg1 key:(id)arg2 value:(id)arg3 updateStamp:(id)arg4 expireMinute:(int)arg5;
- (void)storeWithDir:(id)arg1 key:(id)arg2 dic:(id)arg3 updateStamp:(id)arg4 expireMinute:(int)arg5;
- (void)storeWithDir:(id)arg1 key:(id)arg2 list:(id)arg3 updateStamp:(id)arg4 expireMinute:(int)arg5;
- (void)storeWithDir:(id)arg1 key:(id)arg2 dic:(id)arg3 expireMinute:(int)arg4;
- (void)storeWithDir:(id)arg1 key:(id)arg2 dic:(id)arg3 updateStamp:(id)arg4;
- (void)storeWithDir:(id)arg1 key:(id)arg2 dic:(id)arg3;
- (void)storeWithDir:(id)arg1 key:(id)arg2 list:(id)arg3 updateStamp:(id)arg4;
- (void)storeWithDir:(id)arg1 key:(id)arg2 list:(id)arg3 expireMinute:(int)arg4;
- (void)storeWithDir:(id)arg1 key:(id)arg2 list:(id)arg3;
- (void)storeWithDir:(id)arg1 key:(id)arg2 value:(id)arg3 expireMinute:(int)arg4;
- (void)storeWithDir:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)cleanAllCache;

@end

