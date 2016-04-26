//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, NSObject<CSTmlTypeCellDelegate>, UIImageView, UILabel;

@interface CSTmlTypeCell : UIView
{
    NSObject<CSTmlTypeCellDelegate> *_delegate;
    BaseBizVc *_nrVc;
    UIView *_ctrlBg;
    UIView *_ctrlHotLine;
    UIImageView *_ctrlIcon;
    UILabel *_ctrlTitleLabel;
}

+ (float)cellHeight;
+ (float)cellWidth;
@property(retain, nonatomic) UILabel *ctrlTitleLabel; // @synthesize ctrlTitleLabel=_ctrlTitleLabel;
@property(retain, nonatomic) UIImageView *ctrlIcon; // @synthesize ctrlIcon=_ctrlIcon;
@property(retain, nonatomic) UIView *ctrlHotLine; // @synthesize ctrlHotLine=_ctrlHotLine;
@property(retain, nonatomic) UIView *ctrlBg; // @synthesize ctrlBg=_ctrlBg;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSTmlTypeCellDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)btnClicked;
- (void)changeHot:(_Bool)arg1;
- (void)layoutWithShowIcon:(_Bool)arg1 forSearch:(_Bool)arg2;
- (void)refreshWithData:(id)arg1 hlTag:(_Bool)arg2;
- (void)dealloc;
- (id)initWithVc:(id)arg1 forSearch:(_Bool)arg2;

@end

