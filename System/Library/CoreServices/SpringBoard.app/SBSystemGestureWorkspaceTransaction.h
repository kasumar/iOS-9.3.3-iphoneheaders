/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <libobjc.A.dylib/FBSynchronizedTransactionDelegate.h>

@class NSString, UIGestureRecognizer, NSMutableSet;

@interface SBSystemGestureWorkspaceTransaction : SBMainWorkspaceTransaction <FBSynchronizedTransactionDelegate> {

	NSString* _suppressionReason;
	UIGestureRecognizer* _gestureRecognizer;
	long long _completionType;
	NSMutableSet* _nonSlaveChildrenWaitingToFinish;
	BOOL _notifiedSlaves;

}

@property (nonatomic,retain) UIGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,readonly) long long completionType;                           //@synthesize completionType=_completionType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)systemGestureStateChanged:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)addSlaveTransaction:(id)arg1 ;
-(void)finishWithCompletionType:(long long)arg1 ;
-(void)_finishWithCompletionType:(long long)arg1 ;
-(void)_notifySlavesIfNecessary;
-(void)_beginAnimation;
-(void)_notifySlavesForMilestoneRemovalIfNecessary;
-(BOOL)removeMilestones:(id)arg1 ;
-(void)setGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)gestureRecognizer;
-(long long)completionType;
-(void)_willAddChildTransaction:(id)arg1 ;
-(void)_didComplete;
-(void)removeAllMilestones;
-(void)_begin;
-(BOOL)removeMilestone:(id)arg1 ;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
-(void)_setupAnimation;
@end

