//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSTDBasePanel.h"

@class CSHtmLabel, CSRfStar, CSTkColorLabel, CSUIImageView, NSObject<CSTDTopPanelDelegate>, UIButton, UIImageView, UILabel;

@interface CSTDTopPanel : CSTDBasePanel
{
    NSObject<CSTDTopPanelDelegate> *_delegate;
    CSUIImageView *_ctrlImg;
    UIImageView *_ctrlBg;
    UILabel *_ctrlTitleLabel;
    CSRfStar *_ctrlStar;
    CSTkColorLabel *_ctrlState;
    CSHtmLabel *_ctrlHtmLabel;
    UIButton *_ctrlBtn;
}

@property(retain, nonatomic) UIButton *ctrlBtn; // @synthesize ctrlBtn=_ctrlBtn;
@property(retain, nonatomic) CSHtmLabel *ctrlHtmLabel; // @synthesize ctrlHtmLabel=_ctrlHtmLabel;
@property(retain, nonatomic) CSTkColorLabel *ctrlState; // @synthesize ctrlState=_ctrlState;
@property(retain, nonatomic) CSRfStar *ctrlStar; // @synthesize ctrlStar=_ctrlStar;
@property(retain, nonatomic) UILabel *ctrlTitleLabel; // @synthesize ctrlTitleLabel=_ctrlTitleLabel;
@property(retain, nonatomic) UIImageView *ctrlBg; // @synthesize ctrlBg=_ctrlBg;
@property(retain, nonatomic) CSUIImageView *ctrlImg; // @synthesize ctrlImg=_ctrlImg;
@property NSObject<CSTDTopPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)btnClicked;
- (void)doRefreshPanel;
- (void)doDealloc;
- (void)doIni;

@end

