/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAsset, NSString;

@interface PHAssetDescriptionProperties : NSObject {

	PHAsset* _asset;
	NSString* _assetDescription;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetDescription;              //@synthesize assetDescription=_assetDescription - In the implementation block
-(PHAsset *)asset;
-(NSString *)assetDescription;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 ;
@end

