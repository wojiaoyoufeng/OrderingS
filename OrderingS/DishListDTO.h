//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CommonTypeDto, NSMutableArray;

@interface DishListDTO : NSObject
{
    NSMutableArray *list;
    CommonTypeDto *typeDTO;
}

@property(retain, nonatomic) CommonTypeDto *typeDTO; // @synthesize typeDTO;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list;
- (void)dummyData;
- (id)newOneWithEmptyList;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end
