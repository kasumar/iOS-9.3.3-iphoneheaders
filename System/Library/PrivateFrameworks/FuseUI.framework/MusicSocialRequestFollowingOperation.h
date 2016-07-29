/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicSocialAbstractOperation.h>

@class NSNumber, NSString;

@interface MusicSocialRequestFollowingOperation : MusicSocialAbstractOperation {

	NSNumber* _dsid;
	NSNumber* _storeEntityID;
	NSString* _entityType;
	BOOL _requestEntity;

}

@property (nonatomic,copy) NSNumber * storeEntityID;              //@synthesize storeEntityID=_storeEntityID - In the implementation block
-(void)processResponse:(id)arg1 response:(id)arg2 ;
-(id)serviceURL:(id)arg1 ;
-(NSNumber *)storeEntityID;
-(void)setStoreEntityID:(NSNumber *)arg1 ;
-(id)initWithDsid:(id)arg1 ;
-(id)initWithEnityId:(id)arg1 entityType:(id)arg2 ;
-(id)requestProperties:(id)arg1 ;
@end

