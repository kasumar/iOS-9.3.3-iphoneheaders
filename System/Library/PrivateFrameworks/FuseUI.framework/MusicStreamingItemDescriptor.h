/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MusicStreamingItemDescriptor : NSObject {

	long long _storeID;
	NSArray* _assetDescriptors;

}

@property (nonatomic,readonly) long long storeID;                            //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assetDescriptors;              //@synthesize assetDescriptors=_assetDescriptors - In the implementation block
-(id)description;
-(long long)storeID;
-(id)_initWithResponseDictionary:(id)arg1 ;
-(NSArray *)assetDescriptors;
@end

