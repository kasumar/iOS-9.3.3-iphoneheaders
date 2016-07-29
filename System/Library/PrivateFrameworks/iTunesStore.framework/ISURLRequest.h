/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLock, SSMutableURLRequestProperties, NSString, NSData, NSInputStream, NSDictionary, NSURL, NSArray;

@interface ISURLRequest : NSObject <NSCoding, NSCopying> {

	NSLock* _lock;
	SSMutableURLRequestProperties* _properties;

}

@property (retain) NSString * appleClientApplication; 
@property (retain) NSData * HTTPBody; 
@property (retain) NSInputStream * HTTPBodyStream; 
@property (retain) NSString * HTTPMethod; 
@property (retain) NSDictionary * queryStringDictionary; 
@property (readonly) NSURL * primaryURL; 
@property (retain) NSArray * URLs; 
@property (assign) long long allowedRetryCount; 
@property (assign) double timeoutInterval; 
@property (assign) unsigned long long cachePolicy; 
@property (retain) NSDictionary * customHeaders; 
@property (assign) long long URLBagType; 
@property (assign) long long expectedContentLength; 
+(id)requestWithURL:(id)arg1 ;
-(void)setExpectedContentLength:(long long)arg1 ;
-(NSData *)HTTPBody;
-(NSInputStream *)HTTPBodyStream;
-(long long)allowedRetryCount;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURLs:(NSArray *)arg1 ;
-(NSArray *)URLs;
-(NSString *)appleClientApplication;
-(NSDictionary *)customHeaders;
-(NSURL *)primaryURL;
-(void)setCustomHeaders:(NSDictionary *)arg1 ;
-(void)setQueryStringDictionary:(NSDictionary *)arg1 ;
-(void)setValue:(id)arg1 forHeaderField:(id)arg2 ;
-(void)setValue:(id)arg1 forQueryStringParameter:(id)arg2 ;
-(id)requestProperties;
-(void)setAppleClientApplication:(NSString *)arg1 ;
-(id)_initCommon;
-(void)setURLBagType:(long long)arg1 ;
-(id)initWithRequestProperties:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(long long)URLBagType;
-(void)setAllowedRetryCount:(long long)arg1 ;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(void)setHTTPBody:(NSData *)arg1 ;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(NSDictionary *)queryStringDictionary;
-(double)timeoutInterval;
-(long long)expectedContentLength;
-(unsigned long long)cachePolicy;
-(void)setHTTPBodyStream:(NSInputStream *)arg1 ;
-(NSString *)HTTPMethod;
@end

