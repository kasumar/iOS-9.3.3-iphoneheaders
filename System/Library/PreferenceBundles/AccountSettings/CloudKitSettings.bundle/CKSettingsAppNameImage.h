/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/CloudKitSettings.bundle/CloudKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface CKSettingsAppNameImage : NSObject {

	NSString* _appDisplayName;
	UIImage* _appImage;

}

@property (nonatomic,retain) NSString * appDisplayName;              //@synthesize appDisplayName=_appDisplayName - In the implementation block
@property (nonatomic,retain) UIImage * appImage;                     //@synthesize appImage=_appImage - In the implementation block
+(id)_displayNameCache;
+(id)_cachedDisplayNameForBundleID:(id)arg1 ;
+(id)_cachedImageForBundleID:(id)arg1 ;
+(void)lookUpAppNameImagesForApplicationBundleIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_setCachedDisplayName:(id)arg1 forBundleID:(id)arg2 ;
+(void)_setCachedImage:(id)arg1 forBundleID:(id)arg2 ;
+(id)_imageCache;
-(void)setAppImage:(UIImage *)arg1 ;
-(UIImage *)appImage;
-(NSString *)appDisplayName;
-(void)setAppDisplayName:(NSString *)arg1 ;
@end

