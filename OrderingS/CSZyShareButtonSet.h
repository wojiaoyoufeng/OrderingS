//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CSZyWeiboDelegate.h"

@class BaseVc, CSUIButton, CSZyWeibo, NSString;

@interface CSZyShareButtonSet : UIView <CSZyWeiboDelegate>
{
    BaseVc *_nrVc;
    CSZyWeibo *_ctrlWeibo;
    CSUIButton *_ctrlSinaBtn;
    CSUIButton *_ctrlQqBtn;
}

@property(retain, nonatomic) CSUIButton *ctrlQqBtn; // @synthesize ctrlQqBtn=_ctrlQqBtn;
@property(retain, nonatomic) CSUIButton *ctrlSinaBtn; // @synthesize ctrlSinaBtn=_ctrlSinaBtn;
@property(retain, nonatomic) CSZyWeibo *ctrlWeibo; // @synthesize ctrlWeibo=_ctrlWeibo;
@property(nonatomic) BaseVc *nrVc; // @synthesize nrVc=_nrVc;
- (void)zyWeiboDidBind:(int)arg1;
- (void)btnClick:(id)arg1;
- (_Bool)chkBtnIsHot:(id)arg1;
- (void)changeBtnState:(id)arg1 hot:(_Bool)arg2;
- (_Bool)chkHaveHotBtn;
- (id)shareTo;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

