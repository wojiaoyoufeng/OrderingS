//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AppUtil : NSObject
{
}

+ (id)textWithXmsSigatureAsNewlineForWeb:(id)arg1;
+ (id)textWithXmsSigature:(id)arg1;
+ (id)defaultReserveTime;
+ (id)colorDishLeftBg;
+ (id)colorOrange;
+ (id)colorDkRed;
+ (id)newFrmSubmitBtnWithLeft:(int)arg1 top:(int)arg2 width:(int)arg3 title:(id)arg4;
+ (id)typeIdWithUuid:(id)arg1;
+ (id)xmsUploadUrl:(id)arg1;
+ (id)xmsUrl:(id)arg1;
+ (void)navToUploadAddressBookWithVc:(id)arg1 fromPage:(id)arg2;
+ (void)navToBindTelWithVc:(id)arg1 fromPage:(id)arg2 needUploadAddressBook:(_Bool)arg3;
+ (void)navToWeiboShareWithVc:(id)arg1 uuid:(id)arg2 title:(id)arg3 detail:(id)arg4 icon:(id)arg5 restName:(id)arg6 restWap:(id)arg7 typeTag:(long long)arg8 toSns:(int)arg9;
+ (void)navToRestUploadPhotoPageWithVc:(id)arg1 restId:(id)arg2 restName:(id)arg3 foodId:(id)arg4 foodName:(id)arg5 img:(id)arg6 fromPage:(id)arg7 typeTag:(int)arg8 content:(id)arg9 style:(int)arg10;
+ (void)navToSelectCityPageWithVc:(id)arg1 fromMainPage:(_Bool)arg2;
+ (void)navToRestDiscountPageWithVc:(id)arg1 resInfo:(id)arg2 fromPage:(id)arg3 navStyle:(int)arg4;
+ (void)navToRestFoodPageWithVc:(id)arg1 foodId:(id)arg2 orderId:(id)arg3 readOnly:(_Bool)arg4;
+ (void)navToRestFoodPageWithVc:(id)arg1 foodId:(id)arg2;
+ (void)adjustSinaBind:(id)arg1;
+ (void)openAppStoreRateUrl;

@end
