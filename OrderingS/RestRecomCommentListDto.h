//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDto.h"

@class NSMutableArray;

@interface RestRecomCommentListDto : BaseDto
{
    NSMutableArray *_list;
}

@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
- (void)unitTest;
- (void)appendData:(id)arg1;
- (void)appendDataWithStr:(id)arg1;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

