/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBNetworkEvent : PBCodable <NSCopying> {

	unsigned long long _cacheState;
	unsigned long long _connectDuration;
	unsigned long long _dnsDuration;
	unsigned long long _errorCode;
	unsigned long long _httpStatusCode;
	unsigned long long _requestDuration;
	unsigned long long _responseDuration;
	unsigned long long _responseSize;
	unsigned long long _sessionID;
	unsigned long long _startTime;
	unsigned long long _type;
	NSString* _requestUUID;
	NSString* _respondingPOP;
	NSString* _url;
	SCD_Struct_NT21 _has;

}

@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) unsigned long long startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasDnsDuration; 
@property (assign,nonatomic) unsigned long long dnsDuration;                   //@synthesize dnsDuration=_dnsDuration - In the implementation block
@property (assign,nonatomic) BOOL hasConnectDuration; 
@property (assign,nonatomic) unsigned long long connectDuration;               //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDuration; 
@property (assign,nonatomic) unsigned long long requestDuration;               //@synthesize requestDuration=_requestDuration - In the implementation block
@property (assign,nonatomic) BOOL hasResponseDuration; 
@property (assign,nonatomic) unsigned long long responseDuration;              //@synthesize responseDuration=_responseDuration - In the implementation block
@property (assign,nonatomic) BOOL hasResponseSize; 
@property (assign,nonatomic) unsigned long long responseSize;                  //@synthesize responseSize=_responseSize - In the implementation block
@property (assign,nonatomic) BOOL hasCacheState; 
@property (assign,nonatomic) unsigned long long cacheState;                    //@synthesize cacheState=_cacheState - In the implementation block
@property (assign,nonatomic) BOOL hasHttpStatusCode; 
@property (assign,nonatomic) unsigned long long httpStatusCode;                //@synthesize httpStatusCode=_httpStatusCode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned long long errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestUUID; 
@property (nonatomic,retain) NSString * requestUUID;                           //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasRespondingPOP; 
@property (nonatomic,retain) NSString * respondingPOP;                         //@synthesize respondingPOP=_respondingPOP - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned long long sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
-(void)setDnsDuration:(unsigned long long)arg1 ;
-(void)setHasDnsDuration:(BOOL)arg1 ;
-(BOOL)hasDnsDuration;
-(void)setResponseDuration:(unsigned long long)arg1 ;
-(void)setHasResponseDuration:(BOOL)arg1 ;
-(BOOL)hasResponseDuration;
-(unsigned long long)cacheState;
-(void)setCacheState:(unsigned long long)arg1 ;
-(void)setHasCacheState:(BOOL)arg1 ;
-(BOOL)hasCacheState;
-(void)setHttpStatusCode:(unsigned long long)arg1 ;
-(void)setHasHttpStatusCode:(BOOL)arg1 ;
-(BOOL)hasHttpStatusCode;
-(unsigned long long)dnsDuration;
-(unsigned long long)responseDuration;
-(void)setRequestUUID:(NSString *)arg1 ;
-(void)setRespondingPOP:(NSString *)arg1 ;
-(BOOL)hasRequestUUID;
-(BOOL)hasRespondingPOP;
-(NSString *)respondingPOP;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)url;
-(void)setStartTime:(unsigned long long)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)startTime;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSessionID;
-(void)setHasSessionID:(BOOL)arg1 ;
-(void)setSessionID:(unsigned long long)arg1 ;
-(unsigned long long)sessionID;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasUrl;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setErrorCode:(unsigned long long)arg1 ;
-(unsigned long long)errorCode;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setConnectDuration:(unsigned long long)arg1 ;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(BOOL)hasConnectDuration;
-(unsigned long long)connectDuration;
-(void)setResponseSize:(unsigned long long)arg1 ;
-(void)setHasResponseSize:(BOOL)arg1 ;
-(BOOL)hasResponseSize;
-(unsigned long long)responseSize;
-(void)setRequestDuration:(unsigned long long)arg1 ;
-(void)setHasRequestDuration:(BOOL)arg1 ;
-(BOOL)hasRequestDuration;
-(unsigned long long)requestDuration;
-(unsigned long long)httpStatusCode;
-(NSString *)requestUUID;
@end

