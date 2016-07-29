/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface VKPShieldPack : PBCodable <NSCopying> {

	NSMutableArray* _atlas;
	NSMutableArray* _shields;

}

@property (nonatomic,retain) NSMutableArray * atlas;                //@synthesize atlas=_atlas - In the implementation block
@property (nonatomic,retain) NSMutableArray * shields;              //@synthesize shields=_shields - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)atlas;
-(id)atlasAtIndex:(unsigned long long)arg1 ;
-(void)setAtlas:(NSMutableArray *)arg1 ;
-(void)clearAtlas;
-(unsigned long long)atlasCount;
-(void)addAtlas:(id)arg1 ;
-(void)addShields:(id)arg1 ;
-(void)clearShields;
-(void)setShields:(NSMutableArray *)arg1 ;
-(id)shieldsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)shieldsCount;
-(NSMutableArray *)shields;
@end

