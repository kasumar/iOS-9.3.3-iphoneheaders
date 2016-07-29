/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SLTwitterClientSessionProtocol.h>
#import <libobjc.A.dylib/SLMicroBlogSheetDelegate.h>

@protocol SLTwitterRemoteSessionProtocol, OS_dispatch_queue, OS_dispatch_semaphore;
@class SLRemoteSessionProxy, NSCache, NSObject, NSBundle, CLInUseAssertion, NSString;

@interface SLTwitterSession : NSObject <SLTwitterClientSessionProtocol, SLMicroBlogSheetDelegate> {

	SLRemoteSessionProxy*<SLTwitterRemoteSessionProtocol> _remoteSession;
	NSCache* _profileImageCache;
	NSObject*<OS_dispatch_queue> _remoteSessionQueue;
	NSObject*<OS_dispatch_semaphore> _remoteSessionQueueSemaphore;
	NSBundle* _serviceBundle;
	CLInUseAssertion* _locationInUseAssertion;
	/*^block*/id _connectionResetBlock;
	/*^block*/id _locationInformationChangedBlock;

}

@property (nonatomic,copy) id connectionResetBlock;                         //@synthesize connectionResetBlock=_connectionResetBlock - In the implementation block
@property (nonatomic,copy) id locationInformationChangedBlock;              //@synthesize locationInformationChangedBlock=_locationInformationChangedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_remoteInterface;
-(id)init;
-(void)acceptLocationUpdate:(id)arg1 ;
-(id)_createOrGetRemoteSession;
-(void)setConnectionResetBlock:(id)arg1 ;
-(void)setActiveAccountIdentifier:(id)arg1 ;
-(void)fetchSessionInfo:(/*^block*/id)arg1 ;
-(void)ensureUserRecordStore;
-(void)fetchProfileImageDataForScreenName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recordsMatchingPrefixString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCurrentUrlLimits:(/*^block*/id)arg1 ;
-(void)fetchCurrentImageLimits:(/*^block*/id)arg1 ;
-(void)setGeotagStatus:(int)arg1 ;
-(void)fetchGeotagStatus:(/*^block*/id)arg1 ;
-(void)sendStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPermaLinkFromLastStatusUpdate:(/*^block*/id)arg1 ;
-(void)beginPotentialLocationUse;
-(void)endPotentialLocationUse;
-(void)showSettingsIfNeeded;
-(id)serviceAccountTypeIdentifier;
-(void)deferExpensiveOperations;
-(void)stopDeferringExpensiveOperations;
-(id)cachedProfileImageDataForScreenName:(id)arg1 ;
-(id)locationInformationChangedBlock;
-(void)setLocationInformationChangedBlock:(id)arg1 ;
-(void)tearDownConnectionToRemoteSession;
-(id)connectionResetBlock;
-(void)retweetTweetWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendDirectMessage:(id)arg1 toUser:(id)arg2 withScreenName:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

