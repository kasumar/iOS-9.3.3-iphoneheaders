/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@protocol OS_os_transaction;
@class NSObject, NSString, NSData, NSDictionary;

@interface ODRWorkManagedObject : NSManagedObject {

	NSObject*<OS_os_transaction> transaction;

}

@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSData * contextData; 
@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSDictionary * context; 
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction; 
-(id)description;
-(NSDictionary *)context;
-(void)start;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)markAsCompleted;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
@end

