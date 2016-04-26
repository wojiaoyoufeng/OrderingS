//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseLayoutSupportVc, NSMutableArray, NSObject<CSRdBottomPanelDelegate>, PageResInfoDto, UIButton;

@interface CSRdBottomPanel : UIView
{
    NSObject<CSRdBottomPanelDelegate> *_delegate;
    BaseLayoutSupportVc *_nrVc;
    UIView *_ctrlDetailPanel;
    UIView *_ctrlRecomPanel;
    UIButton *_ctrlDetailBtn;
    UIButton *_ctrlOrderBtn;
    NSMutableArray *_btnList;
    PageResInfoDto *_dto;
}

@property(retain, nonatomic) PageResInfoDto *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) NSMutableArray *btnList; // @synthesize btnList=_btnList;
@property(retain, nonatomic) UIButton *ctrlOrderBtn; // @synthesize ctrlOrderBtn=_ctrlOrderBtn;
@property(retain, nonatomic) UIButton *ctrlDetailBtn; // @synthesize ctrlDetailBtn=_ctrlDetailBtn;
@property(retain, nonatomic) UIView *ctrlRecomPanel; // @synthesize ctrlRecomPanel=_ctrlRecomPanel;
@property(retain, nonatomic) UIView *ctrlDetailPanel; // @synthesize ctrlDetailPanel=_ctrlDetailPanel;
@property BaseLayoutSupportVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSRdBottomPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)newBtnWithTitle:(id)arg1;
- (void)orderBtnClicked;
- (void)detailBtnClicked;
- (void)btnClicked:(id)arg1;
- (void)showForRecom:(_Bool)arg1;
- (void)refreshPanel:(id)arg1 typeTag:(int)arg2;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end
