//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSTDBasePanel.h"

@class NSObject<CSTDSendHintPanelDelegate>;

@interface CSTDSendHintPanel : CSTDBasePanel
{
    NSObject<CSTDSendHintPanelDelegate> *_delegate;
}

@property NSObject<CSTDSendHintPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (float)calDetailWidth;
- (float)detailHeight;
- (float)detailCellHeight;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)doRefreshPanel;
- (void)doDealloc;
- (void)doIni;

@end

