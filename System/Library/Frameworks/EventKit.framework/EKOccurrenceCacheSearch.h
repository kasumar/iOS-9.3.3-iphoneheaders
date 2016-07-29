/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKCancellableRemoteOperation.h>

@class NSSet, NSString, EKEventStore, NSNumber;

@interface EKOccurrenceCacheSearch : NSObject <EKCancellableRemoteOperation> {

	NSSet* _calendars;
	NSString* _searchTerm;
	EKEventStore* _store;
	/*^block*/id _callback;
	NSNumber* _replyID;
	BOOL _canceled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)cancel;
-(void)dealloc;
-(void)run;
-(void)disconnect;
-(id)initWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(/*^block*/id)arg4 ;
-(int)performSearchOperation:(unsigned)arg1 inCalendars:(id)arg2 withEventStore:(id)arg3 andSearchTerm:(id)arg4 ;
-(void)receivedBatchResultsFromServer:(id)arg1 finished:(BOOL)arg2 ;
-(id)searchTerm;
@end

