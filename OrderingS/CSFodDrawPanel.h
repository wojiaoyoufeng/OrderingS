//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSFodBasePanel.h"

@class NSObject<CSFodDrawPanelDelegate>, UIButton;

@interface CSFodDrawPanel : CSFodBasePanel
{
    NSObject<CSFodDrawPanelDelegate> *_delegate;
    UIButton *_ctrlBtn;
}

@property(retain, nonatomic) UIButton *ctrlBtn; // @synthesize ctrlBtn=_ctrlBtn;
@property NSObject<CSFodDrawPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)btnClicked;
- (void)doRefreshPanel;
- (void)doDealloc;
- (void)doIni;

@end
