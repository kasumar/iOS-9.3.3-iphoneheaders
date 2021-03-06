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

@class NSURLResponseInternal, NSURL, NSString;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSURLResponseInternal* _internal;

}

@property (nonatomic,readonly) BOOL ssv_isExpiredResponse; 
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * MIMEType; 
@property (readonly) long long expectedContentLength; 
@property (copy,readonly) NSString * textEncodingName; 
@property (copy,readonly) NSString * suggestedFilename; 
+(id)_responseWithCFURLResponse:(CFURLResponseRef)arg1 ;
+(id)getObjectKeyWithIndex:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)webui_certificateChain;
-(int)statusCode;
-(id)allHeaderFields;
-(long long)maxExpectedContentLength;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(BOOL)ssv_isExpiredResponse;
-(id)_cacheTime;
-(void)_setExpectedContentLength:(long long)arg1 ;
-(void)_setMIMEType:(id)arg1 ;
-(BOOL)_mustRevalidate;
-(double)_freshnessLifetime;
-(id)_peerCertificateChain;
-(double)_calculatedExpiration;
-(CFURLResponseRef)_CFURLResponse;
-(id)_lastModifiedDate;
-(void)dealloc;
-(id)_initWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(NSString *)suggestedFilename;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(NSString *)textEncodingName;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4 ;
-(long long)expectedContentLength;
@end

