//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, UIImage;

@interface UploadImageData : NSObject
{
    long long _imageSize;
    long long _typeTag;
    NSString *_name;
    double _price;
    NSString *_unitId;
    NSData *_soData;
    UIImage *_soImageData;
    NSString *_soUnitName;
}

@property(retain, nonatomic) NSString *soUnitName; // @synthesize soUnitName=_soUnitName;
@property(retain, nonatomic) UIImage *soImageData; // @synthesize soImageData=_soImageData;
@property(retain, nonatomic) NSData *soData; // @synthesize soData=_soData;
@property(retain, nonatomic) NSString *unitId; // @synthesize unitId=_unitId;
@property(nonatomic) double price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long typeTag; // @synthesize typeTag=_typeTag;
@property(nonatomic) long long imageSize; // @synthesize imageSize=_imageSize;
- (id)newObj;
- (id)newDic;
- (void)dealloc;
- (id)initWithImageData:(id)arg1;
- (id)initWithDefault;

@end
