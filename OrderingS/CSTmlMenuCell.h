//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CSTmlBuyBtnDelegate.h"

@class BaseBizVc, CSRfStar, CSTmlBuyBtn, CSTmlBuyNum, CSUIImageView, NSObject<CSTmlMenuCellDelegate>, NSString, TakeoutMenuData2, UILabel;

@interface CSTmlMenuCell : UIView <CSTmlBuyBtnDelegate>
{
    NSObject<CSTmlMenuCellDelegate> *_delegate;
    BaseBizVc *_nrVc;
    UILabel *_ctrlNameLabel;
    CSUIImageView *_ctrlPic;
    UILabel *_ctrlPriceLabel;
    CSRfStar *_ctrlStar;
    CSTmlBuyBtn *_ctrlBuyBtn;
    CSTmlBuyNum *_ctrlBuyNum;
    TakeoutMenuData2 *_data;
}

+ (float)cellHeight;
@property(retain, nonatomic) TakeoutMenuData2 *data; // @synthesize data=_data;
@property(retain, nonatomic) CSTmlBuyNum *ctrlBuyNum; // @synthesize ctrlBuyNum=_ctrlBuyNum;
@property(retain, nonatomic) CSTmlBuyBtn *ctrlBuyBtn; // @synthesize ctrlBuyBtn=_ctrlBuyBtn;
@property(retain, nonatomic) CSRfStar *ctrlStar; // @synthesize ctrlStar=_ctrlStar;
@property(retain, nonatomic) UILabel *ctrlPriceLabel; // @synthesize ctrlPriceLabel=_ctrlPriceLabel;
@property(retain, nonatomic) CSUIImageView *ctrlPic; // @synthesize ctrlPic=_ctrlPic;
@property(retain, nonatomic) UILabel *ctrlNameLabel; // @synthesize ctrlNameLabel=_ctrlNameLabel;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSTmlMenuCellDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)onTmlBuyBtnClicked;
- (void)refreshWithData:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1 width:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

