/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioStationMatchMetadata.h>

@class NSNumber;

@interface RadioStationMatchStoreMetadata : RadioStationMatchMetadata {

	NSNumber* _storeID;

}

@property (nonatomic,copy) NSNumber * storeID;              //@synthesize storeID=_storeID - In the implementation block
+(id)metadataKey;
-(NSNumber *)storeID;
-(void)setStoreID:(NSNumber *)arg1 ;
-(id)copyMetadataDictionary;
@end
