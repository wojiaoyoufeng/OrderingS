//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseVc, UIImageView, UILabel;

@interface CSPickTbCell : UIView
{
    _Bool _leftTag;
    BaseVc *_nrVc;
    UIImageView *_ctrlBg;
    UILabel *_ctrlLabel;
    UIImageView *_ctrArrow;
}

+ (int)cellHeight;
@property(nonatomic) _Bool leftTag; // @synthesize leftTag=_leftTag;
@property(retain, nonatomic) UIImageView *ctrArrow; // @synthesize ctrArrow=_ctrArrow;
@property(retain, nonatomic) UILabel *ctrlLabel; // @synthesize ctrlLabel=_ctrlLabel;
@property(retain, nonatomic) UIImageView *ctrlBg; // @synthesize ctrlBg=_ctrlBg;
@property BaseVc *nrVc; // @synthesize nrVc=_nrVc;
- (void)showWithTitle:(id)arg1 canSelect:(_Bool)arg2 cellWidth:(int)arg3 hot:(_Bool)arg4 haveArrow:(_Bool)arg5;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1 forLeftTb:(_Bool)arg2;

@end

