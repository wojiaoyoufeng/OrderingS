//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDetailVc.h"

#import "UITextFieldDelegate.h"

@class CSUIButton, CSZyInput, NSString;

@interface ZyUserTelAuthVc : BaseDetailVc <UITextFieldDelegate>
{
    _Bool _needUploadAddressBook;
    int _step;
    CSZyInput *_ctrlInput;
    CSUIButton *_ctrlSubmit;
    NSString *_tel;
    NSString *_fromPage;
}

@property(retain, nonatomic) NSString *fromPage; // @synthesize fromPage=_fromPage;
@property(retain, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(nonatomic) int step; // @synthesize step=_step;
@property(nonatomic) _Bool needUploadAddressBook; // @synthesize needUploadAddressBook=_needUploadAddressBook;
@property(retain, nonatomic) CSUIButton *ctrlSubmit; // @synthesize ctrlSubmit=_ctrlSubmit;
@property(retain, nonatomic) CSZyInput *ctrlInput; // @synthesize ctrlInput=_ctrlInput;
- (void)btnClick;
- (void)continueWithSucc;
- (void)alertView:(id)arg1 hideWithBtnIdx:(long long)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)completeQueryParams;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)onHttpRequestSuccess:(id)arg1 tag:(long long)arg2;
- (void)loadData;
- (void)topViewBackBtnClicked:(id)arg1;
- (void)updateStepView;
- (void)updateStepViewWithAnimation;
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

