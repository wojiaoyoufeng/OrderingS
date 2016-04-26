//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDetailVc.h"

#import "CSAddRRPicPanelDelegate.h"
#import "CSAddRRRestInfoPanelDelegate.h"
#import "CSAddRRTwoBtnsPanelDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class CSAddRRPicPanel, CSAddRRRestInfoPanel, CSAddRRTopLabelPanel, CSAddRRTwoBtnsPanel, NSMutableArray, NSString, RestRecomFormData, UIButton, UIScrollView;

@interface XsRestRecomAddVc : BaseDetailVc <CSAddRRTwoBtnsPanelDelegate, CSAddRRPicPanelDelegate, CSAddRRRestInfoPanelDelegate, UITextFieldDelegate, UITextViewDelegate>
{
    _Bool _isAboutToPostRestRecom;
    _Bool _isMultipleImageSelectionTag;
    int _requestTag;
    CSAddRRPicPanel *_nrPanelOnPicSelecting;
    UIScrollView *_ctrlScrollView;
    CSAddRRTopLabelPanel *_ctrlTopPanel;
    CSAddRRRestInfoPanel *_ctrlRestInputPanel;
    UIButton *_ctrlAddMoreBtn;
    CSAddRRTwoBtnsPanel *_ctrlTwoBtnsPanel;
    RestRecomFormData *_dto;
    NSString *_restId;
    NSString *_restName;
    NSMutableArray *_arrPicPanels;
}

@property(nonatomic) _Bool isMultipleImageSelectionTag; // @synthesize isMultipleImageSelectionTag=_isMultipleImageSelectionTag;
@property(nonatomic) _Bool isAboutToPostRestRecom; // @synthesize isAboutToPostRestRecom=_isAboutToPostRestRecom;
@property(retain, nonatomic) NSMutableArray *arrPicPanels; // @synthesize arrPicPanels=_arrPicPanels;
@property(retain, nonatomic) NSString *restName; // @synthesize restName=_restName;
@property(retain, nonatomic) NSString *restId; // @synthesize restId=_restId;
@property int requestTag; // @synthesize requestTag=_requestTag;
@property(retain, nonatomic) RestRecomFormData *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) CSAddRRTwoBtnsPanel *ctrlTwoBtnsPanel; // @synthesize ctrlTwoBtnsPanel=_ctrlTwoBtnsPanel;
@property(retain, nonatomic) UIButton *ctrlAddMoreBtn; // @synthesize ctrlAddMoreBtn=_ctrlAddMoreBtn;
@property(retain, nonatomic) CSAddRRRestInfoPanel *ctrlRestInputPanel; // @synthesize ctrlRestInputPanel=_ctrlRestInputPanel;
@property(retain, nonatomic) CSAddRRTopLabelPanel *ctrlTopPanel; // @synthesize ctrlTopPanel=_ctrlTopPanel;
@property(retain, nonatomic) UIScrollView *ctrlScrollView; // @synthesize ctrlScrollView=_ctrlScrollView;
@property CSAddRRPicPanel *nrPanelOnPicSelecting; // @synthesize nrPanelOnPicSelecting=_nrPanelOnPicSelecting;
- (void)redoLayoutWithDto;
- (_Bool)checkIfEdited;
- (void)addMorePicsBtnClicked;
- (void)scrollToLastPicPanel;
- (void)scrollToPicPanel:(id)arg1;
- (void)resignFromAllInput;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)alertView:(id)arg1 hideWithBtnIdx:(long long)arg2;
- (double)findLastPicPanelBottom;
- (double)calcTotalHeightForPicPanels;
- (void)redoPositioningPicPanelFollowingsWithTop:(double)arg1;
- (double)redoPositioningForPicPanelsWithTop:(double)arg1;
- (id)addNewPicPanel;
- (void)toLogin;
- (_Bool)validateAllInputs;
- (void)onAddRRTwoBtnsPanelSubmitAll;
- (void)onAddRRTwoBtnsPanelAddNew;
- (void)onAddRRPicPanelAboutToSelect:(id)arg1;
- (void)onAddRRPicPanelCheckedAsCover:(id)arg1;
- (void)onAddRRPicPanelClose:(id)arg1;
- (void)onAddRRRestInfoPanelSelRestBtnClicked;
- (void)finishPickPhotoWithDataList:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)completeQueryParamsWithTag:(long long)arg1;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)completeLoadData;
- (void)onHttpRequestSuccess:(id)arg1 tag:(long long)arg2;
- (void)postData;
- (void)loadData;
- (void)topViewRightBtnClicked:(id)arg1;
- (void)topViewBackBtnClicked:(id)arg1;
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

