/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVOptionsTaskDelegate.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>

@protocol CoreDAVAccountInfoProvider;
@class NSString, NSArray, NSMutableArray;

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate> {

	NSString* _requiredComplianceClass;
	NSArray* _httpPorts;
	NSArray* _httpsPorts;
	NSString* _httpServiceString;
	NSString* _httpsServiceString;
	NSString* _wellKnownPath;
	NSArray* _potentialContextPaths;
	NSMutableArray* _discoveries;
	BOOL _didReceiveAuthenticationError;
	BOOL _shouldBailEarly;
	id<CoreDAVAccountInfoProvider> _discoveredAccountInfo;

}

@property (assign,nonatomic) id<CoreDAVDiscoveryTaskGroupDelegate> delegate; 
@property (assign,nonatomic) BOOL didReceiveAuthenticationError;                                //@synthesize didReceiveAuthenticationError=_didReceiveAuthenticationError - In the implementation block
@property (assign,nonatomic) BOOL shouldBailEarly;                                              //@synthesize shouldBailEarly=_shouldBailEarly - In the implementation block
@property (nonatomic,retain) id<CoreDAVAccountInfoProvider> discoveredAccountInfo;              //@synthesize discoveredAccountInfo=_discoveredAccountInfo - In the implementation block
@property (nonatomic,retain) NSString * wellKnownPath;                                          //@synthesize wellKnownPath=_wellKnownPath - In the implementation block
@property (nonatomic,retain) NSArray * potentialContextPaths;                                   //@synthesize potentialContextPaths=_potentialContextPaths - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)syncAway;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPath:(id)arg7 potentialContextPaths:(id)arg8 requiredComplianceClass:(id)arg9 ;
-(void)startSRVLookup:(id)arg1 serviceString:(id)arg2 ;
-(NSString *)wellKnownPath;
-(id)allDiscoveryPorts:(id)arg1 withScheme:(id)arg2 ;
-(void)startWellKnownLocationTask:(id)arg1 withURL:(id)arg2 ;
-(id)setupDiscoveries:(id)arg1 withSchemes:(id)arg2 ;
-(void)startPropfindTask:(id)arg1 ;
-(id)allDiscoveryPaths:(id)arg1 ;
-(NSArray *)potentialContextPaths;
-(void)completeDiscovery:(id)arg1 error:(id)arg2 ;
-(id)propFindProperties;
-(void)startWellKnownFallbackHeadTask:(id)arg1 withURL:(id)arg2 ;
-(void)noteDefinitiveAuthFailureFromTask:(id)arg1 ;
-(void)propFindTaskFinished:(id)arg1 ;
-(id)extractPrincipalURLFromPropFindTask:(id)arg1 error:(id*)arg2 ;
-(void)srvLookupTask:(id)arg1 error:(id)arg2 ;
-(void)setDidReceiveAuthenticationError:(BOOL)arg1 ;
-(void)completeOptionsTask:(id)arg1 error:(id)arg2 ;
-(void)startOptionsTask:(id)arg1 ;
-(void)getDiscoveryStatus:(id)arg1 priorFailed:(id*)arg2 subsequentFailed:(id*)arg3 priorIncomplete:(id*)arg4 subsequentIncomplete:(id*)arg5 priorSuccess:(id*)arg6 subsequentSuccess:(id*)arg7 ;
-(BOOL)shouldBailEarly;
-(void)setDiscoveredAccountInfo:(id<CoreDAVAccountInfoProvider>)arg1 ;
-(id<CoreDAVAccountInfoProvider>)discoveredAccountInfo;
-(void)setShouldBailEarly:(BOOL)arg1 ;
-(void)addToDiscoveryArray:(id*)arg1 discovery:(id)arg2 ;
-(void)optionsTask:(id)arg1 error:(id)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPaths:(id)arg7 requiredComplianceClass:(id)arg8 ;
-(id)cleanedStringsFromResponseHeaders:(id)arg1 forHeader:(id)arg2 ;
-(BOOL)didReceiveAuthenticationError;
-(void)setWellKnownPath:(NSString *)arg1 ;
-(void)setPotentialContextPaths:(NSArray *)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)startTaskGroup;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)cancelTaskGroup;
@end

