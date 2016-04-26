//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, RestListDto, TOVoicePanel;

@protocol TOVoicePanelDelegate <NSObject>

@optional
- (void)onVoicePanelQueryGotNewResult:(RestListDto *)arg1 withQueryParams:(NSDictionary *)arg2;
- (void)onVoicePanelRestQueryRefresed:(TOVoicePanel *)arg1;
- (void)onVoicePanelRecognizedRestName:(NSString *)arg1 otherInfo:(NSDictionary *)arg2 panel:(TOVoicePanel *)arg3;
- (void)onVoicePanelUserTerminated:(TOVoicePanel *)arg1;
- (void)onTempletPanelOpen:(TOVoicePanel *)arg1;
@end
