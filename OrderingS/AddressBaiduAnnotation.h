//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BMKAnnotation.h"

@class NSString;

@interface AddressBaiduAnnotation : NSObject <BMKAnnotation>
{
    CDStruct_2c43369c coordinate;
    NSString *title;
    NSString *subtitle;
}

@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate;
- (void)dealloc;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

