//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIButton, UIImageView, UILabel;

@interface CSSpinner : UIControl
{
    UIButton *_plusButton;
    UIButton *_minusButton;
    UIImageView *_plusImage;
    UIImageView *_minusImage;
    UIImageView *_middleImage;
    int _direction;
    int _longTapLoopValue;
    UILabel *valueLabel;
    int stepValue;
    int maxValue;
    int minValue;
    int value;
}

@property(nonatomic) int minValue; // @synthesize minValue;
@property(nonatomic) int maxValue; // @synthesize maxValue;
@property(nonatomic) int stepValue; // @synthesize stepValue;
@property(readonly, retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel;
@property(readonly, nonatomic) int direction; // @synthesize direction=_direction;
@property(readonly, retain, nonatomic) UIImageView *middleImage; // @synthesize middleImage=_middleImage;
@property(readonly, retain, nonatomic) UIImageView *minusImage; // @synthesize minusImage=_minusImage;
@property(readonly, retain, nonatomic) UIImageView *plusImage; // @synthesize plusImage=_plusImage;
@property(readonly, retain, nonatomic) UIButton *minusButton; // @synthesize minusButton=_minusButton;
@property(readonly, retain, nonatomic) UIButton *plusButton; // @synthesize plusButton=_plusButton;
- (void)longTapLoop;
- (void)backgroundLongTapLoop;
- (void)didEndLongTap;
- (void)didBeginMinusLongTap;
- (void)didPressMinusButton;
- (void)didBeginPlusLongTap;
- (void)didPressPlusButton;
- (void)configureDefaultValue:(int)arg1 stepValue:(int)arg2 minValue:(int)arg3 maxValue:(int)arg4;
- (void)setFrame:(struct CGRect)arg1;
- (void)commonInit;
- (int)getValue;
- (void)setValue:(int)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end
