/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface SPProtoAudioFilePlayerStatus : PBCodable <NSCopying> {

	long long _errorCode;
	NSData* _errorDict;
	NSString* _errorDomain;
	NSString* _identifier;
	int _status;
	SCD_Struct_SP6 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                          //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;              //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                 //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDict; 
@property (nonatomic,retain) NSData * errorDict;                  //@synthesize errorDict=_errorDict - In the implementation block
-(id)sockPuppetMessageForPlayerItemSetStatus;
-(id)sockPuppetMessageForQueuePlayerSetStatus;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setErrorCode:(long long)arg1 ;
-(BOOL)hasErrorDomain;
-(long long)errorCode;
-(void)setErrorDomain:(NSString *)arg1 ;
-(NSString *)errorDomain;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(BOOL)hasIdentifier;
-(void)setErrorDict:(NSData *)arg1 ;
-(BOOL)hasErrorDict;
-(NSData *)errorDict;
@end

