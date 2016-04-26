//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, CSUIImageView, NSObject<CSRestRrCellDelegate>, UILabel;

@interface CSRestRrCell : UIView
{
    NSObject<CSRestRrCellDelegate> *_delegate;
    BaseBizVc *_nrVc;
    CSUIImageView *_ctrlImg;
    UILabel *_ctrlTitle;
    UILabel *_ctrlUserName;
    UILabel *_ctrlDetail;
}

+ (int)panelHeight;
@property(retain, nonatomic) UILabel *ctrlDetail; // @synthesize ctrlDetail=_ctrlDetail;
@property(retain, nonatomic) UILabel *ctrlUserName; // @synthesize ctrlUserName=_ctrlUserName;
@property(retain, nonatomic) UILabel *ctrlTitle; // @synthesize ctrlTitle=_ctrlTitle;
@property(retain, nonatomic) CSUIImageView *ctrlImg; // @synthesize ctrlImg=_ctrlImg;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSRestRrCellDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)refreshWithData:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1 forRestDetail:(_Bool)arg2;

@end

