//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSObject<CSTkListKwPanelDelegate>;

@interface CSTkListKwPanel : UIView
{
    NSObject<CSTkListKwPanelDelegate> *_delegate;
}

@property(nonatomic) __weak NSObject<CSTkListKwPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)kwBtnClicked:(id)arg1;
- (void)changeKwBtnWithTitle:(id)arg1;
- (void)hide;
- (void)show:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end

