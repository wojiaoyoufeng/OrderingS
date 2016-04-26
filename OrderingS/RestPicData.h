//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RestPicData : NSObject
{
    _Bool _groupTag;
    _Bool _haveCommentTag;
    _Bool _soIsFoodPicTag;
    int _smallPicWidth;
    int _smallPicHeight;
    int _hotNum;
    int _groupPicNum;
    NSString *_uuid;
    NSString *_smallPicUrl;
    NSString *_picUrl;
    NSString *_name;
    NSString *_commentUserPicUrl;
    NSString *_commentUserName;
    NSString *_commentDetail;
    NSString *_price;
    struct CGRect _soPanelFrame;
}

@property struct CGRect soPanelFrame; // @synthesize soPanelFrame=_soPanelFrame;
@property(nonatomic) _Bool soIsFoodPicTag; // @synthesize soIsFoodPicTag=_soIsFoodPicTag;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *commentDetail; // @synthesize commentDetail=_commentDetail;
@property(retain, nonatomic) NSString *commentUserName; // @synthesize commentUserName=_commentUserName;
@property(retain, nonatomic) NSString *commentUserPicUrl; // @synthesize commentUserPicUrl=_commentUserPicUrl;
@property(nonatomic) _Bool haveCommentTag; // @synthesize haveCommentTag=_haveCommentTag;
@property(nonatomic) int groupPicNum; // @synthesize groupPicNum=_groupPicNum;
@property(nonatomic) _Bool groupTag; // @synthesize groupTag=_groupTag;
@property(nonatomic) int hotNum; // @synthesize hotNum=_hotNum;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic) int smallPicHeight; // @synthesize smallPicHeight=_smallPicHeight;
@property(nonatomic) int smallPicWidth; // @synthesize smallPicWidth=_smallPicWidth;
@property(retain, nonatomic) NSString *smallPicUrl; // @synthesize smallPicUrl=_smallPicUrl;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end
