//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface BMKGradient : NSObject
{
    NSArray *_mColors;
    NSArray *_mStartPoints;
}

@property(retain, nonatomic) NSArray *mStartPoints; // @synthesize mStartPoints=_mStartPoints;
@property(retain, nonatomic) NSArray *mColors; // @synthesize mColors=_mColors;
- (void).cxx_destruct;
- (id)initWithColors:(id)arg1 startPoints:(id)arg2;
- (id)initWithColors:(id)arg1 startPoints:(id)arg2 ColorMapSize:(int)arg3;
- (id)init;

@end

