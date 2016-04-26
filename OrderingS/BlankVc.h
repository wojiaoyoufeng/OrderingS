//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseVc.h"

@class NSMutableDictionary, NSString;

@interface BlankVc : BaseVc
{
    _Bool _pageIsLoadedTag;
    NSString *_toKey;
    NSMutableDictionary *_toParams;
}

@property(nonatomic) _Bool pageIsLoadedTag; // @synthesize pageIsLoadedTag=_pageIsLoadedTag;
@property(retain, nonatomic) NSMutableDictionary *toParams; // @synthesize toParams=_toParams;
@property(retain, nonatomic) NSString *toKey; // @synthesize toKey=_toKey;
- (void)to;
- (void)directNavTo:(id)arg1 params:(id)arg2;
- (void)directNavTo:(id)arg1;
- (void)onPopFromNavStack;
- (void)onHide;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)onShow;
- (void)onWillShow;
- (void)onClose;
- (void)onCleanData;
- (void)onCreate;

@end

