/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying> {

	SCD_Struct_GE4 _sessionGUID;
	long long _businessID;
	double _timestamp;
	int _feedbackType;
	int _localSearchProviderID;
	int _numberOfResults;
	int _positionInResults;
	int _sequenceNumber;
	SCD_Struct_GE65 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSessionGUID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionGUID;                 //@synthesize sessionGUID=_sessionGUID - In the implementation block
@property (assign,nonatomic) BOOL hasBusinessID; 
@property (assign,nonatomic) long long businessID;                       //@synthesize businessID=_businessID - In the implementation block
@property (assign,nonatomic) BOOL hasFeedbackType; 
@property (assign,nonatomic) int feedbackType;                           //@synthesize feedbackType=_feedbackType - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfResults; 
@property (assign,nonatomic) int numberOfResults;                        //@synthesize numberOfResults=_numberOfResults - In the implementation block
@property (assign,nonatomic) BOOL hasPositionInResults; 
@property (assign,nonatomic) int positionInResults;                      //@synthesize positionInResults=_positionInResults - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber;                         //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                  //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasSequenceNumber;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(int)sequenceNumber;
-(void)setSequenceNumber:(int)arg1 ;
-(int)localSearchProviderID;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(BOOL)hasLocalSearchProviderID;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(BOOL)hasSessionGUID;
-(void)setHasSessionGUID:(BOOL)arg1 ;
-(void)setSessionGUID:(SCD_Struct_GE4)arg1 ;
-(SCD_Struct_GE4)sessionGUID;
-(BOOL)hasPositionInResults;
-(int)numberOfResults;
-(void)setHasBusinessID:(BOOL)arg1 ;
-(BOOL)hasFeedbackType;
-(void)setHasPositionInResults:(BOOL)arg1 ;
-(BOOL)hasBusinessID;
-(long long)businessID;
-(void)setPositionInResults:(int)arg1 ;
-(void)setHasFeedbackType:(BOOL)arg1 ;
-(BOOL)hasNumberOfResults;
-(void)setFeedbackType:(int)arg1 ;
-(void)setBusinessID:(long long)arg1 ;
-(void)setNumberOfResults:(int)arg1 ;
-(int)feedbackType;
-(void)setHasNumberOfResults:(BOOL)arg1 ;
-(int)positionInResults;
@end

