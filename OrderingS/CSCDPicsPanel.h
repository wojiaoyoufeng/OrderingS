//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, CSUIImageView, CouponInfoData, NSObject<CSCDPicsPanelDelegate>, UIImageView, UILabel;

@interface CSCDPicsPanel : UIView
{
    NSObject<CSCDPicsPanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    CSUIImageView *_ctrlMealImage;
    UIImageView *_ctrlStatus;
    UILabel *_ctrlStatusLabel;
    CouponInfoData *_dto;
}

+ (float)panelHeight;
@property(retain, nonatomic) CouponInfoData *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) UILabel *ctrlStatusLabel; // @synthesize ctrlStatusLabel=_ctrlStatusLabel;
@property(retain, nonatomic) UIImageView *ctrlStatus; // @synthesize ctrlStatus=_ctrlStatus;
@property(retain, nonatomic) CSUIImageView *ctrlMealImage; // @synthesize ctrlMealImage=_ctrlMealImage;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSCDPicsPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)btnClick:(id)arg1;
- (void)reset;
- (void)refreshPanel:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end
