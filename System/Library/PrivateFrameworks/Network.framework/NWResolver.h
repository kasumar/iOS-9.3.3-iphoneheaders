/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_resolver;
@class NWEndpoint, NWParameters, NSObject, NSSet, NSArray;

@interface NWResolver : NSObject {

	NWEndpoint* _endpoint;
	NWParameters* _parameters;
	NSObject*<OS_nw_resolver> _internalResolver;
	long long _internalStatus;
	NSSet* _internalResolvedEndpoints;
	NSArray* _internalResolvedEndpointArray;

}

@property (readonly) long long status; 
@property (readonly) NWEndpoint * endpoint;                                   //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) NWParameters * parameters;                               //@synthesize parameters=_parameters - In the implementation block
@property (readonly) NSSet * resolvedEndpoints; 
@property (readonly) NSArray * resolvedEndpointArray; 
@property (readonly) NSObject*<OS_nw_resolver> internalResolver;              //@synthesize internalResolver=_internalResolver - In the implementation block
@property (assign) long long internalStatus;                                  //@synthesize internalStatus=_internalStatus - In the implementation block
@property (retain) NSSet * internalResolvedEndpoints;                         //@synthesize internalResolvedEndpoints=_internalResolvedEndpoints - In the implementation block
@property (retain) NSArray * internalResolvedEndpointArray;                   //@synthesize internalResolvedEndpointArray=_internalResolvedEndpointArray - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)dealloc;
-(NWParameters *)parameters;
-(NWEndpoint *)endpoint;
-(long long)status;
-(long long)internalStatus;
-(void)setInternalResolvedEndpointArray:(NSArray *)arg1 ;
-(NSArray *)internalResolvedEndpointArray;
-(void)setInternalResolvedEndpoints:(NSSet *)arg1 ;
-(NSSet *)internalResolvedEndpoints;
-(NSArray *)resolvedEndpointArray;
-(void)setInternalStatus:(long long)arg1 ;
-(NSObject*<OS_nw_resolver>)internalResolver;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(NSSet *)resolvedEndpoints;
@end

