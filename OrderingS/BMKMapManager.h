//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class BMReachability, NSMutableData, NSString, NSURLConnection;

@interface BMKMapManager : NSObject <NSURLConnectionDataDelegate>
{
    NSMutableData *_receiveData;
    NSURLConnection *_connection;
    _Bool finished;
    NSString *_key;
    id <BMKGeneralDelegate> _delegate;
    int permisionState;
    int errorCode;
    BMReachability *m_hostReach;
}

- (void).cxx_destruct;
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;
- (void)notifyPermissionState;
- (void)notifyPermissionState:(id)arg1;
- (void)notifyNewworkState:(id)arg1;
- (void)notifyNewworkState;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (_Bool)stop;
- (int)getTotalRecvFlaxLength;
- (int)getTotalSendFlaxLength;
- (_Bool)internalPermistioncheck:(id)arg1;
- (_Bool)start:(id)arg1 generalDelegate:(id)arg2;
- (id)encodeDictionary:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)additionalThread:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

