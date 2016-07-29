/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLProtocolClient.h>

@class NSURLAuthenticationChallenge, NSString;

@interface __NSCFURLProtocolClient_NS : NSObject <NSURLProtocolClient> {

	URLProtocolClient* _cf;
	URLProtocol* _prot;
	NSURLAuthenticationChallenge* _challenge;
	CFURLAuthChallengeRef _cfChallenge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(id)initWithCFClient:(URLProtocolClient*)arg1 prot:(URLProtocol*)arg2 ;
-(CFURLAuthChallengeRef)cfChallenge;
-(void)dealloc;
-(void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2 ;
-(void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3 ;
-(void)URLProtocol:(id)arg1 didLoadData:(id)arg2 ;
-(void)URLProtocolDidFinishLoading:(id)arg1 ;
-(void)URLProtocol:(id)arg1 didFailWithError:(id)arg2 ;
-(id)challenge;
-(void)teardown;
@end

