/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDPlace : PBCodable <NSCopying> {

	unsigned long long _muid;
	unsigned long long _preferredMuid;
	NSMutableArray* _components;
	int _referenceFrame;
	int _resultProviderId;
	int _status;
	SCD_Struct_GE93 _has;

}

@property (assign,nonatomic) BOOL hasReferenceFrame; 
@property (assign,nonatomic) int referenceFrame; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                       //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredMuid; 
@property (assign,nonatomic) unsigned long long preferredMuid;              //@synthesize preferredMuid=_preferredMuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * components;                   //@synthesize components=_components - In the implementation block
@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                          //@synthesize resultProviderId=_resultProviderId - In the implementation block
+(id)failedPlaceData;
+(id)attributionForPlaceData:(id)arg1 type:(int)arg2 ;
+(id)failedPlaceDataForMuid:(unsigned long long)arg1 ;
-(id)geoMapItem;
-(BOOL)hasReferenceFrame;
-(void)setReferenceFrame:(int)arg1 ;
-(void)setHasReferenceFrame:(BOOL)arg1 ;
-(int)referenceFrame;
-(BOOL)isDisputed;
-(id)spokenNameForLocale:(id)arg1 ;
-(void)setFirstSeenTimestamp:(double)arg1 ;
-(id)businessURL;
-(void)_removeETAComponents;
-(id)copyWithoutETAComponents;
-(id)_entityName;
-(id)copyWithStrippedOptionalData;
-(id)bestName;
-(id)_cleanedPhoneNumberForPhoneNumberRepresentation:(id)arg1 ;
-(BOOL)hasExpiredComponentsAsOf:(double)arg1 ;
-(id)phoneNumbers;
-(BOOL)isCacheable;
-(id)compactDebugDescription;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)components;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setResultProviderId:(int)arg1 ;
-(int)resultProviderId;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(id)componentAtIndex:(unsigned long long)arg1 ;
-(void)setHasPreferredMuid:(BOOL)arg1 ;
-(void)addComponent:(id)arg1 ;
-(void)clearComponents;
-(BOOL)hasPreferredMuid;
-(unsigned long long)componentsCount;
-(void)setComponents:(NSMutableArray *)arg1 ;
-(unsigned long long)preferredMuid;
-(void)setPreferredMuid:(unsigned long long)arg1 ;
@end

