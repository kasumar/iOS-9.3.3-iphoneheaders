/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface FTServerBag : NSObject {

	long long _type;

}

@property (retain,readonly) NSURL * bagURL; 
@property (retain,readonly) NSString * apsEnvironmentName; 
@property (readonly) BOOL allowSelfSignedCertificates; 
@property (readonly) BOOL allowUnsignedBags; 
@property (readonly) BOOL isLoaded; 
@property (readonly) BOOL isLoading; 
@property (readonly) BOOL isInDebilitatedMode; 
@property (readonly) BOOL isServerAvailable; 
+(id)sharedInstance;
+(id)_sharedInstanceForType:(long long)arg1 ;
+(id)sharedInstanceForBagType:(long long)arg1 ;
+(id)_sharedInstance;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(BOOL)isLoading;
-(BOOL)isLoaded;
-(NSString *)apsEnvironmentName;
-(id)_bag;
-(id)_cachedBag;
-(BOOL)isInDebilitatedMode;
-(void)forceBagLoad;
-(NSURL *)bagURL;
-(BOOL)allowSelfSignedCertificates;
-(BOOL)allowUnsignedBags;
-(id)initWithBagType:(long long)arg1 ;
-(void)startBagLoad;
-(BOOL)isServerAvailable;
-(id)urlWithKey:(id)arg1 ;
@end

