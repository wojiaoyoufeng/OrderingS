//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IFlyAudioPlayerDelegate.h"
#import "TTSEngineDelegate.h"

@class IFlyPcmPlayer, NSOperationQueue, NSString, TTSEngine;

@interface IFlyMscSynthesizer : NSObject <TTSEngineDelegate, IFlyAudioPlayerDelegate>
{
    NSOperationQueue *_queue;
    NSString *_sessionParams;
    IFlyPcmPlayer *_pcmPlayer;
    TTSEngine *_ttsEngine;
    int _bufferProgress;
    int _playProgress;
    int _errorCode;
    id <IFlySpeechSynthesizerDelegate> _delegate;
    _Bool _isCanceled;
    _Bool _isEngineFinished;
}

@property _Bool isEngineFinished; // @synthesize isEngineFinished=_isEngineFinished;
- (void)onBufferPrecent:(int)arg1;
- (void)onResume;
- (void)onStop:(int)arg1;
- (void)onPaused;
- (void)onPlay;
- (void)onBuffer;
- (void)onEnd:(int)arg1;
- (void)onAudioBuffer:(const void *)arg1 length:(unsigned int)arg2 status:(int)arg3;
- (void)dealloc;
- (void)playCancel;
- (void)playPause;
- (void)playResume;
- (void)playEnd:(id)arg1;
- (void)playBuffer;
- (void)playBegin;
- (void)cancel;
- (void)replay;
- (void)resume;
- (void)pause;
- (void)playText:(id)arg1 params:(id)arg2;
- (id)initWithParams:(id)arg1 delegate:(id)arg2;

@end

