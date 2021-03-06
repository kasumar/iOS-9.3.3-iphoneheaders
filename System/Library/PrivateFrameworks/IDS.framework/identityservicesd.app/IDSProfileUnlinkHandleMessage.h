/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSProfileMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IDSProfileUnlinkHandleMessage : IDSProfileMessage <NSCopying> {

	NSString* _uri;

}

@property (setter=setURI:,copy) NSString * URI;              //@synthesize uri=_uri - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)anisetteHeadersTimeout;
-(BOOL)wantsSignature;
-(BOOL)wantsBodySignature;
-(id)additionalMessageHeaders;
-(id)messageBody;
-(id)requiredKeys;
-(id)bagKey;
-(NSString *)URI;
-(void)setURI:(NSString *)arg1 ;
@end

