/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKDAppContainerIntersectionMetadata : NSObject {

	long long _tokenRegistered;
	long long _usesAPSPublicToken;
	long long _darkWakeEnabled;

}

@property (assign,nonatomic) long long tokenRegistered;                 //@synthesize tokenRegistered=_tokenRegistered - In the implementation block
@property (assign,nonatomic) long long usesAPSPublicToken;              //@synthesize usesAPSPublicToken=_usesAPSPublicToken - In the implementation block
@property (assign,nonatomic) long long darkWakeEnabled;                 //@synthesize darkWakeEnabled=_darkWakeEnabled - In the implementation block
-(id)init;
-(void)setUsesAPSPublicToken:(long long)arg1 ;
-(void)setDarkWakeEnabled:(long long)arg1 ;
-(long long)darkWakeEnabled;
-(long long)usesAPSPublicToken;
-(long long)tokenRegistered;
-(void)setTokenRegistered:(long long)arg1 ;
@end

