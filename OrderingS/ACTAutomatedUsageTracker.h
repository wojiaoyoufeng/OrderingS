//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface ACTAutomatedUsageTracker : NSObject
{
    double _timeToEndOfPriorUsageIntervalSince1970;
    _Bool _hasStartedUsageReporting;
    NSObject<OS_dispatch_queue> *_lockQueue;
    double _reportingTimeInterval;
    NSMutableDictionary *_reporters;
    NSMutableSet *_disabledConversionIDs;
}

+ (void)disableAutomatedUsageReportingWithConversionID:(id)arg1;
+ (void)enableAutomatedUsageReportingWithConversionID:(id)arg1;
@property(retain, nonatomic) NSMutableSet *disabledConversionIDs; // @synthesize disabledConversionIDs=_disabledConversionIDs;
@property(retain, nonatomic) NSMutableDictionary *reporters; // @synthesize reporters=_reporters;
- (void).cxx_destruct;
- (void)reportingIntervalElapsed;
- (void)reportAtSecondsSince1970:(double)arg1;
- (void)disableAutomatedUsageReportingWithConversionID:(id)arg1;
- (double)timeToEndOfCurrentUsageIntervalSince1970;
- (double)timeSince1970ToEndOfCurrentUsageIntervalBasedOnPriorUsageInterval:(double)arg1;
@property(nonatomic) double timeToEndOfPriorUsageIntervalSince1970;
- (id)reporterWithConversionID:(id)arg1;
- (_Bool)isAutomatedUsageReportingDisabledForConversionID:(id)arg1;
- (void)enableAutomatedUsageReportingWithConversionID:(id)arg1;
- (void)lockAndEnableAutomatedUsageReportingWithConversionID:(id)arg1;
- (void)attemptToEnableAutomatedUsageReportingWithConversionID:(id)arg1;
- (void)dealloc;
- (id)init;

@end

