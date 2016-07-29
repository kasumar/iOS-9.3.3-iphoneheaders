/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface HMLocalization : NSObject {

	NSDictionary* _localizedStrings;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) NSDictionary * localizedStrings;                         //@synthesize localizedStrings=_localizedStrings - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSDictionary *)localizedStrings;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)_updateLocalizedStrings;
-(id)getLocalizedString:(id)arg1 ;
-(id)getLocalizedOrCustomString:(id)arg1 ;
@end

