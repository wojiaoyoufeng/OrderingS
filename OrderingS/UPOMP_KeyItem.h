//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UPOMP_KeyBoardView, UPOMP_Value;

@interface UPOMP_KeyItem : NSObject
{
    struct CGRect frame;
    NSString *value;
    NSString *otherValue;
    UPOMP_KeyBoardView *keyBoard;
    NSString *imageName;
    _Bool isSelect;
    UPOMP_Value *upompValue;
}

@property _Bool isSelect; // @synthesize isSelect;
@property(retain, nonatomic) NSString *otherValue; // @synthesize otherValue;
@property(retain, nonatomic) NSString *value; // @synthesize value;
- (void)draw;
- (id)initWithFrame:(struct CGRect)arg1 keyboard:(id)arg2 value:(id)arg3 imageName:(id)arg4 upompValue:(id)arg5;
- (void)dealloc;

@end
