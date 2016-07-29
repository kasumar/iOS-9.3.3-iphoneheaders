/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/MCProfileConnectionObserver.h>

@class NSMutableDictionary, NSString;

@interface IDSRestrictions : NSObject <MCProfileConnectionObserver> {

	NSMutableDictionary* _parentalControls;
	BOOL _active;
	BOOL _shouldPostNotifications;

}

@property (nonatomic,readonly) BOOL active;                             //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL shouldPostNotifications;              //@synthesize shouldPostNotifications=_shouldPostNotifications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)active;
-(void)setShouldPostNotifications:(BOOL)arg1 ;
-(void)_updateParentalSettings;
-(void)_managedPrefsNotification:(id)arg1 ;
-(id)_serviceWithName:(id)arg1 ;
-(BOOL)disableService:(id)arg1 ;
-(BOOL)disableAccount:(id)arg1 ;
-(BOOL)shouldPostNotifications;
-(void)updateAccountActivation;
@end

