//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDetailVc.h"

#import "CSUIImageViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, RestPicListDto, UIScrollView;

@interface RestImageDetailVc : BaseDetailVc <UIScrollViewDelegate, CSUIImageViewDelegate>
{
    UIScrollView *ctrlScrollView;
    RestPicListDto *dto;
    NSString *selectId;
    int currentPageNum;
    _Bool verticalTag;
}

@property(nonatomic) _Bool verticalTag; // @synthesize verticalTag;
@property(nonatomic) int currentPageNum; // @synthesize currentPageNum;
@property(retain, nonatomic) NSString *selectId; // @synthesize selectId;
@property(retain, nonatomic) RestPicListDto *dto; // @synthesize dto;
@property(retain, nonatomic) UIScrollView *ctrlScrollView; // @synthesize ctrlScrollView;
- (void)cleanAll;
- (int)nowHeight;
- (int)nowWidth;
- (void)adjustPicture:(_Bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)imageView:(id)arg1 downloadComplete:(id)arg2;
- (void)download:(int)arg1;
- (void)showCurrentPhoto;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)topViewBackBtnClicked:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)loadPhoto:(_Bool)arg1;
- (void)onPopFromNavStack;
- (void)onHide;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)onShow;
- (void)onWillShow;
- (void)onParsePageParams:(id)arg1;
- (void)onClose;
- (void)onCleanData;
- (void)onCreate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

