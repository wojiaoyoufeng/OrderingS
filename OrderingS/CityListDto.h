//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDto.h"

@class NSMutableArray;

@interface CityListDto : BaseDto
{
    NSMutableArray *list;
    NSMutableArray *showList;
    NSMutableArray *rawList;
    NSMutableArray *hotList;
    NSMutableArray *sectionList;
    NSMutableArray *sectionIndexList;
}

@property(retain, nonatomic) NSMutableArray *sectionIndexList; // @synthesize sectionIndexList;
@property(retain, nonatomic) NSMutableArray *sectionList; // @synthesize sectionList;
@property(retain, nonatomic) NSMutableArray *hotList; // @synthesize hotList;
@property(retain, nonatomic) NSMutableArray *rawList; // @synthesize rawList;
@property(retain, nonatomic) NSMutableArray *showList; // @synthesize showList;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list;
- (id)sectionListDataByCityData:(id)arg1;
- (void)cleanSectionList;
- (void)delEmptyInSectionList;
- (void)transToList:(id)arg1;
- (void)replaceListByJsonStr:(id)arg1;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

