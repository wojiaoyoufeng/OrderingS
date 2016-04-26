//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class BaseBizVc, CSPageControl, NSMutableArray, NSObject<CSZyMainAdvPanelDelegate>, NSString, NSTimer, UIScrollView;

@interface CSZyMainAdvPanel : UIView <UIScrollViewDelegate>
{
    NSObject<CSZyMainAdvPanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    UIScrollView *_ctrlScrollView;
    CSPageControl *_ctrlPageControl;
    NSTimer *_ctrlAutoScrollTimer;
    NSMutableArray *_adList;
    long long _curIdx;
}

+ (int)panelHeight;
@property(nonatomic) long long curIdx; // @synthesize curIdx=_curIdx;
@property(retain, nonatomic) NSMutableArray *adList; // @synthesize adList=_adList;
@property(retain, nonatomic) NSTimer *ctrlAutoScrollTimer; // @synthesize ctrlAutoScrollTimer=_ctrlAutoScrollTimer;
@property(retain, nonatomic) CSPageControl *ctrlPageControl; // @synthesize ctrlPageControl=_ctrlPageControl;
@property(retain, nonatomic) UIScrollView *ctrlScrollView; // @synthesize ctrlScrollView=_ctrlScrollView;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSZyMainAdvPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (_Bool)chkIsClosed;
- (id)cacheKeyForLastCloseDate;
- (void)adBtnClicked;
- (void)stopAutoScrollTimer;
- (id)btnByPage:(int)arg1;
- (void)changePageTitle:(long long)arg1 onPage:(int)arg2;
- (void)changePageTitleWithIdx:(long long)arg1;
- (void)resetPage:(int)arg1;
- (_Bool)chkExistInList:(id)arg1 uuid:(id)arg2;
- (void)createPanel;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)handleAutoScrollTimer;
- (void)startScrollTimer;
- (void)show;
- (void)refresh:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

