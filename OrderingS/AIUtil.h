//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AIUtil : NSObject
{
}

+ (_Bool)isUnitTesting;
+ (id)getNetWorkType;
+ (int)getNetworkStatus;
+ (id)getNetworkQuality;
+ (id)getDeviceId;
+ (id)getResourceDir;
+ (id)cachePath;
+ (id)fileMD5:(id)arg1;
+ (_Bool)checkMD5:(id)arg1 DestinationFile:(id)arg2;
+ (int)copyResource:(id)arg1 checkMD5:(_Bool)arg2;
+ (int)copyResource:(id)arg1;

@end

