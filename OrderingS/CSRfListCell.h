//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSObject<CSRfListCellDelegate>;

@interface CSRfListCell : UIView
{
    NSObject<CSRfListCellDelegate> *_delegate;
    UIView *_ctrlPanel1;
    UIView *_ctrlPanel2;
}

+ (int)cellHeight;
@property(retain, nonatomic) UIView *ctrlPanel2; // @synthesize ctrlPanel2=_ctrlPanel2;
@property(retain, nonatomic) UIView *ctrlPanel1; // @synthesize ctrlPanel1=_ctrlPanel1;
@property NSObject<CSRfListCellDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)addRestBtnClicked;
- (void)refreshCell:(id)arg1 data:(id)arg2 forList:(_Bool)arg3 cache:(_Bool)arg4;
- (void)refreshForMainPage:(id)arg1 data:(id)arg2 cache:(_Bool)arg3;
- (void)makeCell:(id)arg1 row:(long long)arg2 dto:(id)arg3;
- (void)dealloc;
- (id)initWithWidth:(float)arg1 height:(float)arg2;

@end

