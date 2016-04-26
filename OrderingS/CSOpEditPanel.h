//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CSOpSwitchDelegate.h"
#import "UITextFieldDelegate.h"

@class BaseFormVc, CSOpSwitch, NSObject<CSOpEditPanelDelegate>, NSString, UIImageView, UITextField;

@interface CSOpEditPanel : UIView <CSOpSwitchDelegate, UITextFieldDelegate>
{
    NSObject<CSOpEditPanelDelegate> *_delegate;
    BaseFormVc *_nrVc;
    UIImageView *_ctrlBg;
    UITextField *_ctrlBookerName;
    CSOpSwitch *_ctrlBookerSex;
    UITextField *_ctrlBookerTel;
    UITextField *_ctrlMemo;
    CSOpSwitch *_ctrlForOtherSw;
    UITextField *_ctrlEaterName;
    CSOpSwitch *_ctrlEaterSex;
    UITextField *_ctrlEaterTel;
}

@property(retain, nonatomic) UITextField *ctrlEaterTel; // @synthesize ctrlEaterTel=_ctrlEaterTel;
@property(retain, nonatomic) CSOpSwitch *ctrlEaterSex; // @synthesize ctrlEaterSex=_ctrlEaterSex;
@property(retain, nonatomic) UITextField *ctrlEaterName; // @synthesize ctrlEaterName=_ctrlEaterName;
@property(retain, nonatomic) CSOpSwitch *ctrlForOtherSw; // @synthesize ctrlForOtherSw=_ctrlForOtherSw;
@property(retain, nonatomic) UITextField *ctrlMemo; // @synthesize ctrlMemo=_ctrlMemo;
@property(retain, nonatomic) UITextField *ctrlBookerTel; // @synthesize ctrlBookerTel=_ctrlBookerTel;
@property(retain, nonatomic) CSOpSwitch *ctrlBookerSex; // @synthesize ctrlBookerSex=_ctrlBookerSex;
@property(retain, nonatomic) UITextField *ctrlBookerName; // @synthesize ctrlBookerName=_ctrlBookerName;
@property(retain, nonatomic) UIImageView *ctrlBg; // @synthesize ctrlBg=_ctrlBg;
@property BaseFormVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSOpEditPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (int)sexTagWithOn:(_Bool)arg1;
- (_Bool)sexWithTag:(long long)arg1;
- (void)changeBgAndPanelHeightWithOn:(_Bool)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onOpSwitchChange:(id)arg1 on:(_Bool)arg2;
- (id)newSwWithRow:(int)arg1 forSexStyle:(_Bool)arg2;
- (id)newTfWithRow:(int)arg1;
- (id)newLbWithTopWithRow:(int)arg1;
- (void)hideKeyboard;
- (void)refresh:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
