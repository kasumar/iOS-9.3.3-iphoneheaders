/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPMultiverseIdentifier;

@interface _MPUProtoBufUserActivityContainerItem : PBCodable <NSCopying> {

	int _containerItemType;
	MIPMultiverseIdentifier* _selectedMultiverseIdentifier;
	MIPMultiverseIdentifier* _visualReferenceMultiverseIdentifier;
	SCD_Struct_MP3 _has;

}

@property (assign,nonatomic) BOOL hasContainerItemType; 
@property (assign,nonatomic) int containerItemType;                                                      //@synthesize containerItemType=_containerItemType - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedMultiverseIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * selectedMultiverseIdentifier;                     //@synthesize selectedMultiverseIdentifier=_selectedMultiverseIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasVisualReferenceMultiverseIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * visualReferenceMultiverseIdentifier;              //@synthesize visualReferenceMultiverseIdentifier=_visualReferenceMultiverseIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSelectedMultiverseIdentifier:(MIPMultiverseIdentifier *)arg1 ;
-(void)setVisualReferenceMultiverseIdentifier:(MIPMultiverseIdentifier *)arg1 ;
-(void)setContainerItemType:(int)arg1 ;
-(void)setHasContainerItemType:(BOOL)arg1 ;
-(BOOL)hasContainerItemType;
-(BOOL)hasSelectedMultiverseIdentifier;
-(BOOL)hasVisualReferenceMultiverseIdentifier;
-(MIPMultiverseIdentifier *)selectedMultiverseIdentifier;
-(MIPMultiverseIdentifier *)visualReferenceMultiverseIdentifier;
-(int)containerItemType;
@end

