//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDetailVc.h"

#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface WebPaymentVc : BaseDetailVc <UIWebViewDelegate>
{
    _Bool _mdbForAddTag;
    int _typeTag;
    UIWebView *_ctrlWb;
    NSString *_wapUrl;
    NSString *_orderId;
    NSString *_rePageKey;
}

@property(nonatomic) _Bool mdbForAddTag; // @synthesize mdbForAddTag=_mdbForAddTag;
@property(retain, nonatomic) NSString *rePageKey; // @synthesize rePageKey=_rePageKey;
@property(nonatomic) int typeTag; // @synthesize typeTag=_typeTag;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NSString *wapUrl; // @synthesize wapUrl=_wapUrl;
@property(retain, nonatomic) UIWebView *ctrlWb; // @synthesize ctrlWb=_ctrlWb;
- (void)toBackPage;
- (void)toNextPage;
- (id)invokeJs:(id)arg1;
- (_Bool)chkIsStartPage;
- (id)documentTitle;
- (void)clearWb;
- (void)openWb:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)alertView:(id)arg1 hideWithBtnIdx:(long long)arg2;
- (void)topViewBackBtnClicked:(id)arg1;
- (void)onPopFromNavStack;
- (void)onHide;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)onWillShow;
- (void)onParsePageParams:(id)arg1;
- (void)onClose;
- (void)onCleanData;
- (void)onCreate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

