//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASIHTTPRequest, NSObject<CSImageDownloaderDelegate>;

@interface CSImageDownloader : NSObject
{
    NSObject<CSImageDownloaderDelegate> *delegate;
    int delegateIsa;
    ASIHTTPRequest *req;
    _Bool useSecondCacheTag;
}

@property(nonatomic) _Bool useSecondCacheTag; // @synthesize useSecondCacheTag;
@property(retain, nonatomic) ASIHTTPRequest *req; // @synthesize req;
@property(nonatomic) int delegateIsa; // @synthesize delegateIsa;
@property(nonatomic) NSObject<CSImageDownloaderDelegate> *delegate; // @synthesize delegate;
- (void)notifyBack:(_Bool)arg1 dir:(id)arg2 maxFileNum:(int)arg3 url:(id)arg4 data:(id)arg5;
- (void)requestFinishedOrFailed:(id)arg1 finished:(_Bool)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)downLoadWithDir:(id)arg1 maxFileNum:(int)arg2 url:(id)arg3 useSecondCache:(_Bool)arg4;
- (void)downLoadWithDir:(id)arg1 maxFileNum:(int)arg2 url:(id)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
