//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSectionListVc.h"

#import "CSOrderSexDelegate.h"
#import "CSZyWeiboDelegate.h"
#import "UITextFieldDelegate.h"

@class CSZyWeibo, NSString, UITextField;

@interface XsProfileEditVc : BaseSectionListVc <CSZyWeiboDelegate, UITextFieldDelegate, CSOrderSexDelegate>
{
    int _queryTag;
    int _unbindTypeTag;
    int _needRefreshTag;
    int _selSexTag;
    CSZyWeibo *_ctrlWeibo;
    UITextField *_ctrlTfPwd;
    NSString *_weixinLoginCode;
}

@property(retain, nonatomic) NSString *weixinLoginCode; // @synthesize weixinLoginCode=_weixinLoginCode;
@property(nonatomic) int selSexTag; // @synthesize selSexTag=_selSexTag;
@property(nonatomic) int needRefreshTag; // @synthesize needRefreshTag=_needRefreshTag;
@property(nonatomic) int unbindTypeTag; // @synthesize unbindTypeTag=_unbindTypeTag;
@property(nonatomic) int queryTag; // @synthesize queryTag=_queryTag;
@property(retain, nonatomic) UITextField *ctrlTfPwd; // @synthesize ctrlTfPwd=_ctrlTfPwd;
@property(retain, nonatomic) CSZyWeibo *ctrlWeibo; // @synthesize ctrlWeibo=_ctrlWeibo;
- (void)handleTap:(id)arg1;
- (void)navBackWithRefreshTag;
- (void)sexDidChangedTo:(int)arg1;
- (void)zyWeiboDidBind:(int)arg1;
- (void)receivingMsgWeixinLoginCodeRequestListener:(id)arg1;
- (void)doBindWeixin;
- (void)doBindTel;
- (void)doBindQqWeibo;
- (void)doBindSinaWeibo;
- (void)alertView:(id)arg1 hideWithBtnIdx:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)makeCell:(id)arg1 indexPath:(id)arg2;
- (void)createCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)completeLoadData;
- (void)completeQueryParams;
- (void)processWhenRequestError:(id)arg1 code:(int)arg2 tag:(long long)arg3;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2 tag:(long long)arg3;
- (void)onHttpRequestSuccess:(id)arg1 tag:(long long)arg2;
- (void)postLogout;
- (void)postSexUpdate;
- (void)postVerify;
- (void)postForBindToWeixin;
- (void)postForUnbindWeixin;
- (void)postForUnbindWeibo;
- (void)topViewRightBtnClicked:(id)arg1;
- (void)topViewBackBtnClicked:(id)arg1;
- (void)onPopFromNavStack;
- (void)onHide;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)onShow;
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

