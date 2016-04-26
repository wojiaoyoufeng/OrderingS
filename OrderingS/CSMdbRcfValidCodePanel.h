//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class BaseFormVc, CSUIImageView, CSUnderlineLabel, CSZyInput, NSObject<CSMdbRcfValidCodePanelDelegate>, NSString, UIButton;

@interface CSMdbRcfValidCodePanel : UIView <UITextFieldDelegate>
{
    NSObject<CSMdbRcfValidCodePanelDelegate> *_delegate;
    BaseFormVc *_nrVc;
    CSZyInput *_ctrlTf;
    CSUIImageView *_ctrlCode;
    CSUnderlineLabel *_ctrlLabel;
    UIButton *_ctrlBtn;
}

@property(retain, nonatomic) UIButton *ctrlBtn; // @synthesize ctrlBtn=_ctrlBtn;
@property(retain, nonatomic) CSUnderlineLabel *ctrlLabel; // @synthesize ctrlLabel=_ctrlLabel;
@property(retain, nonatomic) CSUIImageView *ctrlCode; // @synthesize ctrlCode=_ctrlCode;
@property(retain, nonatomic) CSZyInput *ctrlTf; // @synthesize ctrlTf=_ctrlTf;
@property BaseFormVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSMdbRcfValidCodePanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)btnClicked;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)hideKeyboard;
- (id)validCodeNumStr;
- (void)refresh:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

