/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCServer.h>
#import <libobjc.A.dylib/FBSystemServiceServer.h>

@protocol FBSystemServiceServer <NSObject>
@required
-(void)sendMessage:(id)arg1 withType:(long long)arg2 toClients:(id)arg3;

@end


@class NSMutableDictionary, NSMutableSet, NSString;

@interface FBSystemServiceServer : BSBaseXPCServer <FBSystemServiceServer> {

	NSMutableDictionary* _facilitiesByIdentifier;
	NSMutableSet* _completedMilestones;
	NSMutableDictionary* _suspendedFacilitiesByIdentifier;
	NSMutableSet* _pendingConnects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(BOOL)ping;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 toClients:(id)arg3 ;
-(void)noteMilestoneReached:(id)arg1 ;
-(void)_evaluateSuspendedFacility:(id)arg1 ;
-(void)_evaluateSuspendedFacilities;
-(void)_handleConnect:(id)arg1 forClient:(id)arg2 facilityID:(id)arg3 ;
-(BOOL)_areFacilityPrerequisitesSatisfied:(id)arg1 ;
-(void)addFacility:(id)arg1 ;
-(void)removeFacility:(id)arg1 ;
-(Class)queue_classForNewClientConnection:(id)arg1 ;
-(void)queue_clientAdded:(id)arg1 ;
-(void)queue_clientRemoved:(id)arg1 ;
-(void)queue_handleMessage:(id)arg1 client:(id)arg2 ;
@end

