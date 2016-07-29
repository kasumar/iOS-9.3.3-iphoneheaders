/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject;

@interface TSPFinalizeHandlerQueue : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	vector<TSP::FinalizeHandlerItem *, std::__1::allocator<TSP::FinalizeHandlerItem *> >* _order;
	hash_map<const long long, TSP::FinalizeHandlerItem, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::FinalizeHandlerItem> > >* _map;

}
-(BOOL)runFinalizeHandlers;
-(void)addFinalizeHandlers:(vector<void ()(), std::__1::allocator<void ()()> >*)arg1 strongReferencesOrNull:(hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >*)arg2 forIdentifier:(long long)arg3 ;
-(void)visitItemForCycleDetection:(FinalizeHandlerItem*)arg1 ;
-(void)runFinalizeHandlerForItem:(FinalizeHandlerItem*)arg1 ;
-(id)init;
-(void)reset;
@end

