/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface IDSFaceTimeMessage : FTIDSMessage <NSCopying> {

	NSData* _sessionToken;

}

@property (copy) NSData * sessionToken;              //@synthesize sessionToken=_sessionToken - In the implementation block
-(NSData *)sessionToken;
-(void)setSessionToken:(NSData *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValidMessage;
-(BOOL)hasRequiredKeys:(id*)arg1 ;
-(id)messageBody;
-(id)requiredKeys;
@end

