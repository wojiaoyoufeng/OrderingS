//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface CSMarqueeLabel : UIView
{
    UILabel *_ctrlLabel1;
    UILabel *_ctrlLabel2;
}

@property(retain, nonatomic) UILabel *ctrlLabel2; // @synthesize ctrlLabel2=_ctrlLabel2;
@property(retain, nonatomic) UILabel *ctrlLabel1; // @synthesize ctrlLabel1=_ctrlLabel1;
- (void)stopMarquee;
- (void)marquee;
- (void)setText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
