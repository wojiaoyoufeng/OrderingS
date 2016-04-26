//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseBizVc, NSMutableArray, NSObject<CSTopSwitchDelegate>;

@interface CSTopSwitch : UIView
{
    NSObject<CSTopSwitchDelegate> *_delegate;
    BaseBizVc *_nrVc;
    NSMutableArray *_btnList;
    NSMutableArray *_bubbleList;
    long long _idx;
}

@property(nonatomic) long long idx; // @synthesize idx=_idx;
@property(retain, nonatomic) NSMutableArray *bubbleList; // @synthesize bubbleList=_bubbleList;
@property(retain, nonatomic) NSMutableArray *btnList; // @synthesize btnList=_btnList;
@property BaseBizVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSTopSwitchDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)btnClicked:(id)arg1;
- (void)changeBtnState:(id)arg1 hot:(_Bool)arg2;
- (long long)findIdxWithSelectId:(id)arg1;
- (void)changeBubbleWithSelectId:(id)arg1 num:(long long)arg2;
- (void)clickAtIdx:(long long)arg1;
- (void)focusAtIdx:(long long)arg1;
- (void)focusAtSelectId:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1 width:(float)arg2 btnDataList:(id)arg3;

@end

