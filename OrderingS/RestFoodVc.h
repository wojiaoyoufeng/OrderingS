//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSingleListVc.h"

#import "CSPageViewDelegate.h"
#import "CSRestFoodCellViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextViewDelegate.h"

@class CSKeyboardBar, CSPageView, CSUIPlaceHolderTextView, NSMutableArray, NSString, ResFoodPicDataDTO, UIImageView, UILabel, UIView;

@interface RestFoodVc : BaseSingleListVc <CSPageViewDelegate, CSRestFoodCellViewDelegate, UITextViewDelegate, UIScrollViewDelegate>
{
    _Bool _postPhotoTag;
    UIView *_ctrlTableHeader;
    UILabel *_ctrlFoodName;
    CSPageView *_ctrlImageShow;
    UIView *_ctrlScoreView;
    UILabel *_ctrlLbSorce;
    UIImageView *_ctrlCommentPanel;
    CSUIPlaceHolderTextView *_ctrlTvComment;
    CSKeyboardBar *_ctrlKeyboardBar;
    UILabel *_ctrlTableTitle;
    NSMutableArray *_arrFoodView;
    NSString *_foodId;
    ResFoodPicDataDTO *_dto;
    NSString *_orderId;
    long long _likeTypeTag;
    long long _scoredCount;
    double _offsetY;
}

@property _Bool postPhotoTag; // @synthesize postPhotoTag=_postPhotoTag;
@property double offsetY; // @synthesize offsetY=_offsetY;
@property long long scoredCount; // @synthesize scoredCount=_scoredCount;
@property long long likeTypeTag; // @synthesize likeTypeTag=_likeTypeTag;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) ResFoodPicDataDTO *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) NSString *foodId; // @synthesize foodId=_foodId;
@property(retain, nonatomic) NSMutableArray *arrFoodView; // @synthesize arrFoodView=_arrFoodView;
@property(retain, nonatomic) UILabel *ctrlTableTitle; // @synthesize ctrlTableTitle=_ctrlTableTitle;
@property(retain, nonatomic) CSKeyboardBar *ctrlKeyboardBar; // @synthesize ctrlKeyboardBar=_ctrlKeyboardBar;
@property(retain, nonatomic) CSUIPlaceHolderTextView *ctrlTvComment; // @synthesize ctrlTvComment=_ctrlTvComment;
@property(retain, nonatomic) UIImageView *ctrlCommentPanel; // @synthesize ctrlCommentPanel=_ctrlCommentPanel;
@property(retain, nonatomic) UILabel *ctrlLbSorce; // @synthesize ctrlLbSorce=_ctrlLbSorce;
@property(retain, nonatomic) UIView *ctrlScoreView; // @synthesize ctrlScoreView=_ctrlScoreView;
@property(retain, nonatomic) CSPageView *ctrlImageShow; // @synthesize ctrlImageShow=_ctrlImageShow;
@property(retain, nonatomic) UILabel *ctrlFoodName; // @synthesize ctrlFoodName=_ctrlFoodName;
@property(retain, nonatomic) UIView *ctrlTableHeader; // @synthesize ctrlTableHeader=_ctrlTableHeader;
- (void)btnClick_PostComment:(id)arg1;
- (void)btnClick_ShowCommentPanel:(id)arg1;
- (void)btnClick_Score:(id)arg1;
- (id)newScoreButton:(long long)arg1;
- (void)flushFoodLikeNumber:(long long)arg1;
- (void)handlePostFoodComment:(id)arg1;
- (void)flushTableHeader;
- (void)restFoodCellViewBtn:(id)arg1 showOriginal:(id)arg2;
- (void)alertView:(id)arg1 hideWithBtnIdx:(long long)arg2;
- (void)finishPickPhotoWithDataList:(id)arg1;
- (void)handleUploadImage;
- (void)handleDeltaPoint:(struct CGPoint)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)keyboardBarDidTapHideBtn:(id)arg1;
- (void)keyboard:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (void)makeCell:(id)arg1 indexPath:(id)arg2;
- (void)createCell:(id)arg1;
- (void)completeQueryParamsWithTag:(long long)arg1;
- (void)completeLoadData;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2 tag:(long long)arg3;
- (void)onHttpRequestSuccess:(id)arg1 msg:(id)arg2 tag:(long long)arg3;
- (void)loadData;
- (void)topViewRightBtnClicked:(id)arg1;
- (void)topViewBackBtnClicked:(id)arg1;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)onWillShow;
- (void)onParsePageParams:(id)arg1;
- (void)onClose;
- (void)onCleanData;
- (void)onCreate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
