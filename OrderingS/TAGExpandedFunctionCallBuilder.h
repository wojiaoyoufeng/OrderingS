//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, TAGPValue;

@interface TAGExpandedFunctionCallBuilder : NSObject
{
    NSMutableDictionary *_propertiesMap;
    TAGPValue *_pushAfterEvaluate;
}

@property(retain, nonatomic) TAGPValue *pushAfterEvaluate; // @synthesize pushAfterEvaluate=_pushAfterEvaluate;
@property(retain, nonatomic) NSMutableDictionary *propertiesMap; // @synthesize propertiesMap=_propertiesMap;
- (void).cxx_destruct;
- (id)build;
- (void)addPropertyWithValue:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

