/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLSecurity : NSObject
+(BOOL)secTask:(SecTaskRef)arg1 hasEntitlement:(id)arg2 ;
+(BOOL)connection:(id)arg1 hasEntitlement:(id)arg2 ;
+(BOOL)isEntitledForCloudSharingData;
+(BOOL)canSkipUserPromptsForProcessWithName:(id)arg1 identifier:(int)arg2 ;
+(BOOL)connectionIsEntitledForPhotoKit:(id)arg1 ;
+(BOOL)isEntitledForPhotoKit;
@end

