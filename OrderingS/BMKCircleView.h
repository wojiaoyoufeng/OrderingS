//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMKOverlayGLBasicView.h"

@class BMKCircle;

@interface BMKCircleView : BMKOverlayGLBasicView
{
}

- (void)glRender;
- (void)update3DView:(float)arg1 overlook:(float)arg2;
- (void)createPath;
@property(readonly, nonatomic) BMKCircle *circle;
- (id)initWithOverlay:(id)arg1;
- (id)initWithCircle:(id)arg1;

@end

