//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDlgView.h"

@class CSOpPeoplePickerPanel, NSObject<CSOpSelPeopleDlgPanelDelegate>;

@interface CSOpSelPeopleDlgPanel : BaseDlgView
{
    NSObject<CSOpSelPeopleDlgPanelDelegate> *_delegate;
    CSOpPeoplePickerPanel *_ctrlPickerPanel;
}

@property(retain, nonatomic) CSOpPeoplePickerPanel *ctrlPickerPanel; // @synthesize ctrlPickerPanel=_ctrlPickerPanel;
@property(nonatomic) __weak NSObject<CSOpSelPeopleDlgPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onHideAnimeFinished;
- (void)okBtnClick;
- (void)open:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)refresh:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

@end

