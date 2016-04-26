//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseVc, NSObject<CSRRBtnsPanelDelegate>, RestRecomInfoData, UIButton;

@interface CSRRBtnsPanel : UIView
{
    BaseVc *_nrVc;
    NSObject<CSRRBtnsPanelDelegate> *_delegate;
    UIButton *_ctrlBtnRestDetail;
    UIButton *_ctrlBtnFavorite;
    UIButton *_ctrlBtnGoBooking;
    UIButton *_ctrlBtnGotoComment;
    RestRecomInfoData *_dto;
}

@property(retain, nonatomic) RestRecomInfoData *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) UIButton *ctrlBtnGotoComment; // @synthesize ctrlBtnGotoComment=_ctrlBtnGotoComment;
@property(retain, nonatomic) UIButton *ctrlBtnGoBooking; // @synthesize ctrlBtnGoBooking=_ctrlBtnGoBooking;
@property(retain, nonatomic) UIButton *ctrlBtnFavorite; // @synthesize ctrlBtnFavorite=_ctrlBtnFavorite;
@property(retain, nonatomic) UIButton *ctrlBtnRestDetail; // @synthesize ctrlBtnRestDetail=_ctrlBtnRestDetail;
@property NSObject<CSRRBtnsPanelDelegate> *delegate; // @synthesize delegate=_delegate;
@property BaseVc *nrVc; // @synthesize nrVc=_nrVc;
- (void)updateFavBtn:(_Bool)arg1;
- (void)btnClicked:(id)arg1;
- (void)reset;
- (void)refresh:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end
