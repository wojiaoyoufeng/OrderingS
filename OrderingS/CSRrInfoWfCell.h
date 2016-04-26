//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CSUIButton, CSUIImageView, NSObject<CSRrInfoWfCellDelegate>, RestRecomPicData, UIImageView, UILabel;

@interface CSRrInfoWfCell : UIView
{
    int _idx;
    NSObject<CSRrInfoWfCellDelegate> *_delegate;
    UIImageView *_ctrlBg;
    CSUIImageView *_ctrlImg;
    UIView *_ctrlLabelBg;
    UILabel *_ctrlLabel;
    CSUIButton *_ctrlBtn;
    RestRecomPicData *_data;
}

@property(nonatomic) int idx; // @synthesize idx=_idx;
@property(retain, nonatomic) RestRecomPicData *data; // @synthesize data=_data;
@property(retain, nonatomic) CSUIButton *ctrlBtn; // @synthesize ctrlBtn=_ctrlBtn;
@property(retain, nonatomic) UILabel *ctrlLabel; // @synthesize ctrlLabel=_ctrlLabel;
@property(retain, nonatomic) UIView *ctrlLabelBg; // @synthesize ctrlLabelBg=_ctrlLabelBg;
@property(retain, nonatomic) CSUIImageView *ctrlImg; // @synthesize ctrlImg=_ctrlImg;
@property(retain, nonatomic) UIImageView *ctrlBg; // @synthesize ctrlBg=_ctrlBg;
@property NSObject<CSRrInfoWfCellDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)btnClicked;
- (void)layoutPanel;
- (void)refresh:(id)arg1 index:(int)arg2;
- (void)reset;
- (void)dealloc;
- (id)initWithDefault;

@end

