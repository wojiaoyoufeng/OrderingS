//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface TakeoutMenuPropertyTypeData : NSObject
{
    NSString *_uuid;
    NSString *_name;
    NSMutableArray *_list;
}

@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)unitTest;
- (id)newDataForOnlySelect;
- (id)newDic;
- (void)cleanSelect;
- (void)selectAtIndex:(int)arg1 selected:(_Bool)arg2;
- (id)newCommonSelectDataList;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

