//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseLayoutSupportVc, CSRlPanel, NSObject<CSRlCheckBoxDelegate>, UIButton, UIImageView;

@interface CSRlCheckBox : UIView
{
    _Bool _selectTag;
    _Bool _canCheckTag;
    int _dataIndex;
    int _num;
    NSObject<CSRlCheckBoxDelegate> *_delegate;
    BaseLayoutSupportVc *_nrVc;
    UIImageView *_ctrlChkBox;
    CSRlPanel *_ctrlRlPanel;
    UIButton *_ctrlBtn;
}

+ (int)panelHeight;
+ (int)panelWidth;
@property(nonatomic) int num; // @synthesize num=_num;
@property(nonatomic) _Bool canCheckTag; // @synthesize canCheckTag=_canCheckTag;
@property(nonatomic) _Bool selectTag; // @synthesize selectTag=_selectTag;
@property(nonatomic) int dataIndex; // @synthesize dataIndex=_dataIndex;
@property(retain, nonatomic) UIButton *ctrlBtn; // @synthesize ctrlBtn=_ctrlBtn;
@property(retain, nonatomic) CSRlPanel *ctrlRlPanel; // @synthesize ctrlRlPanel=_ctrlRlPanel;
@property(retain, nonatomic) UIImageView *ctrlChkBox; // @synthesize ctrlChkBox=_ctrlChkBox;
@property BaseLayoutSupportVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSRlCheckBoxDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)changeChkBoxStateWithSelTag:(_Bool)arg1;
- (void)btnClicked;
- (void)refreshWithData:(id)arg1 dataIndex:(int)arg2 canCheck:(_Bool)arg3;
- (void)refreshWithData:(id)arg1 dataIndex:(int)arg2;
- (void)refreshWithDataForShow:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1 left:(int)arg2 top:(int)arg3;

@end

