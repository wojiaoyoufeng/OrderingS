//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseHttpView.h"

#import "MKMapViewDelegate.h"

@class MKMapView, NSObject<CSTkMapPanelDelegate>, NSString, TkListParams, UIButton;

@interface CSTkMapPanel : BaseHttpView <MKMapViewDelegate>
{
    _Bool _readyForMoveTag;
    _Bool _isAdjustingMapCenterTag;
    NSObject<CSTkMapPanelDelegate> *_delegate;
    TkListParams *_nrPm;
    MKMapView *_ctrlMap;
    UIButton *_ctrlUserCenterBtn;
    double _lastZoomLevel;
    CDStruct_2c43369c _currentUserLoc;
    CDStruct_2c43369c _lastCenterLoc;
}

@property(nonatomic) _Bool isAdjustingMapCenterTag; // @synthesize isAdjustingMapCenterTag=_isAdjustingMapCenterTag;
@property(nonatomic) _Bool readyForMoveTag; // @synthesize readyForMoveTag=_readyForMoveTag;
@property(nonatomic) double lastZoomLevel; // @synthesize lastZoomLevel=_lastZoomLevel;
@property CDStruct_c3b9c2ee lastCenterLoc; // @synthesize lastCenterLoc=_lastCenterLoc;
@property CDStruct_c3b9c2ee currentUserLoc; // @synthesize currentUserLoc=_currentUserLoc;
@property(retain, nonatomic) UIButton *ctrlUserCenterBtn; // @synthesize ctrlUserCenterBtn=_ctrlUserCenterBtn;
@property(retain, nonatomic) MKMapView *ctrlMap; // @synthesize ctrlMap=_ctrlMap;
@property TkListParams *nrPm; // @synthesize nrPm=_nrPm;
@property NSObject<CSTkMapPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (_Bool)chkIsRightAnno:(id)arg1;
- (id)newAddressAnnotationWithLon:(double)arg1 lat:(double)arg2 uuid:(id)arg3 title:(id)arg4;
- (id)calGpsRect;
- (void)currentBtnClicked;
- (void)mapMoved;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)calDefaultZoomLevelGpsRectWithLon:(double)arg1 lat:(double)arg2;
- (void)refresh:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

