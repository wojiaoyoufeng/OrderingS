//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UPOMP_BootViewController, UPOMP_Value;

@interface UPOMP : UIViewController
{
    UPOMP_Value *defaultValue;
    UPOMP_BootViewController *bootView;
    id <UPOMPDelegate> viewDelegate;
}

@property(nonatomic) id <UPOMPDelegate> viewDelegate; // @synthesize viewDelegate;
- (void)animateCloseOver;
- (void)closeView:(id)arg1;
- (void)getPluginSerialNo;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)animateOver;
- (_Bool)readXML:(id)arg1;
- (void)show;
- (void)setXmlData:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

