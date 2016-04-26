//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaseVc, NSObject<CSYyPanelDelegate>, UIButton, UILabel, UIView, VoiceBtnPanel;

@interface CSYyPanel : NSObject
{
    NSObject<CSYyPanelDelegate> *_delegate;
    BaseVc *_nrVc;
    UIView *_ctrlYyMaskView;
    UIView *_ctrlDlgPanel;
    UILabel *_ctrlStatusLabel;
    VoiceBtnPanel *_ctrlVoiceBtn;
    UIButton *_ctrlCancelBtn;
    UIButton *_ctrlOkBtn;
}

@property(retain, nonatomic) UIButton *ctrlOkBtn; // @synthesize ctrlOkBtn=_ctrlOkBtn;
@property(retain, nonatomic) UIButton *ctrlCancelBtn; // @synthesize ctrlCancelBtn=_ctrlCancelBtn;
@property(retain, nonatomic) VoiceBtnPanel *ctrlVoiceBtn; // @synthesize ctrlVoiceBtn=_ctrlVoiceBtn;
@property(retain, nonatomic) UILabel *ctrlStatusLabel; // @synthesize ctrlStatusLabel=_ctrlStatusLabel;
@property(retain, nonatomic) UIView *ctrlDlgPanel; // @synthesize ctrlDlgPanel=_ctrlDlgPanel;
@property(retain, nonatomic) UIView *ctrlYyMaskView; // @synthesize ctrlYyMaskView=_ctrlYyMaskView;
@property BaseVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSYyPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)resetAndHide;
- (void)prepRedoRecordWithStatusMsg:(id)arg1;
- (void)stopRecording;
- (void)beginRecording;
- (void)cancelBtnClick;
- (void)okBtnClick;
- (void)voiceTransNetworkFail:(id)arg1;
- (void)voiceTransTextEmpty:(id)arg1;
- (void)voiceTransText:(id)arg1;
- (void)createPanel;
- (void)showPanel;
- (void)open;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end

