//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseOrderPayVc.h"

@class NSString;

@interface TakeoutOnlinePayVc : BaseOrderPayVc
{
    NSString *_rePageKey;
}

@property(retain, nonatomic) NSString *rePageKey; // @synthesize rePageKey=_rePageKey;
- (void)onOnlinePayNeedOpenWapUrl:(id)arg1;
- (void)onOnlinePaySucc;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)onWillShow;
- (void)onParsePageParams:(id)arg1;
- (void)onClose;
- (void)onCleanData;

@end
