//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseVc, CSHtmLabel, RestRecomInfoData;

@interface CSRRDescriptionPanel : UIView
{
    _Bool _isHidingTag;
    BaseVc *_nrVc;
    UIView *_ctrlGrayBg;
    CSHtmLabel *_ctrlTitleLabel;
    RestRecomInfoData *_dto;
}

@property(retain, nonatomic) RestRecomInfoData *dto; // @synthesize dto=_dto;
@property(nonatomic) _Bool isHidingTag; // @synthesize isHidingTag=_isHidingTag;
@property(retain, nonatomic) CSHtmLabel *ctrlTitleLabel; // @synthesize ctrlTitleLabel=_ctrlTitleLabel;
@property(retain, nonatomic) UIView *ctrlGrayBg; // @synthesize ctrlGrayBg=_ctrlGrayBg;
@property BaseVc *nrVc; // @synthesize nrVc=_nrVc;
- (void)reset;
- (void)refresh:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end

