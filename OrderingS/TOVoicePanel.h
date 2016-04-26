//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseHttpView.h"

#import "TOChatServiceUIAugmentedDelegate.h"
#import "TORestListCellViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSObject<TOVoicePanelDelegate>, NSString, NSTimer, TORestCardShuffler, UIButton, UITableView;

@interface TOVoicePanel : BaseHttpView <UITableViewDelegate, UITableViewDataSource, TORestListCellViewDelegate, TOChatServiceUIAugmentedDelegate>
{
    _Bool _isOpen;
    _Bool _isHidingTag;
    _Bool _isMsgBoardAnimClosed;
    _Bool _isMsgBoardAnimDone;
    _Bool _showVoiceControlBtn;
    _Bool _isConversationViewNormal;
    _Bool _shouldNotRevertToNormalAfterTapEnd;
    NSObject<TOVoicePanelDelegate> *_delegate;
    UIButton *_ctrlVoiceIcon;
    UITableView *_ctrlMsgTableView;
    TORestCardShuffler *_ctrlRestCardShffuler;
    NSTimer *_timerXfHeartBeat;
    double _maxAllowedHeight;
    double _bestFitWidth;
    double _bestFitHeight;
    struct CGPoint _swipeStartPoint;
}

@property double bestFitHeight; // @synthesize bestFitHeight=_bestFitHeight;
@property double bestFitWidth; // @synthesize bestFitWidth=_bestFitWidth;
@property _Bool shouldNotRevertToNormalAfterTapEnd; // @synthesize shouldNotRevertToNormalAfterTapEnd=_shouldNotRevertToNormalAfterTapEnd;
@property _Bool isConversationViewNormal; // @synthesize isConversationViewNormal=_isConversationViewNormal;
@property struct CGPoint swipeStartPoint; // @synthesize swipeStartPoint=_swipeStartPoint;
@property double maxAllowedHeight; // @synthesize maxAllowedHeight=_maxAllowedHeight;
@property(retain, nonatomic) NSTimer *timerXfHeartBeat; // @synthesize timerXfHeartBeat=_timerXfHeartBeat;
@property _Bool showVoiceControlBtn; // @synthesize showVoiceControlBtn=_showVoiceControlBtn;
@property _Bool isMsgBoardAnimDone; // @synthesize isMsgBoardAnimDone=_isMsgBoardAnimDone;
@property _Bool isMsgBoardAnimClosed; // @synthesize isMsgBoardAnimClosed=_isMsgBoardAnimClosed;
@property _Bool isHidingTag; // @synthesize isHidingTag=_isHidingTag;
@property _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain, nonatomic) TORestCardShuffler *ctrlRestCardShffuler; // @synthesize ctrlRestCardShffuler=_ctrlRestCardShffuler;
@property(retain, nonatomic) UITableView *ctrlMsgTableView; // @synthesize ctrlMsgTableView=_ctrlMsgTableView;
@property(retain, nonatomic) UIButton *ctrlVoiceIcon; // @synthesize ctrlVoiceIcon=_ctrlVoiceIcon;
@property NSObject<TOVoicePanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)revertToNormalSize:(id)arg1;
- (void)redoBestFit:(id)arg1;
- (void)resizeToAllowDataVisiableWithAnimation:(_Bool)arg1;
- (void)convertToSmallerSize:(id)arg1;
- (void)configViewHeight:(double)arg1;
- (void)revertConversationViewToNormalWithAnimation:(_Bool)arg1;
- (void)handleSwipe:(id)arg1;
- (void)onTOChatServiceUIforNewMsgsReload;
- (void)interruptBtnClicked:(id)arg1;
- (void)electronConvulse;
- (void)killXfHeartBeatTimer;
- (void)onTORestListCellViewAddRestBtnClicked;
- (void)fixMsgTableShowing;
- (void)invokeRestSearch:(id)arg1;
- (void)finishHideAnimation;
- (void)handleHidePanel;
- (void)closeVoiceIcon;
- (void)setupUI;
- (void)startVoiceGuideAnim;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)heightForRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reset;
- (void)pauseVoiceSynnthesis;
- (void)resumeVoiceSynthesis;
- (void)restartVoiceService;
- (void)close;
- (void)open;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

