/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/HMAssistant.assistantBundle/HMAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject, HMAssistantGather, HMHomeManager;

@interface HMAssistantSyncHome : NSObject <AFSyncHandler> {

	BOOL _done;
	NSString* _finalAnchor;
	NSMutableArray* _postAnchors;
	NSMutableArray* _entities;
	NSObject*<OS_dispatch_group> _group;
	HMAssistantGather* _gather;
	NSObject*<OS_dispatch_queue> _queue;
	HMHomeManager* _manager;

}

@property (nonatomic,retain) NSString * finalAnchor;                          //@synthesize finalAnchor=_finalAnchor - In the implementation block
@property (nonatomic,retain) NSMutableArray * postAnchors;                    //@synthesize postAnchors=_postAnchors - In the implementation block
@property (nonatomic,retain) NSMutableArray * entities;                       //@synthesize entities=_entities - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) HMAssistantGather * gather;                      //@synthesize gather=_gather - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) HMHomeManager * manager;                                   //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) BOOL done;                                       //@synthesize done=_done - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
-(BOOL)shouldSyncForAnchor:(id)arg1 ;
-(void)setFinalAnchor:(NSString *)arg1 ;
-(void)setPostAnchors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)postAnchors;
-(NSString *)finalAnchor;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5 ;
-(HMHomeManager *)manager;
-(void)setEntities:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)done;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableArray *)entities;
-(void)setDone:(BOOL)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMAssistantGather *)gather;
-(void)setGather:(HMAssistantGather *)arg1 ;
-(void)setManager:(HMHomeManager *)arg1 ;
@end

