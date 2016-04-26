//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMdbRdPanel.h"

#import "MKMapViewDelegate.h"

@class AddressAnnotation, MKMapView, NSObject<CSMdbRdInfoPanelDelegate>, NSString;

@interface CSMdbRdInfoPanel : BaseMdbRdPanel <MKMapViewDelegate>
{
    NSObject<CSMdbRdInfoPanelDelegate> *_delegate;
    MKMapView *_ctrlMap;
    AddressAnnotation *_aa;
}

@property(retain, nonatomic) AddressAnnotation *aa; // @synthesize aa=_aa;
@property(retain, nonatomic) MKMapView *ctrlMap; // @synthesize ctrlMap=_ctrlMap;
@property NSObject<CSMdbRdInfoPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (int)calMapHeight;
- (float)addressHeight;
- (float)cellHeight;
- (id)completeTelForCall:(id)arg1;
- (id)completeTel:(id)arg1;
- (void)reportErrorPhoneBtnClicked:(id)arg1;
- (void)callRestTelBtnClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)doRefreshPanel;
- (void)doDealloc;
- (void)doIni;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

