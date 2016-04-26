//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSingleListView.h"

@class CommonTypeListDto, NSObject<CSChatQuestionPanelDelegate>, NSString;

@interface CSChatQuestionPanel : BaseSingleListView
{
    NSObject<CSChatQuestionPanelDelegate> *_delegate;
    CommonTypeListDto *_dto;
    NSString *_keywords;
}

@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) CommonTypeListDto *dto; // @synthesize dto=_dto;
@property NSObject<CSChatQuestionPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)unitTest;
- (void)stopQueryTimer;
- (void)handleQueryTimer;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 indexPath:(id)arg2;
- (void)createCell:(id)arg1;
- (void)completeQueryParams;
- (void)processWhenRequestErrorEnd;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)completeLoadData;
- (void)onHttpRequestSuccess:(id)arg1;
- (void)loadData;
- (void)queryQuestions:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end
