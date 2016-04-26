//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDlgView.h"

#import "UITextFieldDelegate.h"

@class CSZyInput, NSObject<CSTkAddrAddPanelDelegate>, NSString;

@interface CSTkAddrAddPanel : BaseDlgView <UITextFieldDelegate>
{
    _Bool _forAddTag;
    NSObject<CSTkAddrAddPanelDelegate> *_delegate;
    CSZyInput *_ctrlAddrTf;
    CSZyInput *_ctrlTelTf;
    CSZyInput *_ctrlNameTf;
    NSString *_uuid;
}

@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool forAddTag; // @synthesize forAddTag=_forAddTag;
@property(retain, nonatomic) CSZyInput *ctrlNameTf; // @synthesize ctrlNameTf=_ctrlNameTf;
@property(retain, nonatomic) CSZyInput *ctrlTelTf; // @synthesize ctrlTelTf=_ctrlTelTf;
@property(retain, nonatomic) CSZyInput *ctrlAddrTf; // @synthesize ctrlAddrTf=_ctrlAddrTf;
@property NSObject<CSTkAddrAddPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)hideKeyBoard;
- (void)openWithUuid:(id)arg1 address:(id)arg2 tel:(id)arg3 name:(id)arg4 forAddTag:(_Bool)arg5;
- (void)cancelBtnClick;
- (void)okBtnClick;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)openForEditWithUuid:(id)arg1 address:(id)arg2 tel:(id)arg3 name:(id)arg4;
- (void)openForAdd;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
