/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVPrincipal;
@class NSMutableSet;

@interface CalDAVOperation : CoreDAVTaskGroup {

	BOOL _isCancellingTaskGroups;
	id<CalDAVPrincipal> _principal;
	NSMutableSet* _outstandingTaskGroups;

}

@property (nonatomic,retain) id<CalDAVPrincipal> principal;                     //@synthesize principal=_principal - In the implementation block
@property (nonatomic,retain) NSMutableSet * outstandingTaskGroups;              //@synthesize outstandingTaskGroups=_outstandingTaskGroups - In the implementation block
-(void)dealloc;
-(id)init;
-(NSMutableSet *)outstandingTaskGroups;
-(void)cancelTaskGroup;
-(void)_tearDownAllTaskGroupsWithBlock:(/*^block*/id)arg1 ;
-(void)bailWithError:(id)arg1 ;
-(void)setOutstandingTaskGroups:(NSMutableSet *)arg1 ;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(id)initWithPrincipal:(id)arg1 ;
-(id<CalDAVPrincipal>)principal;
@end

