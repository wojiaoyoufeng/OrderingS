//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseVc, CSWaProgressPanel, NSObject<CSWaOperatePanelDelegate>, UIButton, UILabel;

@interface CSWaOperatePanel : UIView
{
    NSObject<CSWaOperatePanelDelegate> *_delegate;
    BaseVc *_nrVc;
    CSWaProgressPanel *_ctrlDpPanel;
    UILabel *_ctrlHintLabel;
    UIButton *_ctrlCancelBtn;
}

@property(retain, nonatomic) UIButton *ctrlCancelBtn; // @synthesize ctrlCancelBtn=_ctrlCancelBtn;
@property(retain, nonatomic) UILabel *ctrlHintLabel; // @synthesize ctrlHintLabel=_ctrlHintLabel;
@property(retain, nonatomic) CSWaProgressPanel *ctrlDpPanel; // @synthesize ctrlDpPanel=_ctrlDpPanel;
@property(nonatomic) __weak BaseVc *nrVc; // @synthesize nrVc=_nrVc;
@property(nonatomic) __weak NSObject<CSWaOperatePanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelBtnClicked;
- (void)changeProgress:(float)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end

