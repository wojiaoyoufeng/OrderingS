//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseVc, NSObject<CSChatClosePanelDelegate>;

@interface CSChatClosePanel : UIView
{
    NSObject<CSChatClosePanelDelegate> *_delegate;
    BaseVc *_nrVc;
}

+ (float)panelHeight;
@property BaseVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSChatClosePanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)notifyToMinimize;
- (void)notifyToClose;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)closeBtnClicked;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end

