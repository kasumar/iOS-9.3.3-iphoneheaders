/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoRelevantPassTuple : PBCodable <NSCopying> {

	NSString* _passID;
	NSString* _relevantText;

}

@property (nonatomic,retain) NSString * passID;                    //@synthesize passID=_passID - In the implementation block
@property (nonatomic,readonly) BOOL hasRelevantText; 
@property (nonatomic,retain) NSString * relevantText;              //@synthesize relevantText=_relevantText - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRelevantText:(NSString *)arg1 ;
-(NSString *)relevantText;
-(void)setPassID:(NSString *)arg1 ;
-(NSString *)passID;
-(BOOL)hasRelevantText;
@end

