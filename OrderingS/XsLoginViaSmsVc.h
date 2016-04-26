//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseFormVc.h"

#import "CSUIComboBoxDelegate.h"
#import "CSUIImageViewDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CSHtmLabel, CSUIComboBox, CSUIImageView, NSString, NSTimer, SmsLoginChkData, SmsLoginFormData, UIButton, UILabel;

@interface XsLoginViaSmsVc : BaseFormVc <UITextFieldDelegate, UIScrollViewDelegate, CSUIComboBoxDelegate, CSUIImageViewDelegate, MFMessageComposeViewControllerDelegate>
{
    _Bool _hasSentLoginSms;
    int _countNum;
    int _requestTag;
    UILabel *_ctrlPhoneNum;
    CSUIImageView *_ctrlCarrierIcon;
    UILabel *_ctrlCarrierLabel;
    CSUIComboBox *_ctrlCarrier;
    NSString *_selCarrier;
    CSHtmLabel *_ctrlHint;
    UIButton *_ctrlSubmit;
    SmsLoginChkData *_chkData;
    CSHtmLabel *_ctrlChkHint;
    SmsLoginFormData *_formData;
    NSTimer *_ctrlTimer;
    NSString *_tel;
    NSString *_landingPage;
}

@property(nonatomic) _Bool hasSentLoginSms; // @synthesize hasSentLoginSms=_hasSentLoginSms;
@property(retain, nonatomic) NSString *landingPage; // @synthesize landingPage=_landingPage;
@property(nonatomic) int requestTag; // @synthesize requestTag=_requestTag;
@property(retain, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(nonatomic) int countNum; // @synthesize countNum=_countNum;
@property(retain, nonatomic) NSTimer *ctrlTimer; // @synthesize ctrlTimer=_ctrlTimer;
@property(retain, nonatomic) SmsLoginFormData *formData; // @synthesize formData=_formData;
@property(retain, nonatomic) CSHtmLabel *ctrlChkHint; // @synthesize ctrlChkHint=_ctrlChkHint;
@property(retain, nonatomic) SmsLoginChkData *chkData; // @synthesize chkData=_chkData;
@property(retain, nonatomic) UIButton *ctrlSubmit; // @synthesize ctrlSubmit=_ctrlSubmit;
@property(retain, nonatomic) CSHtmLabel *ctrlHint; // @synthesize ctrlHint=_ctrlHint;
@property(retain, nonatomic) NSString *selCarrier; // @synthesize selCarrier=_selCarrier;
@property(retain, nonatomic) CSUIComboBox *ctrlCarrier; // @synthesize ctrlCarrier=_ctrlCarrier;
@property(retain, nonatomic) UILabel *ctrlCarrierLabel; // @synthesize ctrlCarrierLabel=_ctrlCarrierLabel;
@property(retain, nonatomic) CSUIImageView *ctrlCarrierIcon; // @synthesize ctrlCarrierIcon=_ctrlCarrierIcon;
@property(retain, nonatomic) UILabel *ctrlPhoneNum; // @synthesize ctrlPhoneNum=_ctrlPhoneNum;
- (void)removeChkHintDashBorder;
- (void)enableUIs;
- (void)disableUIs;
- (void)changeStatusBar;
- (void)cleanTimerAndDeferred;
- (void)requestLoginStatus;
- (void)continueToRequestForLogin;
- (void)backToFromPage:(_Bool)arg1;
- (void)showUpKeyboard;
- (_Bool)passValidationForCarrierSelection;
- (_Bool)passValidationForAll;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)installCarrierSelectionsIfPreset:(_Bool)arg1;
- (void)comboBox:(id)arg1 didSelectedWithLeftRow:(long long)arg2 leftSelectId:(id)arg3 leftSelectName:(id)arg4 rightRow:(long long)arg5 rightSelectId:(id)arg6 rightSelectName:(id)arg7;
- (void)comboBoxBeforeShowPicker:(id)arg1;
- (void)comboBox:(id)arg1 didSelected:(long long)arg2 selectId:(id)arg3 selectName:(id)arg4;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateBtnName:(id)arg1 enabled:(_Bool)arg2;
- (void)resetCountDown;
- (void)countingDown;
- (void)stopTimer;
- (void)startTimer;
- (void)submitBtnClicked;
- (void)alertView:(id)arg1 hideWithBtnIdx:(long long)arg2;
- (void)processWhenRequestErrorEnd;
- (void)completeQueryParams;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2 tag:(long long)arg3;
- (void)completeLoadData;
- (void)onHttpRequestSuccess:(id)arg1 msg:(id)arg2 tag:(long long)arg3;
- (void)postData;
- (void)loadData;
- (void)didNavBack;
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

