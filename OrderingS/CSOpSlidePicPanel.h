//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, NSObject<CSOpSlidePicPanelDelegate>, UIScrollView;

@interface CSOpSlidePicPanel : UIView
{
    NSObject<CSOpSlidePicPanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    UIScrollView *_ctrlSv;
}

@property(retain, nonatomic) UIScrollView *ctrlSv; // @synthesize ctrlSv=_ctrlSv;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSOpSlidePicPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)btnClick:(id)arg1;
- (id)newImageBtn:(id)arg1;
- (void)refreshWithPicList:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end
