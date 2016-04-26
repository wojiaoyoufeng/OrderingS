//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, UPOMP_Ka3Des, UPOMP_KaBase64, UPOMP_KaMD5, UPOMP_KaPinBlock, UPOMP_KaRSA, UPOMP_KaTextFieldToolBarViewController, UPOMP_MainViewController;

@interface UPOMP_Value : NSObject
{
    UPOMP_KaBase64 *base64;
    UPOMP_Ka3Des *_3Des;
    UPOMP_KaRSA *rsa;
    UPOMP_KaMD5 *md5;
    UPOMP_KaPinBlock *pinBlock;
    NSMutableDictionary *upompDictionary;
    NSArray *t1;
    NSArray *t2;
    NSArray *t3;
    NSArray *t4;
    UPOMP_KaTextFieldToolBarViewController *textFieldToolBar;
    UPOMP_MainViewController *mainView;
    struct CGRect _viewFrame;
}

@property struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(nonatomic) UPOMP_MainViewController *mainView; // @synthesize mainView;
@property(nonatomic) UPOMP_KaTextFieldToolBarViewController *textFieldToolBar; // @synthesize textFieldToolBar;
@property(readonly, nonatomic) NSArray *t4; // @synthesize t4;
@property(readonly, nonatomic) NSArray *t3; // @synthesize t3;
@property(readonly, nonatomic) NSArray *t2; // @synthesize t2;
@property(readonly, nonatomic) NSArray *t1; // @synthesize t1;
@property(readonly, nonatomic) NSMutableDictionary *upompDictionary; // @synthesize upompDictionary;
@property(readonly, nonatomic) UPOMP_KaPinBlock *pinBlock; // @synthesize pinBlock;
@property(readonly, nonatomic) UPOMP_KaMD5 *md5; // @synthesize md5;
@property(readonly, nonatomic) UPOMP_KaRSA *rsa; // @synthesize rsa;
@property(readonly, nonatomic) UPOMP_Ka3Des *_3Des; // @synthesize _3Des;
@property(readonly, nonatomic) UPOMP_KaBase64 *base64; // @synthesize base64;
- (_Bool)parseConfig:(id)arg1;
- (_Bool)getConfigInfos;
- (id)setPostDataByAppName:(id)arg1 keys:(id)arg2 values:(id)arg3 anotherInfo:(id)arg4;
- (void)animation_FadeIN_OUT_DOWN:(id)arg1 delegate:(id)arg2;
- (void)animation_FadeIN_OUT_UP:(id)arg1 delegate:(id)arg2;
- (void)animation_FadeIN_OUT_FromLeft:(id)arg1 delegate:(id)arg2;
- (void)animation_FadeIN_OUT_FromRight:(id)arg1 delegate:(id)arg2;
- (void)animateEaseInEaseOut:(id)arg1 delegate:(id)arg2;
- (id)decodeWithRSA3Des:(id)arg1;
- (id)getMyBundlePath:(id)arg1;
- (id)getMyBundle;
- (id)formatCardName:(id)arg1 hasDefault:(_Bool)arg2;
- (id)formatPhoneNum:(id)arg1;
- (id)formatCardNum:(id)arg1;
- (id)formatTime:(id)arg1;
- (id)formatPassword:(id)arg1;
- (id)formatAmt:(id)arg1;
- (_Bool)checkIsChinese:(id)arg1;
- (_Bool)amtchString:(id)arg1 checkString:(id)arg2;
- (void)restData;
- (_Bool)saveXMLbyTag_onLine:(id)arg1 xmlElement:(struct _UPOMP_TBXMLElement *)arg2 xml:(id)arg3;
- (_Bool)saveXMLbyTag:(id)arg1 xmlElement:(struct _UPOMP_TBXMLElement *)arg2 xml:(id)arg3;
- (_Bool)checkAppType:(id)arg1;
- (id)getXML:(id)arg1;
- (id)init;
- (void)dealloc;

@end

