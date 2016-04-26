//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSUIButton.h"

@class CSDragItem;

@interface CSDragButton : CSUIButton
{
    id <CSDragButtonDelegate> _delegate;
    _Bool _dragging;
    CSDragItem *item;
}

@property(retain, nonatomic) CSDragItem *item; // @synthesize item;
@property(nonatomic) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic) id <CSDragButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
