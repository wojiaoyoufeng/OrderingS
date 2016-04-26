//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class BaseLayoutSupportVc, CSRfQhb, CSUIButton, NSObject<CSXsMainSuggestPanelTopDelegate>, NSString, UIImageView, UITextField;

@interface CSXsMainSuggestPanelTop : UIView <UITextFieldDelegate>
{
    NSObject<CSXsMainSuggestPanelTopDelegate> *_delegate;
    BaseLayoutSupportVc *_nrVc;
    CSUIButton *_ctrlBtnSelRest;
    UIImageView *_ctrlWhiteBg;
    UITextField *_ctrlKeywordsTextField;
    CSUIButton *_ctrlBtnSelHisRest;
    CSRfQhb *_ctrlIconForBtnsPanel;
    CSUIButton *_ctrlCancelBtn;
    CSUIButton *_ctrlBtnSelRestSimHist;
    UIImageView *_ctrlGrayBg;
    double _widthMaxWhiteBg;
}

+ (double)panelHeight;
@property(nonatomic) double widthMaxWhiteBg; // @synthesize widthMaxWhiteBg=_widthMaxWhiteBg;
@property(retain, nonatomic) UIImageView *ctrlGrayBg; // @synthesize ctrlGrayBg=_ctrlGrayBg;
@property(retain, nonatomic) CSUIButton *ctrlBtnSelRestSimHist; // @synthesize ctrlBtnSelRestSimHist=_ctrlBtnSelRestSimHist;
@property(retain, nonatomic) CSUIButton *ctrlCancelBtn; // @synthesize ctrlCancelBtn=_ctrlCancelBtn;
@property(retain, nonatomic) CSRfQhb *ctrlIconForBtnsPanel; // @synthesize ctrlIconForBtnsPanel=_ctrlIconForBtnsPanel;
@property(retain, nonatomic) CSUIButton *ctrlBtnSelHisRest; // @synthesize ctrlBtnSelHisRest=_ctrlBtnSelHisRest;
@property(retain, nonatomic) UITextField *ctrlKeywordsTextField; // @synthesize ctrlKeywordsTextField=_ctrlKeywordsTextField;
@property(retain, nonatomic) UIImageView *ctrlWhiteBg; // @synthesize ctrlWhiteBg=_ctrlWhiteBg;
@property(retain, nonatomic) CSUIButton *ctrlBtnSelRest; // @synthesize ctrlBtnSelRest=_ctrlBtnSelRest;
@property BaseLayoutSupportVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSXsMainSuggestPanelTopDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)enterEditingWithTfOnTop:(_Bool)arg1;
- (void)keyboardOff;
- (void)keyboardOn;
- (void)resignFromInputing;
- (void)becomeEditable;
- (void)quitKeywordsEditing;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)alwaysPutDiscountCouponAtTop;
- (void)quitEditing;
- (void)animQuitEditing;
- (void)fixSubviewsZindexForNonEditing;
- (void)displayCancelButton;
- (void)showUpCancelBtn;
- (void)refreshSimBtnsPanelWithStyle:(int)arg1 andData:(id)arg2;
- (void)arrangeSubviewsForNonEditingForContracted;
- (void)arrangeSubviewsForNonEditingForExpanded;
- (void)arrangeSubviewsForEditing;
- (void)commonOpsBeforeContract;
- (void)changeKeywordsToTextField:(id)arg1;
- (void)fixZindexForEditing;
- (void)fixZindexForCanceling;
- (void)btnClicked_selUserHistory:(id)arg1;
- (void)btnClicked_cancel:(id)arg1;
- (void)btnClicked_selRest:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withVc:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

