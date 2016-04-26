//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageSwirlFilter : GPUImageFilter
{
    int radiusUniform;
    int centerUniform;
    int angleUniform;
    double _radius;
    double _angle;
    struct CGPoint _center;
}

@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (void)setInputRotation:(int)arg1 atIndex:(long long)arg2;
- (id)init;

@end

