/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AdSupport.framework/AdSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface ASIdentifierManager : NSObject

@property (nonatomic,readonly) NSUUID * advertisingIdentifier; 
@property (getter=isAdvertisingTrackingEnabled,nonatomic,readonly) BOOL advertisingTrackingEnabled; 
+(id)sharedManager;
-(NSUUID *)advertisingIdentifier;
-(BOOL)isAdvertisingTrackingEnabled;
@end

