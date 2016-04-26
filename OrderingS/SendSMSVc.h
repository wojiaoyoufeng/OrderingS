//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDetailVc.h"

#import "CSKeyboardBarDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class CSKeyboardBar, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIScrollView, UITextField, UITextView, UIView;

@interface SendSMSVc : BaseDetailVc <UITextFieldDelegate, UITextViewDelegate, CSKeyboardBarDelegate>
{
    UIScrollView *svContent;
    UIImageView *ivRecevierBg;
    UIScrollView *svRecevier;
    UITextField *tfReceiver;
    UIButton *btnShortReceiver;
    UIButton *btnAddReceiver;
    double SCROLL_MAX_Height;
    double margin;
    double sendView_minheight;
    UIView *viewRecent;
    UIImageView *ivTips;
    UILabel *lbTips;
    UIImageView *ivSend;
    UITextView *tvSendContent;
    UIButton *btnSend;
    UIView *viewSendLength;
    UILabel *lbSendLength;
    UILabel *lbSendLengthFix;
    NSMutableArray *arrReceiver;
    NSMutableArray *arrReceiverBtn;
    NSMutableArray *arrRecent;
    NSMutableArray *arrRecentBtn;
    NSMutableArray *arrSeparated;
    CSKeyboardBar *keyboardBar;
    _Bool havePlaceGpsTag;
    NSString *placeLon;
    NSString *placeLat;
    NSString *placeName;
    NSString *templetId;
    NSString *restId;
    NSString *orderId;
    NSString *fromPage;
}

@property(copy, nonatomic) NSString *fromPage; // @synthesize fromPage;
@property(copy, nonatomic) NSString *templetId; // @synthesize templetId;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId;
@property(copy, nonatomic) NSString *restId; // @synthesize restId;
@property(copy, nonatomic) NSString *placeName; // @synthesize placeName;
@property(copy, nonatomic) NSString *placeLon; // @synthesize placeLon;
@property(copy, nonatomic) NSString *placeLat; // @synthesize placeLat;
@property(nonatomic) _Bool havePlaceGpsTag; // @synthesize havePlaceGpsTag;
- (void)keyboardHide:(id)arg1;
- (void)keyboardFrameChange:(id)arg1;
- (void)keyboardShow:(id)arg1;
- (void)btnClick_SendSMS:(id)arg1;
- (void)touchInside:(id)arg1;
- (void)btnClick_addReceiverFromAB:(id)arg1;
- (void)btnClick_addReceiverFromRecent:(id)arg1;
- (void)btnClick_cancelReceiver:(id)arg1;
- (void)loadRecent;
- (id)btnNewReceiver:(id)arg1;
- (void)layoutReceiverButton:(long long)arg1;
- (void)layoutReceiverTextField;
- (void)layoutSendView;
- (void)addRecent;
- (void)addReceiverWithStr:(id)arg1;
- (void)addReceiver:(id)arg1 isFromRecent:(_Bool)arg2;
- (void)addReceiver:(id)arg1;
- (void)keyboardBarDidTapHideBtn:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onPopFromNavStack;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)onParsePageParams:(id)arg1;
- (void)topViewBackBtnClicked:(id)arg1;
- (void)completeQueryParams;
- (void)alertView:(id)arg1 hideWithBtnIdx:(long long)arg2;
- (void)completeLoadData;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)onHttpRequestSuccess:(id)arg1;
- (void)onWillShow;
- (void)onClose;
- (void)onCleanData;
- (void)dealloc;
- (void)onCreate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
