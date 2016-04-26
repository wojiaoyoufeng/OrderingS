//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSString, NSTimer, UIButton, UIImageView, UILabel, UITableViewCell, UIView, UPOMP, UPOMP_AgreementView, UPOMP_CardInfoViewController, UPOMP_ErrorInfoViewController, UPOMP_KaTextFieldToolBarViewController, UPOMP_LoadingViewController, UPOMP_Value, UPOMP_ViewCenter, UPOMP_ViewController;

@interface UPOMP_MainViewController : UIViewController <UIAlertViewDelegate>
{
    UIImageView *naBar;
    UIView *mainView;
    UIImageView *BGView;
    UIImageView *naBarLogo;
    UIImageView *botLine;
    UPOMP *upomp;
    UPOMP_ViewController *viewController;
    UPOMP_ViewController *tempviewController;
    UPOMP_LoadingViewController *loadingView;
    UPOMP_ErrorInfoViewController *errorInfoView;
    UPOMP_CardInfoViewController *cardInfoView;
    NSMutableArray *viewIDArray;
    UPOMP_ViewCenter *viewCenter;
    int viewID;
    UPOMP_AgreementView *agreementView;
    UITableViewCell *merchantNameCell;
    UILabel *merchantNameText;
    UILabel *merchantNameValue;
    UIImageView *merchantNameBG;
    UIImageView *merchantNameRightBG;
    UIView *merchantNameLine;
    UITableViewCell *merchantAmtCell;
    UILabel *merchantAmtText;
    UILabel *merchantAmtValue;
    UIImageView *merchantAmtBG;
    UIImageView *merchantAmtRightBG;
    UIView *merchantAmtLine;
    UITableViewCell *merchantOrderIDCell;
    UILabel *merchantOrderIDText;
    UILabel *merchantOrderIDValue;
    UIImageView *merchantOrderIDBG;
    UIImageView *merchantOrderIDRightBG;
    UIView *merchantOrderIDLine;
    UITableViewCell *merchantOrderTimeCell;
    UILabel *merchantOrderTimeText;
    UILabel *merchantOrderTimeValue;
    UIImageView *merchantOrderTimeBG;
    UIImageView *merchantOrderTimeRightBG;
    UIView *merchantOrderTimeLine;
    UITableViewCell *merchantOrderDescCell;
    UILabel *merchantOrderDescText;
    UILabel *merchantOrderDescValue;
    UIImageView *merchantOrderDescBG;
    UIImageView *merchantOrderDescRightBG;
    UITableViewCell *topCell;
    UIImageView *topBG;
    UITableViewCell *bottomCell;
    UIImageView *bottomBG;
    UIButton *moreButton;
    UIButton *backButton;
    UIButton *aboutButton;
    NSMutableArray *orderInfoArray;
    _Bool isMoreInfo;
    _Bool isAnimation;
    NSTimer *timer;
    NSTimer *addCardTimer;
    _Bool timerRun;
    _Bool addCardTimerRun;
    UIButton *titelButton;
    UPOMP_Value *upompValue;
    UPOMP_KaTextFieldToolBarViewController *textFieldToolBar;
    _Bool isPayLogin;
    _Bool loginTimerRun;
    id <MoreButtonDelegate> moreButtonDelegate;
}

@property _Bool loginTimerRun; // @synthesize loginTimerRun;
@property _Bool addCardTimerRun; // @synthesize addCardTimerRun;
@property _Bool timerRun; // @synthesize timerRun;
@property(nonatomic) id <MoreButtonDelegate> moreButtonDelegate; // @synthesize moreButtonDelegate;
@property _Bool isPayLogin; // @synthesize isPayLogin;
@property(retain, nonatomic) UPOMP_ViewController *viewController; // @synthesize viewController;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkClose;
- (void)showAboutButton;
- (void)about:(id)arg1;
- (void)backAct:(id)arg1;
- (void)animateOver;
- (void)countDown;
- (void)timerStart;
- (void)willRe;
- (void)timerOver;
- (void)addCardCountDown;
- (void)addCardTimerStart;
- (void)addCardTimerOver;
- (void)showCardInfo;
- (void)moreAct:(id)arg1;
- (void)backTo:(int)arg1;
- (_Bool)cardinfoClose;
- (void)showAgreement;
- (void)showOtherlogin:(id)arg1;
- (void)animationMainView:(_Bool)arg1;
- (void)removeLoadingView;
- (void)addLoadingViewByLoadingType:(int)arg1;
- (void)titleShow;
- (void)setSelectInfo:(id)arg1 backButtonStr:(id)arg2 okButtonStr:(id)arg3 type:(int)arg4;
- (void)setErrorInfo:(id)arg1;
- (void)showTimeOver;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)back;
- (void)replaceView:(int)arg1;
- (void)changeView:(int)arg1;
- (void)addTitelButton:(id)arg1;
- (void)addMoreButton:(id)arg1;
- (id)orderInfoCellForRowAtIndexPath:(id)arg1;
- (long long)orderInfoHeightForRowAtIndexPath:(id)arg1;
- (long long)orderInfoNumberOfRowsInSection;
- (void)checkTextSize:(id)arg1 cell:(id)arg2 bg:(id)arg3 rightBg:(id)arg4 line:(id)arg5 text:(id)arg6;
- (void)setUPOMPValue:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)removeForKeyboardNotifications;
- (void)registerForKeyboardNotifications;
- (void)closeView:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 upomp:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

