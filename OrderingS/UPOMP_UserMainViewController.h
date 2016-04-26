//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPOMP_ViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView, UITableViewCell, UIView;

@interface UPOMP_UserMainViewController : UPOMP_ViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *myTabelView;
    NSMutableArray *cellArray;
    UITableViewCell *infoTopCell;
    UIImageView *infoTopBG;
    UITableViewCell *userNameCell;
    UIImageView *userNameBG;
    UIImageView *userNameLeftBG;
    UILabel *userNameText;
    UILabel *userNameValue;
    UIView *userNameLine;
    UIImageView *userIcon;
    UITableViewCell *welComeCell;
    UIImageView *welComeBG;
    UIImageView *welComeLeftBG;
    UILabel *welComeText;
    UILabel *welComeValue;
    UITableViewCell *infoBottomCell;
    UIImageView *infoBottomBG;
    UITableViewCell *infoTopCell2;
    UIImageView *infoTopBG2;
    UITableViewCell *infoBottomCell2;
    UIImageView *infoBottomBG2;
    UIImageView *cardBG;
    UIImageView *cardLeftBG;
    UILabel *cardText;
    UILabel *cardValue;
    UIView *cardLine;
    UIImageView *cardIcon;
    UITableViewCell *cardCell;
    UIImageView *phoneNumBG;
    UIImageView *phoneNumLeftBG;
    UILabel *phoneNumText;
    UILabel *phoneNumValue;
    UIImageView *phoneNumIcon;
    UITableViewCell *phoneNumCell;
    UIButton *changPhoneButton;
    UIButton *changePasswordButton;
    UIButton *cardMainButton;
    UITableViewCell *finishCell;
    UIButton *backButton;
}

- (void)cardMain:(id)arg1;
- (void)changePassword:(id)arg1;
- (void)changePhone:(id)arg1;
- (void)back:(id)arg1;
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
