//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseFormVc.h"

#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UIButton, UITextField;

@interface XsLoginViaMailVc : BaseFormVc <UITextFieldDelegate, UIScrollViewDelegate>
{
    UITextField *_ctrlEmailTf;
    UITextField *_ctrlEmailPassword;
    UIButton *_ctrlRequestPasscode;
    UIButton *_ctrlSubmit;
    NSString *_landingPage;
}

@property(retain, nonatomic) NSString *landingPage; // @synthesize landingPage=_landingPage;
@property(retain, nonatomic) UIButton *ctrlSubmit; // @synthesize ctrlSubmit=_ctrlSubmit;
@property(retain, nonatomic) UIButton *ctrlRequestPasscode; // @synthesize ctrlRequestPasscode=_ctrlRequestPasscode;
@property(retain, nonatomic) UITextField *ctrlEmailPassword; // @synthesize ctrlEmailPassword=_ctrlEmailPassword;
@property(retain, nonatomic) UITextField *ctrlEmailTf; // @synthesize ctrlEmailTf=_ctrlEmailTf;
- (void)backToFromPage:(_Bool)arg1;
- (void)showUpKeyboard;
- (void)hideKeyboard;
- (void)forgetBtnClicked;
- (_Bool)passValidationForPassword;
- (_Bool)passValidationForEmail;
- (_Bool)passValidationForAll;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)submitBtnClicked;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)alertView:(id)arg1 hideWithBtnIdx:(long long)arg2;
- (void)completeQueryParams;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2 tag:(long long)arg3;
- (void)completeLoadData;
- (void)onHttpRequestSuccess:(id)arg1 msg:(id)arg2 tag:(long long)arg3;
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

