//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CSNumStepperDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class BaseBizVc, NSObject<CSTkpMenuPanelDelegate>, NSString, UITableView;

@interface CSTkpMenuPanel : UIView <UITableViewDelegate, UITableViewDataSource, CSNumStepperDelegate>
{
    NSObject<CSTkpMenuPanelDelegate> *_delegate;
    BaseBizVc *_nrVc;
    UITableView *_ctrlTb;
    NSString *_takeoutId;
    NSString *_selDataIdentifer;
}

@property(retain, nonatomic) NSString *selDataIdentifer; // @synthesize selDataIdentifer=_selDataIdentifer;
@property(retain, nonatomic) NSString *takeoutId; // @synthesize takeoutId=_takeoutId;
@property(retain, nonatomic) UITableView *ctrlTb; // @synthesize ctrlTb=_ctrlTb;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSTkpMenuPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)invokeChangedAndRefreshTb;
- (void)onNumStepperChange:(id)arg1 num:(long long)arg2;
- (_Bool)chkHavePropertyHint:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateSelGift:(id)arg1;
- (void)refreshPanelWithTakeoutId:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

