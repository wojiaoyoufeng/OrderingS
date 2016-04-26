//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPOMP_ViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView, UITableViewCell, UITextView, UIView;

@interface UPOMP_CardFinishViewController : UPOMP_ViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *myTabelView;
    NSMutableArray *cellArray;
    UITableViewCell *infoTopCell;
    UIImageView *infoTopBG;
    UITableViewCell *infoCell;
    UIImageView *infoBG;
    UIImageView *infoLeftBG;
    UILabel *infoText;
    UIImageView *infoIcon;
    UITableViewCell *infoBottomCell;
    UIImageView *infoBottomBG;
    UITableViewCell *finishCell;
    UIButton *finishButton;
    UITableViewCell *titelTextCell;
    UILabel *titelText;
    UITableViewCell *helpTextCell;
    UITextView *helpText;
    UITableViewCell *topCell;
    UIImageView *topBG;
    UITableViewCell *bankNameCell;
    UIImageView *bankNameBG;
    UIImageView *bankNameLeftBG;
    UILabel *bankNameText;
    UILabel *bankNameValue;
    UIView *bankNameLine;
    UITableViewCell *cardTypeCell;
    UIImageView *cardTypeBG;
    UIImageView *cardTypeLeftBG;
    UILabel *cardTypeText;
    UILabel *cardTypeValue;
    UIView *cardTypeLine;
    UIImageView *cardTypeIcon;
    UITableViewCell *cardNumCell;
    UIImageView *cardNumBG;
    UIImageView *cardNumLeftBG;
    UILabel *cardNumText;
    UILabel *cardNumValue;
    UIView *cardNumLine;
    UITableViewCell *phoneNumCell;
    UIImageView *phoneNumBG;
    UIImageView *phoneNumLeftBG;
    UILabel *phoneNumText;
    UILabel *phoneNumValue;
    UIImageView *phoneNumIcon;
    UITableViewCell *bottomCell;
    UIImageView *bottomBG;
    int willAddCard;
}

- (void)finish:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

