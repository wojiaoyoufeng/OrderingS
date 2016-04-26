//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BMKPoiDetailResult : NSObject
{
    NSString *_name;
    CDStruct_2c43369c _pt;
    NSString *_address;
    NSString *_phone;
    NSString *_uid;
    NSString *_tag;
    NSString *_detailUrl;
    NSString *_type;
    double _price;
    double _overallRating;
    double _tasteRating;
    double _serviceRating;
    double _environmentRating;
    double _facilityRating;
    double _hygieneRating;
    double _technologyRating;
    int _imageNum;
    int _grouponNum;
    int _commentNum;
    int _favoriteNum;
    int _checkInNum;
    NSString *_shopHours;
}

@property(retain, nonatomic) NSString *shopHours; // @synthesize shopHours=_shopHours;
@property(nonatomic) int checkInNum; // @synthesize checkInNum=_checkInNum;
@property(nonatomic) int favoriteNum; // @synthesize favoriteNum=_favoriteNum;
@property(nonatomic) int commentNum; // @synthesize commentNum=_commentNum;
@property(nonatomic) int grouponNum; // @synthesize grouponNum=_grouponNum;
@property(nonatomic) int imageNum; // @synthesize imageNum=_imageNum;
@property(nonatomic) double technologyRating; // @synthesize technologyRating=_technologyRating;
@property(nonatomic) double hygieneRating; // @synthesize hygieneRating=_hygieneRating;
@property(nonatomic) double facilityRating; // @synthesize facilityRating=_facilityRating;
@property(nonatomic) double environmentRating; // @synthesize environmentRating=_environmentRating;
@property(nonatomic) double serviceRating; // @synthesize serviceRating=_serviceRating;
@property(nonatomic) double tasteRating; // @synthesize tasteRating=_tasteRating;
@property(nonatomic) double overallRating; // @synthesize overallRating=_overallRating;
@property(nonatomic) double price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) CDStruct_c3b9c2ee pt; // @synthesize pt=_pt;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

