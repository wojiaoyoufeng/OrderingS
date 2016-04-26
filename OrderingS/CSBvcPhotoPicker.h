//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class BaseVc, NSObject<CSBvcPhotoPickerDelegate>, NSString;

@interface CSBvcPhotoPicker : NSObject <UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    _Bool _isMultiPhotoPickTag;
    _Bool _isPhotoPickerVcOpenedTag;
    NSObject<CSBvcPhotoPickerDelegate> *_delegate;
    BaseVc *_nrVc;
    long long _photoPickTag;
    long long _multiMaxNum;
}

@property(nonatomic) _Bool isPhotoPickerVcOpenedTag; // @synthesize isPhotoPickerVcOpenedTag=_isPhotoPickerVcOpenedTag;
@property(nonatomic) long long multiMaxNum; // @synthesize multiMaxNum=_multiMaxNum;
@property(nonatomic) _Bool isMultiPhotoPickTag; // @synthesize isMultiPhotoPickTag=_isMultiPhotoPickTag;
@property(nonatomic) long long photoPickTag; // @synthesize photoPickTag=_photoPickTag;
@property BaseVc *nrVc; // @synthesize nrVc=_nrVc;
@property NSObject<CSBvcPhotoPickerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)cancelPickPhoto;
- (void)finishPickPhotoWithDataList:(id)arg1;
- (void)finishPickPhotoWithData:(id)arg1;
- (void)waitCancelMutliPickPhoto;
- (void)receivingMsgMultiPhotoPickCanceledListener:(id)arg1;
- (void)waitFinishMutliPickPhotoWithDataList:(id)arg1;
- (void)receivingMsgMultiPhotoPickFinishedListener:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)openSelWithFromCamera:(_Bool)arg1;
- (_Bool)chkIsSupportCamera;
- (_Bool)chkIsSupportAlbum;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmPickPhoto:(long long)arg1 multiTag:(_Bool)arg2 multiMaxNum:(long long)arg3 selType:(int)arg4;
- (void)confirmPickPhotoWithSelAlbum:(_Bool)arg1 selCamera:(_Bool)arg2 maxPickNum:(long long)arg3;
- (void)confirmPickPhoto:(long long)arg1 multiTag:(_Bool)arg2 multiMaxNum:(long long)arg3;
- (void)confirmPickPhoto:(long long)arg1 multiTag:(_Bool)arg2;
- (void)dealloc;
- (id)initWithVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

