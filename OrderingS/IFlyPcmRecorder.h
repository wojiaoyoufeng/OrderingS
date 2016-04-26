//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioSessionDelegate.h"

@interface IFlyPcmRecorder : NSObject <AVAudioSessionDelegate>
{
    double mSampleRate;
    unsigned int mBits;
    unsigned int mChannels;
    struct {
        struct OpaqueAudioFileID *audioFile;
        struct AudioStreamBasicDescription dataFormat;
        struct OpaqueAudioQueue *queue;
        struct AudioQueueLevelMeterState *audioLevels;
        struct AudioQueueBuffer *buffers[10];
        unsigned int bufferByteSize;
        long long currentPacket;
        _Bool recording;
        IFlyPcmRecorder *recorder;
    } state;
    id <IFlyPcmRecorderDelegate> _delegate;
}

+ (id)shareInstance;
@property id <IFlyPcmRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resumeRecorder;
- (void)pauseRecorder;
- (void)setupAudioFormat:(struct AudioStreamBasicDescription *)arg1;
- (void)setSample:(int)arg1;
- (void)stop;
- (_Bool)start;
- (void)dealloc;
- (void)interruption:(id)arg1;
- (void)endInterruption;
- (void)beginInterruption;
- (id)init;

@end

