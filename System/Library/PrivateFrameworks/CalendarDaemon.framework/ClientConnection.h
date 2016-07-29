/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ClientConnectionDelegate;
#import <CalendarDaemon/CalendarDaemon-Structs.h>
@class NSString, NSLock, NSSet, NSObject, NSOperationQueue, NSMutableDictionary, NSMutableSet, CADOperationProxy, ClientIdentity, NSXPCConnection;

@interface ClientConnection : NSObject {

	int _options;
	NSString* _path;
	BOOL _allowedEntityTypesValid;
	long long _eventAccess;
	long long _reminderAccess;
	NSLock* _restrictionsLock;
	NSSet* _restrictedStoreRowIDs;
	NSSet* _restrictedCalendarRowIDs;
	int _sourceAccountManagement;
	CalDatabase* _database;
	NSObject*<OS_dispatch_queue> _dbQueue;
	NSOperationQueue* _operations;
	NSMutableDictionary* _insertedObjects;
	NSMutableSet* _canceledRequests;
	NSObject*<OS_dispatch_queue> _canceledRequestsLock;
	CADOperationProxy* _cadOperationProxy;
	id<ClientConnectionDelegate> _delegate;
	ClientIdentity* _identity;
	NSXPCConnection* _xpcConnection;

}

@property (assign,nonatomic,__weak) id<ClientConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CalDatabase* database;                                     //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) ClientIdentity * identity;                               //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) CADOperationProxy * cadOperationProxy;                   //@synthesize cadOperationProxy=_cadOperationProxy - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                           //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(void)setDelegate:(id<ClientConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<ClientConnectionDelegate>)delegate;
-(void*)objectForKey:(id)arg1 ;
-(void)addOperation:(id)arg1 ;
-(id)operations;
-(void)setSourceAccountManagement:(int)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(id)restrictedCalendarRowIDs;
-(BOOL)eventAccessGranted;
-(BOOL)reminderAccessGranted;
-(void)insertObject:(void*)arg1 key:(id)arg2 ;
-(void)setDatabasePath:(id)arg1 andInitOptions:(int)arg2 ;
-(BOOL)isCalendarRestricted:(void*)arg1 ;
-(void)clearInsertedObjects;
-(void)clearCachedAuthorizationStatus;
-(BOOL)isCalendarItemRestricted:(void*)arg1 ;
-(void)_loadAccessPermissionsIfNeeded;
-(id)_restrictedStoreRowIDs;
-(id)restrictedCalendarRowIDsWithValidator:(id)arg1 ;
-(id)restrictedStoreRowIDs;
-(CADOperationProxy *)cadOperationProxy;
-(void)dumpState;
-(BOOL)isStoreRestricted:(void*)arg1 ;
-(void)_databaseChanged;
-(ClientIdentity *)identity;
-(id)insertedObjects;
-(CalDatabase*)database;
-(void)setDatabase:(CalDatabase*)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

