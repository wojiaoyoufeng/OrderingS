//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AIJKSerializer : NSObject
{
    struct AIJKEncodeState *encodeState;
}

+ (id)serializeObject:(id)arg1 options:(unsigned long long)arg2 encodeOption:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4 delegate:(id)arg5 selector:(SEL)arg6 error:(id *)arg7;
- (void)dealloc;
- (void)releaseState;
- (id)serializeObject:(id)arg1 options:(unsigned long long)arg2 encodeOption:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4 delegate:(id)arg5 selector:(SEL)arg6 error:(id *)arg7;

@end

