/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioStationMatchMetadata.h>

@class NSString, NSNumber;

@interface RadioStationMatchLibraryAlbumMetadata : RadioStationMatchMetadata {

	NSString* _albumName;
	NSNumber* _albumStoreID;
	NSNumber* _representativeCloudID;

}

@property (nonatomic,copy) NSString * albumName;                          //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy) NSNumber * albumStoreID;                       //@synthesize albumStoreID=_albumStoreID - In the implementation block
@property (nonatomic,copy) NSNumber * representativeCloudID;              //@synthesize representativeCloudID=_representativeCloudID - In the implementation block
+(id)metadataKey;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(id)copyMetadataDictionary;
-(NSNumber *)representativeCloudID;
-(NSNumber *)albumStoreID;
-(void)setRepresentativeCloudID:(NSNumber *)arg1 ;
-(void)setAlbumStoreID:(NSNumber *)arg1 ;
@end

