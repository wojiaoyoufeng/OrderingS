//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SMSReceiver : NSObject
{
    NSString *indexPhonetic;
    NSString *userName;
    NSString *phone;
    long long type;
    _Bool selected;
}

+ (id)initWithName:(id)arg1 Phone:(id)arg2 Phonetic:(id)arg3 Type:(long long)arg4;
@property long long type; // @synthesize type;
@property(nonatomic) _Bool selected; // @synthesize selected;
@property(retain, nonatomic) NSString *indexPhonetic; // @synthesize indexPhonetic;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(retain, nonatomic) NSString *phone; // @synthesize phone;
- (long long)Compare:(id)arg1;
- (id)toDictionary;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end

