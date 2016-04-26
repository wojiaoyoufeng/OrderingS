//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CSOrderRtTimeListViewDelegate.h"
#import "CSUIScrollBtnsDelegate.h"

@class BaseBizVc, CSOrderRtTimeListView, NSMutableArray, NSObject<CSOrderRtTimePanelDelegate>, NSString;

@interface CSOrderRtTimePanel : UIView <CSUIScrollBtnsDelegate, CSOrderRtTimeListViewDelegate>
{
    NSObject<CSOrderRtTimePanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    CSOrderRtTimeListView *_ctrlTimeList;
    NSMutableArray *_nrArrayDateList;
}

@property(nonatomic) __weak NSMutableArray *nrArrayDateList; // @synthesize nrArrayDateList=_nrArrayDateList;
@property(retain, nonatomic) CSOrderRtTimeListView *ctrlTimeList; // @synthesize ctrlTimeList=_ctrlTimeList;
@property(nonatomic) __weak BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property(nonatomic) __weak NSObject<CSOrderRtTimePanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onCSOrderRtTimeListViewSelectUUid:(id)arg1;
- (void)onCSOrderRtTimeListViewTimeSegChanged;
- (void)reset;
- (void)refresh:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

