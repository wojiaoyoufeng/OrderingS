//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACTConversionReporterPrivate.h"

#import "ACTAutomatedUsageReporting.h"
#import "ACTPingerDelegate.h"
#import "ACTReportingInfoDelegate.h"

@class NSString;

@interface ACTConversionIDReporter : ACTConversionReporterPrivate <ACTAutomatedUsageReporting, ACTReportingInfoDelegate, ACTPingerDelegate>
{
    NSString *_conversionID;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *conversionID; // @synthesize conversionID=_conversionID;
- (void).cxx_destruct;
- (id)automatedUsageConversionID;
- (id)reportingURLPrefix;
- (id)queryParameters;
- (id)deduplicationID;
- (void)dealloc;
- (id)initWithConversionID:(id)arg1 label:(id)arg2 value:(id)arg3 isRepeatable:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

