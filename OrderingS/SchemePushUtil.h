//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SchemePushUtil : NSObject
{
}

+ (void)processAppSchemeWithVc:(id)arg1 url:(id)arg2;
+ (void)processPushMsgWithVc:(id)arg1 typeTag:(int)arg2 advUrl:(id)arg3 appName:(id)arg4 appDownloadUrl:(id)arg5;
+ (void)notifyToProcessPushMsg:(id)arg1;
+ (void)notifyToProcessAppSchemeUrl:(id)arg1;

@end
