//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class CSUIButton, CashCouponData, NSTimer, UILabel;

@interface CSCouponBottomView : UIImageView
{
    id <CSCouponBottomViewDelegate> _delegate;
    CSUIButton *_ctrlBuy;
    UILabel *_ctrlInfo;
    CashCouponData *_dto;
    NSTimer *_flushTimer;
}

@property(retain, nonatomic) NSTimer *flushTimer; // @synthesize flushTimer=_flushTimer;
@property(retain, nonatomic) CashCouponData *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) UILabel *ctrlInfo; // @synthesize ctrlInfo=_ctrlInfo;
@property(retain, nonatomic) CSUIButton *ctrlBuy; // @synthesize ctrlBuy=_ctrlBuy;
@property id <CSCouponBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)flushLabel:(id)arg1;
- (void)btnClick_Buy:(id)arg1;
- (void)setBuyButtonEnabled:(_Bool)arg1 withTitle:(id)arg2;
- (void)setCanCutdown;
- (void)setCannotCutdown:(id)arg1;
- (void)dealloc;
- (void)setData:(id)arg1;
- (id)init;

@end

