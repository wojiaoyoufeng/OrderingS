//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDto.h"

@class NSString;

@interface OrderHintPackData : BaseDto
{
    _Bool _haveOrderHintTag;
    NSString *_orderId;
}

@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) _Bool haveOrderHintTag; // @synthesize haveOrderHintTag=_haveOrderHintTag;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

