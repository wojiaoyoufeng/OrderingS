//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDto.h"

@class NSMutableArray;

@interface ErrorReportTypeListDTO : BaseDto
{
    int typeTag;
    NSMutableArray *list;
}

@property(retain, nonatomic) NSMutableArray *list; // @synthesize list;
@property(nonatomic) int typeTag; // @synthesize typeTag;
- (void)transToList:(id)arg1;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

