//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PickSelData : NSObject
{
    _Bool _haveTag;
    int _index;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) _Bool haveTag; // @synthesize haveTag=_haveTag;
- (void)dealloc;
- (id)init;

@end

