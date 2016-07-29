/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSURLRequestInternal, GKFairPlaySAPSession, NSString, NSDictionary, NSData, NSInputStream, NSURL;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSURLRequestInternal* _internal;

}

@property (setter=_gkSetSAPSession:,getter=_gkSAPSession,nonatomic,retain) GKFairPlaySAPSession * _gkSAPSession; 
@property (copy,readonly) NSString * HTTPMethod; 
@property (copy,readonly) NSDictionary * allHTTPHeaderFields; 
@property (copy,readonly) NSData * HTTPBody; 
@property (retain,readonly) NSInputStream * HTTPBodyStream; 
@property (readonly) BOOL HTTPShouldHandleCookies; 
@property (readonly) BOOL HTTPShouldUsePipelining; 
@property (copy,readonly) NSURL * URL; 
@property (readonly) unsigned long long cachePolicy; 
@property (readonly) double timeoutInterval; 
@property (copy,readonly) NSURL * mainDocumentURL; 
@property (readonly) unsigned long long networkServiceType; 
@property (readonly) BOOL allowsCellularAccess; 
+(id)allowsSpecificHTTPSCertificateForHost:(id)arg1 ;
+(BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1 ;
+(void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2 ;
+(void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
+(id)getObjectKeyWithIndex:(long long)arg1 ;
+(void)setDefaultTimeoutInterval:(double)arg1 ;
+(double)defaultTimeoutInterval;
+(BOOL)supportsSecureCoding;
+(id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
+(id)requestWithURL:(id)arg1 ;
-(id)HTTPBodyString;
-(id)_gkDictionaryKey;
-(GKFairPlaySAPSession *)_gkSAPSession;
-(void)_gkSetSAPSession:(id)arg1 ;
-(id)DARequestByApplyingStorageSession:(CFURLStorageSessionRef)arg1 ;
-(BOOL)ak_usesHTTPSScheme;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)_startTimeoutDate;
-(double)_payloadTransmissionTimeout;
-(BOOL)HTTPShouldHandleCookies;
-(double)_timeWindowDelay;
-(double)_timeWindowDuration;
-(BOOL)_requiresShortConnectionTimeout;
-(id)HTTPContentType;
-(id)HTTPExtraCookies;
-(id)HTTPReferrer;
-(id)HTTPUserAgent;
-(id)contentDispositionEncodingFallbackArray;
-(unsigned long long)expectedWorkload;
-(NSData *)HTTPBody;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(NSInputStream *)HTTPBodyStream;
-(NSDictionary *)allHTTPHeaderFields;
-(BOOL)HTTPShouldUsePipelining;
-(NSString *)HTTPMethod;
-(BOOL)_isSafeRequestForBackgroundDownload;
-(NSURL *)mainDocumentURL;
-(BOOL)_URLHasScheme:(id)arg1 ;
-(id)_propertyForKey:(id)arg1 ;
-(void)_removePropertyForKey:(id)arg1 ;
-(id)_copyReplacingURLWithURL:(id)arg1 ;
-(id)boundInterfaceIdentifier;
-(unsigned long long)networkServiceType;
-(id)_initWithCFURLRequest:(CFURLRequestRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
-(CFURLRequestRef)_CFURLRequest;
-(double)timeoutInterval;
-(BOOL)allowsCellularAccess;
-(unsigned long long)cachePolicy;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 ;
@end

