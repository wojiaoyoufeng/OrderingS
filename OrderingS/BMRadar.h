//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BMRadar : NSObject
{
    id <BMRadarDelegate> _delegate;
    CDStruct_2c43369c _lastPt;
}

@property(nonatomic) __weak id <BMRadarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_c3b9c2ee lastPt; // @synthesize lastPt=_lastPt;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onRadarEngineNotification:(id)arg1;
- (_Bool)getRadarNearbySearchRequest:(id)arg1 userId:(id)arg2;
- (_Bool)clearMyInfoRequest:(id)arg1;
- (_Bool)uploadInfoRequest:(id)arg1 location:(CDStruct_c3b9c2ee)arg2 extInfo:(id)arg3;
- (void)dealloc;
- (id)init;

@end

