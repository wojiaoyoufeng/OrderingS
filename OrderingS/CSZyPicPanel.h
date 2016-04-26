//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CSUIImageView, NSMutableDictionary, NSObject<CSZyPicPanelDelegate>;

@interface CSZyPicPanel : UIView
{
    NSObject<CSZyPicPanelDelegate> *_delegate;
    CSUIImageView *_ctrlPic;
    NSMutableDictionary *_dic;
}

@property(retain, nonatomic) NSMutableDictionary *dic; // @synthesize dic=_dic;
@property(retain, nonatomic) CSUIImageView *ctrlPic; // @synthesize ctrlPic=_ctrlPic;
@property NSObject<CSZyPicPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)btnClicked;
- (void)setImg:(id)arg1;
- (void)setImageWithUrl:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 canClick:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

