//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AudioStreamAnalyzer, NSMutableData, NSString, NSURLConnection;

@interface AudioStreamPlayer : NSObject
{
    struct OpaqueAudioQueue *audioQueue;
    AudioStreamAnalyzer *audioAnalyzer;
    NSURLConnection *urlConnection;
    NSString *url;
    _Bool isDownloading;
    struct AudioTimeStamp seekTime;
    long long fileLength;
    _Bool isReBuffer;
    double bufferLength;
    double bufferTime;
    NSMutableData *totalAudioData;
    int playerStatus;
    struct OpaqueAudioQueueTimeline *timeLine;
    id pUserData;
    unsigned long long processedPacketsCount;
    unsigned long long processedPacketsSizeTotal;
    double progress;
    double duration;
    double buffedProgress;
    id delegate;
    SEL audioCallback;
    int firedEvent;
    _Bool isNoDataPause;
    unsigned long long totalPararaphCount;
    unsigned long long remainCount;
    unsigned long long releaseCount;
}

@property(nonatomic) SEL audioCallback; // @synthesize audioCallback;
@property(retain, nonatomic) id pUserData; // @synthesize pUserData;
@property(nonatomic) double bufferTime; // @synthesize bufferTime;
@property(readonly, nonatomic) NSString *url; // @synthesize url;
- (void).cxx_destruct;
- (void)doAudioQueueStatus:(struct OpaqueAudioQueue *)arg1 WithAudioQueuePropertyID:(unsigned int)arg2;
- (void)resetCount;
- (void)doAudioQueueOutput:(struct OpaqueAudioQueue *)arg1 WithAudioQueueBuffer:(struct AudioQueueBuffer *)arg2;
- (void)audioDidReceivedData:(id)arg1;
- (void)propertyDidFinished:(id)arg1;
- (_Bool)allocateBufferWithData:(id)arg1 packetCount:(unsigned int)arg2 packetDescriptions:(struct AudioStreamPacketDescription *)arg3 outBufferRef:(struct AudioQueueBuffer **)arg4;
- (_Bool)createAudioQueue:(struct AudioStreamBasicDescription)arg1;
- (double)calculateBitRate;
@property(readonly, nonatomic) double buffedProgress; // @synthesize buffedProgress;
@property(readonly, nonatomic) double duration; // @synthesize duration;
@property(readonly, nonatomic) double progress; // @synthesize progress;
- (int)getEvent;
- (void)setStatus:(int)arg1;
- (int)getStatus;
- (_Bool)seekToTime:(double)arg1;
- (_Bool)reset;
- (_Bool)destroy;
- (_Bool)stop:(_Bool)arg1;
- (void)setTotalCount:(unsigned long long)arg1;
- (_Bool)pause;
- (_Bool)play;
- (_Bool)feedData:(id)arg1 isWavType:(_Bool)arg2;
- (_Bool)feedData:(id)arg1;
- (void)setDelegateObject:(id)arg1 setCbName:(id)arg2;
- (id)init;

@end

