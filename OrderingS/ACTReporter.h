//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACTReporterPrivate;

@interface ACTReporter : NSObject
{
    ACTReporterPrivate *_reporter;
}

+ (void)trackUsageWithReporter:(id)arg1;
+ (id)SDKVersion;
@property(retain, nonatomic) ACTReporterPrivate *reporter; // @synthesize reporter=_reporter;
- (void).cxx_destruct;
- (_Bool)report;
- (id)initWithReporter:(id)arg1;
- (id)init;

@end

