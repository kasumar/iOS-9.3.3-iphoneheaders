/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAccountingOwnerManager.h>
#import <libobjc.A.dylib/PLAccountingDependencyManager.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet, PLMonotonicTimer, NSString;

@interface PLAccountingOwnerDependencyManager : NSObject <PLAccountingOwnerManager, PLAccountingDependencyManager> {

	int _numDependencies;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _dependencyIDToObservingOwners;
	NSMutableDictionary* _dependencyIDToDependencies;
	NSMutableDictionary* _ownerIDToObservingDependencies;
	NSMutableDictionary* _ownerIDToLastOwner;
	NSMutableSet* _ownersRepository;
	PLMonotonicTimer* _freeTimer;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) NSMutableDictionary * dependencyIDToObservingOwners;               //@synthesize dependencyIDToObservingOwners=_dependencyIDToObservingOwners - In the implementation block
@property (retain) NSMutableDictionary * dependencyIDToDependencies;                  //@synthesize dependencyIDToDependencies=_dependencyIDToDependencies - In the implementation block
@property (assign) int numDependencies;                                               //@synthesize numDependencies=_numDependencies - In the implementation block
@property (retain) NSMutableDictionary * ownerIDToObservingDependencies;              //@synthesize ownerIDToObservingDependencies=_ownerIDToObservingDependencies - In the implementation block
@property (retain) NSMutableDictionary * ownerIDToLastOwner;                          //@synthesize ownerIDToLastOwner=_ownerIDToLastOwner - In the implementation block
@property (retain) NSMutableSet * ownersRepository;                                   //@synthesize ownersRepository=_ownersRepository - In the implementation block
@property (retain) PLMonotonicTimer * freeTimer;                                      //@synthesize freeTimer=_freeTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)freeTimerInterval;
+(int)maxOwners;
+(int)maxDependencies;
-(void)addOwner:(id)arg1 ;
-(id)init;
-(id)ownerIDsForDependency:(id)arg1 ;
-(id)lastOwnerForOwnerID:(id)arg1 ;
-(void)startObservingOwnerID:(id)arg1 forDependency:(id)arg2 ;
-(void)stopObservingOwnerID:(id)arg1 forDependency:(id)arg2 ;
-(void)canFreeDependency:(id)arg1 ;
-(void)notifyDependenciesWithOwner:(id)arg1 ;
-(void)notifyOwnersWithDependency:(id)arg1 ;
-(void)updateLastDependencyID:(id)arg1 withEndDate:(id)arg2 ;
-(void)reloadDependenciesNewerThanDate:(id)arg1 ;
-(id)dependencyIDsForOwner:(id)arg1 ;
-(id)lastDependencyForDependencyID:(id)arg1 ;
-(id)dependenciesWithDependencyID:(id)arg1 withRange:(id)arg2 ;
-(void)startObservingDependencyID:(id)arg1 forOwner:(id)arg2 ;
-(void)stopObservingDependencyID:(id)arg1 forOwner:(id)arg2 ;
-(void)canFreeOwner:(id)arg1 ;
-(void)freeExpiredOwnersAtNow:(id)arg1 ;
-(void)freeExpiredDependenciesAtNow:(id)arg1 ;
-(NSMutableSet *)ownersRepository;
-(NSMutableDictionary *)ownerIDToLastOwner;
-(NSMutableDictionary *)ownerIDToObservingDependencies;
-(NSMutableDictionary *)dependencyIDToDependencies;
-(int)numDependencies;
-(void)setNumDependencies:(int)arg1 ;
-(NSMutableDictionary *)dependencyIDToObservingOwners;
-(void)setDependencyIDToObservingOwners:(NSMutableDictionary *)arg1 ;
-(void)setDependencyIDToDependencies:(NSMutableDictionary *)arg1 ;
-(void)setOwnerIDToObservingDependencies:(NSMutableDictionary *)arg1 ;
-(void)setOwnerIDToLastOwner:(NSMutableDictionary *)arg1 ;
-(void)setOwnersRepository:(NSMutableSet *)arg1 ;
-(PLMonotonicTimer *)freeTimer;
-(void)setFreeTimer:(PLMonotonicTimer *)arg1 ;
-(void)addDependency:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

