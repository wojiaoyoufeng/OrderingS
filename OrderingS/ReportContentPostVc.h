//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDetailVc.h"

@class NSString, UIScrollView, UITextField;

@interface ReportContentPostVc : BaseDetailVc
{
    UIScrollView *scrollView;
    UITextField *restNameTextField;
    NSString *restName;
    int postTag;
}

@property(nonatomic) int postTag; // @synthesize postTag;
@property(retain, nonatomic) NSString *restName; // @synthesize restName;
@property(retain, nonatomic) UITextField *restNameTextField; // @synthesize restNameTextField;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView;
- (void)topViewRightBtnClicked:(id)arg1;
- (void)topViewBackBtnClicked:(id)arg1;
- (void)completeQueryParams;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)onHttpRequestSuccess:(id)arg1;
- (void)postData;
- (void)onHide;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)onWillShow;
- (void)onParsePageParams:(id)arg1;
- (void)onClose;
- (void)onCreate;

@end

