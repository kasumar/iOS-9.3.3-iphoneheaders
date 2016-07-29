/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudLegacyOperation.h>

@interface PLCloudLegacyPruneOperation : PLCloudLegacyOperation {

	BOOL _cancelled;

}
-(void)_resetCloudPlaceholderKindForAsset:(id)arg1 ;
-(unsigned long long)cost;
-(void)runOperationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)keepOriginalsEnabled;
-(id)_cloudResourceForCPLResource:(id)arg1 inPhotoLibrary:(id)arg2 outAssetsAffected:(id)arg3 ;
-(BOOL)canPruneResource;
-(void)markAsNotLocallyAvailable;
-(void)requestCancel;
@end

