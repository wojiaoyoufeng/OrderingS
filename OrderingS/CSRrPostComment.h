//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSRrBaseCtrl.h"

@class CSUIPlaceHolderTextView, NSObject<CSRrPostCommentDelegate>;

@interface CSRrPostComment : CSRrBaseCtrl
{
    NSObject<CSRrPostCommentDelegate> *_delegate;
    CSUIPlaceHolderTextView *_ctrlTextView;
}

@property(retain, nonatomic) CSUIPlaceHolderTextView *ctrlTextView; // @synthesize ctrlTextView=_ctrlTextView;
@property NSObject<CSRrPostCommentDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)doRefreshPanel;
- (void)doDealloc;
- (void)doInit;

@end
